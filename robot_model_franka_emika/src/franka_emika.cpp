#include "../include/franka_emika.hpp"


const double franka_emika::Kinematics::d1 = 0.333;
const double franka_emika::Kinematics::d3 = 0.316;
const double franka_emika::Kinematics::d5 = 0.384;
const double franka_emika::Kinematics::df = 0.107;
const double franka_emika::Kinematics::a4 = 0.0825;
const double franka_emika::Kinematics::a5 = -0.0825;
const double franka_emika::Kinematics::a7 = 0.088;
const double franka_emika::Kinematics::R0 = 108e-3;
const double franka_emika::Kinematics::R = 0.088;
const int franka_emika::Kinematics::c_dim = 7;
const int franka_emika::Kinematics::t_dim = 3;

void franka_emika::Kinematics::set_q_neutral(VectorXd& out)
{
    out = VectorXd::Zero(c_dim);
}

void franka_emika::Kinematics::set_q_min(VectorXd& out)
{
    out = VectorXd::Zero(c_dim);
    out << -2.8973, -1.7628, -2.8973, -3.0718, -2.8973, -0.0175, -2.8973;
}

void franka_emika::Kinematics::set_q_max(VectorXd& out)
{
    out = VectorXd::Zero(c_dim);
    out << 2.8973, 1.7628, 2.8973, -0.0698, 2.8973, 3.7525, 2.8973;
}


Eigen::VectorXd franka_emika::Kinematics::q_neutral(void)
{
    VectorXd out = VectorXd::Zero(c_dim);
    return out;
}


Eigen::VectorXd franka_emika::Kinematics::q_max(void)
{
    VectorXd out(c_dim);
    out << 2.8973, 1.7628, 2.8973, -0.0698, 2.8973, 3.7525, 2.8973;
    return out;
}


Eigen::VectorXd franka_emika::Kinematics::q_min(void)
{
    VectorXd out(c_dim);
    out << -2.8973, -1.7628, -2.8973, -3.0718, -2.8973, -0.0175, -2.8973;
    return out;
}



std::tuple<Eigen::VectorXd, Eigen::VectorXd, Eigen::VectorXd>
franka_emika::Kinematics::get_q_neutoral_max_min(void)
{

    return {q_neutral(), q_max(), q_min()};
}


const std::vector<std::vector<double>> franka_emika::Kinematics::r_bars_0{
    {R0/2, R0/2, -d1/3, 1},
    {R0/2, -R0/2, -d1/3, 1},
    {-R0/2, R0/2, -d1/3, 1},
    {-R0/2, -R0/2, -d1/3, 1},
    {0, -R0, 0, 1},
    {R0/2, 0, 0, 1},
    {-R0/2, 0, 0, 1},
};

const std::vector<std::vector<double>> franka_emika::Kinematics::r_bars_1{
    {0, 0, R0, 1},
    {R0/2, -d3/4, R0/2, 1},
    {R0/2, -d3/4, -R0/2, 1},
    {-R0/2, -d3/4, R0/2, 1},
    {-R0/2, -d3/4, -R0/2, 1}
};

const std::vector<std::vector<double>> franka_emika::Kinematics::r_bars_2{
    {R/2, R/2, -d1/3, 1},
    {R/2, -R/2, -d1/3, 1},
    {-R/2, R/2, -d1/3, 1},
    {-R/2, -R/2, -d1/3, 1}
};

const std::vector<std::vector<double>> franka_emika::Kinematics::r_bars_3{
    {0, 0, -R/2, 1},
    {0, 0, R/2, 1}
};

const std::vector<std::vector<double>> franka_emika::Kinematics::r_bars_4{
    {R/2, R/2, -d5*2/3, 1},
    {R/2, -R/2, -d5*2/3, 1},
    {-R/2, R/2, -d5*2/3, 1},
    {-R/2, -R/2, -d5*2/3, 1},
    {R/2.5, R/2.5, -d5/4, 1},
    {R/2.5, -R/2.5, -d5/4, 1},
    {-R/2.5, R/2.5, -d5/4, 1},
    {-R/2.5, -R/2.5, -d5/4, 1}
};

const std::vector<std::vector<double>> franka_emika::Kinematics::r_bars_5{
    {0, 0, R/2, 1},
    {0, 0, -R/2, 1}
};
const std::vector<std::vector<double>> franka_emika::Kinematics::r_bars_6{
    {0, 0, -R, 1},
    {R/2, R/2, R, 1},
    {R/2, -R/2, R, 1},
    {-R/2, R/2, R, 1},
    {-R/2, -R/2, R, 1},
    {R/2, R/2, 1.5*R, 1},
    {R/2, -R/2, 1.5*R, 1},
    {-R/2, R/2, 1.5*R, 1},
    {-R/2, -R/2, 1.5*R, 1}
};
const std::vector<std::vector<double>> franka_emika::Kinematics::r_bars_ee{
    {0, 0, d5/2, 1},
    {0, R0, d5/2-0.03, 1},
    {0, -R0, d5/2-0.03, 1},
    {0.02, 0, d5/2-0.03, 1},
    {-0.02, 0, d5/2-0.03, 1},
    {R/2, 0, d5/2-0.07, 1},
    {-R/2, 0, d5/2-0.07, 1}
};
const std::vector<std::vector<std::vector<double>>> franka_emika::Kinematics::R_BARS_ALL{
    r_bars_0, r_bars_1, r_bars_2, r_bars_3, r_bars_4, r_bars_5, r_bars_6, r_bars_ee
};

const std::tuple<int, int> franka_emika::Kinematics::get_ee_id()
{
    return {7, 0};
}

std::vector<franka_emika::func_q_vecout> franka_emika::Kinematics::Os = {&o_0, &o_1, &o_2, &o_3, &o_4, &o_5, &o_6, &o_ee};
std::vector<franka_emika::func_q_vecout> franka_emika::Kinematics::RXs = {&rx_0, &rx_1, &rx_2, &rx_3, &rx_4, &rx_5, &rx_6, &rx_ee};
std::vector<franka_emika::func_q_vecout> franka_emika::Kinematics::RYs = {&ry_0, &ry_1, &ry_2, &ry_3, &ry_4, &ry_5, &ry_6, &ry_ee};
std::vector<franka_emika::func_q_vecout> franka_emika::Kinematics::RZs = {&rz_0, &rz_1, &rz_2, &rz_3, &rz_4, &rz_5, &rz_6, &rz_ee};
std::vector<franka_emika::func_q_matout> franka_emika::Kinematics::HTMs = {&htm_0, &htm_1, &htm_2, &htm_3, &htm_4, &htm_5, &htm_6, &htm_ee};
std::vector<franka_emika::func_q_matout> franka_emika::Kinematics::JOs =  {&jo_0, &jo_1, &jo_2, &jo_3, &jo_4, &jo_5, &jo_6, &jo_ee};
std::vector<franka_emika::func_q_matout> franka_emika::Kinematics::JRXs = {&jrx_0, &jrx_1, &jrx_2, &jrx_3, &jrx_4, &jrx_5, &jrx_6, &jrx_ee};
std::vector<franka_emika::func_q_matout> franka_emika::Kinematics::JRYs = {&jry_0, &jry_1, &jry_2, &jry_3, &jry_4, &jry_5, &jry_6, &jry_ee};
std::vector<franka_emika::func_q_matout> franka_emika::Kinematics::JRZs = {&jrz_0, &jrz_1, &jrz_2, &jrz_3, &jrz_4, &jrz_5, &jrz_6, &jrz_ee};
std::vector<franka_emika::func_q_dq_matout> franka_emika::Kinematics::JOs_dot =  {&jo_0_dot, &jo_1_dot, &jo_2_dot, &jo_3_dot, &jo_4_dot, &jo_5_dot, &jo_6_dot, &jo_ee_dot};
std::vector<franka_emika::func_q_dq_matout> franka_emika::Kinematics::JRXs_dot = {&jrx_0_dot, &jrx_1_dot, &jrx_2_dot, &jrx_3_dot, &jrx_4_dot, &jrx_5_dot, &jrx_6_dot, &jrx_ee_dot};
std::vector<franka_emika::func_q_dq_matout> franka_emika::Kinematics::JRYs_dot = {&jry_0_dot, &jry_1_dot, &jry_2_dot, &jry_3_dot, &jry_4_dot, &jry_5_dot, &jry_6_dot, &jry_ee_dot};
std::vector<franka_emika::func_q_dq_matout> franka_emika::Kinematics::JRZs_dot = {&jrz_0_dot, &jrz_1_dot, &jrz_2_dot, &jrz_3_dot, &jrz_4_dot, &jrz_5_dot, &jrz_6_dot, &jrz_ee_dot};


void franka_emika::Kinematics::htm(int n, const VectorXd& q, MatrixXd& out)
{
    VectorXd rx(3);
    VectorXd ry(3);
    VectorXd rz(3);
    VectorXd o(3);

    RXs[n](q, rx);
    RYs[n](q, ry);
    RZs[n](q, rz);
    Os[n](q, o);


    out(0,0) = rx(0);
    out(0,1) = ry(0);
    out(0,2) = rz(0);
    out(0,3) = o(0);

    out(1,0) = rx(1);
    out(1,1) = ry(1);
    out(1,2) = rz(1);
    out(1,3) = o(1);
    
    out(2,0) = rx(2);
    out(2,1) = ry(2);
    out(2,2) = rz(2);
    out(2,3) = o(2);
    
    out(3,0) = 0;
    out(3,1) = 0;
    out(3,2) = 0;
    out(3,3) = 1;
}


void franka_emika::Kinematics::htm_0(const VectorXd& q, MatrixXd& out){htm(0, q, out);}
void franka_emika::Kinematics::htm_1(const VectorXd& q, MatrixXd& out){htm(1, q, out);}
void franka_emika::Kinematics::htm_2(const VectorXd& q, MatrixXd& out){htm(2, q, out);}
void franka_emika::Kinematics::htm_3(const VectorXd& q, MatrixXd& out){htm(3, q, out);}
void franka_emika::Kinematics::htm_4(const VectorXd& q, MatrixXd& out){htm(4, q, out);}
void franka_emika::Kinematics::htm_5(const VectorXd& q, MatrixXd& out){htm(5, q, out);}
void franka_emika::Kinematics::htm_6(const VectorXd& q, MatrixXd& out){htm(6, q, out);}
void franka_emika::Kinematics::htm_ee(const VectorXd& q, MatrixXd& out){htm(7, q, out);}



franka_emika::Control_Point::Control_Point(int frame, int index)
{
    auto c_dim = Kinematics::c_dim;
    auto t_dim = Kinematics::t_dim;

    this->name = "baxter control point at frame=" + std::to_string(frame) + ", index=" + std::to_string(index);
    this->r_bar = VectorXd::Zero(t_dim+1);
    this->r_bar <<
    Kinematics::R_BARS_ALL[frame][index][0],
    Kinematics::R_BARS_ALL[frame][index][1],
    Kinematics::R_BARS_ALL[frame][index][2],
    1.0;

    
    this->calc_htm = Kinematics::HTMs[frame];
    this->calc_jo = Kinematics::JOs[frame];
    this->calc_jrx = Kinematics::JRXs[frame];
    this->calc_jry = Kinematics::JRYs[frame];
    this->calc_jrz = Kinematics::JRZs[frame];
    this->calc_jo_dot = Kinematics::JOs_dot[frame];
    this->calc_jrx_dot = Kinematics::JRXs_dot[frame];
    this->calc_jry_dot = Kinematics::JRYs_dot[frame];
    this->calc_jrz_dot = Kinematics::JRZs_dot[frame];

    this->htm = MatrixXd::Zero(t_dim+1, t_dim+1);
    this->jo = MatrixXd::Zero(t_dim, c_dim);
    this->jrx = MatrixXd::Zero(t_dim, c_dim);
    this->jry = MatrixXd::Zero(t_dim, c_dim);
    this->jrz = MatrixXd::Zero(t_dim, c_dim);
    this->jo_dot = MatrixXd::Zero(t_dim, c_dim);
    this->jrx_dot = MatrixXd::Zero(t_dim, c_dim);
    this->jry_dot = MatrixXd::Zero(t_dim, c_dim);
    this->jrz_dot = MatrixXd::Zero(t_dim, c_dim);

    //std::cout << "map (name = " << this->name << ") is created!!!!!" << std::endl;
}


void franka_emika::Control_Point::phi(const VectorXd &q, VectorXd &out)
{
    this->calc_htm(q, this->htm);
    out = (this->htm * this->r_bar).head(Kinematics::t_dim);
}


void franka_emika::Control_Point::jacobian(const VectorXd &q, MatrixXd &out)
{
    this->calc_jrx(q, this->jrx);
    this->calc_jry(q, this->jry);
    this->calc_jrz(q, this->jrz);
    this->calc_jo(q, this->jo);
    out = this->jrx*this->r_bar(0) + this->jry*this->r_bar(1) + this->jrz*this->r_bar(2) + this->jo;
}

void franka_emika::Control_Point::velovity(
    const VectorXd &x_dot, const MatrixXd& J, VectorXd &out
)
{
    out = J * x_dot;
}


void franka_emika::Control_Point::jacobian_dot(const VectorXd &q, const VectorXd &q_dot, MatrixXd &out)
{
    this->calc_jo_dot(q, q_dot, this->jo_dot);
    this->calc_jrx_dot(q, q_dot, this->jrx_dot);
    this->calc_jry_dot(q, q_dot, this->jry_dot);
    this->calc_jrz_dot(q, q_dot, this->jrz_dot);
    out = this->jrx_dot*this->r_bar(0)
    + this->jry_dot*this->r_bar(1)
    + this->jrz_dot*this->r_bar(2)
    + this->jo_dot;
}


const void franka_emika::Control_Point::print_state(void)
{
    using std::cout;
    using std::endl;

    cout << "htm = \n" << this->htm << endl;
    cout << "jo = \n" << this->jo << endl;
    cout << "jrx = \n" << this->jrx << endl;
    cout << "jry = \n" << this->jry << endl;
    cout << "jrz = \n" << this->jrz << endl;
    cout << "jo_dot = \n" << this->jo_dot  << endl;
    cout << "jrx_dot = \n" << this->jrx_dot << endl;
    cout << "jry_dot = \n" << this->jry_dot << endl;
    cout << "jrz_dot = \n" << this->jrz_dot << endl;
}


const std::vector<std::size_t> franka_emika::Control_Point::calc_points_mapping(void)
{
    std::cout << "calc_points_mapping start." << std::endl;
    std::size_t frame_num = franka_emika::Kinematics::R_BARS_ALL.size();
    vector<std::size_t> s;
    for (std::size_t i=0; i<frame_num; ++i){
        s.push_back(franka_emika::Kinematics::R_BARS_ALL[i].size());
    }
    std::cout << "done!" << std::endl;
    return s;
}


std::tuple<std::vector<franka_emika::Control_Point>, int, int> franka_emika::make_cpoint_map(void)
{
    std::vector<Control_Point> maps;
    auto model_struct = Control_Point::calc_points_mapping();
    auto [a, b] = Kinematics::get_ee_id();
    int ee_num;

    int cpoint_num = 0;
    for (std::size_t i=0; i<model_struct.size(); ++i){
        if (i == a){
            ee_num = cpoint_num + b;
        }
        cpoint_num += model_struct[i];
    }

    for (std::size_t i=0; i<model_struct.size(); ++i){
        for(std::size_t j=0; j<model_struct[i]; ++j){
            maps.push_back(Control_Point(i, j));
        }
    }

    std::cout << "制御点の数"<< cpoint_num << std::endl;
    std::cout << "ee_num = " << ee_num << std::endl;
    return {maps, cpoint_num, ee_num};
}