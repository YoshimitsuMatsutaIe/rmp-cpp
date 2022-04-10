#include <iostream>
#include <cmath>

#include "/usr/include/eigen3/Eigen/Core"

#include "../include/rmp.hpp"
#include "../include/rmp2_attractor_xi.hpp"



rmp2::Goal_Attractor::Goal_Attractor(
    int self_dim, int parent_dim, std::string name,
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
) : Leaf_Base(self_dim, parent_dim, name), x0(z0), x0_dot(z0_dot)
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





rmp2::Obstacle_Avoidance::Obstacle_Avoidance(
    int self_dim, int parent_dim, std::string name,
    double scale_rep,
    double scale_damp,
    double gain,
    double sigma,
    double rw,
    Eigen::VectorXd& z0, Eigen::VectorXd& z0_dot
): Leaf_Base(self_dim, parent_dim, name), x0(z0), x0_dot(z0_dot)
{
    this->scale_rep = scale_rep;
    this->scale_damp = scale_damp;
    this->gain = gain;
    this->sigma = sigma;
    this->rw = rw;

    J_ = Eigen::MatrixXd::Zero(1, self_dim);
    J_dot_ = Eigen::MatrixXd::Zero(1, self_dim);
}


double rmp2::Obstacle_Avoidance::w2(double s)
{
    if (rw - s > 0.0)
    {
        return std::pow(rw - s, 2) / s;
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
        return (-2*(rw-s)*s + (rw-s)) / std::pow(s, 2);
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
        return 1 - std::exp(-std::pow(s_dot, 2) / (2*std::pow(sigma, 2)));
    }
    else
    {
        return 0.0;
    }
}

double rmp2::Obstacle_Avoidance::u2_dot(double s_dot)
{    if (s_dot < 0.0)
    {
        return -std::exp(-std::pow(s_dot, 2) / (2*std::pow(sigma, 2))) * (-s_dot / std::pow(sigma, 2));
    }
    else
    {
        return 0.0;
    }

}


double rmp2::Obstacle_Avoidance::delta(double s, double s_dot)
{
    return u2(s_dot) + 1/2 * s_dot * u2_dot(s_dot);
}


double rmp2::Obstacle_Avoidance::xi(double s, double s_dot)
{
    return 1/2 * u2(s_dot) * w2_dot(s) * std::pow(s_dot, 2);
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
    double s, s_dot;
    s = (x - x0).norm();
    s_dot = 1/s * (x-x0).dot(x_dot-x0_dot);

    double f_, M_;
    f_ = calc_force(s, s_dot);
    M_ = calc_inertia_matrix(s, s_dot);

    J_ = -(x - x0).transpose() / s;
    J_dot_ = -((x_dot-x0_dot).transpose() - (x-x0).transpose()*s_dot) / std::pow(s, 2);

    f = J_.transpose() * (f_ - (M_ * J_dot_ * (x_dot-x0_dot))[0]);
    M = J_.transpose() * M_ * J_;
}



rmp2::Joint_Limit_Avoidance::Joint_Limit_Avoidance(
    int self_dim, int parent_dim, std::string name,
    double gamma_p,
    double gamma_d,
    double lambda,
    double sigma,
    Eigen::VectorXd q_max,
    Eigen::VectorXd q_min,
    Eigen::VectorXd q_neutral
) : Leaf_Base(self_dim, parent_dim, name)
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

    this->calc_x = [](const Eigen::VectorXd &y, Eigen::VectorXd &x)->void {x = y;};
    this->calc_J = [](const Eigen::VectorXd &y, Eigen::MatrixXd &J)->void {};
    this->calc_J_dot = [](const Eigen::VectorXd &y, const Eigen::VectorXd &y_dot, Eigen::MatrixXd &J_dot)->void {};

}


double rmp2::Joint_Limit_Avoidance::alpha_upper(double q_dot)
{
    return 1 - std::exp(-std::pow(std::max(q_dot, 0.0), 2) / (2*std::pow(sigma,2)));
}

double rmp2::Joint_Limit_Avoidance::alpha_lower(double q_dot)
{
    return 1 - std::exp(-std::pow(std::min(q_dot, 0.0), 2) / (2*std::pow(sigma,2)));
}

double rmp2::Joint_Limit_Avoidance::s(double q, double qu, double ql)
{
    return (q - ql) / (qu - ql);
}

double rmp2::Joint_Limit_Avoidance::s_dot(double q, double qu, double ql)
{
    return 1 / (qu - ql);
}

double rmp2::Joint_Limit_Avoidance::d(double s)
{
    return 4 * s * (1 - s);
}

double rmp2::Joint_Limit_Avoidance::d_dot(double s, double s_dot)
{
    return (4 - 8*s) * s_dot;
}

double rmp2::Joint_Limit_Avoidance::b(double q, double q_dot, double qu, double ql)
{
    double s_, d_, au_, al_;
    s_ = s(q, qu, ql);
    d_ = d(s_);
    au_ = alpha_upper(q_dot);
    al_ = alpha_lower(q_dot);
    return s_*(au_ * d_ + (1-au_)) + (1-s_)*(al_ * d_ + (1-al_));
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
    return (s_dot_*(au_ * d_ + (1-au_)) + s_ * d_dot_) + -s_dot_*(al_ * d_ + (1-al_)) + (1-s_) * d_dot_;
}

double rmp2::Joint_Limit_Avoidance::a(double q, double q_dot, double qu, double ql)
{
    return std::pow(b(q, q_dot, qu, ql), 2);
}

double rmp2::Joint_Limit_Avoidance::a_dot(double q, double q_dot, double qu, double ql)
{
    return -2*std::pow(b(q, q_dot, qu, ql), -3) * b_dot(q, q_dot, qu, ql);
}


void rmp2::Joint_Limit_Avoidance::calc_inertia_matrix(void)
{
    M = Eigen::MatrixXd::Identity(self_dim, self_dim);
    for (int i=0; i<self_dim; i++)
    {
        M(i, i) = lambda * a(x(i), x_dot(i), q_max(i), q_min(i));
    }
}


void rmp2::Joint_Limit_Avoidance::xi(Eigen::VectorXd& out)
{
    for (int i=0; i<self_dim; i++)
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
