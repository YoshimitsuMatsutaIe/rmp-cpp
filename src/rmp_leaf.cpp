#include "../include/rmp_leaf.hpp"


rmp2::obs_avoidance_natural_form::obs_avoidance_natural_form(
    double scale_rep,
    double scale_damp,
    double gain,
    double sigma,
    double rw
)
{
    this->scale_rep = scale_rep;
    this->scale_damp = scale_damp;
    this->gain = gain;
    this->sigma = sigma;
    this->rw = rw;
}


void rmp2::obs_avoidance_natural_form::operator()(
    const VectorXd& x, const VectorXd& x_dot,
    const VectorXd& o, const VectorXd& o_dot,
    VectorXd& out_f, MatrixXd& out_M
)
{
    double s = (x - o).norm();
    MatrixXd J = -(x-o).transpose() / s;
    double s_dot = (J * (x_dot - o_dot))(0, 0);
    MatrixXd J_dot = -((x_dot-o_dot).transpose() - (x-o).transpose()*(1.0/s*(x-o).dot(x_dot-o_dot))) / (s*s);

    double w2, w2_dot;
    if (this->rw - s > 0.0){
        w2 = pow(rw - s, 2) / s;
        w2_dot =  (-2.0*(this->rw-s)*s + (this->rw-s)) / s*s;
    }
    else{
        w2 = 0.0;
        w2_dot = 0.0;
    }


    double u2, u2_dot;
    if (s_dot < 0.0){
        u2 = 1.0 - exp(s_dot*s_dot / (2.0*this->sigma*this->sigma));
        u2_dot = -exp(-s_dot*s_dot / (2.0*pow(this->sigma, 2))) * (-s_dot / pow(this->sigma, 3));
    }
    else{
        u2 = 0.0;
        u2_dot = 0.0;
    }

    double delta = u2 + (0.5 * s_dot * u2_dot);
    double xi = 0.5 * u2 * w2_dot * s_dot*s_dot;
    double grad_phi = this->gain * w2 * w2_dot;


    double m = w2 * delta;
    double f = -grad_phi - xi;


    out_f = J.transpose() * (f - (m * J_dot * x_dot)(0,0));
    out_M = J.transpose() * m * J;
}


void rmp2::obs_avoidance_natural_form::operator()(
    const VectorXd& x, const VectorXd& x_dot,
    const VectorXd& o,
    VectorXd& out_f, MatrixXd& out_M
)
{
    VectorXd o_dot_zero = VectorXd::Zero(o.rows());
    this->operator()(x, x_dot, o, o_dot_zero, out_f, out_M);
}


rmp2::goal_attractor_param::goal_attractor_param(
    double max_speed,
    double gain,
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
    this->sigma_alpha = sigma_alpha;
    this->sigma_gamma = sigma_gamma;
    this->wu = wu;
    this->wl = wl;
    this->alpha =alpha;
    this->epsilon = epsilon;
}



rmp2::goal_attractor_xi_2d::goal_attractor_xi_2d(
    double max_speed,
    double gain,
    double sigma_alpha,
    double sigma_gamma,
    double wu,
    double wl,
    double alpha,
    double epsilon
) : goal_attractor_param(max_speed, gain, sigma_alpha, sigma_gamma, wu, wl, alpha, epsilon)
{
    // pass
}


rmp2::goal_attractor_xi_3d::goal_attractor_xi_3d(
    double max_speed,
    double gain,
    double sigma_alpha,
    double sigma_gamma,
    double wu,
    double wl,
    double alpha,
    double epsilon
) : goal_attractor_param(max_speed, gain, sigma_alpha, sigma_gamma, wu, wl, alpha, epsilon)
{
    // pass
}


rmp2::goal_attractor_natural_form::goal_attractor_natural_form(
    int dim,
    double max_speed,
    double gain,
    double sigma_alpha,
    double sigma_gamma,
    double wu,
    double wl,
    double alpha,
    double epsilon
) : goal_attractor_param(max_speed, gain, sigma_alpha, sigma_gamma, wu, wl, alpha, epsilon)
{
    this->dim = dim;
    if (this->dim == 2){
        this->xi_2d = goal_attractor_xi_2d(max_speed, gain, sigma_alpha, sigma_gamma, wu, wl, alpha, epsilon);
    }
    else if (this->dim == 3){
        this->xi_3d = goal_attractor_xi_3d(max_speed, gain, sigma_alpha, sigma_gamma, wu, wl, alpha, epsilon);
    }
    else{
        assert(false);
    }
}

void rmp2::goal_attractor_natural_form::operator()(
    const VectorXd& x, const VectorXd& x_dot,
    const VectorXd& g, const VectorXd& g_dot,
    VectorXd& out_f, MatrixXd& out_M
)
{
    VectorXd z = x - g;
    VectorXd z_dot = x_dot - g_dot;

    double z_norm = z.norm();
    VectorXd grad_pot2 = (1.0 - exp(-2.0 * alpha * z_norm)) / (1.0 + exp(-2.0 * alpha * z_norm)) * z / z_norm;

    double alpha_x, gamma_x, wx;
    alpha_x = exp(-pow((z.norm()/sigma_alpha), 2.0) * 0.5);
    gamma_x = exp(-pow((z.norm()/sigma_gamma), 2.0) * 0.5);
    wx = gamma_x * this->wu + (1.0 - gamma_x) * this->wl;


    out_M = wx * ((1.0 - alpha_x) * grad_pot2 * grad_pot2.transpose() + (alpha_x + epsilon) * MatrixXd::Identity(dim, dim));
    
    VectorXd xi(dim);
    if (this->dim == 2){
        this->xi_2d(z, z_dot, xi);
    }
    else if (this->dim == 3){
        this->xi_3d(z, z_dot, xi);
    }
    else {
        assert(false);
    }

    out_f = out_M * (-this->gain * grad_pot2 - this->damp * z_dot) - xi;
}


void rmp2::goal_attractor_natural_form::operator()(
    const VectorXd& x, const VectorXd& x_dot,
    const VectorXd& g,
    VectorXd& out_f, MatrixXd& out_M
)
{
    VectorXd g_dot_zero = VectorXd::Zero(g.rows());
    this->operator()(x, x_dot, g, g_dot_zero, out_f, out_M);
}


rmp2::jl_avoidance_natural_form::jl_avoidance_natural_form(
    double gamma_p,
    double gamma_d,
    double lambda,
    double sigma,
    VectorXd q_max,
    VectorXd q_min,
    VectorXd q_neutral
)
{
    this->gamma_p = gamma_p;
    this->gamma_d = gamma_d;
    this->lambda = lambda;
    this->sigma = sigma;
    this->q_max = q_max;
    this->q_min = q_min;
    this->q_neutral = q_neutral;
}


void rmp2::jl_avoidance_natural_form::operator()(
    const VectorXd& q, const VectorXd& q_dot,
    VectorXd& out_f, MatrixXd& out_M
)
{
    int dim = q.rows();
    double alpha_upper, alpha_lower, s, s_dot, d, d_dot, b, b_dot, a, a_dot;
    out_M = MatrixXd::Zero(dim, dim);
    VectorXd xi(dim);
    
    for (int i=0; i<dim; ++i){
        alpha_upper = 1.0 - exp(-pow(std::max(q_dot(i), 0.0), 2.0) / (2.0*sigma*sigma));
        alpha_lower = 1.0 - exp(-pow(std::min(q_dot(i), 0.0), 2.0) / (2.0*sigma*sigma));
        s = (q(i) - q_min(i)) / (q_max(i) - q_min(i));
        s_dot = 1.0 / (q_max(i) - q_min(i));
        d =  4.0 * s * (1.0 - s);
        d_dot = (4.0 - 8.0*s) * s_dot;
        b = s*(alpha_upper * d + (1.0-alpha_upper)) + (1.0-s)*(alpha_lower * d + (1.0-alpha_lower));
        b_dot = (s_dot*(alpha_upper*d + (1.0-alpha_upper)) + s*d_dot) + -s_dot*(alpha_lower * d + (1.0-alpha_lower)) + (1.0-s) * d_dot;
        a = 1.0 / (b * b);
        a_dot = -2.0 * b_dot / (b * b * b);

        out_M(i, i) = this->lambda * a;
        xi(i) =0.5 * a_dot * q_dot(i) * q_dot(i);
    }
    out_f = out_M * (this->gamma_p*(this->q_neutral - q) - this->gamma_d*q_dot) - xi;
}



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
    this->wl = wl;
    this->alpha =alpha;
    this->epsilon = epsilon;
    this->have_rmp_func = true;
    this->J = MatrixXd::Identity(self_dim, parent_dim);
    this->J_dot = MatrixXd::Zero(self_dim, parent_dim);

    if (self_dim == 2){
        this->xi_2d = goal_attractor_xi_2d(max_speed, gain, sigma_alpha, sigma_gamma, wu, wl, alpha, epsilon);
    }
    else if (self_dim == 3){
        this->xi_3d = goal_attractor_xi_3d(max_speed, gain, sigma_alpha, sigma_gamma, wu, wl, alpha, epsilon);
    }
    else{
        assert(false);
    }

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
        //std::cout << "calc_grad = \n" << out << std::endl;
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
    
    if (is_debug){
        //std::cout << "attract M = \n" << out << std::endl;
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
        this->xi_2d(z, z_dot, xi);
    }
    else if (this->self_dim == 3){
        this->xi_3d(z, z_dot, xi);
    }

    //std::cout << "xi = \n" << xi << std::endl;
    //std::cout << "grad = \n" << grad << std::endl;

    out = this->M * (-this->gain * grad - this->damp * z_dot) - xi;
}


void rmp2::Goal_Attractor::calc_natural_form(void)
{
    //this->initialize_rmp_natural_form();
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
    if (this->rw - s > 0.0){
        return pow(rw - s, 2) / s;
    }
    else{
        return 0.0;
    }
}


double rmp2::Obstacle_Avoidance::w2_dot(double s)
{
    if (this->rw - s > 0.0){
        return (-2.0*(this->rw-s)*s + (this->rw-s)) / s*s;
    }
    else{
        return 0.0;
    }
}


double rmp2::Obstacle_Avoidance::u2(double s_dot)
{
    if (s_dot < 0.0){
        return 1.0 - exp(s_dot*s_dot / (2.0*this->sigma*this->sigma));
    }
    else{
        return 0.0;
    }
}

double rmp2::Obstacle_Avoidance::u2_dot(double s_dot)
{
    if (s_dot < 0.0){
        return -exp(-s_dot*s_dot / (2.0*pow(this->sigma, 2))) * (-s_dot / pow(this->sigma, 3));
    }
    else{
        return 0.0;
    }

}


double rmp2::Obstacle_Avoidance::delta(double s, double s_dot)
{
    return this->u2(s_dot) + (0.5 * s_dot * this->u2_dot(s_dot));
}


double rmp2::Obstacle_Avoidance::xi(double s, double s_dot)
{
    return 0.5 * u2(s_dot) * w2_dot(s) * s_dot*s_dot;
}


double rmp2::Obstacle_Avoidance::grad_phi1(double s)
{
    return this->gain * w2(s) * w2_dot(s);
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
    //std::cout << "obs rmp cal" << std::endl;
    //this->initialize_rmp_natural_form();
    f(0) = calc_force(x(0), x_dot(0));
    M(0, 0) = calc_inertia_matrix(x(0), x_dot(0));
}



rmp2::Obstacle_Avoidance_Multi::Obstacle_Avoidance_Multi(
    int self_dim, int parent_dim, std::string name, mapping_base::Identity* mappings,
    double scale_rep,
    double scale_damp,
    double gain,
    double sigma,
    double rw,
    std::vector<VectorXd>& o_s
): Leaf_Base(self_dim, parent_dim, name, mappings), o_s(o_s)
{
    this->rw = rw;

    this->rmp_func = obs_avoidance_natural_form(scale_rep, scale_damp, gain, sigma, rw);

    this->have_rmp_func = true;
}


void rmp2::Obstacle_Avoidance_Multi::add_out_file_all(std::string dir_path)
{
    this->add_out_file(dir_path + "/task/" + this->name + ".csv");
}


void rmp2::Obstacle_Avoidance_Multi::calc_natural_form(void)
{

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
    return 1.0 - exp(-pow(std::max(q_dot, 0.0), 2.0) / (2.0*sigma*sigma));
}

double rmp2::Joint_Limit_Avoidance::alpha_lower(double q_dot)
{
    return 1.0 - exp(-pow(std::min(q_dot, 0.0), 2.0) / (2.0*sigma*sigma));
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