#include "../include/franka_emika.hpp"
#include <cmath>

const double franka_emika::Kinematics::d1 = 0.333;
const double franka_emika::Kinematics::d3 = 0.316;
const double franka_emika::Kinematics::d5 = 0.384;
const double franka_emika::Kinematics::df = 0.107;
const double franka_emika::Kinematics::a4 = 0.0825;
const double franka_emika::Kinematics::a5 = -0.0825;
const double franka_emika::Kinematics::a7 = 0.088;
const double franka_emika::Kinematics::R0 = 108e-3;
const double franka_emika::Kinematics::R = 0.088;


void franka_emika::Kinematics::set_q_neutral(VectorXd& out)
{
    out = VectorXd::Zero(7);
}

void franka_emika::Kinematics::set_q_min(VectorXd& out)
{
    out = VectorXd::Zero(7);
    out << 51.0, 60.0, 173.0, 150.0, 175.0, 120.0, 175.0;
}

void franka_emika::Kinematics::set_q_max(VectorXd& out)
{
    out = VectorXd::Zero(7);
    out << 2.8973, 1.7628, 2.8973, -0.0698, 2.8973, 3.7525, 2.8973;
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