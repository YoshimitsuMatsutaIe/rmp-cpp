#include <iostream>
#include <cmath>

#include "/usr/include/eigen3/Eigen/Core"

#include "../include/rmp_leaf.hpp"
#include "../include/rmp2_attractor_xi.hpp"



rmp2::Goal_Attractor::Goal_Attractor(
    int self_dim, int parent_dim, std::string name, mapping_base::Base* mappings,
    double max_speed,
    double gain,
    double f_alpha,
    double sigma_alpha,
    double sigma_gamma,
    double wu,
    double wl,
    double alpha,
    double epsilon,
    Eigen::VectorXd& z0,
    Eigen::VectorXd& z0_dot
) : Leaf_Base(self_dim, parent_dim, name, mappings), x0(z0), x0_dot(z0_dot)
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
    this->have_rmp_func = true;
    this->J = Eigen::MatrixXd::Identity(self_dim, self_dim);
}





void rmp2::Goal_Attractor::calc_grad_potential2(const Eigen::VectorXd& z, Eigen::VectorXd& out)
{
    out = (1.0 - std::exp(-2.0 * alpha * z.norm())) / (1.0 + std::exp(-2.0 * alpha * z.norm())) * z / z.norm();
    if (is_debug){std::cout << "calc_grad = \n" << out << std::endl;}
}


void rmp2::Goal_Attractor::calc_inertia_matrix(
    const Eigen::VectorXd& z, const Eigen::VectorXd& z_dot,
    Eigen::MatrixXd& out
)
{
    double alpha_x, gamma_x, wx;
    alpha_x = std::exp(-std::pow((z.norm()/sigma_alpha), 2.0)/2.0);
    gamma_x = std::exp(-std::pow((z.norm()/sigma_gamma), 2.0)/2.0);
    //std::cout << "hoge = " << -1./2*std::pow((z.norm()/sigma_alpha), 2) << std::endl;
    wx = gamma_x * wu + (1.0 - gamma_x) * wl;

    Eigen::VectorXd grad(self_dim);
    calc_grad_potential2(z, grad);

    out = wx * ((1.0 - alpha_x) * grad * grad.transpose() + (alpha_x + epsilon) * Eigen::MatrixXd::Identity(self_dim, self_dim));
    
    if (is_debug)
    {
        std::cout << "attract M = \n" << out << std::endl;
        // std::cout << "alpha_x = " << alpha_x << std::endl;
        // std::cout << "gamma_x = " << gamma_x << std::endl;
        // std::cout << "wx = " << wx << std::endl;
        // std::cout << "z = \n" << z << std::endl;
        // std::cout << "z_norm = " << z.norm() << std::endl;
    }
}


void rmp2::Goal_Attractor::calc_force(const Eigen::VectorXd& z, const Eigen::VectorXd& z_dot, Eigen::VectorXd& out)
{
    Eigen::VectorXd grad(self_dim);
    calc_grad_potential2(z, grad);

    Eigen::VectorXd xi(self_dim);
    rmp2_attractor_xi::f(alpha, epsilon, sigma_alpha, sigma_gamma, wl, wu, z, z_dot, xi);

    //std::cout << "xi = \n" << xi << std::endl;
    //std::cout << "grad = \n" << grad << std::endl;

    out = this->M * (-gain * grad - damp * z_dot) - xi;
}


void rmp2::Goal_Attractor::calc_natural_form()
{
    calc_inertia_matrix(x-x0, x_dot-x0_dot, this->M);
    calc_force(x-x0, x_dot-x0_dot, this->f);
}





rmp2::Obstacle_Avoidance::Obstacle_Avoidance(
    int self_dim, int parent_dim, std::string name, mapping_base::Base* mappings,
    double scale_rep,
    double scale_damp,
    double gain,
    double sigma,
    double rw
): Leaf_Base(self_dim, parent_dim, name, mappings)
{
    this->scale_rep = scale_rep;
    this->scale_damp = scale_damp;
    this->gain = gain;
    this->sigma = sigma;
    this->rw = rw;
    this->have_rmp_func = true;
}


double rmp2::Obstacle_Avoidance::w2(double s)
{
    if (rw - s > 0.0)
    {
        return std::pow(rw - s, 2.0) / s;
    }
    else
    {
        return 0.0;
    }
}


double rmp2::Obstacle_Avoidance::w2_dot(double s)
{
    if (rw - s > 0.0)
    {
        return (-2.0*(rw-s)*s + (rw-s)) / std::pow(s, 2.0);
    }
    else
    {
        return 0.0;
    }
}


double rmp2::Obstacle_Avoidance::u2(double s_dot)
{
    if (s_dot < 0.0)
    {
        return 1.0 - std::exp(-std::pow(s_dot, 2.0) / (2*std::pow(sigma, 2.0)));
    }
    else
    {
        return 0.0;
    }
}

double rmp2::Obstacle_Avoidance::u2_dot(double s_dot)
{    if (s_dot < 0.0)
    {
        return -std::exp(-std::pow(s_dot, 2.0) / (2.0*std::pow(sigma, 2.0))) * (-s_dot / std::pow(sigma, 2.0));
    }
    else
    {
        return 0.0;
    }

}


double rmp2::Obstacle_Avoidance::delta(double s, double s_dot)
{
    return u2(s_dot) + 0.5 * s_dot * u2_dot(s_dot);
}


double rmp2::Obstacle_Avoidance::xi(double s, double s_dot)
{
    return 0.5 * u2(s_dot) * w2_dot(s) * std::pow(s_dot, 2);
}


double rmp2::Obstacle_Avoidance::grad_phi1(double s)
{
    return gain * w2(s) * w2_dot(s);
}


double rmp2::Obstacle_Avoidance::calc_inertia_matrix(double s, double s_dot)
{
    return w2(s) * delta(s, s_dot);
}


double rmp2::Obstacle_Avoidance::calc_force(double s, double s_dot)
{
    return -grad_phi1(s) - xi(s, s_dot);
}


void rmp2::Obstacle_Avoidance::calc_natural_form(void)
{
    f(0) = calc_force(x(0), x_dot(0));
    M(0, 0) = calc_inertia_matrix(x(0), x_dot(0));
}



rmp2::Joint_Limit_Avoidance::Joint_Limit_Avoidance(
    int self_dim, int parent_dim, std::string name, mapping_base::Base* mappings,
    double gamma_p,
    double gamma_d,
    double lambda,
    double sigma,
    Eigen::VectorXd q_max,
    Eigen::VectorXd q_min,
    Eigen::VectorXd q_neutral
) : Leaf_Base(self_dim, parent_dim, name, mappings)
{
    this->gamma_p = gamma_p;
    this->gamma_d = gamma_d;
    this->lambda = lambda;
    this->sigma = sigma;
    this->q_max = q_max;
    this->q_min = q_min;
    this->q_neutral = q_neutral;
    this->J = Eigen::MatrixXd::Identity(self_dim, self_dim);
    this->J_dot = Eigen::MatrixXd::Identity(self_dim, self_dim);
    this->have_rmp_func = true;
}


double rmp2::Joint_Limit_Avoidance::alpha_upper(double q_dot)
{
    return 1.0 - std::exp(-std::pow(std::max(q_dot, 0.0), 2.0) / (2.0*std::pow(sigma,2.0)));
}

double rmp2::Joint_Limit_Avoidance::alpha_lower(double q_dot)
{
    return 1.0 - std::exp(-std::pow(std::min(q_dot, 0.0), 2.0) / (2.0*std::pow(sigma,2.0)));
}

double rmp2::Joint_Limit_Avoidance::s(double q, double qu, double ql)
{
    return (q - ql) / (qu - ql);
}

double rmp2::Joint_Limit_Avoidance::s_dot(double q, double qu, double ql)
{
    return 1.0 / (qu - ql);
}

double rmp2::Joint_Limit_Avoidance::d(double s)
{
    return 4.0 * s * (1.0 - s);
}

double rmp2::Joint_Limit_Avoidance::d_dot(double s, double s_dot)
{
    return (4.0 - 8.0*s) * s_dot;
}

double rmp2::Joint_Limit_Avoidance::b(double q, double q_dot, double qu, double ql)
{
    double s_, d_, au_, al_;
    s_ = s(q, qu, ql);
    d_ = d(s_);
    au_ = alpha_upper(q_dot);
    al_ = alpha_lower(q_dot);
    return s_*(au_ * d_ + (1.0-au_)) + (1.0-s_)*(al_ * d_ + (1.0-al_));
}

double rmp2::Joint_Limit_Avoidance::b_dot(double q, double q_dot, double qu, double ql)
{
    double s_, d_, au_, al_, s_dot_, d_dot_;
    s_ = s(q, qu, ql);
    d_ = d(s_);
    au_ = alpha_upper(q_dot);
    al_ = alpha_lower(q_dot);
    s_dot_ = s_dot(q, qu, ql);
    d_dot_ = d_dot(s_, s_dot_);
    return (s_dot_*(au_ * d_ + (1-au_)) + s_ * d_dot_)
        + -s_dot_*(al_ * d_ + (1-al_)) + (1-s_) * d_dot_;
}

double rmp2::Joint_Limit_Avoidance::a(double q, double q_dot, double qu, double ql)
{
    return std::pow(b(q, q_dot, qu, ql), 2.0);
}

double rmp2::Joint_Limit_Avoidance::a_dot(double q, double q_dot, double qu, double ql)
{
    return -2*std::pow(b(q, q_dot, qu, ql), -3.0) * b_dot(q, q_dot, qu, ql);
}


void rmp2::Joint_Limit_Avoidance::calc_inertia_matrix(void)
{
    M = Eigen::MatrixXd::Identity(self_dim, self_dim);
    for (int i=0; i<self_dim; ++i)
    {
        M(i, i) = lambda * a(x(i), x_dot(i), q_max(i), q_min(i));
    }
}


void rmp2::Joint_Limit_Avoidance::xi(Eigen::VectorXd& out)
{
    for (int i=0; i<self_dim; ++i)
    {
        out(i) = 1/2 * a_dot(x(i), x_dot(i), q_max(i), q_min(i)) * std::pow(x_dot(i), 2);
    }
}


void rmp2::Joint_Limit_Avoidance::calc_force(void)
{
    Eigen::VectorXd xi_(self_dim);
    xi(xi_);

    f = M * (gamma_p*(q_neutral - x) - gamma_p*(x_dot)) - xi_;
}


void rmp2::Joint_Limit_Avoidance::calc_natural_form(void)
{
    calc_inertia_matrix();
    calc_force();
}


void rmp2::Joint_Limit_Avoidance::pullback(void)
{
    this->parent->f += this->f;
    this->parent->M += this->M;
}