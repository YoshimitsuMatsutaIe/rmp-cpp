/**
 * @file main.cpp
 * @author your name (you@domain.com)
 * @brief ツリー構造無しでrmp-flowを実行
 * @version 0.1
 * @date 2022-04-20
 * 
 * @copyright Copyright (c) 2022
 * 
 */

#include <iostream>

#include "../include/rmp_node.hpp"
#include "../include/robot_model_sice.hpp"
#include "../include/rmp_leaf.hpp"
#include "../include/mappings.hpp"
#include "../include/rmp_tree.hpp"

//#include "/usr/include/eigen3/Eigen/Core"
#include <eigen3/Eigen/Core>



int main()
{
    std::cout << "running...\n" << std::endl;


    // 目標関係
    Eigen::VectorXd og(2);
    Eigen::VectorXd og_dot(2);
    og << 2.0, 1.0;
    og_dot << 0.0, 0.0;


    double dt = 1e-5;  //刻み時間
    double PI = 3.141592653589793;

    /* root */
    mapping_base::Base root_mappings;
    rmp_node::Root root(4, 0, "root", &root_mappings, dt);
    Eigen::VectorXd q0(4), q0_dot(4);
    
    // q0 = Eigen::VectorXd::Zero(4);
    // q0_dot = Eigen::VectorXd::Zero(4);

    q0 << PI/2, 0, 0, 0;
    q0_dot << 0., 0., 0., 0.;

    root.set_initial_state(q0, q0_dot);

    // モデルパラメータ
    double l1 = 1.0;
    double l2 = 1.0;
    double l3 = 1.0;
    double l4 = 1.0;

    robot_model_sice::X0 x0(l1, l2, l3, l4);
    robot_model_sice::X1 x1(l1, l2, l3, l4);
    robot_model_sice::X2 x2(l1, l2, l3, l4);


    robot_model_sice::X3 x3(l1, l2, l3, l4);
    rmp_node::Node node3(2, 4, "x3", &x3);

    mapping_base::Base id_mappings;  //恒等写像
    rmp2::Goal_Attractor ee_node(
        2, 2, "ee-attractor", &id_mappings,
        6., 10.0, 0.15, 1.0, 1.0, 10.0, 0.1, 0.15, 1e-5,
        og, og_dot
    );



    robot_model_sice::Joint_limitation jlqs;


    Eigen::VectorXd q_max(4);





























    std::cout << "done all!" << std::endl;
}