#include "../include/node.hpp"
#include "../include/model_simple_arm.hpp"
#include "../include/rmp.hpp"

#include "/usr/include/eigen3/Eigen/Core"
#include <iostream>




int main()
{
    std::cout << "running...\n" << std::endl;


    Eigen::VectorXd og(2);
    Eigen::VectorXd og_dot(2);
    og = Eigen::VectorXd::Zero(2);
    og_dot = Eigen::VectorXd::Zero(2);


    using namespace model_simple_arm;

    double dt = 0.01;
    rmp_node::Root root(4, 0, 0, "root", dt);
    Eigen::VectorXd q0(4), q0_dot(4);
    q0 = Eigen::VectorXd::Zero(4);
    q0_dot = Eigen::VectorXd::Zero(4);
    root.set_initial_state(q0, q0_dot);
    //root.set_mappings(&calc_x_, &calc_J_, &calc_J_dot_);

    rmp_node::Node node0(2, 4, 1, "x0");
    root.add_child(&node0);
    node0.set_mappings(x0, J0, J0_dot);

    rmp_node::Node node1(2, 4, 1, "x1");
    root.add_child(&node1);
    node1.set_mappings(x1, J1, J1_dot);

    rmp_node::Node node2(2, 4, 1, "x2");
    root.add_child(&node2);
    node2.set_mappings(x2, J2, J2_dot);

    // rmp_node::Node node3(2, 4, 1, "x3", dt);
    // root.add_child(&node3);
    // node3.set_mappings(x3, J3, J3_dot);


    rmp2::Goal_Attractor node3(
        2, 4, 1, "x3",
        1., 2.0, 1e-10, 3., 4., 0.1, 0.2, 0., 0.,
        og, og_dot
    );
    root.add_child(&node3);
    node3.set_mappings(x3, J3, J3_dot);

    root.print_state_all_node();
    root.pushforward();
    root.print_state_all_node();

    //root.pullback();




    std::cout << "\ndone!" << std::endl;
}