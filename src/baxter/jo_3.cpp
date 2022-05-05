/******************************************************************************
 *                       Code generated with sympy 1.9                        *
 *                                                                            *
 *              See http://www.sympy.org/ for more information.               *
 *                                                                            *
 *                   This file is part of 'jo_3_BY_SYMPY_'                    *
 ******************************************************************************/
#include "../../include/baxter/jo_3.hpp"
#include <cmath>
using std::cos;
using std::sin;
using std::sqrt;


void jo_3(double L1, double L2, double L3, double *q, double *out_7404703663390368318) {

   out_7404703663390368318[0] = (1.0/2.0)*M_SQRT2*L1*sin(q[0]) + (1.0/2.0)*M_SQRT2*L1*cos(q[0]) + (1.0/2.0)*M_SQRT2*L2*sin(q[0])*cos(q[1]) + (1.0/2.0)*M_SQRT2*L2*cos(q[0])*cos(q[1]) - 1.0/2.0*M_SQRT2*L3*sin(q[0])*sin(q[1])*cos(q[2]) - 1.0/2.0*M_SQRT2*L3*sin(q[0])*sin(q[2]) - 1.0/2.0*M_SQRT2*L3*sin(q[1])*cos(q[0])*cos(q[2]) + (1.0/2.0)*M_SQRT2*L3*sin(q[2])*cos(q[0]);
   out_7404703663390368318[1] = -1.0/2.0*M_SQRT2*L2*sin(q[0])*sin(q[1]) + (1.0/2.0)*M_SQRT2*L2*sin(q[1])*cos(q[0]) - 1.0/2.0*M_SQRT2*L3*sin(q[0])*cos(q[1])*cos(q[2]) + (1.0/2.0)*M_SQRT2*L3*cos(q[0])*cos(q[1])*cos(q[2]);
   out_7404703663390368318[2] = (1.0/2.0)*M_SQRT2*L3*sin(q[0])*sin(q[1])*sin(q[2]) + (1.0/2.0)*M_SQRT2*L3*sin(q[0])*cos(q[2]) - 1.0/2.0*M_SQRT2*L3*sin(q[1])*sin(q[2])*cos(q[0]) + (1.0/2.0)*M_SQRT2*L3*cos(q[0])*cos(q[2]);
   out_7404703663390368318[3] = 0;
   out_7404703663390368318[4] = 0;
   out_7404703663390368318[5] = 0;
   out_7404703663390368318[6] = 0;
   out_7404703663390368318[7] = (1.0/2.0)*M_SQRT2*L1*sin(q[0]) - 1.0/2.0*M_SQRT2*L1*cos(q[0]) + (1.0/2.0)*M_SQRT2*L2*sin(q[0])*cos(q[1]) - 1.0/2.0*M_SQRT2*L2*cos(q[0])*cos(q[1]) - 1.0/2.0*M_SQRT2*L3*sin(q[0])*sin(q[1])*cos(q[2]) + (1.0/2.0)*M_SQRT2*L3*sin(q[0])*sin(q[2]) + (1.0/2.0)*M_SQRT2*L3*sin(q[1])*cos(q[0])*cos(q[2]) + (1.0/2.0)*M_SQRT2*L3*sin(q[2])*cos(q[0]);
   out_7404703663390368318[8] = (1.0/2.0)*M_SQRT2*L2*sin(q[0])*sin(q[1]) + (1.0/2.0)*M_SQRT2*L2*sin(q[1])*cos(q[0]) + (1.0/2.0)*M_SQRT2*L3*sin(q[0])*cos(q[1])*cos(q[2]) + (1.0/2.0)*M_SQRT2*L3*cos(q[0])*cos(q[1])*cos(q[2]);
   out_7404703663390368318[9] = -1.0/2.0*M_SQRT2*L3*sin(q[0])*sin(q[1])*sin(q[2]) + (1.0/2.0)*M_SQRT2*L3*sin(q[0])*cos(q[2]) - 1.0/2.0*M_SQRT2*L3*sin(q[1])*sin(q[2])*cos(q[0]) - 1.0/2.0*M_SQRT2*L3*cos(q[0])*cos(q[2]);
   out_7404703663390368318[10] = 0;
   out_7404703663390368318[11] = 0;
   out_7404703663390368318[12] = 0;
   out_7404703663390368318[13] = 0;
   out_7404703663390368318[14] = 0;
   out_7404703663390368318[15] = -L2*cos(q[1]) + L3*sin(q[1])*cos(q[2]);
   out_7404703663390368318[16] = L3*sin(q[2])*cos(q[1]);
   out_7404703663390368318[17] = 0;
   out_7404703663390368318[18] = 0;
   out_7404703663390368318[19] = 0;
   out_7404703663390368318[20] = 0;

}
