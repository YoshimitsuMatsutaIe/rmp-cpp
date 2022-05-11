#include "../include/rmp_node.hpp"
#include "../include/mappings.hpp"

#include <eigen3/Eigen/Core>
#include <eigen3/Eigen/QR>
#include <eigen3/Eigen/LU>
#include <eigen3/Eigen/Dense>
#include <iostream>
#include <chrono>
#include <fstream>
#include <filesystem>




rmp_node::Node::Node(void){};
rmp_node::Node::Node(
    int self_dim,
    int parent_dim,
    std::string name,
    mapping_base::Identity* mappings
)
{
    this->name = name;
    this->self_dim = self_dim;
    this->parent_dim = parent_dim;
    this->mappings = mappings;

    this->x = VectorXd::Zero(self_dim);
    this->x_dot = VectorXd::Zero(self_dim);
    this->f = VectorXd::Zero(self_dim);
    this->M = MatrixXd::Zero(self_dim, self_dim);
    this->J = MatrixXd::Zero(self_dim, parent_dim);
    this->J_dot = MatrixXd::Zero(self_dim, parent_dim);
}


void rmp_node::Node::initialize_rmp_natural_form(void)
{
    this->f = VectorXd::Zero(this->self_dim);
    this->M = MatrixXd::Zero(this->self_dim, this->self_dim);
}




const void rmp_node::Node::print_state(void)
{
    using std::cout;
    using std::endl;
    if (this->is_debug==false){return;}
    cout << "name = " << this->name << endl;
    cout << "node_type = " << this->node_type << endl;
    cout << "dimention = " << this->self_dim << endl;

    if (node_type == 1)
    {
        cout << "children = none" << endl;
    }
    else
    {
        cout << "children = ";
        for (rmp_node::Node* child : this->children)
        {
            cout << child->name << ", ";
        }
        cout << endl;
    }
    
    cout << "x = \n" << this->x << endl;
    cout << "x_dot = \n" << this->x_dot << endl;
    cout << "J = \n" << this->J << endl;
    cout << "J_dot = \n" << this->J_dot << endl;
    cout << "f = \n" << this->f << endl;
    cout << "M = \n" << this->M << endl;
    cout << "\n" << endl;
}


const void rmp_node::Node::print_state_all_node(void)
{
    if (this->is_debug==false){return;}
    if (node_type==0)
    {
        std::cout << "print all state" << std::endl;
    }
    print_state();
    
    if (node_type != 1)
    {
        for (rmp_node::Node* child : children)
        {
            child->print_state_all_node();
        }
    }
}


void rmp_node::Node::add_child(rmp_node::Node* child)
{
    this->children.push_back(child);
    child->parent = this;
}


void rmp_node::Node::pushforward(void)
{
    //std::cout << "pushing at " << name << std::endl;
    std::cout << "pushing at " << name << std::endl;
    initialize_rmp_natural_form();
    for (rmp_node::Node* child : children)
    {
        child->mappings->phi(this->x, child->x);
        child->mappings->jacobian(this->x, child->J);
        child->x_dot = child->J * this->x_dot;
        child->mappings->jacobian_dot(this->x, this->x_dot, child->J_dot);
        if (child->node_type != 1)
        {
            child->pushforward();
        }
    }
}


void rmp_node::Node::pullback(void)
{
    //std::cout << "pullback doing at " << name << std::endl;
    for (rmp_node::Node* child : this->children)
    {
        child->pullback();
        this->parent->f += this->J.transpose() * (this->f - (this->M * this->J_dot * this->parent->x_dot));
        this->parent->M += this->J.transpose() * this->M * this->J;
    }
}


void rmp_node::Node::set_debug(bool is_debug)
{
    this->is_debug = is_debug;
    for (rmp_node::Node* child : this->children)
    {
        child->is_debug = is_debug;
        child->set_debug(is_debug);
    }
}




rmp_node::Root::Root(
    int self_dim, int parent_dim, std::string name, mapping_base::Identity* mappings
) : Node(self_dim, parent_dim, name, mappings)
{
    this->node_type = 0;
    this->parent = nullptr;
    this->q_ddot = VectorXd::Zero(this->self_dim);
}


void rmp_node::Root::set_state(
    const VectorXd& q, const VectorXd& q_dot
)
{
    this->x = q;
    this->x_dot = q_dot;
}


void rmp_node::Root::pushforward(void)
{
    std::cout << "pushforward running..." << std::endl;
    std::cout << "pushing at " << name << std::endl;

    // this->x_dot += this->q_ddot * dt;
    // this->x += this->x_dot * dt;
    initialize_rmp_natural_form();

    for (rmp_node::Node* child : this->children)
    {
        // 子供のやつ
        std::cout << "chid name = " << child->name << std::endl;
        std::cout << "child mapping name = " << child->mappings->name << std::endl;
        child->mappings->phi(this->x, child->x);
        child->mappings->jacobian(this->x, child->J);
        std::cout << "J = \n" << child->J << std::endl;
        child->x_dot = child->J * this->x_dot;
        child->mappings->jacobian_dot(this->x, this->x_dot, child->J_dot);
        //child->mappings->print_state();
        if (child->node_type != 1)
        {
            child->pushforward();
        }
    }
    //std::cout << "pushforward done!\n" << std::endl;
}


void rmp_node::Root::pullback(void)
{
    //std::cout << "pullback running..." << std::endl;
    for (rmp_node::Node* child : this->children)
    {
        child->pullback();
    }
    //std::cout << "pullback done!\n" << std::endl;
}



void rmp_node::Root::resolve(void)
{
    q_ddot = this->M.completeOrthogonalDecomposition().pseudoInverse() * this->f;
    //q_ddot = (M.transpose() * M).inverse() * M.transpose() * f;
    //q_ddot = M.inverse() * f;
    //q_ddot = M.colPivHouseholderQr().solve(f);
    //q_ddot = M.ldlt().solve(f);
    //q_ddot = M.template bdcSvd<ComputeThinU | ComputeThinV>().solve(f);
    //q_ddot = (M.transpose() * M).ldlt().solve(M.transpose() * f);

    //SVD使って実装
    // JacobiSVD<MatrixXd> svd(this->M, ComputeFullU | ComputeFullV);
    // VectorXd s = svd.singularValues();
    // MatrixXd pinv_M = svd.matrixV() * s.asDiagonal() * svd.matrixU().transpose();
    // this->q_ddot = pinv_M * this->f;

    // if (is_debug)
    // {
    //     std::cout << "U: \n" << svd.matrixU() << std::endl;
    //     std::cout << "S: \n" << svd.singularValues()  << std::endl;
    //     std::cout << "V: \n" << svd.matrixV() << std::endl;


    //     std::cout << "f = \n" << this->f << std::endl;
    //     std::cout << "M = \n" << this->M << std::endl;
    //     std::cout << "pinv_M = \n" << pinv_M << std::endl;
    //     std::cout << "q_ddot = \n" << this->q_ddot << std::endl;
    // }
}


void rmp_node::Root::solve(
    const VectorXd& q, const VectorXd& q_dot, VectorXd& out_q_ddot
)
{
    this->set_state(q, q_dot);
    this->pushforward();
    this->pullback();
    this->resolve();
    out_q_ddot = this->q_ddot;
}




rmp_node::Leaf_Base::Leaf_Base(
    int self_dim, int parent_dim, std::string name, mapping_base::Identity* mappings
) : Node(self_dim, parent_dim, name, mappings)
{
    this->node_type = 1;
    this->children.push_back(nullptr);
}


void rmp_node::Leaf_Base::calc_natural_form(void)
{
    // pass
}


void rmp_node::Leaf_Base::pullback(void)
{
    //std::cout << "pullback doing at " << name << ", and hear is leaf!" << std::endl;
    // std::cout << "f - (M * J_dot * this->parent->x_dot) = \n" << f - (M * J_dot * this->parent->x_dot) << std::endl;
    // std::cout << "J.transpose() * (f - (M * J_dot * this->parent->x_dot)) = \n" << J.transpose() * (f - (M * J_dot * this->parent->x_dot)) << std::endl;
    // std::cout << "J.transpose() * M * J = \n" << J.transpose() * M * J << std::endl;

    this->calc_natural_form();
    this->parent->f += this->J.transpose() * (this->f - (this->M * this->J_dot * parent->x_dot));
    this->parent->M += this->J.transpose() * this->M * this->J;
}


void rmp_node::Leaf_Base::set_debug(bool is_debug)
{
    this->is_debug = is_debug;
}

void rmp_node::Leaf_Base::add_child(Node *child)
{
    std::cout << "this node is leaf. can't add child." << std::endl;
}


/*********************************************************************/


rmp_tree::RMP_Tree::RMP_Tree(rmp_node::Root* root, std::string tree_name)
{
    this->root = root;
    this->tree_name = tree_name;
}

void rmp_tree::RMP_Tree::update_environment()
{
    // 後から実装．センサー値から障害物位置などを変更
}




void rmp_tree::RMP_Tree::run(
    double time_span, double time_interval,
    std::string method,
    std::string save_dir_path
)
{
    std::chrono::system_clock::time_point  start_time, end_time; // 型は auto で可
    start_time = std::chrono::system_clock::now();


    //フォルダ作成
    bool result = std::filesystem::create_directory(save_dir_path);

    const int total_step = time_span / time_interval;
    double t = 0.0;  //時刻


    std::ofstream file_Q(save_dir_path+"/configration.csv");  //配置
    std::ofstream file_X(save_dir_path+"/task.csv");  //配置

    //csvのヘッダー作成
    file_Q << "t";
    for (int i=0; i<root->self_dim; ++i){
        file_Q <<  ",x" + std::to_string(i);
    }
    for (int i=0; i<root->self_dim; ++i){
        file_Q <<  ",dx" + std::to_string(i);
    }
    file_Q << std::endl;

    file_X << "t";
    for (int i=0; i<root->self_dim; ++i){
        file_X <<  ",x" + std::to_string(i);
    }
    for (int i=0; i<root->self_dim; ++i){
        file_X <<  ",dx" + std::to_string(i);
    }
    file_X << std::endl;



    //初期値書き込み
    file_Q << t;
    for (int i=0; i<root->self_dim; ++i){
        file_Q << "," << root->x[i];
    }
    for (int i=0; i<root->self_dim; ++i){
        file_Q << "," << root->x_dot[i];
    }
    file_Q << std::endl;

    root->pushforward();  //初期値で全ノードデータを更新
    // file_X << t;
    // for (int i=0; i<root->self_dim; ++i){
    //     file_X << "," << root->x[i];
    // }
    // for (int i=0; i<root->self_dim; ++i){
    //     file_Q << "," << root->x_dot[i];
    // }
    // file_Q << std::endl;


    VectorXd q(this->root->self_dim);
    VectorXd q_dot(this->root->self_dim);
    VectorXd q_ddot(this->root->self_dim);
    
    q = this->root->x;
    q_dot = this->root->x_dot;


    // VectorXd X(this->root->self_dim*2);
    // VectorXd K1(this->root->self_dim*2);
    // VectorXd k2(this->root->self_dim*2);
    // VectorXd k3(this->root->self_dim*2);
    // VectorXd k4(this->root->self_dim*2);

    

    // メインループ
    for (int i=0; i<total_step; ++i)
    {
        t += time_interval;
        if (is_debug){std::cout << "\ni = " << i << std::endl;}


        //オイラー法
        this->root->solve(this->root->x, this->root->x_dot, q_ddot);
        q += q_dot * time_interval;
        q_dot += q_ddot * time_interval;


        // //RK法
        // X.head(root->self_dim) = root->x;
        // X.tail(root->self_dim) = root->x_dot;

        // this->root->solve(X.head(root->self_dim), X.tail(root->self_dim), q_ddot);
        


        if (std::isnan(q_ddot[0]))
        {
            std::cout << "\n発散．終了．" << std::endl;
            break;
        }
        
        root->print_state_all_node();

        file_Q << t;
        for (int i=0; i<root->self_dim; ++i){
            file_Q << "," << q[i];
        }
        for (int i=0; i<root->self_dim; ++i){
            file_Q << "," << q_dot[i];
        }
        file_Q << std::endl;

        this->root->set_state(q, q_dot);
    }


    end_time = std::chrono::system_clock::now();
    double elapsed = std::chrono::duration_cast<std::chrono::milliseconds>(end_time-start_time).count(); //処理に要した時間をミリ秒に変換
    std::cout << "time = " << elapsed/1000 << "[sec]" << std::endl;
}




void rmp_tree::RMP_Tree::set_debug(bool is_debug)
{
    this->is_debug = is_debug;
    this->root->set_debug(is_debug);
}