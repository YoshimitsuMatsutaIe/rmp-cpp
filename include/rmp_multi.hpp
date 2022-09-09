#ifndef RMP_MULTI__HPP
#define RMP_MULTI__HPP

#include <iostream>
#include <vector>
#include <unordered_map>
#include <tuple>
#include <string>
#include <eigen3/Eigen/Core>
#include <eigen3/Eigen/QR>
#include <eigen3/Eigen/LU>
#include <eigen3/Eigen/Dense>

#include "rmp_node.hpp"
#include "rmp_leaf.hpp"
#include "rmp_tree.hpp"
#include "mappings.hpp"


namespace rmp_multi
{
    using std::cout;
    using std::endl;
    using std::vector;
    using Eigen::VectorXd;
    using Eigen::MatrixXd;


    void solve(
        const VectorXd& state,
        const vector<mapping_base::Identity*> mappings,
        rmp2::goal_attractor_natural_form& attractor,
        rmp2::obs_avoidance_natural_form& obs_avoidance,
        rmp2::jl_avoidance_natural_form& jl_avoidance,
        const VectorXd& g, const VectorXd& g_dot,
        const std::vector<VectorXd>& o_s, const std::vector<VectorXd>& o_dot_s,
        const int ee_num, const int cpoint_num, const int c_dim, const int t_dim,
        VectorXd& state_dot
    );


    
    std::tuple<rmp2::goal_attractor_natural_form, rmp2::obs_avoidance_natural_form, rmp2::jl_avoidance_natural_form>
    make_rmp_natural_form(
        const std::unordered_map<std::string, std::unordered_map<std::string, double>>& rmp_param,
        int t_dim, std::string robot_model
    );
}




#endif