/******************************************************************************
 *                       Code generated with sympy 1.9                        *
 *                                                                            *
 *              See http://www.sympy.org/ for more information.               *
 *                                                                            *
 *                 This file is part of 'jo_3_dot_BY_SYMPY_'                  *
 ******************************************************************************/
#include "../../include/baxter/jo_3_dot.hpp"
#include <cmath>
using std::cos;
using std::sin;
using std::sqrt;


void jo_3_dot(double L1, double L2, double L3, double *dq, double *q, double *out_9004997734796084817) {

   out_9004997734796084817[0] = -1.0/2.0*M_SQRT2*L1*sin(q[0])*dq[0] + (1.0/2.0)*M_SQRT2*L1*cos(q[0])*dq[0] - 1.0/2.0*M_SQRT2*L2*sin(q[0])*sin(q[1])*dq[1] - 1.0/2.0*M_SQRT2*L2*sin(q[0])*cos(q[1])*dq[0] - 1.0/2.0*M_SQRT2*L2*sin(q[1])*cos(q[0])*dq[1] + (1.0/2.0)*M_SQRT2*L2*cos(q[0])*cos(q[1])*dq[0] + (1.0/2.0)*M_SQRT2*L3*sin(q[0])*sin(q[1])*sin(q[2])*dq[2] + (1.0/2.0)*M_SQRT2*L3*sin(q[0])*sin(q[1])*cos(q[2])*dq[0] - 1.0/2.0*M_SQRT2*L3*sin(q[0])*sin(q[2])*dq[0] - 1.0/2.0*M_SQRT2*L3*sin(q[0])*cos(q[1])*cos(q[2])*dq[1] - 1.0/2.0*M_SQRT2*L3*sin(q[0])*cos(q[2])*dq[2] + (1.0/2.0)*M_SQRT2*L3*sin(q[1])*sin(q[2])*cos(q[0])*dq[2] - 1.0/2.0*M_SQRT2*L3*sin(q[1])*cos(q[0])*cos(q[2])*dq[0] - 1.0/2.0*M_SQRT2*L3*sin(q[2])*cos(q[0])*dq[0] - 1.0/2.0*M_SQRT2*L3*cos(q[0])*cos(q[1])*cos(q[2])*dq[1] + (1.0/2.0)*M_SQRT2*L3*cos(q[0])*cos(q[2])*dq[2];
   out_9004997734796084817[1] = -1.0/2.0*M_SQRT2*L2*sin(q[0])*sin(q[1])*dq[0] - 1.0/2.0*M_SQRT2*L2*sin(q[0])*cos(q[1])*dq[1] - 1.0/2.0*M_SQRT2*L2*sin(q[1])*cos(q[0])*dq[0] + (1.0/2.0)*M_SQRT2*L2*cos(q[0])*cos(q[1])*dq[1] + (1.0/2.0)*M_SQRT2*L3*sin(q[0])*sin(q[1])*cos(q[2])*dq[1] + (1.0/2.0)*M_SQRT2*L3*sin(q[0])*sin(q[2])*cos(q[1])*dq[2] - 1.0/2.0*M_SQRT2*L3*sin(q[0])*cos(q[1])*cos(q[2])*dq[0] - 1.0/2.0*M_SQRT2*L3*sin(q[1])*cos(q[0])*cos(q[2])*dq[1] - 1.0/2.0*M_SQRT2*L3*sin(q[2])*cos(q[0])*cos(q[1])*dq[2] - 1.0/2.0*M_SQRT2*L3*cos(q[0])*cos(q[1])*cos(q[2])*dq[0];
   out_9004997734796084817[2] = (1.0/2.0)*M_SQRT2*L3*sin(q[0])*sin(q[1])*sin(q[2])*dq[0] + (1.0/2.0)*M_SQRT2*L3*sin(q[0])*sin(q[1])*cos(q[2])*dq[2] + (1.0/2.0)*M_SQRT2*L3*sin(q[0])*sin(q[2])*cos(q[1])*dq[1] - 1.0/2.0*M_SQRT2*L3*sin(q[0])*sin(q[2])*dq[2] - 1.0/2.0*M_SQRT2*L3*sin(q[0])*cos(q[2])*dq[0] + (1.0/2.0)*M_SQRT2*L3*sin(q[1])*sin(q[2])*cos(q[0])*dq[0] - 1.0/2.0*M_SQRT2*L3*sin(q[1])*cos(q[0])*cos(q[2])*dq[2] - 1.0/2.0*M_SQRT2*L3*sin(q[2])*cos(q[0])*cos(q[1])*dq[1] - 1.0/2.0*M_SQRT2*L3*sin(q[2])*cos(q[0])*dq[2] + (1.0/2.0)*M_SQRT2*L3*cos(q[0])*cos(q[2])*dq[0];
   out_9004997734796084817[3] = 0;
   out_9004997734796084817[4] = 0;
   out_9004997734796084817[5] = 0;
   out_9004997734796084817[6] = 0;
   out_9004997734796084817[7] = (1.0/2.0)*M_SQRT2*L1*sin(q[0])*dq[0] + (1.0/2.0)*M_SQRT2*L1*cos(q[0])*dq[0] - 1.0/2.0*M_SQRT2*L2*sin(q[0])*sin(q[1])*dq[1] + (1.0/2.0)*M_SQRT2*L2*sin(q[0])*cos(q[1])*dq[0] + (1.0/2.0)*M_SQRT2*L2*sin(q[1])*cos(q[0])*dq[1] + (1.0/2.0)*M_SQRT2*L2*cos(q[0])*cos(q[1])*dq[0] + (1.0/2.0)*M_SQRT2*L3*sin(q[0])*sin(q[1])*sin(q[2])*dq[2] - 1.0/2.0*M_SQRT2*L3*sin(q[0])*sin(q[1])*cos(q[2])*dq[0] - 1.0/2.0*M_SQRT2*L3*sin(q[0])*sin(q[2])*dq[0] - 1.0/2.0*M_SQRT2*L3*sin(q[0])*cos(q[1])*cos(q[2])*dq[1] + (1.0/2.0)*M_SQRT2*L3*sin(q[0])*cos(q[2])*dq[2] - 1.0/2.0*M_SQRT2*L3*sin(q[1])*sin(q[2])*cos(q[0])*dq[2] - 1.0/2.0*M_SQRT2*L3*sin(q[1])*cos(q[0])*cos(q[2])*dq[0] + (1.0/2.0)*M_SQRT2*L3*sin(q[2])*cos(q[0])*dq[0] + (1.0/2.0)*M_SQRT2*L3*cos(q[0])*cos(q[1])*cos(q[2])*dq[1] + (1.0/2.0)*M_SQRT2*L3*cos(q[0])*cos(q[2])*dq[2];
   out_9004997734796084817[8] = -1.0/2.0*M_SQRT2*L2*sin(q[0])*sin(q[1])*dq[0] + (1.0/2.0)*M_SQRT2*L2*sin(q[0])*cos(q[1])*dq[1] + (1.0/2.0)*M_SQRT2*L2*sin(q[1])*cos(q[0])*dq[0] + (1.0/2.0)*M_SQRT2*L2*cos(q[0])*cos(q[1])*dq[1] - 1.0/2.0*M_SQRT2*L3*sin(q[0])*sin(q[1])*cos(q[2])*dq[1] - 1.0/2.0*M_SQRT2*L3*sin(q[0])*sin(q[2])*cos(q[1])*dq[2] - 1.0/2.0*M_SQRT2*L3*sin(q[0])*cos(q[1])*cos(q[2])*dq[0] - 1.0/2.0*M_SQRT2*L3*sin(q[1])*cos(q[0])*cos(q[2])*dq[1] - 1.0/2.0*M_SQRT2*L3*sin(q[2])*cos(q[0])*cos(q[1])*dq[2] + (1.0/2.0)*M_SQRT2*L3*cos(q[0])*cos(q[1])*cos(q[2])*dq[0];
   out_9004997734796084817[9] = (1.0/2.0)*M_SQRT2*L3*sin(q[0])*sin(q[1])*sin(q[2])*dq[0] - 1.0/2.0*M_SQRT2*L3*sin(q[0])*sin(q[1])*cos(q[2])*dq[2] - 1.0/2.0*M_SQRT2*L3*sin(q[0])*sin(q[2])*cos(q[1])*dq[1] - 1.0/2.0*M_SQRT2*L3*sin(q[0])*sin(q[2])*dq[2] + (1.0/2.0)*M_SQRT2*L3*sin(q[0])*cos(q[2])*dq[0] - 1.0/2.0*M_SQRT2*L3*sin(q[1])*sin(q[2])*cos(q[0])*dq[0] - 1.0/2.0*M_SQRT2*L3*sin(q[1])*cos(q[0])*cos(q[2])*dq[2] - 1.0/2.0*M_SQRT2*L3*sin(q[2])*cos(q[0])*cos(q[1])*dq[1] + (1.0/2.0)*M_SQRT2*L3*sin(q[2])*cos(q[0])*dq[2] + (1.0/2.0)*M_SQRT2*L3*cos(q[0])*cos(q[2])*dq[0];
   out_9004997734796084817[10] = 0;
   out_9004997734796084817[11] = 0;
   out_9004997734796084817[12] = 0;
   out_9004997734796084817[13] = 0;
   out_9004997734796084817[14] = 0;
   out_9004997734796084817[15] = L2*sin(q[1])*dq[1] - L3*sin(q[1])*sin(q[2])*dq[2] + L3*cos(q[1])*cos(q[2])*dq[1];
   out_9004997734796084817[16] = -L3*sin(q[1])*sin(q[2])*dq[1] + L3*cos(q[1])*cos(q[2])*dq[2];
   out_9004997734796084817[17] = 0;
   out_9004997734796084817[18] = 0;
   out_9004997734796084817[19] = 0;
   out_9004997734796084817[20] = 0;

}
