#include "../include/rmp_node.hpp"
#include "../include/mappings.hpp"

#include <eigen3/Eigen/Core>
#include <eigen3/Eigen/QR>
#include <eigen3/Eigen/LU>
#include <eigen3/Eigen/Dense>




rmp_flow::Node::Node(void){
    std::cout << "Node よばれた" << std::endl;
};
rmp_flow::Node::Node(
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


void rmp_flow::Node::initialize_rmp_natural_form(void)
{
    this->f = VectorXd::Zero(this->self_dim);
    this->M = MatrixXd::Zero(this->self_dim, this->self_dim);
}




const void rmp_flow::Node::print_state(void)
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
        for (Node* child : this->children)
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
    if (node_type==0)
    {
        std::cout << "print all state" << std::endl;
    }
    print_state();
    
    if (node_type != 1)
    {
        for (Node* child : children)
        {
            child->print_state_all_node();
        }
    }
}


void rmp_flow::Node::add_child(rmp_flow::Node* child)
{
    this->children.push_back(child);
    child->parent = this;
}


void rmp_flow::Node::pushforward(void)
{
    //std::cout << "pushing at " << name << std::endl;
    std::cout << "pushing at " << name << std::endl;
    initialize_rmp_natural_form();
    for (Node* child : children)
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


void rmp_flow::Node::pullback(void)
{
    //std::cout << "pullback doing at " << name << std::endl;
    for (Node* child : this->children)
    {
        child->pullback();
        this->parent->f += this->J.transpose() * (this->f - (this->M * this->J_dot * this->parent->x_dot));
        this->parent->M += this->J.transpose() * this->M * this->J;
    }
}


void rmp_flow::Node::set_debug(bool is_debug)
{
    this->is_debug = is_debug;
    for (Node* child : this->children)
    {
        child->is_debug = is_debug;
        child->set_debug(is_debug);
    }
}




rmp_flow::Root::Root(
    int self_dim, int parent_dim, std::string name, mapping_base::Identity* mappings
) : Node(self_dim, parent_dim, name, mappings)
{
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
    std::cout << "pushforward running..." << std::endl;
    std::cout << "pushing at " << name << std::endl;

    // this->x_dot += this->q_ddot * dt;
    // this->x += this->x_dot * dt;
    initialize_rmp_natural_form();

    for (Node* child : this->children)
    {
        // 子供のやつ
        std::cout << "chid name = " << child->name << std::endl;
        std::cout << "child mapping name = " << child->mappings->name << std::endl;
        child->mappings->phi(this->x, child->x);
        child->mappings->jacobian(this->x, child->J);
        
        //std::cout << "x = \n" << child->x << std::endl;
        //std::cout << "J = \n" << child->J << std::endl;
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


void rmp_flow::Root::pullback(void)
{
    //std::cout << "pullback running..." << std::endl;
    for (Node* child : this->children)
    {
        child->pullback();
    }
    //std::cout << "pullback done!\n" << std::endl;
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
    //     std::cout << "U: \n" << svd.matrixU() << std::endl;
    //     std::cout << "S: \n" << svd.singularValues()  << std::endl;
    //     std::cout << "V: \n" << svd.matrixV() << std::endl;


    //     std::cout << "f = \n" << this->f << std::endl;
    //     std::cout << "M = \n" << this->M << std::endl;
    //     std::cout << "pinv_M = \n" << pinv_M << std::endl;
    //     std::cout << "q_ddot = \n" << this->q_ddot << std::endl;
    // }
}


void rmp_flow::Root::solve(
    const VectorXd& q, const VectorXd& q_dot, VectorXd& out_q_ddot
)
{
    std::cout << "solving ..." << std::endl;
    this->set_state(q, q_dot);
    this->pushforward();
    this->pullback();
    this->resolve();
    out_q_ddot = this->q_ddot;
}




rmp_flow::Leaf_Base::Leaf_Base(
    int self_dim, int parent_dim, std::string name, mapping_base::Identity* mappings
) : Node(self_dim, parent_dim, name, mappings)
{
    this->node_type = 1;
    this->children.push_back(nullptr);
}


void rmp_flow::Leaf_Base::calc_natural_form(void)
{
    // pass
}


void rmp_flow::Leaf_Base::pullback(void)
{
    //std::cout << "pullback doing at " << name << ", and hear is leaf!" << std::endl;
    // std::cout << "f - (M * J_dot * this->parent->x_dot) = \n" << f - (M * J_dot * this->parent->x_dot) << std::endl;
    // std::cout << "J.transpose() * (f - (M * J_dot * this->parent->x_dot)) = \n" << J.transpose() * (f - (M * J_dot * this->parent->x_dot)) << std::endl;
    // std::cout << "J.transpose() * M * J = \n" << J.transpose() * M * J << std::endl;

    this->calc_natural_form();
    this->parent->f += this->J.transpose() * (this->f - (this->M * this->J_dot * parent->x_dot));
    this->parent->M += this->J.transpose() * this->M * this->J;
}


void rmp_flow::Leaf_Base::set_debug(bool is_debug)
{
    this->is_debug = is_debug;
}

void rmp_flow::Leaf_Base::add_child(Node *child)
{
    std::cout << "this node is leaf. can't add child." << std::endl;
}


