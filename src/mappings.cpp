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

void mapping_base::Identity::velovity(const VectorXd &x_dot, const MatrixXd& J, VectorXd &out)
{
    //std::cout << this->name << std::endl;
    out = x_dot;
}


mapping_base::Translation::Translation(
    const VectorXd& x0, const VectorXd& x0_dot
)
{
    this->name = "translation map";
    this->x0 = x0;
    this->x0_dot = x0_dot;
}


void mapping_base::Translation::phi(
    const VectorXd &x, VectorXd &out
)
{
    //std::cout << "dis" << std::endl;
    // std::cout << "x = \n" << x << std::endl;
    // std::cout << "o = \n" << o << std::endl;
    out = x - this->x0;
    //std::cout << "dis2" << std::endl;
}


void mapping_base::Translation::jacobian(
    const VectorXd &x, MatrixXd &out
)
{
    //pass
}


void mapping_base::Translation::jacobian_dot(
    const VectorXd &x, const VectorXd &x_dot, MatrixXd &out
)
{
    //パス
}


void mapping_base::Translation::velovity(
    const VectorXd &x_dot, const MatrixXd& J, VectorXd &out
)
{
    out = x_dot - this->x0_dot;
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
    //std::cout << "dis" << std::endl;
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


void mapping_base::Distance::velovity(
    const VectorXd &x_dot, const MatrixXd& J, VectorXd &out
)
{
    // std::cout << this->name << std::endl;
    // std::cout << "J = \n" << J << std::endl;
    // std::cout << "x_dot = \n" << x_dot << std::endl;
    // std::cout << "x0_dot = \n" << this->o_dot << std::endl;
    // std::cout << "dx-dx0 = \n" << x_dot - this->o_dot << std::endl;
    out(0) = (J * (x_dot - this->o_dot))(0);
}