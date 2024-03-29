#ifndef RMP2_ATRACTTOR_XI_2D__H
#define RMP2_ATRACTTOR_XI_2D__H
#include <cmath>
#include "/usr/include/eigen3/Eigen/Core"
namespace rmp2
{
    using std::pow;
    using std::sqrt;
    using std::exp;
    void xi_2d(double alpha, double epsilon, double sigma_alpha, double sigma_gamma, double w_l, double w_u, const Eigen::VectorXd &x, const Eigen::VectorXd &x_dot, Eigen::VectorXd &out);
}
#endif