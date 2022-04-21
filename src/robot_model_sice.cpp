#include <iostream>
#include <cmath>
#include "/usr/include/eigen3/Eigen/Core"

#include "../include/robot_model_sice.hpp"

robot_model_sice::Joint_limitation::Joint_limitation(void)
{
    const double PI = 3.141592653589793;
    
    q_max = Eigen::VectorXd::Zero(4);
    q_min = Eigen::VectorXd::Zero(4);
    q_neutral = Eigen::VectorXd::Zero(4);

    q_neutral << PI/2.0, 0.0, 0.0, 0.0;
    q_max << 3.0/4.0*PI+PI/2.0, 3.0/4.0*PI, 3.0/4.0*PI, 3.0/4.0*PI;
    q_min << -3.0/4.0*PI+PI/2.0, -3.0/4.0*PI, -3.0/4.0*PI, -3.0/4.0*PI;

}


robot_model_sice::X0::X0(double l1, double l2, double l3, double l4)
{
    this->l1 = l1;
    this->l2 = l2;
    this->l3 = l3;
    this->l4 = l4;
}
robot_model_sice::X1::X1(double l1, double l2, double l3, double l4)
{
    this->l1 = l1;
    this->l2 = l2;
    this->l3 = l3;
    this->l4 = l4;
}
robot_model_sice::X2::X2(double l1, double l2, double l3, double l4)
{
    this->l1 = l1;
    this->l2 = l2;
    this->l3 = l3;
    this->l4 = l4;
}
robot_model_sice::X3::X3(double l1, double l2, double l3, double l4)
{
    this->l1 = l1;
    this->l2 = l2;
    this->l3 = l3;
    this->l4 = l4;
}


void robot_model_sice::X0::phi(const Eigen::VectorXd &q, Eigen::VectorXd &x)
{
    x(0) = l1*std::cos(q(0));
    x(1) = l1*std::sin(q(1));
}


void robot_model_sice::X1::phi(const Eigen::VectorXd &q, Eigen::VectorXd &x)
{
    x(0) = l1*std::cos(q(0)) + l2*std::cos(q(0) + q(1));
    x(1) = l1*std::sin(q(0)) + l2*std::sin(q(0) + q(1));
}


void robot_model_sice::X2::phi(const Eigen::VectorXd &q, Eigen::VectorXd &x)
{
    x(0) = l1*std::cos(q(0)) + l2*std::cos(q(0) + q(1)) + l3*std::cos(q(0) + q(1) + q(2));
    x(1) = l1*std::sin(q(0)) + l2*std::sin(q(0) + q(1)) + l3*std::sin(q(0) + q(1) + q(2));
}


void robot_model_sice::X3::phi(const Eigen::VectorXd &q, Eigen::VectorXd &x)
{
    x(0) = l1*std::cos(q(0)) + l2*std::cos(q(0) + q(1)) + l3*std::cos(q(0) + q(1) + q(2)) + l4*std::cos(q(0) + q(1) + q(2) + q(3));
    x(1) = l1*std::sin(q(0)) + l2*std::sin(q(0) + q(1)) + l3*std::sin(q(0) + q(1) + q(2)) + l4*std::sin(q(0) + q(1) + q(2) + q(3));
}


void robot_model_sice::X0::jacobian(const Eigen::VectorXd &q, Eigen::MatrixXd &J)
{
    J << -l1*std::sin(q(0)), 0, 0, 0,
        l1*std::cos(q(1)), 0, 0, 0;
}


void robot_model_sice::X1::jacobian(const Eigen::VectorXd &q, Eigen::MatrixXd &J)
{
    J << -l1*std::sin(q(0)) - l2*std::sin(q(0) + q(1)), -l2*std::sin(q(0) + q(1)), 0, 0,
        l1*std::cos(q(0)) + l2*std::cos(q(0) + q(1)), l2*std::cos(q(0) + q(1)), 0, 0;
}


void robot_model_sice::X2::jacobian(const Eigen::VectorXd &q, Eigen::MatrixXd &J)
{
    J << -l1*std::sin(q(0)) - l2*std::sin(q(0) + q(1)) - l3*std::sin(q(0) + q(1) + q(2)), -l2*std::sin(q(0) + q(1)) - l3*std::sin(q(0) + q(1) + q(2)), -l3*std::sin(q(0) + q(1) + q(2)), 0,
        l1*std::cos(q(0)) + l2*std::cos(q(0) + q(1)) + l3*std::cos(q(0) + q(1) + q(2)), l2*std::cos(q(0) + q(1)) + l3*std::cos(q(0) + q(1) + q(2)), l3*std::cos(q(0) + q(1) + q(2)), 0;
}

void robot_model_sice::X3::jacobian(const Eigen::VectorXd &q, Eigen::MatrixXd &J)
{
    J << -l1*std::sin(q(0)) - l2*std::sin(q(0) + q(1)) - l3*std::sin(q(0) + q(1) + q(2)) - l4*std::sin(q(0) + q(1) + q(2) + q(3)), -l2*std::sin(q(0) + q(1)) - l3*std::sin(q(0) + q(1) + q(2)) - l4*std::sin(q(0) + q(1) + q(2) + q(3)), -l3*std::sin(q(0) + q(1) + q(2)) - l4*std::sin(q(0) + q(1) + q(2) + q(3)), -l4*std::sin(q(0) + q(1) + q(2) + q(3)),
        l1*std::cos(q(0)) + l2*std::cos(q(0) + q(1)) + l3*std::cos(q(0) + q(1) + q(2)) + l4*std::cos(q(0) + q(1) + q(2) + q(3)), l2*std::cos(q(0) + q(1)) + l3*std::cos(q(0) + q(1) + q(2)) + l4*std::cos(q(0) + q(1) + q(2) + q(3)), l3*std::cos(q(0) + q(1) + q(2)) + l4*std::cos(q(0) + q(1) + q(2) + q(3)), l4*std::cos(q(0) + q(1) + q(2) + q(3));
    
}


void robot_model_sice::X0::jacobian_dot(const Eigen::VectorXd &q, const Eigen::VectorXd &dq, Eigen::MatrixXd &J_dot)
{
    J_dot << -dq(0)*l1*std::cos(q(0)), 0, 0, 0,
        -dq(0)*l1*std::sin(q(0)), 0, 0, 0;
}


void robot_model_sice::X1::jacobian_dot(const Eigen::VectorXd &q, const Eigen::VectorXd &dq, Eigen::MatrixXd &J_dot)
{
    J_dot << -dq(0)*l1*std::cos(q(0)) - l2*(dq(0) + dq(1))*std::cos(q(0) + q(1)), -l2*(dq(0) + dq(1))*std::cos(q(0) + q(1)), 0, 0,
        -dq(0)*l1*std::sin(q(0)) - l2*(dq(0) + dq(1))*std::sin(q(0) + q(1)), -l2*(dq(0) + dq(1))*std::sin(q(0) + q(1)), 0, 0;
}


void robot_model_sice::X2::jacobian_dot(const Eigen::VectorXd &q, const Eigen::VectorXd &dq, Eigen::MatrixXd &J_dot)
{
    J_dot << -dq(0)*l1*std::cos(q(0)) - l2*(dq(0) + dq(1))*std::cos(q(0) + q(1)) - l3*(dq(0) + dq(1) + dq(2))*std::cos(q(0) + q(1) + q(2)), -l2*(dq(0) + dq(1))*std::cos(q(0) + q(1)) - l3*(dq(0) + dq(1) + dq(2))*std::cos(q(0) + q(1) + q(2)), -l3*(dq(0) + dq(1) + dq(2))*std::cos(q(0) + q(1) + q(2)), 0,
        -dq(0)*l1*std::sin(q(0)) - l2*(dq(0) + dq(1))*std::sin(q(0) + q(1)) - l3*(dq(0) + dq(1) + dq(2))*std::sin(q(0) + q(1) + q(2)), -l2*(dq(0) + dq(1))*std::sin(q(0) + q(1)) - l3*(dq(0) + dq(1) + dq(2))*std::sin(q(0) + q(1) + q(2)), -l3*(dq(0) + dq(1) + dq(2))*std::sin(q(0) + q(1) + q(2)), 0;
}


void robot_model_sice::X3::jacobian_dot(const Eigen::VectorXd &q, const Eigen::VectorXd &dq, Eigen::MatrixXd &J_dot)
{
    J_dot << -dq(0)*l1*std::cos(q(0)) - l2*(dq(0) + dq(1))*std::cos(q(0) + q(1)) - l3*(dq(0) + dq(1) + dq(2))*std::cos(q(0) + q(1) + q(2)) - l4*(dq(0) + dq(1) + dq(2) + dq(3))*std::cos(q(0) + q(1) + q(2) + q(3)), -l2*(dq(0) + dq(1))*std::cos(q(0) + q(1)) - l3*(dq(0) + dq(1) + dq(2))*std::cos(q(0) + q(1) + q(2)) - l4*(dq(0) + dq(1) + dq(2) + dq(3))*std::cos(q(0) + q(1) + q(2) + q(3)), -l3*(dq(0) + dq(1) + dq(2))*std::cos(q(0) + q(1) + q(2)) - l4*(dq(0) + dq(1) + dq(2) + dq(3))*std::cos(q(0) + q(1) + q(2) + q(3)), -l4*(dq(0) + dq(1) + dq(2) + dq(3))*std::cos(q(0) + q(1) + q(2) + q(3)),
        -dq(0)*l1*std::sin(q(0)) - l2*(dq(0) + dq(1))*std::sin(q(0) + q(1)) - l3*(dq(0) + dq(1) + dq(2))*std::sin(q(0) + q(1) + q(2)) - l4*(dq(0) + dq(1) + dq(2) + dq(3))*std::sin(q(0) + q(1) + q(2) + q(3)), -l2*(dq(0) + dq(1))*std::sin(q(0) + q(1)) - l3*(dq(0) + dq(1) + dq(2))*std::sin(q(0) + q(1) + q(2)) - l4*(dq(0) + dq(1) + dq(2) + dq(3))*std::sin(q(0) + q(1) + q(2) + q(3)), -l3*(dq(0) + dq(1) + dq(2))*std::sin(q(0) + q(1) + q(2)) - l4*(dq(0) + dq(1) + dq(2) + dq(3))*std::sin(q(0) + q(1) + q(2) + q(3)), -l4*(dq(0) + dq(1) + dq(2) + dq(3))*std::sin(q(0) + q(1) + q(2) + q(3));
    
}