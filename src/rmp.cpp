#include <iostream>
#include <cmath>

#include "/usr/include/eigen3/Eigen/Core"

#include "../include/rmp.hpp"

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

void rmp2::Goal_Attractor::calc_grad_potential2(
    const Eigen::VectorXd &x, Eigen::VectorXd& out
)
{

}

void rmp2::Goal_Attractor::calc_inertia_matrix()
{

}

void rmp2::Goal_Attractor::calc_curvature(Eigen::VectorXd& out)
{

}


void rmp2::Goal_Attractor::calc_force()
{
    Eigen::VectorXd grad(self_dim);
    calc_grad_potential2(x, grad);

    Eigen::VectorXd xi(self_dim);
    calc_curvature(xi);
    

    f = M * (-gain * grad - damp * x_dot) - xi;
}


void rmp2::Goal_Attractor::calc_natural_form()
{

}