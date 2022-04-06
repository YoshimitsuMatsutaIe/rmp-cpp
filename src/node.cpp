#include "../include/node.hpp"
#include "/usr/include/eigen3/Eigen/Core"
#include "/usr/include/eigen3/Eigen/QR"
#include <iostream>


rmp_node::Node::Node(int dim, std::string name, double dt)
{
    this->dim = dim;
    this->dt = dt;
    this->name = name;
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
    _vec = Eigen::VectorXd::Zero(dim);
    _mat = Eigen::MatrixXd::Zero(dim, dim);

    x = _vec;
    x_dot = _vec;
    f = _vec;
    M = _mat;
    if (name == "root")
    {
        //std::cout << "root dayo!" << std::endl;
        q_ddot = _vec;
    }
    
}


void rmp_node::Node::set_mappings(
    void(*calc_x)(const Eigen::VectorXd& y, Eigen::VectorXd& x),
    void(*calc_J)(const Eigen::VectorXd& y, Eigen::MatrixXd& J),
    void(*calc_J_dot)(const Eigen::VectorXd& y,  Eigen::MatrixXd& J_dot),
    void(*calc_rmp_func)(
        const Eigen::VectorXd &x,
        const Eigen::VectorXd &x_dot,
        Eigen::VectorXd &f, Eigen::MatrixXd &M
    )
)
{
    this->calc_x = calc_x;
    this->calc_J = calc_J;
    this->calc_J_dot = calc_J_dot;
    this->calc_rmp_func = calc_rmp_func;
    this->calc_rmp_func = calc_rmp_func;
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
    std::cout << "now name = " << name << std::endl;

    if (parent == nullptr)
    {
        std::cout << "q_ddot = " << q_ddot << std::endl;
        x_dot += q_ddot * dt;
        std::cout << "ok!" << std::endl;
        x += x_dot * dt;
        for (rmp_node::Node* child : children)
        {
            this->calc_rmp_func(this->x, this->x_dot, this->f, this->M);  // 自分のRMPを計算

            // 子供のやつ
            child->calc_x(x, child->x);
            child->calc_J(x, child->J);
            child->x_dot = child->J * x_dot;
            child->calc_J_dot(x, child->J_dot);
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
            this->calc_rmp_func(this->x, this->x_dot, this->f, this->M);  // 自分のRMPを計算

            // 子供のやつ
            child->calc_x(x, child->x);
            child->calc_J(x, child->J);
            child->x_dot = child->J * x_dot;
            child->calc_J_dot(x, child->J_dot);
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

