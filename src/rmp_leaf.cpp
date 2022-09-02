#include <iostream>
//#include <cmath>


#include "../include/rmp_leaf.hpp"
#include "../include/rmp2_attractor_xi_2d.hpp"
#include "../include/rmp2_attractor_xi_3d.hpp"


rmp2::Goal_Attractor::Goal_Attractor(
    int self_dim, int parent_dim, std::string name, mapping_base::Identity* mappings,
    double max_speed,
    double gain,
    double sigma_alpha,
    double sigma_gamma,
    double wu,
    double wl,
    double alpha,
    double epsilon
) : Leaf_Base(self_dim, parent_dim, name, mappings)
{
    this->damp = gain / max_speed;
    this->gain = gain;
    this->sigma_alpha = sigma_alpha;
    this->sigma_gamma = sigma_gamma;
    this->wu = wu;
    this->wl =wl;
    this->alpha =alpha;
    this->epsilon = epsilon;
    this->have_rmp_func = true;
    this->J = MatrixXd::Identity(self_dim, parent_dim);
    this->J_dot = MatrixXd::Zero(self_dim, parent_dim);

}

void rmp2::Goal_Attractor::add_out_file_all(std::string dir_path)
{
    this->add_out_file(dir_path + "/error.csv");
}


void rmp2::Goal_Attractor::add_out_file(std::string path)
{
    this->is_save = true;
    this->out_file.open(path, std::ios::out);
    this->out_file << "t";
    for (int i=0; i<this->self_dim; ++i){
        this->out_file << ",x" << std::to_string(i);
    }
    for (int i=0; i<this->self_dim; ++i){
        this->out_file << ",dx" << std::to_string(i);
    }
    this->out_file  << ",error" << std::endl;
}


void rmp2::Goal_Attractor::save_state(double t, const Eigen::IOFormat& format)
{
    if (is_save){
        this->out_file << std::to_string(t) << ",";
        this->out_file << this->x.transpose().format(format) << ",";
        this->out_file << this->x_dot.transpose().format(format);
        this->out_file << "," << this->x.norm();
        this->out_file << std::endl;
    }
}


void rmp2::Goal_Attractor::calc_grad_potential2(const VectorXd& z, VectorXd& out)
{
    double z_norm = z.norm();
    out = (1.0 - exp(-2.0 * alpha * z_norm)) / (1.0 + exp(-2.0 * alpha * z_norm)) * z / z_norm;
    if (is_debug){
        std::cout << "calc_grad = \n" << out << std::endl;
    }
}


void rmp2::Goal_Attractor::calc_inertia_matrix(
    const VectorXd& z, const VectorXd& z_dot,
    MatrixXd& out
)
{
    double alpha_x, gamma_x, wx;
    alpha_x = exp(-pow((z.norm()/sigma_alpha), 2.0) * 0.5);
    gamma_x = exp(-pow((z.norm()/sigma_gamma), 2.0) * 0.5);
    wx = gamma_x * this->wu + (1.0 - gamma_x) * this->wl;

    VectorXd grad(self_dim);
    calc_grad_potential2(z, grad);

    out = wx * ((1.0 - alpha_x) * grad * grad.transpose() + (alpha_x + epsilon) * MatrixXd::Identity(self_dim, self_dim));
    
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


void rmp2::Goal_Attractor::calc_force(const VectorXd& z, const VectorXd& z_dot, VectorXd& out)
{
    VectorXd grad(self_dim);
    calc_grad_potential2(z, grad);

    VectorXd xi(self_dim);
    if (this->self_dim == 2){
        xi_2d(alpha, epsilon, sigma_alpha, sigma_gamma, wl, wu, z, z_dot, xi);
    }
    else if (this->self_dim == 3){
        xi_3d(alpha, epsilon, sigma_alpha, sigma_gamma, wl, wu, z, z_dot, xi);
    }

    //std::cout << "xi = \n" << xi << std::endl;
    //std::cout << "grad = \n" << grad << std::endl;

    out = this->M * (-gain * grad - damp * z_dot) - xi;
}


void rmp2::Goal_Attractor::calc_natural_form(void)
{
    this->initialize_rmp_natural_form();
    //cout << "calc goal-rmp" << endl;
    calc_inertia_matrix(x, x_dot, this->M);
    calc_force(x, x_dot, this->f);
}




rmp2::Obstacle_Avoidance::Obstacle_Avoidance(void){
    //pass
}
rmp2::Obstacle_Avoidance::Obstacle_Avoidance(
    int self_dim, int parent_dim, std::string name, mapping_base::Identity* mappings,
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

void rmp2::Obstacle_Avoidance::add_out_file_all(std::string dir_path)
{
    this->add_out_file(dir_path + "/task/" + this->name + ".csv");
}


double rmp2::Obstacle_Avoidance::w2(double s)
{
    if (rw - s > 0.0){
        return pow(rw - s, 2.0) / s;
    }
    else{
        return 0.0;
    }
}


double rmp2::Obstacle_Avoidance::w2_dot(double s)
{
    if (rw - s > 0.0){
        return (-2.0*(rw-s)*s + (rw-s)) / pow(s, 2.0);
    }
    else{
        return 0.0;
    }
}


double rmp2::Obstacle_Avoidance::u2(double s_dot)
{
    if (s_dot < 0.0){
        auto s_dot_2 = pow(s_dot, 2.0);
        return 1.0 - exp(-s_dot_2 / (2.0*s_dot_2));
    }
    else{
        return 0.0;
    }
}

double rmp2::Obstacle_Avoidance::u2_dot(double s_dot)
{
    if (s_dot < 0.0){
        auto s_dot_2 = pow(s_dot, 2.0);
        return -exp(-s_dot_2 / (2.0*s_dot_2)) * (-s_dot / s_dot_2);
    }
    else{
        return 0.0;
    }

}


double rmp2::Obstacle_Avoidance::delta(double s, double s_dot)
{
    return u2(s_dot) + 0.5 * s_dot * u2_dot(s_dot);
}


double rmp2::Obstacle_Avoidance::xi(double s, double s_dot)
{
    return 0.5 * u2(s_dot) * w2_dot(s) * pow(s_dot, 2.0);
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


// void rmp2::Obstacle_Avoidance::calc_natural_form(void)
// {
//     //std::cout << "obs rmp cal" << std::endl;
//     if (this->rw - this->x(0) <= 0.0){
//         f(0) = 0.0;
//         M(0, 0) = 0.0;
//     }
//     else{
//         f(0) = calc_force(x(0), x_dot(0));
//         M(0, 0) = calc_inertia_matrix(x(0), x_dot(0));
//     }
// }

void rmp2::Obstacle_Avoidance::calc_natural_form(void)
{
    //std::cout << "obs rmp cal" << std::endl;
    this->initialize_rmp_natural_form();
    f(0) = calc_force(x(0), x_dot(0));
    M(0, 0) = calc_inertia_matrix(x(0), x_dot(0));
}


rmp2::Joint_Limit_Avoidance::Joint_Limit_Avoidance(
    int self_dim, int parent_dim, std::string name, mapping_base::Identity* mappings,
    double gamma_p,
    double gamma_d,
    double lambda,
    double sigma,
    const VectorXd& q_max,
    const VectorXd& q_min,
    const VectorXd& q_neutral
) : Leaf_Base(self_dim, parent_dim, name, mappings)
{
    this->gamma_p = gamma_p;
    this->gamma_d = gamma_d;
    this->lambda = lambda;
    this->sigma = sigma;
    this->q_max = q_max;
    this->q_min = q_min;
    this->q_neutral = q_neutral;
    this->J = MatrixXd::Identity(self_dim, parent_dim);
    this->J_dot = MatrixXd::Zero(self_dim, parent_dim);
    this->have_rmp_func = true;
}

void rmp2::Joint_Limit_Avoidance::add_out_file_all(std::string dir_path)
{
    // 今はなし。あとから関節制限守ってるかの記録を実装する
}


double rmp2::Joint_Limit_Avoidance::alpha_upper(double q_dot)
{
    return 1.0 - exp(-pow(std::max(q_dot, 0.0), 2.0) / (2.0*pow(sigma,2.0)));
}

double rmp2::Joint_Limit_Avoidance::alpha_lower(double q_dot)
{
    return 1.0 - exp(-pow(std::min(q_dot, 0.0), 2.0) / (2.0*pow(sigma,2.0)));
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
    s_ = this->s(q, qu, ql);
    d_ = this->d(s_);
    au_ = this->alpha_upper(q_dot);
    al_ = this->alpha_lower(q_dot);
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
    return (s_dot_*(au_*d_ + (1.0-au_)) + s_*d_dot_)
        + -s_dot_*(al_ * d_ + (1.0-al_)) + (1.0-s_) * d_dot_;
}

double rmp2::Joint_Limit_Avoidance::a(double q, double q_dot, double qu, double ql)
{
    return pow(b(q, q_dot, qu, ql), -2.0);
}

double rmp2::Joint_Limit_Avoidance::a_dot(double q, double q_dot, double qu, double ql)
{
    return -2.0*pow(b(q, q_dot, qu, ql), -3.0) * b_dot(q, q_dot, qu, ql);
}


void rmp2::Joint_Limit_Avoidance::calc_inertia_matrix(MatrixXd& out)
{
    //out = MatrixXd::Zero(self_dim, self_dim);
    for (int i=0; i<self_dim; ++i){
        out(i, i) = this->lambda * this->a(x(i), x_dot(i), q_max(i), q_min(i));
    }
}


void rmp2::Joint_Limit_Avoidance::xi(VectorXd& out)
{
    for (int i=0; i<self_dim; ++i){
        out(i) = 0.5 * a_dot(x(i), x_dot(i), q_max(i), q_min(i)) * pow(x_dot(i), 2.0);
    }
}


void rmp2::Joint_Limit_Avoidance::calc_force(VectorXd& out)
{
    VectorXd xi_(self_dim);
    this->xi(xi_);

    out = this->M * (gamma_p*(q_neutral - x) - gamma_d*x_dot) - xi_;
}


void rmp2::Joint_Limit_Avoidance::calc_natural_form(void)
{
    this->initialize_rmp_natural_form();
    this->calc_inertia_matrix(this->M);
    this->calc_force(this->f);
}


void rmp2::Joint_Limit_Avoidance::set_state(
    const VectorXd &q, const VectorXd &q_dot
)
{
    this->x = q;
    this->x_dot = q_dot;
}