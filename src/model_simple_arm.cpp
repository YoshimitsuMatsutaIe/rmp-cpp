#include <iostream>
#include <cmath>
#include "/usr/include/eigen3/Eigen/Core"


#include "../include/model_simple_arm.hpp"



void model_simple_arm::x0(const Eigen::VectorXd &q, Eigen::VectorXd &x)
{
    x(0) = l1*std::cos(q(0));
    x(1) = l1*std::sin(q(1));
}


void model_simple_arm::x1(const Eigen::VectorXd &q, Eigen::VectorXd &x)
{
    x(0) = l1*std::cos(q(0)) + l2*std::cos(q(0) + q(1));
    x(1) = l1*std::sin(q(0)) + l2*std::sin(q(0) + q(1));
}


void model_simple_arm::x2(const Eigen::VectorXd &q, Eigen::VectorXd &x)
{
    x(0) = l1*std::cos(q(0)) + l2*std::cos(q(0) + q(1)) + l3*std::cos(q(0) + q(1) + q(2));
    x(1) = l1*std::sin(q(0)) + l2*std::sin(q(0) + q(1)) + l3*std::sin(q(0) + q(1) + q(2));
}


void model_simple_arm::x3(const Eigen::VectorXd &q, Eigen::VectorXd &x)
{
    x(0) = l1*std::cos(q(0)) + l2*std::cos(q(0) + q(1)) + l3*std::cos(q(0) + q(1) + q(2)) + l4*std::cos(q(0) + q(1) + q(2) + q(3));
    x(1) = l1*std::sin(q(0)) + l2*std::sin(q(0) + q(1)) + l3*std::sin(q(0) + q(1) + q(2)) + l4*std::sin(q(0) + q(1) + q(2) + q(3));
}


void model_simple_arm::J0(const Eigen::VectorXd &q, Eigen::MatrixXd &J)
{
    J <<-l1*std::sin(q(0)), 0, 0, 0,
        l1*std::cos(q(1)), 0, 0, 0;
}


void model_simple_arm::J1(const Eigen::VectorXd &q, Eigen::MatrixXd &J)
{
    J << -l1*std::sin(q(0)) - l2*std::sin(q(0) + q(1)), -l2*std::sin(q(0) + q(1)), 0, 0,
        l1*std::cos(q(0)) + l2*std::cos(q(0) + q(1)), l2*std::cos(q(0) + q(1)), 0, 0;
}


void model_simple_arm::J2(const Eigen::VectorXd &q, Eigen::MatrixXd &J)
{
    J << -l1*std::sin(q(0)) - l2*std::sin(q(0) + q(1)) - l3*std::sin(q(0) + q(1) + q(2)), -l2*std::sin(q(0) + q(1)) - l3*std::sin(q(0) + q(1) + q(2)), -l3*std::sin(q(0) + q(1) + q(2)), 0,
        l1*std::cos(q(0)) + l2*std::cos(q(0) + q(1)) + l3*std::cos(q(0) + q(1) + q(2)), l2*std::cos(q(0) + q(1)) + l3*std::cos(q(0) + q(1) + q(2)), l3*std::cos(q(0) + q(1) + q(2)), 0;
}

void model_simple_arm::J3(const Eigen::VectorXd &q, Eigen::MatrixXd &J)
{
    J << -l1*std::sin(q(0)) - l2*std::sin(q(0) + q(1)) - l3*std::sin(q(0) + q(1) + q(2)) - l4*std::sin(q(0) + q(1) + q(2) + q(3)), -l2*std::sin(q(0) + q(1)) - l3*std::sin(q(0) + q(1) + q(2)) - l4*std::sin(q(0) + q(1) + q(2) + q(3)), -l3*std::sin(q(0) + q(1) + q(2)) - l4*std::sin(q(0) + q(1) + q(2) + q(3)), -l4*std::sin(q(0) + q(1) + q(2) + q(3)),
        l1*std::cos(q(0)) + l2*std::cos(q(0) + q(1)) + l3*std::cos(q(0) + q(1) + q(2)) + l4*std::cos(q(0) + q(1) + q(2) + q(3)), l2*std::cos(q(0) + q(1)) + l3*std::cos(q(0) + q(1) + q(2)) + l4*std::cos(q(0) + q(1) + q(2) + q(3)), l3*std::cos(q(0) + q(1) + q(2)) + l4*std::cos(q(0) + q(1) + q(2) + q(3)), l4*std::cos(q(0) + q(1) + q(2) + q(3));
    
}


void model_simple_arm::J0_dot(const Eigen::VectorXd &q, const Eigen::VectorXd &dq, Eigen::MatrixXd &J_dot)
{
    J_dot << -dq(0)*l1*std::cos(q(0)), 0, 0, 0,
        -dq(0)*l1*std::sin(q(0)), 0, 0, 0;
}


void model_simple_arm::J1_dot(const Eigen::VectorXd &q, const Eigen::VectorXd &dq, Eigen::MatrixXd &J_dot)
{
    J_dot << -dq(0)*l1*std::cos(q(0)) - l2*(dq(0) + dq(1))*std::cos(q(0) + q(1)), -l2*(dq(0) + dq(1))*std::cos(q(0) + q(1)), 0, 0,
        -dq(0)*l1*std::sin(q(0)) - l2*(dq(0) + dq(1))*std::sin(q(0) + q(1)), -l2*(dq(0) + dq(1))*std::sin(q(0) + q(1)), 0, 0;
}


void model_simple_arm::J2_dot(const Eigen::VectorXd &q, const Eigen::VectorXd &dq, Eigen::MatrixXd &J_dot)
{
    J_dot << -dq(0)*l1*std::cos(q(0)) - l2*(dq(0) + dq(1))*std::cos(q(0) + q(1)) - l3*(dq(0) + dq(1) + dq(2))*std::cos(q(0) + q(1) + q(2)), -l2*(dq(0) + dq(1))*std::cos(q(0) + q(1)) - l3*(dq(0) + dq(1) + dq(2))*std::cos(q(0) + q(1) + q(2)), -l3*(dq(0) + dq(1) + dq(2))*std::cos(q(0) + q(1) + q(2)), 0,
        -dq(0)*l1*std::sin(q(0)) - l2*(dq(0) + dq(1))*std::sin(q(0) + q(1)) - l3*(dq(0) + dq(1) + dq(2))*std::sin(q(0) + q(1) + q(2)), -l2*(dq(0) + dq(1))*std::sin(q(0) + q(1)) - l3*(dq(0) + dq(1) + dq(2))*std::sin(q(0) + q(1) + q(2)), -l3*(dq(0) + dq(1) + dq(2))*std::sin(q(0) + q(1) + q(2)), 0;
}


void model_simple_arm::J3_dot(const Eigen::VectorXd &q, const Eigen::VectorXd &dq, Eigen::MatrixXd &J_dot)
{
    J_dot << -dq(0)*l1*std::cos(q(0)) - l2*(dq(0) + dq(1))*std::cos(q(0) + q(1)) - l3*(dq(0) + dq(1) + dq(2))*std::cos(q(0) + q(1) + q(2)) - l4*(dq(0) + dq(1) + dq(2) + dq(3))*std::cos(q(0) + q(1) + q(2) + q(3)), -l2*(dq(0) + dq(1))*std::cos(q(0) + q(1)) - l3*(dq(0) + dq(1) + dq(2))*std::cos(q(0) + q(1) + q(2)) - l4*(dq(0) + dq(1) + dq(2) + dq(3))*std::cos(q(0) + q(1) + q(2) + q(3)), -l3*(dq(0) + dq(1) + dq(2))*std::cos(q(0) + q(1) + q(2)) - l4*(dq(0) + dq(1) + dq(2) + dq(3))*std::cos(q(0) + q(1) + q(2) + q(3)), -l4*(dq(0) + dq(1) + dq(2) + dq(3))*std::cos(q(0) + q(1) + q(2) + q(3)),
        -dq(0)*l1*std::sin(q(0)) - l2*(dq(0) + dq(1))*std::sin(q(0) + q(1)) - l3*(dq(0) + dq(1) + dq(2))*std::sin(q(0) + q(1) + q(2)) - l4*(dq(0) + dq(1) + dq(2) + dq(3))*std::sin(q(0) + q(1) + q(2) + q(3)), -l2*(dq(0) + dq(1))*std::sin(q(0) + q(1)) - l3*(dq(0) + dq(1) + dq(2))*std::sin(q(0) + q(1) + q(2)) - l4*(dq(0) + dq(1) + dq(2) + dq(3))*std::sin(q(0) + q(1) + q(2) + q(3)), -l3*(dq(0) + dq(1) + dq(2))*std::sin(q(0) + q(1) + q(2)) - l4*(dq(0) + dq(1) + dq(2) + dq(3))*std::sin(q(0) + q(1) + q(2) + q(3)), -l4*(dq(0) + dq(1) + dq(2) + dq(3))*std::sin(q(0) + q(1) + q(2) + q(3));
    
}