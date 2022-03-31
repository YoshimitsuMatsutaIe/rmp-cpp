#include "../include/node.hpp"
#include "/usr/include/eigen3/Eigen/Core"
#include "/usr/include/eigen3/Eigen/QR"
#include <iostream>


rmp_node::Node::Node(int dim)
{
    this->dim = dim;
    rmp_node::Node::set_dim(dim);
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
    std::cout << "dimention = " << dim << std::endl;
    std::cout << "x = " << x << std::endl;
    std::cout << "x_dot = " << x_dot << std::endl;
    std::cout << "f = " << f << std::endl;
    std::cout << "M = " << M << std::endl;
}

void rmp_node::Node::pushforward()
{
    
}

void rmp_node::Node::pullback()
{
    
}


void rmp_node::Root::resolve()
{
    q_ddot = M.completeOrthogonalDecomposition().pseudoInverse() * f;
}

