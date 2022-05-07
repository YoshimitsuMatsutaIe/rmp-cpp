#include "../include/baxter.hpp"



// const double baxter::L = 278e-3;
// const double baxter::h = 64e-3;
// const double baxter::H = 1104e-3;
// const double baxter::L0 = 270.35e-3;
// const double baxter::L1 = 69e-3;
// const double baxter::L2 = 364.35e-3;
// const double baxter::L3 = 69e-3;
// const double baxter::L4 = 374.29e-3;
// const double baxter::L5 = 10e-3;
// const double baxter::L6 = 368.3e-3;
// const double baxter::R = 0.05;


// const Eigen::VectorXd baxter::Q_NEUTRAL(
//     0.0,
//     -31.0*M_PI/180,
//     0.0,
//     43.0*M_PI/180,
//     0.0,
//     72.0*M_PI/180,
//     0.0
// );
// const Eigen::VectorXd baxter::Q_MAX(
//     51.0*M_PI/180,
//     60.0*M_PI/180,
//     173.0*M_PI/180,
//     150.0*M_PI/180,
//     175.0*M_PI/180,
//     120.0*M_PI/180,
//     175.0*M_PI/180
// );
// const Eigen::VectorXd baxter::Q_NEUTRAL(
//     -141.0*M_PI/180,
//     -123.0*M_PI/180,
//     -173.0*M_PI/180,
//     -3.0*M_PI/180,
//     -175.0*M_PI/180,
//     -90.0*M_PI/180,
//     -175.0*M_PI/180
// );




baxter::Control_Point::Control_Point(int frame, int index)
{
    this->r_bar = VectorXd::Zero(4);
    this->r_bar << R_BARS_ALL[frame][index][0], R_BARS_ALL[frame][index][1], R_BARS_ALL[frame][index][2], 1.0;
    this->calc_htm = HTMs[frame];
    this->calc_jo = JOs[frame];
    this->calc_jrx = JRXs[frame];
    this->calc_jry = JRYs[frame];
    this->calc_jrz = JRZs[frame];
    this->calc_jo_dot = JOs_dot[frame];
    this->calc_jrx_dot = JRXs_dot[frame];
    this->calc_jry_dot = JRYs_dot[frame];
    this->calc_jrz_dot = JRZs_dot[frame];
    this->htm = MatrixXd::Zero(4, 4);
    this->jo = MatrixXd::Zero(3, 7);
    this->jrx = MatrixXd::Zero(3, 7);
    this->jry = MatrixXd::Zero(3, 7);
    this->jrz = MatrixXd::Zero(3, 7);
    this->jo_dot = MatrixXd::Zero(3, 7);
    this->jrx_dot = MatrixXd::Zero(3, 7);
    this->jry_dot = MatrixXd::Zero(3, 7);
    this->jrz_dot = MatrixXd::Zero(3, 7);
}


void baxter::Control_Point::phi(const VectorXd &q, VectorXd &out)
{
    this->calc_htm(q, this->htm);
    out = this->htm * this->r_bar;
}


void baxter::Control_Point::jacobian(const VectorXd &q, MatrixXd &out)
{
    this->calc_jo(q, jo);
    this->calc_jrx(q, jrx);
    this->calc_jry(q, jry);
    this->calc_jrz(q, jrz);
    out = jrx*r_bar(0) + jry*r_bar(1) + jrz*r_bar(2) + jo;
}


void baxter::Control_Point::jacobian_dot(const VectorXd &q, const VectorXd &q_dot, MatrixXd &out)
{
    this->calc_jo_dot(q, q_dot, jo_dot);
    this->calc_jrx_dot(q, q_dot, jrx_dot);
    this->calc_jry_dot(q, q_dot, jry_dot);
    this->calc_jrz_dot(q, q_dot, jrz_dot);
    out = jrx_dot*r_bar(0) + jry_dot*r_bar(1) + jrz_dot*r_bar(2) + jo_dot;
}