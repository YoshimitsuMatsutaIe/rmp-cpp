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
    using std::cout;
    using std::endl;
    using Eigen::VectorXd;
    using std::vector;

    cout << "running...\n" << endl;

    VectorXd og(3);
    VectorXd og_dot(3);
    og << 2.0, 1.0, 0.0;
    og_dot << 0, 0, 0;

    const double TiME_INTERVAL = 60.0;
    const double dt = 1e-2;

    cout << "construct root start" << endl;
    /* root */
    mapping_base::Identity root_mappings;
    rmp_node::Root root(7, 0, "root", &root_mappings);
    VectorXd q0(7), q0_dot(7);
    baxter::Control_Point::set_q_neutral(q0);
    q0_dot = VectorXd::Zero(7);

    root.set_state(q0, q0_dot);
    root.set_debug(true);


    cout << "constract node start..." << endl;
    /* node 作成*/
    // 構造
    vector<std::size_t> model_struct = baxter::Control_Point::calc_points_mapping();
    cout << "1" << endl;
    vector<vector<mapping_base::Identity>> mappings(model_struct.size());
    vector<vector<rmp_node::Node>> cpoint_nodes(model_struct.size());  //ノード
    auto frame_num = model_struct.size();
    
    cout << "for mae" << endl;
    for (int i=0; i<frame_num; ++i){
        cout << "i = " << i << endl;
        cout << "    index_num = " << model_struct[i] << endl;
        
        vector<mapping_base::Identity> temp_mappings_(model_struct[i]);
        vector<rmp_node::Node> temp_nodes_(model_struct[i]);

        for (int j=0; j<model_struct[i]; ++j){
            cout << "    j = " << j << endl;
            temp_mappings_[j] = baxter::Control_Point(i, j);
            //cout << "        hoge" << endl;
            if (i == 7){
                cout << "        this is end-effector" << endl;
                temp_nodes_[j] = rmp_node::Node(3, 7, "ee", &temp_mappings_[j]);
            }
            else{
                std::string name_ = "cpoints_" + std::to_string(i) + "_" + std::to_string(j);
                cout << "        name = " << name_ << endl;

                //cout << "        hoge" << endl;
                temp_nodes_[j] = rmp_node::Leaf_Base(3, 7, name_, &temp_mappings_[j]);
            }
            //cout << "    root add mae" << endl;

        }
        mappings[i] = temp_mappings_;
        cpoint_nodes[i] = temp_nodes_;
    }


    cout << "hogehoge" << endl;
    for (int i=0; i<frame_num; ++i){
        for (int j=0; j<model_struct[i]; ++j){
            root.add_child(&cpoint_nodes[i][j]);
        }
    }

    cout << "hogehogehoge" << endl;
    mapping_base::Identity id_mappings;  //恒等写像
    rmp2::Goal_Attractor attractor(
        3, 3, "ee-attractor", &id_mappings,
        5.0, 5.0, 0.15, 1.0, 1.0, 10.0, 0.1, 0.15, 0.5,
        og, og_dot
    );
    cpoint_nodes[frame_num-1][0].add_child(&attractor);

    cout << "for owari" << endl;



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
    cout << "jl add" << endl;

    root.print_state();
    root.print_state_all_node();
    cout << "print all done!!!" << endl;
    root.pushforward();
    cout << "push done" << endl;
    //root.print_state_all_node();

    // root.pullback();
    // root.print_state_all_node();


    rmp_tree::RMP_Tree tree(&root, "test_tree");
    tree.set_debug(false);
    tree.run(TiME_INTERVAL, dt);

    std::cout << "done all!" << std::endl;
}