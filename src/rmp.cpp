#include <iostream>
#include <cmath>

#include "/usr/include/eigen3/Eigen/Core"

#include "../include/rmp.hpp"
//#include "../include/xi.hpp"
#include "../include/rmp2_attractor_xi.hpp"

// 何もしない
void rmp_base::Is_Not_Leaf::calc_natural_form(){};


rmp2::Goal_Attractor::Goal_Attractor(
    double max_speed,
    double gain,
    double f_alpha,
    double sigma_alpha,
    double sigma_gamma,
    double wu,
    double wl,
    double alpha,
    double epsilon
)
{
    this->damp = gain / max_speed;
    this->gain = gain;
    this->f_alpha = f_alpha;
    this->sigma_alpha = sigma_alpha;
    this->sigma_gamma = sigma_gamma;
    this->wu = wu;
    this->wl =wl;
    this->alpha =alpha;
    this->epsilon = epsilon;
}


double rmp2::Goal_Attractor::soft_max(
    const double alpha, const double s)
{
    return s + 1/alpha * std::log(1 + std::exp(-2 * alpha * s));
}


void rmp2::Goal_Attractor::calc_grad_potential2(const Eigen::VectorXd& z, Eigen::VectorXd& out)
{
    out = (1 - std::exp(-2 * alpha * z.norm())) / (1 + std::exp(-2 * alpha * z.norm())) * z / z.norm();
}


void rmp2::Goal_Attractor::calc_inertia_matrix(
    const Eigen::VectorXd& z, const Eigen::VectorXd& z_dot,
    Eigen::MatrixXd& out
)
{
    double alpha_x, gamma_x, wx;
    alpha_x = std::exp(-((std::pow(z.norm(), 2)) / (2 * std::pow(sigma_alpha, 2))));
    gamma_x = std::exp(-((std::pow(z.norm(), 2)) / (2 * std::pow(sigma_gamma, 2))));
    wx = gamma_x * wu + (1 - gamma_x) * wl;

    Eigen::VectorXd grad(self_dim);
    calc_grad_potential2(z, grad);

    out = wx * ((1 - alpha_x) * grad * grad.transpose() + (alpha_x + epsilon) * Eigen::MatrixXd::Identity(self_dim, self_dim));
}


void rmp2::Goal_Attractor::calc_force(const Eigen::VectorXd& z, const Eigen::VectorXd& z_dot, Eigen::VectorXd& out)
{
    Eigen::VectorXd grad(self_dim);
    calc_grad_potential2(z, grad);

    Eigen::VectorXd xi(self_dim);
    rmp2_attractor_xi::f(alpha, epsilon, sigma_alpha, sigma_gamma, wl, wu, z, z_dot, xi);

    out = this->M * (-gain * grad - damp * z_dot) - xi;
}


void rmp2::Goal_Attractor::calc_natural_form(
    const Eigen::VectorXd& x0, const Eigen::VectorXd& x0_dot
)
{
    calc_inertia_matrix(x-x0, x_dot-x0_dot, this->M);
    calc_force(x-x0, x_dot-x0_dot, this->f);
}