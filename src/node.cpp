#include "../include/node.hpp"
#include "/usr/include/eigen3/Eigen/Core"
#include "/usr/include/eigen3/Eigen/QR"
#include <iostream>

rmp_node::Node::Node(void){};
// rmp_node::Node::Node(
//     int self_dim, int parent_dim, int node_type, std::string name, double dt
// )
// {
//     this->dt = dt;
//     this->name = name;
//     this->self_dim = self_dim;
//     this->parent_dim = parent_dim;

//     Eigen::VectorXd vec_base_(self_dim);
//     Eigen::MatrixXd mat_base_(self_dim, self_dim);
//     Eigen::MatrixXd J_base_(self_dim, parent_dim);
//     vec_base_ = Eigen::VectorXd::Zero(self_dim);
//     mat_base_ = Eigen::MatrixXd::Zero(self_dim, self_dim);
//     J_base_ = Eigen::MatrixXd::Zero(self_dim, parent_dim);

//     x = vec_base_;
//     x_dot = vec_base_;
//     f = vec_base_;
//     M = mat_base_;
//     J = J_base_;
//     J_dot = J_base_;
//     if (node_type == 0)
//     {
//         //std::cout << "root dayo!" << std::endl;
//         q_ddot = vec_base_;
//     }
    

//     this->node_type = node_type;
//     if (node_type == 0)  //root
//     {
//         this->parent = nullptr;
//         this->set_mappings();
//     }
//     else if (node_type == 1)  //leaf
//     {
//         this->children.push_back(nullptr);
//     }
//     else  //node
//     {
//         // pass
//     }
// }

rmp_node::Node::Node(
    int self_dim, int parent_dim, std::string name
)
{
    this->name = name;
    this->self_dim = self_dim;
    this->parent_dim = parent_dim;

    x = Eigen::VectorXd::Zero(self_dim);
    x_dot = Eigen::VectorXd::Zero(self_dim);
    f = Eigen::VectorXd::Zero(self_dim);
    M = Eigen::MatrixXd::Zero(self_dim, self_dim);
    J = Eigen::MatrixXd::Zero(self_dim, parent_dim);
    J_dot = Eigen::MatrixXd::Zero(self_dim, parent_dim);
}

void rmp_node::Node::set_mappings(
    void(*calc_x)(const Eigen::VectorXd& y, Eigen::VectorXd& x),
    void(*calc_J)(const Eigen::VectorXd& y, Eigen::MatrixXd& J),
    void(*calc_J_dot)(
        const Eigen::VectorXd& y, const Eigen::VectorXd &y_dot,
        Eigen::MatrixXd& J_dot
    )
)
{
    this->calc_x = calc_x;
    this->calc_J = calc_J;
    this->calc_J_dot = calc_J_dot;
}



void rmp_node::Node::calc_natural_form(void)
{
    std::cout << "root hasn't rmp func." << std::endl;
}


const void rmp_node::Node::print_state(void)
{
    std::cout << "name = " << name << std::endl;
    std::cout << "node_type = " << node_type << std::endl;
    std::cout << "dimention = " << self_dim << std::endl;

    if (node_type == 1)
    {
        std::cout << "children = none" << std::endl;
    }
    else
    {
        std::cout << "children = ";
        for (rmp_node::Node* child : children)
        {
            std::cout << child->name << ", ";
        }
        std::cout << std::endl;
    }
    
    std::cout << "x = \n" << x << std::endl;
    std::cout << "x_dot = \n" << x_dot << std::endl;
    std::cout << "J = \n" << J << std::endl;
    std::cout << "J_dot = \n" << J_dot << std::endl;
    std::cout << "f = \n" << f << std::endl;
    std::cout << "M = \n" << M << std::endl;
}


const void rmp_node::Node::print_state_all_node(void)
{
    print_state();
    
    if (node_type == 1)
    {
        // pass
    }
    else
    {
        for (rmp_node::Node* child : children)
        {
            child->print_state_all_node();
        }
    }
    std::cout << "\n" << std::endl;
}


void rmp_node::Node::add_child(rmp_node::Node* child)
{
    this->children.push_back(child);
    child->parent = this;
}


// void rmp_node::Node::pushforward()
// {
//     std::cout << "pushforward!" << std::endl;
//     std::cout << "now name = " << name << std::endl;

//     if (node_type == 0)
//     {
//         x_dot += q_ddot * dt;
//         x += x_dot * dt;
//         std::cout << "OK!" << std::endl;
//         for (rmp_node::Node* child : children)
//         {
//             this->calc_natural_form();  // 自分のRMPを計算

//             // 子供のやつ
//             child->calc_x(x, child->x);
//             child->calc_J(x, child->J);
//             child->x_dot = child->J * x_dot;
//             child->calc_J_dot(x, x_dot, child->J_dot);
//             child->pushforward();
//         }
//         std::cout << "parent push done" << std::endl;
//     }
//     else if (node_type == 1)
//     {
//         std::cout << "parent push done" << std::endl;
//     }
//     else
//     {
//         for (rmp_node::Node* child : children)
//         {
//             this->calc_natural_form();  // 自分のRMPを計算

//             // 子供のやつ
//             child->calc_x(x, child->x);
//             child->calc_J(x, child->J);
//             child->x_dot = child->J * x_dot;
//             child->calc_J_dot(x, x_dot, child->J_dot);
//             child->pushforward();
//         }
//     }
// }


void rmp_node::Node::pushforward(void)
{
    for (rmp_node::Node* child : children)
    {
        // 子供のやつ
        child->calc_x(x, child->x);
        child->calc_J(x, child->J);
        child->x_dot = child->J * x_dot;
        child->calc_J_dot(x, x_dot, child->J_dot);
        child->pushforward();
    }
}


void rmp_node::Node::pullback(void)
{
    std::cout << "pullback doing at " << name << std::endl;
    for (rmp_node::Node* child : children)
    {
        child->pullback();
        this->parent->f += J.transpose() * (f - (M * J_dot * x_dot));
        this->parent->M += J.transpose() * M * J;
    }
}




rmp_node::Root::Root(int self_dim, int parent_dim, std::string name, double dt)
    : Node(self_dim, parent_dim, name)
{
    this-> node_type = 0;
    this->dt = dt;
    this->parent = nullptr;
    this->q_ddot = Eigen::VectorXd::Zero(self_dim);
    this->calc_x = [](const Eigen::VectorXd &y, Eigen::VectorXd &x)->void {};
    this->calc_J = [](const Eigen::VectorXd &y, Eigen::MatrixXd &J)->void {};
    this->calc_J_dot = [](const Eigen::VectorXd &y, const Eigen::VectorXd &y_dot, Eigen::MatrixXd &J_dot)->void {};
}

void rmp_node::Root::set_initial_state(
    const Eigen::VectorXd& q, const Eigen::VectorXd& q_dot
)
{
    x = q;
    x_dot = q_dot;
}


void rmp_node::Root::pushforward(void)
{
    x_dot += q_ddot * dt;
    x += x_dot * dt;
    //std::cout << "OK!" << std::endl;
    for (rmp_node::Node* child : children)
    {
        // 子供のやつ
        child->calc_x(x, child->x);
        child->calc_J(x, child->J);
        child->x_dot = child->J * x_dot;
        child->calc_J_dot(x, x_dot, child->J_dot);
        child->pushforward();
    }
}


void rmp_node::Root::pullback(void)
{
    std::cout << "pullback running..." << std::endl;
    for (rmp_node::Node* child : children)
    {
        child->pullback();
    }
    std::cout << "pullback done!" << std::endl;
}


void rmp_node::Root::resolve(void)
{
    q_ddot = M.completeOrthogonalDecomposition().pseudoInverse() * f;
}



rmp_node::Leaf_Base::Leaf_Base(int self_dim, int parent_dim, std::string name) : Node(self_dim, parent_dim, name)
{
    this->node_type = 1;
    this->children.push_back(nullptr);
}

void rmp_node::Leaf_Base::pushforward(void)
{
    // 何もしないです
}

void rmp_node::Leaf_Base::pullback(void)
{
    std::cout << "pullback doing at " << name << ", and hear is leaf!" << std::endl;
    this->parent->f += J.transpose() * (f - (M * J_dot * x_dot));
    this->parent->M += J.transpose() * M * J;
}
