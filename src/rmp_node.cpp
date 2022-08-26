#include "../include/rmp_node.hpp"
#include "../include/mappings.hpp"

#include <eigen3/Eigen/Core>
#include <eigen3/Eigen/QR>
#include <eigen3/Eigen/LU>
#include <eigen3/Eigen/Dense>




rmp_flow::Node::Node(void){};
rmp_flow::Node::Node(
    int self_dim,
    int parent_dim,
    std::string name,
    mapping_base::Identity *mappings
)
{
    //cout << "Node よばれた" << endl;
    this->name = name;
    this->self_dim = self_dim;
    this->parent_dim = parent_dim;
    this->node_type = 2;
    this->mappings = mappings;

    this->x = VectorXd::Zero(self_dim);
    this->x_dot = VectorXd::Zero(self_dim);
    this->f = VectorXd::Zero(self_dim);
    this->M = MatrixXd::Zero(self_dim, self_dim);
    this->J = MatrixXd::Zero(self_dim, parent_dim);
    this->J_dot = MatrixXd::Zero(self_dim, parent_dim);
}


void rmp_flow::Node::initialize_rmp_natural_form(void)
{
    this->f = VectorXd::Zero(this->self_dim);
    this->M = MatrixXd::Zero(this->self_dim, this->self_dim);
}




const void rmp_flow::Node::print_self_state(void)
{
    if (this->is_debug==false){return;}
    cout << "node-name = " << this->name << endl;
    cout << "node_type = " << this->node_type << endl;
    cout << "dimention = " << this->self_dim << endl;

    if (node_type == 1)
    {
        cout << "children = none" << endl;
    }
    else
    {
        cout << "children = ";
        for (auto child : this->children)
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


const void rmp_flow::Node::print_state_all_node(void)
{
    if (this->is_debug==false){return;}
    if (node_type==0){
        cout << "print all state" << endl;
    }
    print_self_state();
    
    if (node_type != 1){
        for (auto child : children){
            child->print_state_all_node();
        }
    }
}


const void rmp_flow::Node::print_tree_structure(void)
{
    if (this->is_debug==false){return;}
    if (node_type==0){
        cout << "print tree structure" << endl;
    }
    
    cout << "\nnode-name = " << this->name << endl;
    //cout << "type = " << typeid(this).name() << endl;
    if (node_type == 1){
        cout << "  children = none" << endl;
    }
    else{
        cout << "  children = ";
        for (auto child : this->children){
            cout << child->name << ", ";
        }
        cout << endl;
    }
    if (node_type != 1){
        for (auto child : children){
            child->print_tree_structure();
        }
    }
    if (node_type==0){
        cout << "done!\n" << endl;
    }
}


void rmp_flow::Node::add_child(rmp_flow::Node* child)
{
    this->children.push_back(child);
    child->parent = this;
}


void rmp_flow::Node::pushforward(void)
{
    cout << "pushing at " << name << endl;
    cout << "node-type = " << this->node_type << endl;
    initialize_rmp_natural_form();
    for (auto child : children){
        child->mappings->phi(this->x, child->x);
        child->mappings->jacobian(this->x, child->J);
        //cout << "x_dot before" << endl;
        //cout << "child-J = \n" << child->J << endl;
        //cout << "this-x_dot = \n" << this->x_dot << endl;
        child->x_dot = child->J * this->x_dot;
        //cout << "x_dot done" << endl;
        child->mappings->jacobian_dot(this->x, this->x_dot, child->J_dot);
        

        if (child->node_type != 1){
            child->pushforward();
        }
    }
}


void rmp_flow::Node::pullback(void)
{
    cout << "pullback (node) doing at " << name << endl;
    cout << "  and this is " << this->name << ", node-type = " << this->node_type << endl;
    cout << typeid(this).name() << endl;
    for (auto child : this->children){
        child->pullback();
        this->parent->f += this->J.transpose() * (this->f - (this->M * this->J_dot * this->parent->x_dot));
        this->parent->M += this->J.transpose() * this->M * this->J;
    }
}


void rmp_flow::Node::set_debug(bool is_debug)
{
    this->is_debug = is_debug;
    for (Node* child : this->children){
        child->is_debug = is_debug;
        child->set_debug(is_debug);
    }
}




rmp_flow::Root::Root(
    int self_dim, std::string name, mapping_base::Identity* mappings
) : Node(self_dim, self_dim, name, mappings)
{
    //cout << "Root よばれた" << endl;
    this->node_type = 0;
    this->parent = nullptr;
    this->q_ddot = VectorXd::Zero(this->self_dim);
}


void rmp_flow::Root::set_state(
    const VectorXd& q, const VectorXd& q_dot
)
{
    this->x = q;
    this->x_dot = q_dot;
}


void rmp_flow::Root::pushforward(void)
{
    cout << "pushforward running..." << endl;
    cout << "pushing at " << name << endl;
    //cout << "node-type = " << this->node_type << endl;

    initialize_rmp_natural_form();

    for (auto child : this->children)
    {
        // 子供のやつ
        cout << "chid name = " << child->name << endl;
        cout << "child mapping name = " << child->mappings->name << endl;
        child->mappings->phi(this->x, child->x);
        child->mappings->jacobian(this->x, child->J);
        
        //cout << "x = \n" << child->x << endl;
        //cout << "J = \n" << child->J << endl;
        child->x_dot = child->J * this->x_dot;
        child->mappings->jacobian_dot(this->x, this->x_dot, child->J_dot);
        //child->mappings->print_state();
        if (child->node_type != 1)
        {
            child->pushforward();
        }
    }
    cout << "pushforward done!\n" << endl;
}


void rmp_flow::Root::pullback(void)
{
    cout << "pullback (root) running..." << endl;
    cout << typeid(this).name() << endl;
    for (auto child : this->children)
    {
        cout << typeid(child).name() << endl;
        child->pullback();
    }
    cout << "pullback done!\n" << endl;
}


void rmp_flow::Root::resolve(void)
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
    //     cout << "U: \n" << svd.matrixU() << endl;
    //     cout << "S: \n" << svd.singularValues()  << endl;
    //     cout << "V: \n" << svd.matrixV() << endl;


    //     cout << "f = \n" << this->f << endl;
    //     cout << "M = \n" << this->M << endl;
    //     cout << "pinv_M = \n" << pinv_M << endl;
    //     cout << "q_ddot = \n" << this->q_ddot << endl;
    // }
}


void rmp_flow::Root::solve(
    const VectorXd& q, const VectorXd& q_dot, VectorXd& out_q_ddot
)
{
    cout << "solving ..." << endl;
    this->set_state(q, q_dot);
    this->pushforward();
    this->pullback();
    this->resolve();
    out_q_ddot = this->q_ddot;
}



rmp_flow::Leaf_Base::Leaf_Base(void){/*pass*/}
rmp_flow::Leaf_Base::Leaf_Base(
    int self_dim, int parent_dim, std::string name, mapping_base::Identity* mappings
) : Node(self_dim, parent_dim, name, mappings)
{
    //cout << "Leaf_Base よばれた" << endl;
    this->node_type = 1;
    this->children.push_back(nullptr);
}


void rmp_flow::Leaf_Base::calc_natural_form(void)
{
    // pass
    cout << "this node have not rmp-func" << endl;
}


void rmp_flow::Leaf_Base::pullback(void)
{
    cout << "pullback (leaf) doing at " << name << endl;
    cout << typeid(this).name() << endl;
    // cout << "f - (M * J_dot * this->parent->x_dot) = \n" << f - (M * J_dot * this->parent->x_dot) << endl;
    // cout << "J.transpose() * (f - (M * J_dot * this->parent->x_dot)) = \n" << J.transpose() * (f - (M * J_dot * this->parent->x_dot)) << endl;
    // cout << "J.transpose() * M * J = \n" << J.transpose() * M * J << endl;

    this->calc_natural_form();
    cout << "rmp calc done" << endl;
    // cout << "right = \n" << this->f - (this->M * this->J_dot * parent->x_dot) << endl;
    // // cout << (this->f - (this->M * this->J_dot * parent->x_dot)).rows() << endl;
    // // cout << (this->f - (this->M * this->J_dot * parent->x_dot)).cols() << endl;
    // cout << "left = \n" << this->J.transpose() << endl;

    // VectorXd temp;
    // temp =  (this->f - (this->M * this->J_dot * parent->x_dot));
    // cout << "tmep = \n" << temp << endl;

    // MatrixXd temp_J;
    // temp_J = this->J;

    // VectorXd temp2;
    // temp2 = temp_J.transpose() * temp;
    // cout << "temp2 = \n" << temp2 << endl;

    this->parent->f += this->J.transpose() * (this->f - (this->M * this->J_dot * parent->x_dot));
    //cout << "hogehoge" << endl;
    this->parent->M += this->J.transpose() * this->M * this->J;
}


void rmp_flow::Leaf_Base::set_debug(bool is_debug)
{
    this->is_debug = is_debug;
}

void rmp_flow::Leaf_Base::add_child(Node *child)
{
    cout << "!!! this node is leaf. can't add child. !!!" << endl;
}


