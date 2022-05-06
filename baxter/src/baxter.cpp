#include "../include/baxter.hpp"




baxter::Control_Point::Control_Point(int frame, int index)
{
    this->r_bar = Eigen::Map<VectorXd>(R_BARS_ALL[frame][index].data());
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