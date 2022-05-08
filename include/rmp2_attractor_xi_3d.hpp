#ifndef XI__H
#define XI__H
#include <cmath>
#include <eigen3/Eigen/Core>
namespace attractor_xi_3d
{
    using std::exp;
    using std::pow;
    using std::sqrt;
    void func(double alpha, double epsilon, double sigma_alpha, double sigma_gamma, double w_l, double w_u, const Eigen::VectorXd &x, const Eigen::VectorXd &x_dot, Eigen::VectorXd &out);
}
#endif