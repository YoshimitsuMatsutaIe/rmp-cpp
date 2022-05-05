
#include "../../include/baxter/wrapper.hpp"

#include <iostream>


void baxter::o_W0(const VectorXd& q, VectorXd& out)
{
    double out_[3];
    o_W0(H, L, h, out_);
    out = Eigen::Map<Eigen::Vector3d>(out_);
}

void baxter::o_BR(const VectorXd& q, VectorXd& out){
    double out_[3];
    o_BR(H, L, L0, h, out_);
    out = Eigen::Map<Eigen::Vector3d>(out_);
}
void baxter::o_0(const VectorXd& q, VectorXd& out){
    double out_[3];
    o_0(H, L, L0, h, out_);
    out = Eigen::Map<Eigen::Vector3d>(out_);
}
void baxter::o_1(const VectorXd& q, VectorXd& out){
    double out_[3];
    o_1(H, L, L0, L1, h, q, out_);
    out = Eigen::Map<Eigen::Vector3d>(out_);
}
void baxter::o_2(const VectorXd& q, VectorXd& out){
    double out_[3];
    o_2(out_);
    out = Eigen::Map<Eigen::Vector3d>(out_);
}
void baxter::o_3(const VectorXd& q, VectorXd& out){
    double out_[3];
    o_3(out_);
    out = Eigen::Map<Eigen::Vector3d>(out_);
}
void baxter::o_4(const VectorXd& q, VectorXd& out){
    double out_[3];
    o_4(out_);
    out = Eigen::Map<Eigen::Vector3d>(out_);
}
void baxter::o_5(const VectorXd& q, VectorXd& out){
    double out_[3];
    o_5(out_);
    out = Eigen::Map<Eigen::Vector3d>(out_);
}
void baxter::o_6(const VectorXd& q, VectorXd& out){
    double out_[3];
    o_6(out_);
    out = Eigen::Map<Eigen::Vector3d>(out_);
}
void baxter::o_ee(const VectorXd& q, VectorXd& out){
    double out_[3];
    o_ee(out_);
    out = Eigen::Map<Eigen::Vector3d>(out_);
}
void baxter::rx_W0(const VectorXd& q, VectorXd& out){
    double out_[3];
    o_(out_);
    out = Eigen::Map<Eigen::Vector3d>(out_);
}
void baxter::rx_BR(const VectorXd& q, VectorXd& out){

}
void baxter::rx_0(const VectorXd& q, VectorXd& out){

}
void baxter::rx_1(const VectorXd& q, VectorXd& out){

}
void baxter::rx_2(const VectorXd& q, VectorXd& out){

}
void baxter::rx_3(const VectorXd& q, VectorXd& out){

}
void baxter::rx_4(const VectorXd& q, VectorXd& out){

}
void baxter::rx_5(const VectorXd& q, VectorXd& out){

}
void baxter::rx_6(const VectorXd& q, VectorXd& out){

}
void baxter::rx_ee(const VectorXd& q, VectorXd& out){

}
void baxter::ry_W0(const VectorXd& q, VectorXd& out){

}
void baxter::ry_BR(const VectorXd& q, VectorXd& out){

}
void baxter::ry_0(const VectorXd& q, VectorXd& out){

}
void baxter::ry_1(const VectorXd& q, VectorXd& out){

}
void baxter::ry_2(const VectorXd& q, VectorXd& out){

}
void baxter::ry_3(const VectorXd& q, VectorXd& out){

}
void baxter::ry_4(const VectorXd& q, VectorXd& out){

}
void baxter::ry_5(const VectorXd& q, VectorXd& out){

}
void baxter::ry_6(const VectorXd& q, VectorXd& out){

}
void baxter::ry_ee(const VectorXd& q, VectorXd& out){

}
void baxter::jo_W0(const VectorXd& q, MatrixXd& out){

}
void baxter::jo_BR(const VectorXd& q, MatrixXd& out){

}
void baxter::jo_0(const VectorXd& q, MatrixXd& out){

}
void baxter::jo_1(const VectorXd& q, MatrixXd& out){

}
void baxter::jo_2(const VectorXd& q, MatrixXd& out){

}
void baxter::jo_3(const VectorXd& q, MatrixXd& out){

}
void baxter::jo_4(const VectorXd& q, MatrixXd& out){

}
void baxter::jo_5(const VectorXd& q, MatrixXd& out){

}
void baxter::jo_6(const VectorXd& q, MatrixXd& out){

}
void baxter::jo_ee(const VectorXd& q, MatrixXd& out){

}
void baxter::jrx_W0(const VectorXd& q, MatrixXd& out){

}
void baxter::jrx_BR(const VectorXd& q, MatrixXd& out){

}
void baxter::jrx_0(const VectorXd& q, MatrixXd& out){

}
void baxter::jrx_1(const VectorXd& q, MatrixXd& out){

}
void baxter::jrx_2(const VectorXd& q, MatrixXd& out){

}
void baxter::jrx_3(const VectorXd& q, MatrixXd& out){

}
void baxter::jrx_4(const VectorXd& q, MatrixXd& out){

}
void baxter::jrx_5(const VectorXd& q, MatrixXd& out){

}
void baxter::jrx_6(const VectorXd& q, MatrixXd& out){

}
void baxter::jrx_ee(const VectorXd& q, MatrixXd& out){

}
void baxter::jry_W0(const VectorXd& q, MatrixXd& out){

}
void baxter::jry_BR(const VectorXd& q, MatrixXd& out){

}
void baxter::jry_0(const VectorXd& q, MatrixXd& out){

}
void baxter::jry_1(const VectorXd& q, MatrixXd& out){

}
void baxter::jry_2(const VectorXd& q, MatrixXd& out){

}
void baxter::jry_3(const VectorXd& q, MatrixXd& out){

}
void baxter::jry_4(const VectorXd& q, MatrixXd& out){

}
void baxter::jry_5(const VectorXd& q, MatrixXd& out){

}
void baxter::jry_6(const VectorXd& q, MatrixXd& out){

}
void baxter::jry_ee(const VectorXd& q, MatrixXd& out){

}
void baxter::jo_W0_dot(const VectorXd& q, const VectorXd& q_dot, MatrixXd& out){

}
void baxter::jo_BR_dot(const VectorXd& q, const VectorXd& q_dot, MatrixXd& out){

}
void baxter::jo_0_dot(const VectorXd& q, const VectorXd& q_dot, MatrixXd& out){

}
void baxter::jo_1_dot(const VectorXd& q, const VectorXd& q_dot, MatrixXd& out){

}
void baxter::jo_2_dot(const VectorXd& q, const VectorXd& q_dot, MatrixXd& out){

}
void baxter::jo_3_dot(const VectorXd& q, const VectorXd& q_dot, MatrixXd& out){

}
void baxter::jo_4_dot(const VectorXd& q, const VectorXd& q_dot, MatrixXd& out){

}
void baxter::jo_5_dot(const VectorXd& q, const VectorXd& q_dot, MatrixXd& out){

}
void baxter::jo_6_dot(const VectorXd& q, const VectorXd& q_dot, MatrixXd& out){

}
void baxter::jo_ee_dot(const VectorXd& q, const VectorXd& q_dot, MatrixXd& out){

}
void baxter::jrx_W0_dot(const VectorXd& q, const VectorXd& q_dot, MatrixXd& out){

}
void baxter::jrx_BR_dot(const VectorXd& q, const VectorXd& q_dot, MatrixXd& out){

}
void baxter::jrx_0_dot(const VectorXd& q, const VectorXd& q_dot, MatrixXd& out){

}
void baxter::jrx_1_dot(const VectorXd& q, const VectorXd& q_dot, MatrixXd& out){

}
void baxter::jrx_2_dot(const VectorXd& q, const VectorXd& q_dot, MatrixXd& out){

}
void baxter::jrx_3_dot(const VectorXd& q, const VectorXd& q_dot, MatrixXd& out){

}
void baxter::jrx_4_dot(const VectorXd& q, const VectorXd& q_dot, MatrixXd& out){

}
void baxter::jrx_5_dot(const VectorXd& q, const VectorXd& q_dot, MatrixXd& out){

}
void baxter::jrx_6_dot(const VectorXd& q, const VectorXd& q_dot, MatrixXd& out){

}
void baxter::jrx_ee_dot(const VectorXd& q, const VectorXd& q_dot, MatrixXd& out){

}
void baxter::jry_W0_dot(const VectorXd& q, const VectorXd& q_dot, MatrixXd& out){

}
void baxter::jry_BR_dot(const VectorXd& q, const VectorXd& q_dot, MatrixXd& out){

}
void baxter::jry_0_dot(const VectorXd& q, const VectorXd& q_dot, MatrixXd& out){

}
void baxter::jry_1_dot(const VectorXd& q, const VectorXd& q_dot, MatrixXd& out){

}
void baxter::jry_2_dot(const VectorXd& q, const VectorXd& q_dot, MatrixXd& out){

}
void baxter::jry_3_dot(const VectorXd& q, const VectorXd& q_dot, MatrixXd& out){

}
void baxter::jry_4_dot(const VectorXd& q, const VectorXd& q_dot, MatrixXd& out){

}
void baxter::jry_5_dot(const VectorXd& q, const VectorXd& q_dot, MatrixXd& out){

}
void baxter::jry_6_dot(const VectorXd& q, const VectorXd& q_dot, MatrixXd& out){

}
void baxter::jry_ee_dot(const VectorXd& q, const VectorXd& q_dot, MatrixXd& out){

}
