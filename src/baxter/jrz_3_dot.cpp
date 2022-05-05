/******************************************************************************
 *                       Code generated with sympy 1.9                        *
 *                                                                            *
 *              See http://www.sympy.org/ for more information.               *
 *                                                                            *
 *                 This file is part of 'jrz_3_dot_BY_SYMPY_'                 *
 ******************************************************************************/
#include "../../include/baxter/jrz_3_dot.hpp"
#include <cmath>
using std::cos;
using std::sin;
using std::sqrt;


void jrz_3_dot(double *dq, double *q, double *out_6342594732764927709) {

   out_6342594732764927709[0] = -1.0/2.0*M_SQRT2*sin(q[0])*sin(q[1])*sin(q[2])*dq[0] + (1.0/2.0)*M_SQRT2*sin(q[0])*sin(q[1])*cos(q[2])*dq[2] + (1.0/2.0)*M_SQRT2*sin(q[0])*sin(q[2])*cos(q[1])*dq[1] + (1.0/2.0)*M_SQRT2*sin(q[0])*sin(q[2])*dq[2] - 1.0/2.0*M_SQRT2*sin(q[0])*cos(q[2])*dq[0] + (1.0/2.0)*M_SQRT2*sin(q[1])*sin(q[2])*cos(q[0])*dq[0] + (1.0/2.0)*M_SQRT2*sin(q[1])*cos(q[0])*cos(q[2])*dq[2] + (1.0/2.0)*M_SQRT2*sin(q[2])*cos(q[0])*cos(q[1])*dq[1] - 1.0/2.0*M_SQRT2*sin(q[2])*cos(q[0])*dq[2] - 1.0/2.0*M_SQRT2*cos(q[0])*cos(q[2])*dq[0];
   out_6342594732764927709[1] = -1.0/2.0*M_SQRT2*sin(q[0])*sin(q[1])*sin(q[2])*dq[1] + (1.0/2.0)*M_SQRT2*sin(q[0])*sin(q[2])*cos(q[1])*dq[0] + (1.0/2.0)*M_SQRT2*sin(q[0])*cos(q[1])*cos(q[2])*dq[2] + (1.0/2.0)*M_SQRT2*sin(q[1])*sin(q[2])*cos(q[0])*dq[1] + (1.0/2.0)*M_SQRT2*sin(q[2])*cos(q[0])*cos(q[1])*dq[0] - 1.0/2.0*M_SQRT2*cos(q[0])*cos(q[1])*cos(q[2])*dq[2];
   out_6342594732764927709[2] = -1.0/2.0*M_SQRT2*sin(q[0])*sin(q[1])*sin(q[2])*dq[2] + (1.0/2.0)*M_SQRT2*sin(q[0])*sin(q[1])*cos(q[2])*dq[0] + (1.0/2.0)*M_SQRT2*sin(q[0])*sin(q[2])*dq[0] + (1.0/2.0)*M_SQRT2*sin(q[0])*cos(q[1])*cos(q[2])*dq[1] - 1.0/2.0*M_SQRT2*sin(q[0])*cos(q[2])*dq[2] + (1.0/2.0)*M_SQRT2*sin(q[1])*sin(q[2])*cos(q[0])*dq[2] + (1.0/2.0)*M_SQRT2*sin(q[1])*cos(q[0])*cos(q[2])*dq[0] - 1.0/2.0*M_SQRT2*sin(q[2])*cos(q[0])*dq[0] - 1.0/2.0*M_SQRT2*cos(q[0])*cos(q[1])*cos(q[2])*dq[1] - 1.0/2.0*M_SQRT2*cos(q[0])*cos(q[2])*dq[2];
   out_6342594732764927709[3] = 0;
   out_6342594732764927709[4] = 0;
   out_6342594732764927709[5] = 0;
   out_6342594732764927709[6] = 0;
   out_6342594732764927709[7] = (1.0/2.0)*M_SQRT2*sin(q[0])*sin(q[1])*sin(q[2])*dq[0] + (1.0/2.0)*M_SQRT2*sin(q[0])*sin(q[1])*cos(q[2])*dq[2] + (1.0/2.0)*M_SQRT2*sin(q[0])*sin(q[2])*cos(q[1])*dq[1] - 1.0/2.0*M_SQRT2*sin(q[0])*sin(q[2])*dq[2] - 1.0/2.0*M_SQRT2*sin(q[0])*cos(q[2])*dq[0] + (1.0/2.0)*M_SQRT2*sin(q[1])*sin(q[2])*cos(q[0])*dq[0] - 1.0/2.0*M_SQRT2*sin(q[1])*cos(q[0])*cos(q[2])*dq[2] - 1.0/2.0*M_SQRT2*sin(q[2])*cos(q[0])*cos(q[1])*dq[1] - 1.0/2.0*M_SQRT2*sin(q[2])*cos(q[0])*dq[2] + (1.0/2.0)*M_SQRT2*cos(q[0])*cos(q[2])*dq[0];
   out_6342594732764927709[8] = (1.0/2.0)*M_SQRT2*sin(q[0])*sin(q[1])*sin(q[2])*dq[1] + (1.0/2.0)*M_SQRT2*sin(q[0])*sin(q[2])*cos(q[1])*dq[0] - 1.0/2.0*M_SQRT2*sin(q[0])*cos(q[1])*cos(q[2])*dq[2] + (1.0/2.0)*M_SQRT2*sin(q[1])*sin(q[2])*cos(q[0])*dq[1] - 1.0/2.0*M_SQRT2*sin(q[2])*cos(q[0])*cos(q[1])*dq[0] - 1.0/2.0*M_SQRT2*cos(q[0])*cos(q[1])*cos(q[2])*dq[2];
   out_6342594732764927709[9] = (1.0/2.0)*M_SQRT2*sin(q[0])*sin(q[1])*sin(q[2])*dq[2] + (1.0/2.0)*M_SQRT2*sin(q[0])*sin(q[1])*cos(q[2])*dq[0] - 1.0/2.0*M_SQRT2*sin(q[0])*sin(q[2])*dq[0] - 1.0/2.0*M_SQRT2*sin(q[0])*cos(q[1])*cos(q[2])*dq[1] - 1.0/2.0*M_SQRT2*sin(q[0])*cos(q[2])*dq[2] + (1.0/2.0)*M_SQRT2*sin(q[1])*sin(q[2])*cos(q[0])*dq[2] - 1.0/2.0*M_SQRT2*sin(q[1])*cos(q[0])*cos(q[2])*dq[0] - 1.0/2.0*M_SQRT2*sin(q[2])*cos(q[0])*dq[0] - 1.0/2.0*M_SQRT2*cos(q[0])*cos(q[1])*cos(q[2])*dq[1] + (1.0/2.0)*M_SQRT2*cos(q[0])*cos(q[2])*dq[2];
   out_6342594732764927709[10] = 0;
   out_6342594732764927709[11] = 0;
   out_6342594732764927709[12] = 0;
   out_6342594732764927709[13] = 0;
   out_6342594732764927709[14] = 0;
   out_6342594732764927709[15] = -sin(q[1])*cos(q[2])*dq[2] - sin(q[2])*cos(q[1])*dq[1];
   out_6342594732764927709[16] = -sin(q[1])*cos(q[2])*dq[1] - sin(q[2])*cos(q[1])*dq[2];
   out_6342594732764927709[17] = 0;
   out_6342594732764927709[18] = 0;
   out_6342594732764927709[19] = 0;
   out_6342594732764927709[20] = 0;

}
