#ifndef RMP_MULTI__HPP
#define RMP_MULTI__HPP

#include <iostream>
#include <vector>
#include <string>
#include <eigen3/Eigen/Core>

#include "rmp_leaf.hpp"

namespace rmp_multi
{
    using std::cout;
    using std::endl;
    using Eigen::VectorXd;
    using Eigen::MatrixXd;


    void solve(
        const VectorXd& state,
        const std::string robot_name,
        rmp2::goal_attractor_natural_form attractor,
        rmp2::obs_avoidance_natural_form obs_avoidance,
        rmp2::jl_avoidance_natural_form jl_avoidance,
        const VectorXd& g, const VectorXd& g_dot,
        const std::vector<VectorXd>& o_s, const std::vector<VectorXd>& o_dot_s,
        VectorXd& state_dot
    );
}




#endif