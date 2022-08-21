#include <iostream>

#include "../include/sice.hpp"

robot_model_sice::Joint_limitation::Joint_limitation(void)
{
    
    q_max = VectorXd::Zero(4);
    q_min = VectorXd::Zero(4);
    q_neutral = VectorXd::Zero(4);

    q_neutral << M_PI/2.0, 0.0, 0.0, 0.0;
    q_max << (3.0/4.0 + 1.0/2.0)*M_PI, 3.0/4.0*M_PI, 3.0/4.0*M_PI, 3.0/4.0*M_PI;
    q_min << (-3.0/4.0 + 1.0/2.0)*M_PI, -3.0/4.0*M_PI, -3.0/4.0*M_PI, -3.0/4.0*M_PI;

}


robot_model_sice::Base::Base(double l1, double l2, double l3, double l4)
{
    this->l1 = l1;
    this->l2 = l2;
    this->l3 = l3;
    this->l4 = l4;
}


void robot_model_sice::X0::phi(const VectorXd &q, VectorXd &out)
{
    out(0) = l1*cos(q(0));
    out(1) = l1*sin(q(1));
}


void robot_model_sice::X1::phi(const VectorXd &q, VectorXd &out)
{
    out(0) = l1*cos(q(0)) + l2*cos(q(0) + q(1));
    out(1) = l1*sin(q(0)) + l2*sin(q(0) + q(1));
}


void robot_model_sice::X2::phi(const VectorXd &q, VectorXd &out)
{
    out(0) = l1*cos(q(0)) + l2*cos(q(0) + q(1)) + l3*cos(q(0) + q(1) + q(2));
    out(1) = l1*sin(q(0)) + l2*sin(q(0) + q(1)) + l3*sin(q(0) + q(1) + q(2));
}


void robot_model_sice::X3::phi(const VectorXd &q, VectorXd &out)
{
    out(0) = l1*cos(q(0)) + l2*cos(q(0) + q(1)) + l3*cos(q(0) + q(1) + q(2)) + l4*cos(q(0) + q(1) + q(2) + q(3));
    out(1) = l1*sin(q(0)) + l2*sin(q(0) + q(1)) + l3*sin(q(0) + q(1) + q(2)) + l4*sin(q(0) + q(1) + q(2) + q(3));
}


void robot_model_sice::X0::jacobian(const VectorXd &q, MatrixXd &out)
{
    out << -l1*sin(q(0)), 0, 0, 0,
        l1*cos(q(1)), 0, 0, 0;
}


void robot_model_sice::X1::jacobian(const VectorXd &q, MatrixXd &out)
{
    out << -l1*sin(q(0)) - l2*sin(q(0) + q(1)), -l2*sin(q(0) + q(1)), 0, 0,
        l1*cos(q(0)) + l2*cos(q(0) + q(1)), l2*cos(q(0) + q(1)), 0, 0;
}


void robot_model_sice::X2::jacobian(const VectorXd &q, MatrixXd &out)
{
    out << -l1*sin(q(0)) - l2*sin(q(0) + q(1)) - l3*sin(q(0) + q(1) + q(2)), -l2*sin(q(0) + q(1)) - l3*sin(q(0) + q(1) + q(2)), -l3*sin(q(0) + q(1) + q(2)), 0,
        l1*cos(q(0)) + l2*cos(q(0) + q(1)) + l3*cos(q(0) + q(1) + q(2)), l2*cos(q(0) + q(1)) + l3*cos(q(0) + q(1) + q(2)), l3*cos(q(0) + q(1) + q(2)), 0;
}

void robot_model_sice::X3::jacobian(const VectorXd &q, MatrixXd &out)
{
    out << -l1*sin(q(0)) - l2*sin(q(0) + q(1)) - l3*sin(q(0) + q(1) + q(2)) - l4*sin(q(0) + q(1) + q(2) + q(3)), -l2*sin(q(0) + q(1)) - l3*sin(q(0) + q(1) + q(2)) - l4*sin(q(0) + q(1) + q(2) + q(3)), -l3*sin(q(0) + q(1) + q(2)) - l4*sin(q(0) + q(1) + q(2) + q(3)), -l4*sin(q(0) + q(1) + q(2) + q(3)),
        l1*cos(q(0)) + l2*cos(q(0) + q(1)) + l3*cos(q(0) + q(1) + q(2)) + l4*cos(q(0) + q(1) + q(2) + q(3)), l2*cos(q(0) + q(1)) + l3*cos(q(0) + q(1) + q(2)) + l4*cos(q(0) + q(1) + q(2) + q(3)), l3*cos(q(0) + q(1) + q(2)) + l4*cos(q(0) + q(1) + q(2) + q(3)), l4*cos(q(0) + q(1) + q(2) + q(3));
    
}


void robot_model_sice::X0::jacobian_dot(const VectorXd &q, const VectorXd &dq, MatrixXd &out)
{
    out << -dq(0)*l1*cos(q(0)), 0, 0, 0,
        -dq(0)*l1*sin(q(0)), 0, 0, 0;
}


void robot_model_sice::X1::jacobian_dot(const VectorXd &q, const VectorXd &dq, MatrixXd &out)
{
    out << -dq(0)*l1*cos(q(0)) - l2*(dq(0) + dq(1))*cos(q(0) + q(1)), -l2*(dq(0) + dq(1))*cos(q(0) + q(1)), 0, 0,
        -dq(0)*l1*sin(q(0)) - l2*(dq(0) + dq(1))*sin(q(0) + q(1)), -l2*(dq(0) + dq(1))*sin(q(0) + q(1)), 0, 0;
}


void robot_model_sice::X2::jacobian_dot(const VectorXd &q, const VectorXd &dq, MatrixXd &out)
{
    out << -dq(0)*l1*cos(q(0)) - l2*(dq(0) + dq(1))*cos(q(0) + q(1)) - l3*(dq(0) + dq(1) + dq(2))*cos(q(0) + q(1) + q(2)), -l2*(dq(0) + dq(1))*cos(q(0) + q(1)) - l3*(dq(0) + dq(1) + dq(2))*cos(q(0) + q(1) + q(2)), -l3*(dq(0) + dq(1) + dq(2))*cos(q(0) + q(1) + q(2)), 0,
        -dq(0)*l1*sin(q(0)) - l2*(dq(0) + dq(1))*sin(q(0) + q(1)) - l3*(dq(0) + dq(1) + dq(2))*sin(q(0) + q(1) + q(2)), -l2*(dq(0) + dq(1))*sin(q(0) + q(1)) - l3*(dq(0) + dq(1) + dq(2))*sin(q(0) + q(1) + q(2)), -l3*(dq(0) + dq(1) + dq(2))*sin(q(0) + q(1) + q(2)), 0;
}


void robot_model_sice::X3::jacobian_dot(const VectorXd &q, const VectorXd &dq, MatrixXd &out)
{
    out << -dq(0)*l1*cos(q(0)) - l2*(dq(0) + dq(1))*cos(q(0) + q(1)) - l3*(dq(0) + dq(1) + dq(2))*cos(q(0) + q(1) + q(2)) - l4*(dq(0) + dq(1) + dq(2) + dq(3))*cos(q(0) + q(1) + q(2) + q(3)), -l2*(dq(0) + dq(1))*cos(q(0) + q(1)) - l3*(dq(0) + dq(1) + dq(2))*cos(q(0) + q(1) + q(2)) - l4*(dq(0) + dq(1) + dq(2) + dq(3))*cos(q(0) + q(1) + q(2) + q(3)), -l3*(dq(0) + dq(1) + dq(2))*cos(q(0) + q(1) + q(2)) - l4*(dq(0) + dq(1) + dq(2) + dq(3))*cos(q(0) + q(1) + q(2) + q(3)), -l4*(dq(0) + dq(1) + dq(2) + dq(3))*cos(q(0) + q(1) + q(2) + q(3)),
        -dq(0)*l1*sin(q(0)) - l2*(dq(0) + dq(1))*sin(q(0) + q(1)) - l3*(dq(0) + dq(1) + dq(2))*sin(q(0) + q(1) + q(2)) - l4*(dq(0) + dq(1) + dq(2) + dq(3))*sin(q(0) + q(1) + q(2) + q(3)), -l2*(dq(0) + dq(1))*sin(q(0) + q(1)) - l3*(dq(0) + dq(1) + dq(2))*sin(q(0) + q(1) + q(2)) - l4*(dq(0) + dq(1) + dq(2) + dq(3))*sin(q(0) + q(1) + q(2) + q(3)), -l3*(dq(0) + dq(1) + dq(2))*sin(q(0) + q(1) + q(2)) - l4*(dq(0) + dq(1) + dq(2) + dq(3))*sin(q(0) + q(1) + q(2) + q(3)), -l4*(dq(0) + dq(1) + dq(2) + dq(3))*sin(q(0) + q(1) + q(2) + q(3));
}