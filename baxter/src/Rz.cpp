#include "../include/baxter.hpp"



void baxter::Baxter::Rz_W0(const Vector7d& q, Vector3d& out) {

   out[0] = -0.5*M_SQRT2;
   out[1] = -0.5*M_SQRT2;
   out[2] = 0;

}
void baxter::Baxter::Rz_BR(const Vector7d& q, Vector3d& out) {

   out[0] = -0.5*M_SQRT2;
   out[1] = -0.5*M_SQRT2;
   out[2] = 0;

}
void baxter::Baxter::Rz_0(const Vector7d& q, Vector3d& out) {

   out[0] = 0.5*M_SQRT2*sin(q[0]) - 0.5*M_SQRT2*cos(q[0]);
   out[1] = -0.5*M_SQRT2*sin(q[0]) - 0.5*M_SQRT2*cos(q[0]);
   out[2] = 0;

}
void baxter::Baxter::Rz_1(const Vector7d& q, Vector3d& out) {

   out[0] = -(0.5*M_SQRT2*sin(q[0]) - 0.5*M_SQRT2*cos(q[0]))*sin(q[1]);
   out[1] = -(-0.5*M_SQRT2*sin(q[0]) - 0.5*M_SQRT2*cos(q[0]))*sin(q[1]);
   out[2] = -cos(q[1]);

}
void baxter::Baxter::Rz_2(const Vector7d& q, Vector3d& out) {

   out[0] = -(0.5*M_SQRT2*sin(q[0]) - 0.5*M_SQRT2*cos(q[0]))*sin(q[1])*cos(q[2]) + (0.5*M_SQRT2*sin(q[0]) + 0.5*M_SQRT2*cos(q[0]))*sin(q[2]);
   out[1] = -(-0.5*M_SQRT2*sin(q[0]) - 0.5*M_SQRT2*cos(q[0]))*sin(q[1])*cos(q[2]) + (0.5*M_SQRT2*sin(q[0]) - 0.5*M_SQRT2*cos(q[0]))*sin(q[2]);
   out[2] = -cos(q[1])*cos(q[2]);

}
void baxter::Baxter::Rz_3(const Vector7d& q, Vector3d& out) {

   out[0] = -(0.5*M_SQRT2*sin(q[0]) - 0.5*M_SQRT2*cos(q[0]))*sin(q[3])*cos(q[1]) + (-(0.5*M_SQRT2*sin(q[0]) - 0.5*M_SQRT2*cos(q[0]))*sin(q[1])*cos(q[2]) + (0.5*M_SQRT2*sin(q[0]) + 0.5*M_SQRT2*cos(q[0]))*sin(q[2]))*cos(q[3]);
   out[1] = -(-0.5*M_SQRT2*sin(q[0]) - 0.5*M_SQRT2*cos(q[0]))*sin(q[3])*cos(q[1]) + (-(-0.5*M_SQRT2*sin(q[0]) - 0.5*M_SQRT2*cos(q[0]))*sin(q[1])*cos(q[2]) + (0.5*M_SQRT2*sin(q[0]) - 0.5*M_SQRT2*cos(q[0]))*sin(q[2]))*cos(q[3]);
   out[2] = sin(q[1])*sin(q[3]) - cos(q[1])*cos(q[2])*cos(q[3]);

}
void baxter::Baxter::Rz_4(const Vector7d& q, Vector3d& out) {

   out[0] = ((0.5*M_SQRT2*sin(q[0]) - 0.5*M_SQRT2*cos(q[0]))*sin(q[1])*sin(q[2]) + (0.5*M_SQRT2*sin(q[0]) + 0.5*M_SQRT2*cos(q[0]))*cos(q[2]))*sin(q[4]) + (-(0.5*M_SQRT2*sin(q[0]) - 0.5*M_SQRT2*cos(q[0]))*sin(q[3])*cos(q[1]) + (-(0.5*M_SQRT2*sin(q[0]) - 0.5*M_SQRT2*cos(q[0]))*sin(q[1])*cos(q[2]) + (0.5*M_SQRT2*sin(q[0]) + 0.5*M_SQRT2*cos(q[0]))*sin(q[2]))*cos(q[3]))*cos(q[4]);
   out[1] = ((-0.5*M_SQRT2*sin(q[0]) - 0.5*M_SQRT2*cos(q[0]))*sin(q[1])*sin(q[2]) + (0.5*M_SQRT2*sin(q[0]) - 0.5*M_SQRT2*cos(q[0]))*cos(q[2]))*sin(q[4]) + (-(-0.5*M_SQRT2*sin(q[0]) - 0.5*M_SQRT2*cos(q[0]))*sin(q[3])*cos(q[1]) + (-(-0.5*M_SQRT2*sin(q[0]) - 0.5*M_SQRT2*cos(q[0]))*sin(q[1])*cos(q[2]) + (0.5*M_SQRT2*sin(q[0]) - 0.5*M_SQRT2*cos(q[0]))*sin(q[2]))*cos(q[3]))*cos(q[4]);
   out[2] = (sin(q[1])*sin(q[3]) - cos(q[1])*cos(q[2])*cos(q[3]))*cos(q[4]) + sin(q[2])*sin(q[4])*cos(q[1]);

}
void baxter::Baxter::Rz_5(const Vector7d& q, Vector3d& out) {

   out[0] = (((0.5*M_SQRT2*sin(q[0]) - 0.5*M_SQRT2*cos(q[0]))*sin(q[1])*sin(q[2]) + (0.5*M_SQRT2*sin(q[0]) + 0.5*M_SQRT2*cos(q[0]))*cos(q[2]))*sin(q[4]) + (-(0.5*M_SQRT2*sin(q[0]) - 0.5*M_SQRT2*cos(q[0]))*sin(q[3])*cos(q[1]) + (-(0.5*M_SQRT2*sin(q[0]) - 0.5*M_SQRT2*cos(q[0]))*sin(q[1])*cos(q[2]) + (0.5*M_SQRT2*sin(q[0]) + 0.5*M_SQRT2*cos(q[0]))*sin(q[2]))*cos(q[3]))*cos(q[4]))*cos(q[5]) - ((0.5*M_SQRT2*sin(q[0]) - 0.5*M_SQRT2*cos(q[0]))*cos(q[1])*cos(q[3]) + (-(0.5*M_SQRT2*sin(q[0]) - 0.5*M_SQRT2*cos(q[0]))*sin(q[1])*cos(q[2]) + (0.5*M_SQRT2*sin(q[0]) + 0.5*M_SQRT2*cos(q[0]))*sin(q[2]))*sin(q[3]))*sin(q[5]);
   out[1] = (((-0.5*M_SQRT2*sin(q[0]) - 0.5*M_SQRT2*cos(q[0]))*sin(q[1])*sin(q[2]) + (0.5*M_SQRT2*sin(q[0]) - 0.5*M_SQRT2*cos(q[0]))*cos(q[2]))*sin(q[4]) + (-(-0.5*M_SQRT2*sin(q[0]) - 0.5*M_SQRT2*cos(q[0]))*sin(q[3])*cos(q[1]) + (-(-0.5*M_SQRT2*sin(q[0]) - 0.5*M_SQRT2*cos(q[0]))*sin(q[1])*cos(q[2]) + (0.5*M_SQRT2*sin(q[0]) - 0.5*M_SQRT2*cos(q[0]))*sin(q[2]))*cos(q[3]))*cos(q[4]))*cos(q[5]) - ((-0.5*M_SQRT2*sin(q[0]) - 0.5*M_SQRT2*cos(q[0]))*cos(q[1])*cos(q[3]) + (-(-0.5*M_SQRT2*sin(q[0]) - 0.5*M_SQRT2*cos(q[0]))*sin(q[1])*cos(q[2]) + (0.5*M_SQRT2*sin(q[0]) - 0.5*M_SQRT2*cos(q[0]))*sin(q[2]))*sin(q[3]))*sin(q[5]);
   out[2] = ((sin(q[1])*sin(q[3]) - cos(q[1])*cos(q[2])*cos(q[3]))*cos(q[4]) + sin(q[2])*sin(q[4])*cos(q[1]))*cos(q[5]) - (-sin(q[1])*cos(q[3]) - sin(q[3])*cos(q[1])*cos(q[2]))*sin(q[5]);

}

void baxter::Baxter::Rz_6(const Vector7d& q, Vector3d& out) {

   out[0] = ((((0.5*M_SQRT2*sin(q[0]) - 0.5*M_SQRT2*cos(q[0]))*sin(q[1])*sin(q[2]) + (0.5*M_SQRT2*sin(q[0]) + 0.5*M_SQRT2*cos(q[0]))*cos(q[2]))*sin(q[4]) + (-(0.5*M_SQRT2*sin(q[0]) - 0.5*M_SQRT2*cos(q[0]))*sin(q[3])*cos(q[1]) + (-(0.5*M_SQRT2*sin(q[0]) - 0.5*M_SQRT2*cos(q[0]))*sin(q[1])*cos(q[2]) + (0.5*M_SQRT2*sin(q[0]) + 0.5*M_SQRT2*cos(q[0]))*sin(q[2]))*cos(q[3]))*cos(q[4]))*cos(q[5]) - ((0.5*M_SQRT2*sin(q[0]) - 0.5*M_SQRT2*cos(q[0]))*cos(q[1])*cos(q[3]) + (-(0.5*M_SQRT2*sin(q[0]) - 0.5*M_SQRT2*cos(q[0]))*sin(q[1])*cos(q[2]) + (0.5*M_SQRT2*sin(q[0]) + 0.5*M_SQRT2*cos(q[0]))*sin(q[2]))*sin(q[3]))*sin(q[5]))*cos(q[6]) + (((0.5*M_SQRT2*sin(q[0]) - 0.5*M_SQRT2*cos(q[0]))*sin(q[1])*sin(q[2]) + (0.5*M_SQRT2*sin(q[0]) + 0.5*M_SQRT2*cos(q[0]))*cos(q[2]))*cos(q[4]) - (-(0.5*M_SQRT2*sin(q[0]) - 0.5*M_SQRT2*cos(q[0]))*sin(q[3])*cos(q[1]) + (-(0.5*M_SQRT2*sin(q[0]) - 0.5*M_SQRT2*cos(q[0]))*sin(q[1])*cos(q[2]) + (0.5*M_SQRT2*sin(q[0]) + 0.5*M_SQRT2*cos(q[0]))*sin(q[2]))*cos(q[3]))*sin(q[4]))*sin(q[6]);
   out[1] = ((((-0.5*M_SQRT2*sin(q[0]) - 0.5*M_SQRT2*cos(q[0]))*sin(q[1])*sin(q[2]) + (0.5*M_SQRT2*sin(q[0]) - 0.5*M_SQRT2*cos(q[0]))*cos(q[2]))*sin(q[4]) + (-(-0.5*M_SQRT2*sin(q[0]) - 0.5*M_SQRT2*cos(q[0]))*sin(q[3])*cos(q[1]) + (-(-0.5*M_SQRT2*sin(q[0]) - 0.5*M_SQRT2*cos(q[0]))*sin(q[1])*cos(q[2]) + (0.5*M_SQRT2*sin(q[0]) - 0.5*M_SQRT2*cos(q[0]))*sin(q[2]))*cos(q[3]))*cos(q[4]))*cos(q[5]) - ((-0.5*M_SQRT2*sin(q[0]) - 0.5*M_SQRT2*cos(q[0]))*cos(q[1])*cos(q[3]) + (-(-0.5*M_SQRT2*sin(q[0]) - 0.5*M_SQRT2*cos(q[0]))*sin(q[1])*cos(q[2]) + (0.5*M_SQRT2*sin(q[0]) - 0.5*M_SQRT2*cos(q[0]))*sin(q[2]))*sin(q[3]))*sin(q[5]))*cos(q[6]) + (((-0.5*M_SQRT2*sin(q[0]) - 0.5*M_SQRT2*cos(q[0]))*sin(q[1])*sin(q[2]) + (0.5*M_SQRT2*sin(q[0]) - 0.5*M_SQRT2*cos(q[0]))*cos(q[2]))*cos(q[4]) - (-(-0.5*M_SQRT2*sin(q[0]) - 0.5*M_SQRT2*cos(q[0]))*sin(q[3])*cos(q[1]) + (-(-0.5*M_SQRT2*sin(q[0]) - 0.5*M_SQRT2*cos(q[0]))*sin(q[1])*cos(q[2]) + (0.5*M_SQRT2*sin(q[0]) - 0.5*M_SQRT2*cos(q[0]))*sin(q[2]))*cos(q[3]))*sin(q[4]))*sin(q[6]);
   out[2] = (((sin(q[1])*sin(q[3]) - cos(q[1])*cos(q[2])*cos(q[3]))*cos(q[4]) + sin(q[2])*sin(q[4])*cos(q[1]))*cos(q[5]) - (-sin(q[1])*cos(q[3]) - sin(q[3])*cos(q[1])*cos(q[2]))*sin(q[5]))*cos(q[6]) + (-(sin(q[1])*sin(q[3]) - cos(q[1])*cos(q[2])*cos(q[3]))*sin(q[4]) + sin(q[2])*cos(q[1])*cos(q[4]))*sin(q[6]);

}

void baxter::Baxter::Rz_ee(const Vector7d& q, Vector3d& out) {

   out[0] = ((((0.5*M_SQRT2*sin(q[0]) - 0.5*M_SQRT2*cos(q[0]))*sin(q[1])*sin(q[2]) + (0.5*M_SQRT2*sin(q[0]) + 0.5*M_SQRT2*cos(q[0]))*cos(q[2]))*sin(q[4]) + (-(0.5*M_SQRT2*sin(q[0]) - 0.5*M_SQRT2*cos(q[0]))*sin(q[3])*cos(q[1]) + (-(0.5*M_SQRT2*sin(q[0]) - 0.5*M_SQRT2*cos(q[0]))*sin(q[1])*cos(q[2]) + (0.5*M_SQRT2*sin(q[0]) + 0.5*M_SQRT2*cos(q[0]))*sin(q[2]))*cos(q[3]))*cos(q[4]))*cos(q[5]) - ((0.5*M_SQRT2*sin(q[0]) - 0.5*M_SQRT2*cos(q[0]))*cos(q[1])*cos(q[3]) + (-(0.5*M_SQRT2*sin(q[0]) - 0.5*M_SQRT2*cos(q[0]))*sin(q[1])*cos(q[2]) + (0.5*M_SQRT2*sin(q[0]) + 0.5*M_SQRT2*cos(q[0]))*sin(q[2]))*sin(q[3]))*sin(q[5]))*cos(q[6]) + (((0.5*M_SQRT2*sin(q[0]) - 0.5*M_SQRT2*cos(q[0]))*sin(q[1])*sin(q[2]) + (0.5*M_SQRT2*sin(q[0]) + 0.5*M_SQRT2*cos(q[0]))*cos(q[2]))*cos(q[4]) - (-(0.5*M_SQRT2*sin(q[0]) - 0.5*M_SQRT2*cos(q[0]))*sin(q[3])*cos(q[1]) + (-(0.5*M_SQRT2*sin(q[0]) - 0.5*M_SQRT2*cos(q[0]))*sin(q[1])*cos(q[2]) + (0.5*M_SQRT2*sin(q[0]) + 0.5*M_SQRT2*cos(q[0]))*sin(q[2]))*cos(q[3]))*sin(q[4]))*sin(q[6]);
   out[1] = ((((-0.5*M_SQRT2*sin(q[0]) - 0.5*M_SQRT2*cos(q[0]))*sin(q[1])*sin(q[2]) + (0.5*M_SQRT2*sin(q[0]) - 0.5*M_SQRT2*cos(q[0]))*cos(q[2]))*sin(q[4]) + (-(-0.5*M_SQRT2*sin(q[0]) - 0.5*M_SQRT2*cos(q[0]))*sin(q[3])*cos(q[1]) + (-(-0.5*M_SQRT2*sin(q[0]) - 0.5*M_SQRT2*cos(q[0]))*sin(q[1])*cos(q[2]) + (0.5*M_SQRT2*sin(q[0]) - 0.5*M_SQRT2*cos(q[0]))*sin(q[2]))*cos(q[3]))*cos(q[4]))*cos(q[5]) - ((-0.5*M_SQRT2*sin(q[0]) - 0.5*M_SQRT2*cos(q[0]))*cos(q[1])*cos(q[3]) + (-(-0.5*M_SQRT2*sin(q[0]) - 0.5*M_SQRT2*cos(q[0]))*sin(q[1])*cos(q[2]) + (0.5*M_SQRT2*sin(q[0]) - 0.5*M_SQRT2*cos(q[0]))*sin(q[2]))*sin(q[3]))*sin(q[5]))*cos(q[6]) + (((-0.5*M_SQRT2*sin(q[0]) - 0.5*M_SQRT2*cos(q[0]))*sin(q[1])*sin(q[2]) + (0.5*M_SQRT2*sin(q[0]) - 0.5*M_SQRT2*cos(q[0]))*cos(q[2]))*cos(q[4]) - (-(-0.5*M_SQRT2*sin(q[0]) - 0.5*M_SQRT2*cos(q[0]))*sin(q[3])*cos(q[1]) + (-(-0.5*M_SQRT2*sin(q[0]) - 0.5*M_SQRT2*cos(q[0]))*sin(q[1])*cos(q[2]) + (0.5*M_SQRT2*sin(q[0]) - 0.5*M_SQRT2*cos(q[0]))*sin(q[2]))*cos(q[3]))*sin(q[4]))*sin(q[6]);
   out[2] = (((sin(q[1])*sin(q[3]) - cos(q[1])*cos(q[2])*cos(q[3]))*cos(q[4]) + sin(q[2])*sin(q[4])*cos(q[1]))*cos(q[5]) - (-sin(q[1])*cos(q[3]) - sin(q[3])*cos(q[1])*cos(q[2]))*sin(q[5]))*cos(q[6]) + (-(sin(q[1])*sin(q[3]) - cos(q[1])*cos(q[2])*cos(q[3]))*sin(q[4]) + sin(q[2])*cos(q[1])*cos(q[4]))*sin(q[6]);

}
