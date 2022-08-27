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

#include "rmp_node.hpp"
#include "rmp_leaf.hpp"

namespace rmp_flow
{
    using std::list;
    using std::tuple;
    using Eigen::VectorXd;
    using Eigen::MatrixXd;

    struct Tree_Nodes
    {
        list<mapping_base::Identity> map_id_s;
        list<mapping_base::Distance> map_dis_s;
        list<sice::Control_Point> map_sice_cp_s;
        list<franka_emika::Control_Point> map_fe_cps;
        list<rmp_flow::Node> node_s;
        list<rmp2::Goal_Attractor> node_at_s;
        list<rmp2::Obstacle_Avoidance> node_obs_s;
    };


    /**
     * @brief 並列計算なし
     * 
     * @param robot_name 
     * @param goal 
     * @param obs 
     * @return Root 
     */
    tuple<Root, Tree_Nodes> tree_constructor(
        const std::string robot_name,
        const std::vector<VectorXd&> goal,
        const std::vector<VectorXd&> obs
    );


    /**
     * @brief 古いの
     * 
     */
    class RMP_Tree
    {
    private:
        bool is_debug=true;
        void update_environment(void);

    public:
        RMP_Tree(Root* root, std::string tree_name);
        //RMP_Tree(std::map<> tree_param);
        Root* root;
        std::string tree_name = "nameless";

        //void one_step(void);
        void run(
            double time_span, double time_interval,
            std::string method="euler",
            std::string save_dir_path="result"
        );
        void set_debug(bool is_debug);

    };
};




#endif