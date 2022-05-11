#include <iostream>
#include <string>




#include "../include/mappings.hpp"



mapping_base::Identity::Identity(void){
    this->name = "identity";
}


void mapping_base::Identity::phi(const VectorXd &x, VectorXd &out)
{
    out = x;
}

void mapping_base::Identity::jacobian(const VectorXd &x, MatrixXd &out)
{
    std::cout << "this is Identity. dont update J" << std::endl;
}

void mapping_base::Identity::jacobian_dot(const VectorXd &x, const VectorXd &x_dot, MatrixXd &out)
{
    std::cout << "this is Identity. dont update J_dot" << std::endl;
}


mapping_base::Distance::Distance(
    VectorXd& o, VectorXd& o_dot
): o(o), o_dot(o_dot)
{
    this->name = "distance map";
}


void mapping_base::Distance::phi(
    const VectorXd &x, VectorXd &out
)
{
    out(0) = (x - o).norm();
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