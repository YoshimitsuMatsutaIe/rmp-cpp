#include "../include/node.hpp"
#include "/usr/include/eigen3/Eigen/Core"
#include <iostream>


void calc_x_(Eigen::VectorXd x, Eigen::VectorXd &y)
{
    x[0] = y[0];
    x[1] = y[1];
}




int main()
{
    std::cout << "running..." << std::endl;


    rmp_node::Node root(2, "root");
    Eigen::VectorXd q0(2), q0_dot(2);
    q0 << 0.0, 0.0;
    q0_dot << 0.0, 0.0;
    root.set_initial_state(q0, q0_dot);

    rmp_node::Node node1(2, "node1");
    root.add_child(&node1);

    rmp_node::Node leaf1(2, "leaf");
    node1.add_child(&leaf1);

    //root.print_state();


    root.pushforward();

    std::cout << "done!" << std::endl;
}