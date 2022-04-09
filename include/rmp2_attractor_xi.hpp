#ifndef RMP2_ATRACTTOR_XI__H
#define RMP2_ATRACTTOR_XI__H
#include <cmath>
#include "/usr/include/eigen3/Eigen/Core"
namespace rmp2_attractor_xi
{
    void f(double alpha, double epsilon, double sigma_alpha, double sigma_gamma, double w_l, double w_u, const Eigen::VectorXd &x, const Eigen::VectorXd &x_dot, Eigen::VectorXd &out);
}
#endif