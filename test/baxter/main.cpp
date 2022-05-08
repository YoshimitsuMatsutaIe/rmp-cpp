/**
 * @file main.cpp
 * @author your name (you@domain.com)
 * @brief baxterモデルでrmp-treeが使えるかテスト
 * @version 0.1
 * @date 2022-05-08
 * 
 * @copyright Copyright (c) 2022
 * 
 */

#include "../../include/rmp_node.hpp"
#include "../../robot_model_baxter/include/baxter.hpp"
#include "../../include/rmp_leaf.hpp"
#include "../../include/mappings.hpp"
#include "../../include/rmp_node.hpp"


#include <eigen3/Eigen/Core>
#include <iostream>
#include <vector>
#include <string>


int main()
{
    using Eigen::VectorXd;
    using std::vector;

    std::cout << "running...\n" << std::endl;


    VectorXd og(3);
    VectorXd og_dot(3);
    og << 2.0, 1.0, 0,0;
    og_dot = VectorXd::Zero(3);

    const double TiME_INTERVAL = 60.0;
    const double dt = 1e-2;

    /* root */
    mapping_base::Identity root_mappings;
    rmp_node::Root root(7, 0, "root", &root_mappings);
    VectorXd q0(7), q0_dot(7);
    baxter::Control_Point::set_q_neutral(q0);
    q0_dot = VectorXd::Zero(7);

    root.set_state(q0, q0_dot);


    /* node 作成*/
    // 構造
    vector<int> model_struct = baxter::Control_Point::calc_points_mapping();
    
    vector<vector<mapping_base::Identity>> temp_mappings(model_struct.size());
    vector<vector<rmp_node::Node>> cpoint_nodes;  //ノード
    for (int i=0; i<model_struct.size(); ++i){
        for (int j=0; j<model_struct[i]; ++j){
            temp_mappings[i].push_back(baxter::Control_Point(i, j));
            if (i == model_struct.size()-1){
                cpoint_nodes[i].push_back(
                    rmp_node::Node(3, 7, "ee", &temp_mappings[i][j])
                );
            }
            else{
                std::string name_ = "cpoints_" + std::to_string(i) + "_" + std::to_string(j);
                cpoint_nodes[i].push_back(
                    rmp_node::Leaf_Base(3, 7, name_, &temp_mappings[i][j])
                );
            }
            root.add_child(&cpoint_nodes[i][j]);
        }
    }

    mapping_base::Identity id_mappings;  //恒等写像
    rmp2::Goal_Attractor attractor(
        3, 3, "ee-attractor", &id_mappings,
        5.0, 5.0, 0.15, 1.0, 1.0, 10.0, 0.1, 0.15, 0.5,
        og, og_dot
    );
    cpoint_nodes[model_struct.size()-1][0].add_child(&attractor);


    VectorXd q_neutral(7), q_max(7), q_min(7);
    baxter::Control_Point::set_q_neutral(q_neutral);
    baxter::Control_Point::set_q_max(q_max);
    baxter::Control_Point::set_q_min(q_min);
    mapping_base::Identity id_mappings2;  //恒等写像
    rmp2::Joint_Limit_Avoidance jl(
        4, 4, "jl-avoidance", &id_mappings2,
        0.01, 0.05, 1.0, 0.1, q_max, q_min, q_neutral
    );
    root.add_child(&jl);

    // root.print_state_all_node();
    // root.pushforward();
    // root.print_state_all_node();

    // root.pullback();
    // root.print_state_all_node();


    rmp_tree::RMP_Tree tree(&root, "test_tree");
    tree.set_debug(false);
    tree.run(TiME_INTERVAL, dt);

    std::cout << "done all!" << std::endl;
}