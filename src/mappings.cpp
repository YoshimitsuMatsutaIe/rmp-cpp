#include <iostream>
#include <string>

#include "/usr/include/eigen3/Eigen/Core"


#include "../include/mappings.hpp"



mapping_base::Base::Base(void){}


mapping_base::Distance::Distance(
    Eigen::VectorXd& o, Eigen::VectorXd& o_dot
): o(o), o_dot(o_dot)
{
    this->name = "distance map";
}


void mapping_base::Distance::phi(
    const Eigen::VectorXd &x, Eigen::VectorXd &out
)
{
    out(0) = (x - o).norm();
}


void mapping_base::Distance::jacobian(
    const Eigen::VectorXd &x, Eigen::MatrixXd &out
)
{
    out = -(x-o).transpose() / (x-o).norm();
}


void mapping_base::Distance::jacobian_dot(
    const Eigen::VectorXd &x, const Eigen::VectorXd &x_dot, Eigen::MatrixXd &out
)
{
    out = -((x_dot-o_dot).transpose() - (x-o).transpose()*(1/(x-o).norm()*(x-o).dot(x_dot-o_dot))) / std::pow((x-o).norm(), 2);
}