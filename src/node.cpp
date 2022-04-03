#include "../include/node.hpp"
#include "/usr/include/eigen3/Eigen/Core"
#include "/usr/include/eigen3/Eigen/QR"
#include <iostream>


rmp_node::Node::Node(int dim, std::string name)
{
    this->dim = dim;
    rmp_node::Node::set_dim(dim);

    this->name = name;
    if (name == "root")
    {
        this->parent = nullptr;
    }
    else if (name == "leaf")
    {
        this->children.push_back(nullptr);
    }
}

void rmp_node::Node::set_initial_state(
    const Eigen::VectorXd& q, const Eigen::VectorXd& q_dot
)
{
    x = q;
    x_dot = q_dot;
}

void rmp_node::Node::set_dim(int dim)
{
    Eigen::VectorXd _vec(dim);
    Eigen::MatrixXd _mat(dim, dim);

    x = _vec;
    x_dot = _vec;
    f = _vec;
    M = _mat;
}


void rmp_node::Node::print_state()
{
    std::cout << "name = " << name << std::endl;
    std::cout << "dimention = " << dim << std::endl;
    std::cout << "x = " << x << std::endl;
    std::cout << "x_dot = " << x_dot << std::endl;
    std::cout << "f = " << f << std::endl;
    std::cout << "M = " << M << std::endl;
}


void rmp_node::Node::add_child(rmp_node::Node* child)
{
    this->children.push_back(child);
    child->parent = this;
}


void rmp_node::Node::pushforward()
{
    std::cout << "pushforward!" << std::endl;

    if (parent == nullptr)
    {
        x_dot += q_ddot * dt;
        x += x_dot * dt;
        for (rmp_node::Node* child : children)
        {
            child->calc_x(x, &child->x);
            child->calc_J(x);
            child->x_dot = child->J * x_dot;
            child->calc_J_dot(x);
            child->calc_rmp_func(x, x_dot);

            child->pushforward();
        }
    }
    else if (children[0] == nullptr)
    {
        // パス
    }
    else
    {
        for (rmp_node::Node* child : children)
        {
            child->calc_x(x, &child->x);
            child->calc_J(x);
            child->x_dot = child->J * x_dot;
            child->calc_J_dot(x);
            child->calc_rmp_func(x, x_dot);

            child->pushforward();
        }
    }
}


void rmp_node::Node::pullback()
{
    std::cout << "pullback!" << std::endl;

    if (parent == nullptr)
    {

    }
}


void rmp_node::Node::resolve()
{
    q_ddot = M.completeOrthogonalDecomposition().pseudoInverse() * f;
}

