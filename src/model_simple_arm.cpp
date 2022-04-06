#include <iostream>
#include <cmath>
#include "/usr/include/eigen3/Eigen/Core"


#include "../include/model_simple_arm.hpp"

model_simple_arm::Kinematics_Model::Kinematics_Model(double l1, double l2, double l3, double l4)
{
    this->l1 = l1;
    this->l2 = l2;
    this->l3 = l3;
    this->l4 = l4;
}


void model_simple_arm::Kinematics_Model::x0(const Eigen::VectorXd &q, Eigen::VectorXd &x)
{
    x(0) = l1*std::cos(q(0));
    x(1) = l1*std::sin(q(1));
}


void model_simple_arm::Kinematics_Model::x1(const Eigen::VectorXd &q, Eigen::VectorXd &x)
{
    x(0) = l1*std::cos(q(0)) + l2*std::cos(q(0) + q(1));
    x(1) = l1*std::sin(q(0)) + l2*std::sin(q(0) + q(1));
}


void model_simple_arm::Kinematics_Model::x2(const Eigen::VectorXd &q, Eigen::VectorXd &x)
{
    x(0) = l1*std::cos(q(0)) + l2*std::cos(q(0) + q(1)) + l3*std::cos(q(0) + q(1) + q(2));
    x(1) = l1*std::sin(q(0)) + l2*std::sin(q(0) + q(1)) + l3*std::sin(q(0) + q(1) + q(2));
}


void model_simple_arm::Kinematics_Model::x3(const Eigen::VectorXd &q, Eigen::VectorXd &x)
{
    x(0) = l1*std::cos(q(0)) + l2*std::cos(q(0) + q(1)) + l3*std::cos(q(0) + q(1) + q(2)) + l4*std::cos(q(0) + q(1) + q(2) + q(3));
    x(1) = l1*std::sin(q(0)) + l2*std::sin(q(0) + q(1)) + l3*std::sin(q(0) + q(1) + q(2)) + l4*std::sin(q(0) + q(1) + q(2) + q(3));
}


void model_simple_arm::Kinematics_Model::J0(const Eigen::VectorXd &q, Eigen::MatrixXd &J)
{
    J << -l1*std::sin(q(0)), 0, 0, 0,
        l1*std::cos(q(1)), 0, 0, 0;
}


void model_simple_arm::Kinematics_Model::J1(const Eigen::VectorXd &q, Eigen::MatrixXd &J)
{
    J << -l1*std::sin(q(0)) - l2*std::sin(q(0) + q(1)), -l2*std::sin(q(0) + q(1)), 0, 0,
        l1*std::cos(q(0)) + l2*std::cos(q(0) + q(1)), l2*std::cos(q(0) + q(1)), 0, 0;
}


void model_simple_arm::Kinematics_Model::J2(const Eigen::VectorXd &q, Eigen::MatrixXd &J)
{
    J << -l1*std::sin(q(0)) - l2*std::sin(q(0) + q(1)) - l3*std::sin(q(0) + q(1) + q(2)), -l2*std::sin(q(0) + q(1)) - l3*std::sin(q(0) + q(1) + q(2)), -l3*std::sin(q(0) + q(1) + q(2)), 0,
        l1*std::cos(q(0)) + l2*std::cos(q(0) + q(1)) + l3*std::cos(q(0) + q(1) + q(2)), l2*std::cos(q(0) + q(1)) + l3*std::cos(q(0) + q(1) + q(2)), l3*std::cos(q(0) + q(1) + q(2)), 0;
}

void model_simple_arm::Kinematics_Model::J3(const Eigen::VectorXd &q, Eigen::MatrixXd &J)
{
    J << -l1*std::sin(q(0)) - l2*std::sin(q(0) + q(1)) - l3*std::sin(q(0) + q(1) + q(2)) - l4*std::sin(q(0) + q(1) + q(2) + q[4]), -l2*std::sin(q(0) + q(1)) - l3*std::sin(q(0) + q(1) + q(2)) - l4*std::sin(q(0) + q(1) + q(2) + q[4]), -l3*std::sin(q(0) + q(1) + q(2)) - l4*std::sin(q(0) + q(1) + q(2) + q[4]), -l4*std::sin(q(0) + q(1) + q(2) + q[4]),
        l1*std::cos(q(0)) + l2*std::cos(q(0) + q(1)) + l3*std::cos(q(0) + q(1) + q(2)) + l4*std::cos(q(0) + q(1) + q(2) + q[4]), l2*std::cos(q(0) + q(1)) + l3*std::cos(q(0) + q(1) + q(2)) + l4*std::cos(q(0) + q(1) + q(2) + q[4]), l3*std::cos(q(0) + q(1) + q(2)) + l4*std::cos(q(0) + q(1) + q(2) + q[4]), l4*std::cos(q(0) + q(1) + q(2) + q[4]);
    
}