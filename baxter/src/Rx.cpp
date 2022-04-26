#include "../include/baxter.hpp"



void baxter::Rx_W0(VectorXd& out) {

   out[0] = -0.5*M_SQRT2;
   out[1] = -0.5*M_SQRT2;
   out[2] = 0;

}
void baxter::Rx_BR(VectorXd& out) {

   out[0] = -0.5*M_SQRT2;
   out[1] = -0.5*M_SQRT2;
   out[2] = 0;

}
void baxter::Rx_0(const VectorXd& q, VectorXd& out) {

   out[0] = (0.5)*M_SQRT2*sin(q[0]) - 0.5*M_SQRT2*cos(q[0]);
   out[1] = -0.5*M_SQRT2*sin(q[0]) - 0.5*M_SQRT2*cos(q[0]);
   out[2] = 0;

}
void baxter::Rx_1(const VectorXd& q, VectorXd& out) {

   out[0] = -((0.5)*M_SQRT2*sin(q[0]) - 0.5*M_SQRT2*cos(q[0]))*sin(q[1]);
   out[1] = -(-0.5*M_SQRT2*sin(q[0]) - 0.5*M_SQRT2*cos(q[0]))*sin(q[1]);
   out[2] = -cos(q[1]);

}
void baxter::Rx_2(const VectorXd& q, VectorXd& out) {

   out[0] = -((0.5)*M_SQRT2*sin(q[0]) - 0.5*M_SQRT2*cos(q[0]))*sin(q[1])*cos(q[2]) + ((0.5)*M_SQRT2*sin(q[0]) + (0.5)*M_SQRT2*cos(q[0]))*sin(q[2]);
   out[1] = -(-0.5*M_SQRT2*sin(q[0]) - 0.5*M_SQRT2*cos(q[0]))*sin(q[1])*cos(q[2]) + ((0.5)*M_SQRT2*sin(q[0]) - 0.5*M_SQRT2*cos(q[0]))*sin(q[2]);
   out[2] = -cos(q[1])*cos(q[2]);

}
void baxter::Rx_3(const VectorXd& q, VectorXd& out) {

   out[0] = -((0.5)*M_SQRT2*sin(q[0]) - 0.5*M_SQRT2*cos(q[0]))*sin(q[3])*cos(q[1]) + (-((0.5)*M_SQRT2*sin(q[0]) - 0.5*M_SQRT2*cos(q[0]))*sin(q[1])*cos(q[2]) + ((0.5)*M_SQRT2*sin(q[0]) + (0.5)*M_SQRT2*cos(q[0]))*sin(q[2]))*cos(q[3]);
   out[1] = -(-0.5*M_SQRT2*sin(q[0]) - 0.5*M_SQRT2*cos(q[0]))*sin(q[3])*cos(q[1]) + (-(-0.5*M_SQRT2*sin(q[0]) - 0.5*M_SQRT2*cos(q[0]))*sin(q[1])*cos(q[2]) + ((0.5)*M_SQRT2*sin(q[0]) - 0.5*M_SQRT2*cos(q[0]))*sin(q[2]))*cos(q[3]);
   out[2] = sin(q[1])*sin(q[3]) - cos(q[1])*cos(q[2])*cos(q[3]);

}

void baxter::Rx_4(const VectorXd& q, VectorXd& out) {

   out[0] = (((0.5)*M_SQRT2*sin(q[0]) - 0.5*M_SQRT2*cos(q[0]))*sin(q[1])*sin(q[2]) + ((0.5)*M_SQRT2*sin(q[0]) + (0.5)*M_SQRT2*cos(q[0]))*cos(q[2]))*sin(q[4]) + (-((0.5)*M_SQRT2*sin(q[0]) - 0.5*M_SQRT2*cos(q[0]))*sin(q[3])*cos(q[1]) + (-((0.5)*M_SQRT2*sin(q[0]) - 0.5*M_SQRT2*cos(q[0]))*sin(q[1])*cos(q[2]) + ((0.5)*M_SQRT2*sin(q[0]) + (0.5)*M_SQRT2*cos(q[0]))*sin(q[2]))*cos(q[3]))*cos(q[4]);
   out[1] = ((-0.5*M_SQRT2*sin(q[0]) - 0.5*M_SQRT2*cos(q[0]))*sin(q[1])*sin(q[2]) + ((0.5)*M_SQRT2*sin(q[0]) - 0.5*M_SQRT2*cos(q[0]))*cos(q[2]))*sin(q[4]) + (-(-0.5*M_SQRT2*sin(q[0]) - 0.5*M_SQRT2*cos(q[0]))*sin(q[3])*cos(q[1]) + (-(-0.5*M_SQRT2*sin(q[0]) - 0.5*M_SQRT2*cos(q[0]))*sin(q[1])*cos(q[2]) + ((0.5)*M_SQRT2*sin(q[0]) - 0.5*M_SQRT2*cos(q[0]))*sin(q[2]))*cos(q[3]))*cos(q[4]);
   out[2] = (sin(q[1])*sin(q[3]) - cos(q[1])*cos(q[2])*cos(q[3]))*cos(q[4]) + sin(q[2])*sin(q[4])*cos(q[1]);

}
void baxter::Rx_5(const VectorXd& q, VectorXd& out) {

   out[0] = ((((0.5)*M_SQRT2*sin(q[0]) - 0.5*M_SQRT2*cos(q[0]))*sin(q[1])*sin(q[2]) + ((0.5)*M_SQRT2*sin(q[0]) + (0.5)*M_SQRT2*cos(q[0]))*cos(q[2]))*sin(q[4]) + (-((0.5)*M_SQRT2*sin(q[0]) - 0.5*M_SQRT2*cos(q[0]))*sin(q[3])*cos(q[1]) + (-((0.5)*M_SQRT2*sin(q[0]) - 0.5*M_SQRT2*cos(q[0]))*sin(q[1])*cos(q[2]) + ((0.5)*M_SQRT2*sin(q[0]) + (0.5)*M_SQRT2*cos(q[0]))*sin(q[2]))*cos(q[3]))*cos(q[4]))*cos(q[5]) - (((0.5)*M_SQRT2*sin(q[0]) - 0.5*M_SQRT2*cos(q[0]))*cos(q[1])*cos(q[3]) + (-((0.5)*M_SQRT2*sin(q[0]) - 0.5*M_SQRT2*cos(q[0]))*sin(q[1])*cos(q[2]) + ((0.5)*M_SQRT2*sin(q[0]) + (0.5)*M_SQRT2*cos(q[0]))*sin(q[2]))*sin(q[3]))*sin(q[5]);
   out[1] = (((-0.5*M_SQRT2*sin(q[0]) - 0.5*M_SQRT2*cos(q[0]))*sin(q[1])*sin(q[2]) + ((0.5)*M_SQRT2*sin(q[0]) - 0.5*M_SQRT2*cos(q[0]))*cos(q[2]))*sin(q[4]) + (-(-0.5*M_SQRT2*sin(q[0]) - 0.5*M_SQRT2*cos(q[0]))*sin(q[3])*cos(q[1]) + (-(-0.5*M_SQRT2*sin(q[0]) - 0.5*M_SQRT2*cos(q[0]))*sin(q[1])*cos(q[2]) + ((0.5)*M_SQRT2*sin(q[0]) - 0.5*M_SQRT2*cos(q[0]))*sin(q[2]))*cos(q[3]))*cos(q[4]))*cos(q[5]) - ((-0.5*M_SQRT2*sin(q[0]) - 0.5*M_SQRT2*cos(q[0]))*cos(q[1])*cos(q[3]) + (-(-0.5*M_SQRT2*sin(q[0]) - 0.5*M_SQRT2*cos(q[0]))*sin(q[1])*cos(q[2]) + ((0.5)*M_SQRT2*sin(q[0]) - 0.5*M_SQRT2*cos(q[0]))*sin(q[2]))*sin(q[3]))*sin(q[5]);
   out[2] = ((sin(q[1])*sin(q[3]) - cos(q[1])*cos(q[2])*cos(q[3]))*cos(q[4]) + sin(q[2])*sin(q[4])*cos(q[1]))*cos(q[5]) - (-sin(q[1])*cos(q[3]) - sin(q[3])*cos(q[1])*cos(q[2]))*sin(q[5]);

}
void baxter::Rx_6(const VectorXd& q, VectorXd& out) {

   out[0] = (((((0.5)*M_SQRT2*sin(q[0]) - 0.5*M_SQRT2*cos(q[0]))*sin(q[1])*sin(q[2]) + ((0.5)*M_SQRT2*sin(q[0]) + (0.5)*M_SQRT2*cos(q[0]))*cos(q[2]))*sin(q[4]) + (-((0.5)*M_SQRT2*sin(q[0]) - 0.5*M_SQRT2*cos(q[0]))*sin(q[3])*cos(q[1]) + (-((0.5)*M_SQRT2*sin(q[0]) - 0.5*M_SQRT2*cos(q[0]))*sin(q[1])*cos(q[2]) + ((0.5)*M_SQRT2*sin(q[0]) + (0.5)*M_SQRT2*cos(q[0]))*sin(q[2]))*cos(q[3]))*cos(q[4]))*cos(q[5]) - (((0.5)*M_SQRT2*sin(q[0]) - 0.5*M_SQRT2*cos(q[0]))*cos(q[1])*cos(q[3]) + (-((0.5)*M_SQRT2*sin(q[0]) - 0.5*M_SQRT2*cos(q[0]))*sin(q[1])*cos(q[2]) + ((0.5)*M_SQRT2*sin(q[0]) + (0.5)*M_SQRT2*cos(q[0]))*sin(q[2]))*sin(q[3]))*sin(q[5]))*cos(q[6]) + ((((0.5)*M_SQRT2*sin(q[0]) - 0.5*M_SQRT2*cos(q[0]))*sin(q[1])*sin(q[2]) + ((0.5)*M_SQRT2*sin(q[0]) + (0.5)*M_SQRT2*cos(q[0]))*cos(q[2]))*cos(q[4]) - (-((0.5)*M_SQRT2*sin(q[0]) - 0.5*M_SQRT2*cos(q[0]))*sin(q[3])*cos(q[1]) + (-((0.5)*M_SQRT2*sin(q[0]) - 0.5*M_SQRT2*cos(q[0]))*sin(q[1])*cos(q[2]) + ((0.5)*M_SQRT2*sin(q[0]) + (0.5)*M_SQRT2*cos(q[0]))*sin(q[2]))*cos(q[3]))*sin(q[4]))*sin(q[6]);
   out[1] = ((((-0.5*M_SQRT2*sin(q[0]) - 0.5*M_SQRT2*cos(q[0]))*sin(q[1])*sin(q[2]) + ((0.5)*M_SQRT2*sin(q[0]) - 0.5*M_SQRT2*cos(q[0]))*cos(q[2]))*sin(q[4]) + (-(-0.5*M_SQRT2*sin(q[0]) - 0.5*M_SQRT2*cos(q[0]))*sin(q[3])*cos(q[1]) + (-(-0.5*M_SQRT2*sin(q[0]) - 0.5*M_SQRT2*cos(q[0]))*sin(q[1])*cos(q[2]) + ((0.5)*M_SQRT2*sin(q[0]) - 0.5*M_SQRT2*cos(q[0]))*sin(q[2]))*cos(q[3]))*cos(q[4]))*cos(q[5]) - ((-0.5*M_SQRT2*sin(q[0]) - 0.5*M_SQRT2*cos(q[0]))*cos(q[1])*cos(q[3]) + (-(-0.5*M_SQRT2*sin(q[0]) - 0.5*M_SQRT2*cos(q[0]))*sin(q[1])*cos(q[2]) + ((0.5)*M_SQRT2*sin(q[0]) - 0.5*M_SQRT2*cos(q[0]))*sin(q[2]))*sin(q[3]))*sin(q[5]))*cos(q[6]) + (((-0.5*M_SQRT2*sin(q[0]) - 0.5*M_SQRT2*cos(q[0]))*sin(q[1])*sin(q[2]) + ((0.5)*M_SQRT2*sin(q[0]) - 0.5*M_SQRT2*cos(q[0]))*cos(q[2]))*cos(q[4]) - (-(-0.5*M_SQRT2*sin(q[0]) - 0.5*M_SQRT2*cos(q[0]))*sin(q[3])*cos(q[1]) + (-(-0.5*M_SQRT2*sin(q[0]) - 0.5*M_SQRT2*cos(q[0]))*sin(q[1])*cos(q[2]) + ((0.5)*M_SQRT2*sin(q[0]) - 0.5*M_SQRT2*cos(q[0]))*sin(q[2]))*cos(q[3]))*sin(q[4]))*sin(q[6]);
   out[2] = (((sin(q[1])*sin(q[3]) - cos(q[1])*cos(q[2])*cos(q[3]))*cos(q[4]) + sin(q[2])*sin(q[4])*cos(q[1]))*cos(q[5]) - (-sin(q[1])*cos(q[3]) - sin(q[3])*cos(q[1])*cos(q[2]))*sin(q[5]))*cos(q[6]) + (-(sin(q[1])*sin(q[3]) - cos(q[1])*cos(q[2])*cos(q[3]))*sin(q[4]) + sin(q[2])*cos(q[1])*cos(q[4]))*sin(q[6]);

}

void baxter::Rx_ee(const VectorXd& q, VectorXd& out) {

   out[0] = (((((0.5)*M_SQRT2*sin(q[0]) - 0.5*M_SQRT2*cos(q[0]))*sin(q[1])*sin(q[2]) + ((0.5)*M_SQRT2*sin(q[0]) + (0.5)*M_SQRT2*cos(q[0]))*cos(q[2]))*sin(q[4]) + (-((0.5)*M_SQRT2*sin(q[0]) - 0.5*M_SQRT2*cos(q[0]))*sin(q[3])*cos(q[1]) + (-((0.5)*M_SQRT2*sin(q[0]) - 0.5*M_SQRT2*cos(q[0]))*sin(q[1])*cos(q[2]) + ((0.5)*M_SQRT2*sin(q[0]) + (0.5)*M_SQRT2*cos(q[0]))*sin(q[2]))*cos(q[3]))*cos(q[4]))*cos(q[5]) - (((0.5)*M_SQRT2*sin(q[0]) - 0.5*M_SQRT2*cos(q[0]))*cos(q[1])*cos(q[3]) + (-((0.5)*M_SQRT2*sin(q[0]) - 0.5*M_SQRT2*cos(q[0]))*sin(q[1])*cos(q[2]) + ((0.5)*M_SQRT2*sin(q[0]) + (0.5)*M_SQRT2*cos(q[0]))*sin(q[2]))*sin(q[3]))*sin(q[5]))*cos(q[6]) + ((((0.5)*M_SQRT2*sin(q[0]) - 0.5*M_SQRT2*cos(q[0]))*sin(q[1])*sin(q[2]) + ((0.5)*M_SQRT2*sin(q[0]) + (0.5)*M_SQRT2*cos(q[0]))*cos(q[2]))*cos(q[4]) - (-((0.5)*M_SQRT2*sin(q[0]) - 0.5*M_SQRT2*cos(q[0]))*sin(q[3])*cos(q[1]) + (-((0.5)*M_SQRT2*sin(q[0]) - 0.5*M_SQRT2*cos(q[0]))*sin(q[1])*cos(q[2]) + ((0.5)*M_SQRT2*sin(q[0]) + (0.5)*M_SQRT2*cos(q[0]))*sin(q[2]))*cos(q[3]))*sin(q[4]))*sin(q[6]);
   out[1] = ((((-0.5*M_SQRT2*sin(q[0]) - 0.5*M_SQRT2*cos(q[0]))*sin(q[1])*sin(q[2]) + ((0.5)*M_SQRT2*sin(q[0]) - 0.5*M_SQRT2*cos(q[0]))*cos(q[2]))*sin(q[4]) + (-(-0.5*M_SQRT2*sin(q[0]) - 0.5*M_SQRT2*cos(q[0]))*sin(q[3])*cos(q[1]) + (-(-0.5*M_SQRT2*sin(q[0]) - 0.5*M_SQRT2*cos(q[0]))*sin(q[1])*cos(q[2]) + ((0.5)*M_SQRT2*sin(q[0]) - 0.5*M_SQRT2*cos(q[0]))*sin(q[2]))*cos(q[3]))*cos(q[4]))*cos(q[5]) - ((-0.5*M_SQRT2*sin(q[0]) - 0.5*M_SQRT2*cos(q[0]))*cos(q[1])*cos(q[3]) + (-(-0.5*M_SQRT2*sin(q[0]) - 0.5*M_SQRT2*cos(q[0]))*sin(q[1])*cos(q[2]) + ((0.5)*M_SQRT2*sin(q[0]) - 0.5*M_SQRT2*cos(q[0]))*sin(q[2]))*sin(q[3]))*sin(q[5]))*cos(q[6]) + (((-0.5*M_SQRT2*sin(q[0]) - 0.5*M_SQRT2*cos(q[0]))*sin(q[1])*sin(q[2]) + ((0.5)*M_SQRT2*sin(q[0]) - 0.5*M_SQRT2*cos(q[0]))*cos(q[2]))*cos(q[4]) - (-(-0.5*M_SQRT2*sin(q[0]) - 0.5*M_SQRT2*cos(q[0]))*sin(q[3])*cos(q[1]) + (-(-0.5*M_SQRT2*sin(q[0]) - 0.5*M_SQRT2*cos(q[0]))*sin(q[1])*cos(q[2]) + ((0.5)*M_SQRT2*sin(q[0]) - 0.5*M_SQRT2*cos(q[0]))*sin(q[2]))*cos(q[3]))*sin(q[4]))*sin(q[6]);
   out[2] = (((sin(q[1])*sin(q[3]) - cos(q[1])*cos(q[2])*cos(q[3]))*cos(q[4]) + sin(q[2])*sin(q[4])*cos(q[1]))*cos(q[5]) - (-sin(q[1])*cos(q[3]) - sin(q[3])*cos(q[1])*cos(q[2]))*sin(q[5]))*cos(q[6]) + (-(sin(q[1])*sin(q[3]) - cos(q[1])*cos(q[2])*cos(q[3]))*sin(q[4]) + sin(q[2])*cos(q[1])*cos(q[4]))*sin(q[6]);

}
