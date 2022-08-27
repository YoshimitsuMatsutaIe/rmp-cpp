/**
 * @file main.cpp
 * @author your name (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2022-08-25
 * 
 * @copyright Copyright (c) 2022
 * 
 */

#include "../../include/rmp_node.hpp"
#include "../../robot_model_sice/include/sice.hpp"
#include "../../include/rmp_leaf.hpp"
#include "../../include/mappings.hpp"
#include "../../include/rmp_node.hpp"
#include "../../include/simulator.hpp"
#include "../../include/rmp_tree.hpp"

#include <omp.h>
#include <eigen3/Eigen/Core>
#include <iostream>
#include <vector>
#include <array>
#include <string>
#include <numeric>
#include <map>
#include <list>

int main()
{
    using std::cout;
    using std::endl;
    using Eigen::VectorXd;
    using std::vector;
    using std::list;
    using std::array;
    cout << "running...\n" << endl;

    namespace rm = sice;

    VectorXd og(2);  //目標点位置
    VectorXd og_dot(2);  //目標点速度
    og << 3.0, 3.0;
    og_dot << 0.0, 0.0;


    vector<VectorXd> obs_s;
    vector<VectorXd> obs_dot_s;
    VectorXd o(2);
    VectorXd o_dot(2);
    o << 0.0, 2.0;
    o_dot << 0, 0;
    obs_s.push_back(o);
    obs_dot_s.push_back(o_dot);


    const double TiME_INTERVAL = 120.0;
    const double dt = 1e-2;

    cout << "construct root" << endl;
    /* root */
    rmp_flow::Root root(4, "root");
    VectorXd q0(4), q0_dot(4);
    rm::Kinematics::set_q_neutral(q0);
    q0_dot = VectorXd::Zero(4);

    root.set_state(q0, q0_dot);
    root.set_debug(true);

    cout << "done!\n" << endl;

    /* node 作成*/
    cout << "constract node & leaf start..." << endl;

    // ジョイント制限
    VectorXd q_neutral(4), q_max(4), q_min(4);
    rm::Kinematics::set_q_neutral(q_neutral);
    rm::Kinematics::set_q_max(q_max);
    rm::Kinematics::set_q_min(q_min);
    mapping_base::Identity id_mappings2;  //恒等写像
    rmp2::Joint_Limit_Avoidance jl(
        root.self_dim, root.self_dim, "jl-avoidance", &id_mappings2,
        0.01, 0.05, 1.0, 0.1, q_max, q_min, q_neutral
    );
    root.add_child(&jl);
    cout << "jl add to ee done" << endl;


    // mapの構造
    vector<std::size_t> model_struct = rm::Control_Point::calc_points_mapping();
    auto frame_num = model_struct.size();
    int cpoints_num = std::accumulate(model_struct.begin(), model_struct.end(), 0.0);
    
    // /* 制御点のマップを構成 */
    // vector<vector<mapping_base::Identity>> mappings;
    // for (int i=0; i<frame_num; ++i){
    //     //cout << "i = " << i << endl;
    //     vector<mapping_base::Identity> temp_mappings_;
    //     for (int j=0; j<model_struct[i]; ++j){
    //         //cout << "  j = " << j << endl;
    //         temp_mappings_.push_back(rm::Control_Point(i, j));
    //         cout << "now map name is " << temp_mappings_[j].name << endl;
    //         //cout << "and jo = \n" << temp_mappings_[j].print_state() << endl;
    //     }
    //     mappings.push_back(temp_mappings_);
    // }
    auto [ee_frame_num, ee_n] = rm::Kinematics::get_ee_id();

    // /* マップのチェック */
    // for (auto hoge: mappings){
    //     for (auto h: hoge){
    //         cout << h.name << endl;
    //     }
    // }

    // /* 制御点のnode構築 */
    // // 格納しとくだけ

    // // vector<vector<mapping_base::Identity>> map_id_s(frame_num);
    // // vector<vector<mapping_base::Distance>> map_dis_s(frame_num);
    // // vector<vector<rm::Control_Point>> map_cp_s(frame_num);
    // vector<rmp_flow::Node> node_s(cpoints_num);
    // //vector<rmp_flow::Leaf_Base> leaf_base_s(cpoints_num);
    // vector<rmp2::Obstacle_Avoidance> rmp2_obs(obs_s.size()*cpoints_num);
    // cout << "obs size = " << obs_s.size() << endl;
    

    // std::string name;
    // int i = 0;
    // int wow = 0;
    // for (auto num: model_struct){
    //     for (int j=0; j<num; ++j){
    //         cout << "i, j = " << i << ", " << j << endl;
    //         if (i == ee_frame_num && j == ee_n){
    //             name = "ee";
    //         }
    //         else{
    //             name = "cpoints_" + std::to_string(i) + "_" + std::to_string(j);
    //         }
    //         node_s[i] = rmp_flow::Node(2, root.self_dim, name, rm::Control_Point(i, j));
    //         root.add_child(&node_s[i]);
    //         for (auto c: root.children){
    //             cout << c->name << ", ";
    //         }
    //         cout << endl;

    //         for (int k=0; k<obs_s.size(); ++k){
    //             cout << "wow = " << wow << endl;
    //             rmp2_obs[wow] = rmp2::Obstacle_Avoidance(
    //                 2, 2, name + " : obs-num = " + std::to_string(k),
    //                 mapping_base::Distance(obs_s[k], obs_dot_s[k]), 
    //                 1, 1, 1, 1, 1
    //             );
    //             root.children[i]->add_child(&rmp2_obs[wow]);
    //             if (i == ee_frame_num && j == ee_n){
    //                 mapping_base::Identity id_mappings;
    //                 rmp2::Goal_Attractor at(
    //                     2, 2, "ee-attractor", id_mappings,
    //                     5.0, 5.0, 0.15, 1.0, 1.0, 10.0, 0.1, 0.15, 0.5,
    //                     og, og_dot
    //                 );
    //                 root.children[i]->add_child(&at);
    //             }
    //             wow+=1;;
    //         }
    //     }
    //     i+=1;
    // }

    // listで試す
    list<mapping_base::Identity> map_id_s;
    list<mapping_base::Distance> map_dis_s;
    list<rm::Control_Point> map_cp_s;
    list<rmp_flow::Node> node_s;
    list<rmp2::Goal_Attractor> rmp2_at_s;
    list<rmp2::Obstacle_Avoidance> rmp2_obs_s;


    std::string name;
    int i = 0;
    int wow = 0;
    for (auto num: model_struct){
        for (int j=0; j<num; ++j){
            cout << "i, j = " << i << ", " << j << endl;
            if (i == ee_frame_num && j == ee_n){
                name = "ee";
            }
            else{
                name = "cpoints_" + std::to_string(i) + "_" + std::to_string(j);
            }
            map_cp_s.push_back(rm::Control_Point(i, j));
            node_s.push_back(rmp_flow::Node(2, root.self_dim, name, &map_cp_s.back()));
            root.add_child(&node_s.back());
            for (auto c: root.children){
                cout << c->name << ", ";
            }
            cout << endl;

            for (int k=0; k<obs_s.size(); ++k){
                cout << "wow = " << wow << endl;
                map_dis_s.push_back(mapping_base::Distance(obs_s[k], obs_dot_s[k]));
                rmp2_obs_s.push_back(rmp2::Obstacle_Avoidance(
                    1, 2, name + ":obs-num-" + std::to_string(k),
                    &map_dis_s.back(), 
                    1, 1, 1, 1, 1
                ));
                root.children.back()->add_child(&rmp2_obs_s.back());
                if (i == ee_frame_num && j == ee_n){
                    map_id_s.push_back(mapping_base::Identity());
                    rmp2_at_s.push_back(rmp2::Goal_Attractor(
                        2, 2, "ee-attractor", &map_id_s.back(),
                        5.0, 5.0, 0.15, 1.0, 1.0, 10.0, 0.1, 0.15, 0.5,
                        og, og_dot
                    ));
                    
                    root.children.back()->add_child(&rmp2_at_s.back());
                    //at.pullback();
                    // cout << "at's address = " << &at << endl;
                    // cout << "at's adddres = " << (root.children.back())->children.back() << endl;
                }
                wow+=1;;
            }
        }
        i+=1;
    }


    // cout << "\nadding child to root..." << endl;
    // for (int i=0; i<frame_num; ++i){
    //     for (int j=0; j<model_struct[i]; ++j){
    //         cout << cpoint_nodes[i][j].name << " add to Root. node-type =  " << cpoint_nodes[i][j].node_type << ", " << typeid(cpoint_nodes[i][j]).name() << endl;
    //         root.add_child(&cpoint_nodes[i][j]);
    //     }
    // }
    // cout << "done\n" << endl;
    


    // /* nodeのタイプを確認 */
    // cout << "node-type checking..." << endl;
    // for (auto c: root.children){
    //     cout << c->name << " is " << typeid(c).name() << endl;
    // }
    
    
    cout << "done!\n" << endl;

    (root.children.back())->children[0]->pullback();

    // for (auto c: root.children){
    //     cout << c->name << endl;
    // }

    //root.print_tree_structure();
    //root.print_state_all_node();
    // cout << "print all done!!!" << endl;
    root.pushforward();
    cout << "push done" << endl;
    //root.print_tree_structure();
    //root.print_state_all_node();

    //root.children.back()->children.back()->pullback();

    cout << "at's adddres = " << (root.children.back())->children.back() << endl;
    root.pullback();
    root.print_state_all_node();


    rmp_flow::RMP_Tree tree(&root, "test_tree");
    tree.set_debug(false);
    cout << "simulation running..." << endl;
    tree.run(TiME_INTERVAL, dt);
    cout << "finish!\n" << endl;


    cout << "done!!" << endl;
}