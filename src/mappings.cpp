#include <iostream>
#include <string>




#include "../include/mappings.hpp"



mapping_base::Identity::Identity(void){
    //std::cout << "Id 呼ばれた" << std::endl;
    this->name = "identity";
}


void mapping_base::Identity::phi(const VectorXd &x, VectorXd &out)
{
    out = x;
}

void mapping_base::Identity::jacobian(const VectorXd &x, MatrixXd &out)
{
    //std::cout << "this is Identity. have not to update J" << std::endl;
}

void mapping_base::Identity::jacobian_dot(const VectorXd &x, const VectorXd &x_dot, MatrixXd &out)
{
    //std::cout << "this is Identity. have not to update J_dot" << std::endl;
}


mapping_base::Distance::Distance(
    const VectorXd& o, const VectorXd& o_dot
)
{
    this->name = "distance map";
    this->o = o;
    this->o_dot = o_dot;
}


void mapping_base::Distance::phi(
    const VectorXd &x, VectorXd &out
)
{
    // std::cout << "dis" << std::endl;
    // std::cout << "x = \n" << x << std::endl;
    // std::cout << "o = \n" << o << std::endl;
    out(0) = (x - o).norm();
    //std::cout << "dis2" << std::endl;
}


void mapping_base::Distance::jacobian(
    const VectorXd &x, MatrixXd &out
)
{
    out = -(x-o).transpose() / (x-o).norm();
}


void mapping_base::Distance::jacobian_dot(
    const VectorXd &x, const VectorXd &x_dot, MatrixXd &out
)
{
    out = -((x_dot-o_dot).transpose() - (x-o).transpose()*(1/(x-o).norm()*(x-o).dot(x_dot-o_dot))) / std::pow((x-o).norm(), 2);
}