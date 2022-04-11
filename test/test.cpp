#include "../include/node.hpp"
#include "../include/robot_model_sice.hpp"
#include "../include/rmp.hpp"
#include "../include/mappings.hpp"

#include "/usr/include/eigen3/Eigen/Core"
#include <iostream>




int main()
{
    std::cout << "running...\n" << std::endl;


    Eigen::VectorXd og(2);
    Eigen::VectorXd og_dot(2);
    og << 2.0, 1.0;
    og_dot = Eigen::VectorXd::Zero(2);


    double dt = 0.01;


    /* root */
    mapping_base::Base root_mappings;
    rmp_node::Root root(4, 0, "root", &root_mappings, dt);
    Eigen::VectorXd q0(4), q0_dot(4);
    q0 = Eigen::VectorXd::Zero(4);
    q0_dot = Eigen::VectorXd::Zero(4);
    root.set_initial_state(q0, q0_dot);

    /* node */
    double l1 = 1.0;
    double l2 = 1.0;
    double l3 = 1.0;
    double l4 = 1.0;

    // robot_model_sice::X0 x0(l1, l2, l3, l4);
    // rmp_node::Leaf_Base node0(2, 4, "x0", &x0);
    // root.add_child(&node0);

    // robot_model_sice::X1 x1(l1, l2, l3, l4);
    // rmp_node::Leaf_Base node1(2, 4, "x1", &x1);
    // root.add_child(&node1);

    // robot_model_sice::X2 x2(l1, l2, l3, l4);
    // rmp_node::Leaf_Base node2(2, 4, "x2", &x2);
    // root.add_child(&node2);

    robot_model_sice::X3 x3(l1, l2, l3, l4);
    rmp_node::Node node3(2, 4, "x3", &x3);
    root.add_child(&node3);

    mapping_base::Base id_mappings;
    rmp2::Goal_Attractor ee_node(
        2, 2, "ee-attractor", &id_mappings,
        2.0, 10.0, 0.15, 1.0, 1.0, 0.9, 0.1, 1.0, 1e-5,
        og, og_dot
    );
    node3.add_child(&ee_node);


    root.print_state_all_node();
    root.pushforward();
    root.print_state_all_node();

    root.pullback();
    root.print_state_all_node();


    std::cout << "done all!" << std::endl;
}