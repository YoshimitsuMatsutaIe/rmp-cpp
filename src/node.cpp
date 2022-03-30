#include "../include/node.hpp"
#include "/usr/include/eigen3/Eigen/Core"
#include "/usr/include/eigen3/Eigen/QR"
#include <iostream>

//using namespace rmp;

rmp::Node::Node(int dim)
{
    this->dim = dim;
    rmp::Node::set_dim(dim);
}

void rmp::Node::set_dim(int dim)
{
    Eigen::VectorXd _vec(dim);
    Eigen::MatrixXd _mat(dim, dim);

    x = _vec;
    x << 1, 2, 3;
    x_dot = _vec;
    x_dot << 4, 5, 6;
    f = _vec;
    f << 7, 8, 9;
    M = _mat;
    M << 1, 2, 3, 4, 5, 6, 7, 8, 9;
    //M = _M;
}


void rmp::Node::print_state()
{
    std::cout << "dimention = " << dim << std::endl;
    std::cout << "x = " << x << std::endl;
    std::cout << "x_dot = " << x_dot << std::endl;
    std::cout << "f = " << f << std::endl;
    std::cout << "M = " << M << std::endl;
}


void rmp::Node::pullback()
{
    
}


void rmp::Root::resolve()
{
    q_ddot = M.completeOrthogonalDecomposition().pseudoInverse() * f;
}