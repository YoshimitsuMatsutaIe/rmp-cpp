#include "../include/rmp_node.hpp"
#include "../include/mappings.hpp"

#include "/usr/include/eigen3/Eigen/Core"
#include "/usr/include/eigen3/Eigen/QR"
#include <eigen3/Eigen/LU>
#include <eigen3/Eigen/Dense>
#include <iostream>



rmp_node::Node::Node(void){};
rmp_node::Node::Node(
    int self_dim,
    int parent_dim,
    std::string name,
    mapping_base::Base* mappings
)
{
    this->name = name;
    this->self_dim = self_dim;
    this->parent_dim = parent_dim;
    this->mappings = mappings;

    x = Eigen::VectorXd::Zero(self_dim);
    x_dot = Eigen::VectorXd::Zero(self_dim);
    f = Eigen::VectorXd::Zero(self_dim);
    M = Eigen::MatrixXd::Zero(self_dim, self_dim);
    J = Eigen::MatrixXd::Zero(self_dim, parent_dim);
    J_dot = Eigen::MatrixXd::Zero(self_dim, parent_dim);
}


void rmp_node::Node::initialize_rmp_natural_form(void)
{
    f = Eigen::VectorXd::Zero(self_dim);
    M = Eigen::MatrixXd::Zero(self_dim, self_dim);
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
    std::cout << "\n" << std::endl;
}


const void rmp_node::Node::print_state_all_node(void)
{
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
    initialize_rmp_natural_form();
    for (rmp_node::Node* child : children)
    {
        child->mappings->phi(x, child->x);
        child->mappings->jacobian(x, child->J);
        child->x_dot = child->J * x_dot;
        child->mappings->jacobian_dot(x, x_dot, child->J_dot);
        if (child->have_rmp_func)
        {
            child->calc_natural_form();
        }
        if (child->node_type != 1)
        {
            child->pushforward();
        }
    }
}


void rmp_node::Node::pullback(void)
{
    //std::cout << "pullback doing at " << name << std::endl;
    for (rmp_node::Node* child : children)
    {
        child->pullback();
        this->parent->f += J.transpose() * (f - (M * J_dot * this->parent->x_dot));
        this->parent->M += J.transpose() * M * J;
    }
}




rmp_node::Root::Root(
    int self_dim, int parent_dim, std::string name, mapping_base::Base* mappings,
    double dt
) : Node(self_dim, parent_dim, name, mappings)
{
    this->node_type = 0;
    this->dt = dt;
    this->parent = nullptr;
    this->q_ddot = Eigen::VectorXd::Zero(self_dim);
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
    //std::cout << "pushforward running..." << std::endl;
    //std::cout << "pushing at " << name << std::endl;

    x_dot += q_ddot * dt;
    x += x_dot * dt;
    initialize_rmp_natural_form();

    for (rmp_node::Node* child : children)
    {
        // 子供のやつ
        child->mappings->phi(x, child->x);
        child->mappings->jacobian(x, child->J);
        child->x_dot = child->J * x_dot;
        child->mappings->jacobian_dot(x, x_dot, child->J_dot);
        if (child->have_rmp_func)
        {
            child->calc_natural_form();
        }
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
    for (rmp_node::Node* child : children)
    {
        child->pullback();
    }
    //std::cout << "pullback done!\n" << std::endl;
}


void rmp_node::Root::resolve(void)
{
    //q_ddot = M.completeOrthogonalDecomposition().pseudoInverse() * f;

    //q_ddot = M.inverse() * f;

    //q_ddot = M.colPivHouseholderQr().solve(f);

    //q_ddot = M.ldlt().solve(f);

    //q_ddot = M.template bdcSvd<Eigen::ComputeThinU | Eigen::ComputeThinV>().solve(f);

    q_ddot = (M.transpose() * M).ldlt().solve(M.transpose() * f);

    std::cout << "f = \n" << f << std::endl;
    std::cout << "M = \n" << M << std::endl;
    std::cout << "pinv_M = \n" << M.completeOrthogonalDecomposition().pseudoInverse() << std::endl;
    std::cout << "q_ddot = \n" << q_ddot << std::endl;
}



rmp_node::Leaf_Base::Leaf_Base(
    int self_dim, int parent_dim, std::string name, mapping_base::Base* mappings
) : Node(self_dim, parent_dim, name, mappings)
{
    this->node_type = 1;
    this->children.push_back(nullptr);
}


void rmp_node::Leaf_Base::pullback(void)
{
    //std::cout << "pullback doing at " << name << ", and hear is leaf!" << std::endl;
    // std::cout << "f - (M * J_dot * this->parent->x_dot) = \n" << f - (M * J_dot * this->parent->x_dot) << std::endl;
    // std::cout << "J.transpose() * (f - (M * J_dot * this->parent->x_dot)) = \n" << J.transpose() * (f - (M * J_dot * this->parent->x_dot)) << std::endl;
    // std::cout << "J.transpose() * M * J = \n" << J.transpose() * M * J << std::endl;

    this->parent->f += J.transpose() * (f - (M * J_dot * this->parent->x_dot));
    this->parent->M += J.transpose() * M * J;
}
