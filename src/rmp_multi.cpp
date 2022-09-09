#include "../include/rmp_multi.hpp"


void rmp_multi::solve(
    const VectorXd& state,
    const std::string robot_name,
    rmp2::goal_attractor_natural_form attractor,
    rmp2::obs_avoidance_natural_form obs_avoidance,
    rmp2::jl_avoidance_natural_form jl_avoidance,
    const VectorXd& g, const VectorXd& g_dot,
    const std::vector<VectorXd>& o_s, const std::vector<VectorXd>& o_dot_s,
    VectorXd& state_dot
)
{
    int dim = state.cols() / 2;
    VectorXd q = state.head(dim);
    VectorXd q_dot = state.tail(dim);

    #pragma omp parallel
    {
        
    }


}