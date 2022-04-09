#include <iostream>
#include <cmath>

#include "/usr/include/eigen3/Eigen/Core"

#include "../include/rmp.hpp"
#include "../include/rmp2_attractor_xi.hpp"



rmp2::Goal_Attractor::Goal_Attractor(
    int self_dim, int parent_dim, int node_type, std::string name,
    double max_speed,
    double gain,
    double f_alpha,
    double sigma_alpha,
    double sigma_gamma,
    double wu,
    double wl,
    double alpha,
    double epsilon,
    Eigen::VectorXd& z0, Eigen::VectorXd& z0_dot
) : Node(self_dim, parent_dim, node_type, name), x0(z0), x0_dot(z0_dot)

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



    this->children.push_back(nullptr);
}


void rmp2::Goal_Attractor::pushforward(){}


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


void rmp2::Goal_Attractor::calc_natural_form()
{
    calc_inertia_matrix(x-x0, x_dot-x0_dot, this->M);
    calc_force(x-x0, x_dot-x0_dot, this->f);
}


// void rmp2::Goal_Attractor::set_goal_point_ref(Eigen::VectorXd& z0, Eigen::VectorXd& z0_dot)
// {
//     x0 = z0;
//     x0_dot = z0_dot;
// }




rmp2::Obstacle_Avoidance::Obstacle_Avoidance(
    int self_dim, int parent_dim, int node_type, std::string name,
    double scale_rep,
    double scale_damp,
    double ratio,
    double rep_gain,
    double r,
    Eigen::VectorXd& z0, Eigen::VectorXd& z0_dot
): Node(self_dim, parent_dim, node_type, name), x0(z0), x0_dot(z0_dot)
{
    this->scale_rep = scale_rep;
    this->scale_damp = scale_damp;
    this->ratio = ratio;
    this->rep_gain = rep_gain;
    this->r = r;
    this->children.push_back(nullptr);
}