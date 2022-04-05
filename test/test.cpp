#include "../include/node.hpp"
#include "/usr/include/eigen3/Eigen/Core"
#include <iostream>


// 恒等写像
void calc_x_(const Eigen::VectorXd& y, Eigen::VectorXd* x)
{
    *x = y;
}

void calc_J_(const Eigen::VectorXd &y, Eigen::MatrixXd *J)
{
    *J = Eigen::MatrixXd::Zero(2, 2);
}


void calc_J_dot_(const Eigen::VectorXd &y, Eigen::MatrixXd *J_dot)
{
    *J_dot = Eigen::MatrixXd::Zero(2, 2);
}

void calc_rmp_func(
    const Eigen::VectorXd &x,
    const Eigen::VectorXd &x_dot,
    Eigen::VectorXd *f, Eigen::MatrixXd *M
)
{
    *f = x;
    *M = Eigen::MatrixXd::Zero(2, 2);
}



int main()
{
    std::cout << "running...\n" << std::endl;

    double dt = 0.01;
    rmp_node::Node root(2, "root", dt);
    Eigen::VectorXd q0(2), q0_dot(2);
    q0 << 0.0, 0.0;
    q0_dot << 0.0, 0.0;
    root.set_initial_state(q0, q0_dot);

    rmp_node::Node node1(2, "node1", dt);
    root.add_child(&node1);

    rmp_node::Node leaf1(2, "leaf", dt);
    node1.add_child(&leaf1);

    root.print_state();
    node1.print_state();
    leaf1.print_state();

    root.set_mappings(&calc_x_, &calc_J_, &calc_J_dot_, &calc_rmp_func);
    node1.set_mappings(&calc_x_, &calc_J_, &calc_J_dot_, &calc_rmp_func);
    leaf1.set_mappings(&calc_x_, &calc_J_, &calc_J_dot_, &calc_rmp_func);

    root.pushforward();





    std::cout << "\ndone!" << std::endl;
}