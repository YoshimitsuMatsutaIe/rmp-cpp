#ifndef RMP_TREE__HPP
#define RMP_TREE__HPP

#include <eigen3/Eigen/Core>
#include <iostream>
#include <chrono>
#include <fstream>
#include <filesystem>
#include <string>
#include <map>
#include <nlohmann/json.hpp>
#include <vector>
#include <tuple>
#include <list>
#include <unordered_map>

#include "mappings.hpp"
#include "../robot_model_sice/include/sice.hpp"
#include "../robot_model_franka_emika/include/franka_emika.hpp"
#include "rmp_node.hpp"
#include "rmp_leaf.hpp"




namespace rmp_flow
{
    using std::list;
    using std::tuple;
    using std::vector;
    using std::map;
    
    using Eigen::VectorXd;
    using Eigen::MatrixXd;

    /**
     * @brief 実体を保管しとく
     * 
     */
    struct Nodes_and_Maps
    {
        list<mapping_base::Identity> map_id_s;
        list<mapping_base::Distance> map_dis_s;
        list<sice::Control_Point> map_sice_cp_s;
        list<franka_emika::Control_Point> map_fe_cp_s;

        list<rmp_flow::Node> node_s;
        list<rmp2::Joint_Limit_Avoidance> rmp2_node_jl;
        list<rmp2::Goal_Attractor> rmp2_node_at_s;
        list<rmp2::Obstacle_Avoidance> rmp2_node_obs_s;

        Nodes_and_Maps(void);
    };



    /**
     * @brief バグあり
     * 
     * @param robot_name 
     * @param rmp_param 
     * @param goal_position 
     * @param goal_velosity 
     * @param obs_position 
     * @param obs_velocity 
     * @return tuple<Root, Nodes_and_Maps> 
     */
    tuple<Root, Nodes_and_Maps> rmp_tree_constructor(
        const std::string robot_name,
        const std::unordered_map<std::string, std::unordered_map<std::string, double>> rmp_param,
        const vector<VectorXd>& goal_position,
        const vector<VectorXd>& goal_velosity,
        const vector<VectorXd>& obs_position,
        const vector<VectorXd>& obs_velocity
    );

    void rmp_tree_constructor(
        const std::string robot_name,
        const std::unordered_map<std::string, std::unordered_map<std::string, double>> rmp_param,
        const vector<VectorXd>& goal_position,
        const vector<VectorXd>& goal_velosity,
        const vector<VectorXd>& obs_position,
        const vector<VectorXd>& obs_velocity,
        Root& root,
        Nodes_and_Maps& nms
    );

};




#endif