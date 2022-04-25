/******************************************************************************
 *                       Code generated with sympy 1.9                        *
 *                                                                            *
 *              See http://www.sympy.org/ for more information.               *
 *                                                                            *
 *                  This file is part of 'JRx_dot_2project'                   *
 ******************************************************************************/
#include "JRx_dot_2.h"
#include <math.h>

void JRx_dot_2(double *dq, double *q, double *out_3734465247287925422) {

   out_3734465247287925422[0] = -(-1.0/2.0*M_SQRT2*sin(q[0]) - 1.0/2.0*M_SQRT2*cos(q[0]))*sin(q[1])*sin(q[2])*dq[2] + (-1.0/2.0*M_SQRT2*sin(q[0]) - 1.0/2.0*M_SQRT2*cos(q[0]))*cos(q[1])*cos(q[2])*dq[1] + (-1.0/2.0*M_SQRT2*sin(q[0]) + (1.0/2.0)*M_SQRT2*cos(q[0]))*cos(q[2])*dq[2] + (-1.0/2.0*M_SQRT2*sin(q[0])*dq[0] - 1.0/2.0*M_SQRT2*cos(q[0])*dq[0])*sin(q[2]) + ((1.0/2.0)*M_SQRT2*sin(q[0])*dq[0] - 1.0/2.0*M_SQRT2*cos(q[0])*dq[0])*sin(q[1])*cos(q[2]);
   out_3734465247287925422[1] = -(-1.0/2.0*M_SQRT2*sin(q[0]) + (1.0/2.0)*M_SQRT2*cos(q[0]))*sin(q[1])*cos(q[2])*dq[1] - (-1.0/2.0*M_SQRT2*sin(q[0]) + (1.0/2.0)*M_SQRT2*cos(q[0]))*sin(q[2])*cos(q[1])*dq[2] + (-1.0/2.0*M_SQRT2*sin(q[0])*dq[0] - 1.0/2.0*M_SQRT2*cos(q[0])*dq[0])*cos(q[1])*cos(q[2]);
   out_3734465247287925422[2] = ((1.0/2.0)*M_SQRT2*sin(q[0]) - 1.0/2.0*M_SQRT2*cos(q[0]))*sin(q[1])*cos(q[2])*dq[2] + ((1.0/2.0)*M_SQRT2*sin(q[0]) - 1.0/2.0*M_SQRT2*cos(q[0]))*sin(q[2])*cos(q[1])*dq[1] - ((1.0/2.0)*M_SQRT2*sin(q[0]) + (1.0/2.0)*M_SQRT2*cos(q[0]))*sin(q[2])*dq[2] + (-1.0/2.0*M_SQRT2*sin(q[0])*dq[0] + (1.0/2.0)*M_SQRT2*cos(q[0])*dq[0])*cos(q[2]) + ((1.0/2.0)*M_SQRT2*sin(q[0])*dq[0] + (1.0/2.0)*M_SQRT2*cos(q[0])*dq[0])*sin(q[1])*sin(q[2]);
   out_3734465247287925422[3] = 0;
   out_3734465247287925422[4] = 0;
   out_3734465247287925422[5] = 0;
   out_3734465247287925422[6] = 0;
   out_3734465247287925422[7] = -(-1.0/2.0*M_SQRT2*sin(q[0]) + (1.0/2.0)*M_SQRT2*cos(q[0]))*sin(q[1])*sin(q[2])*dq[2] + (-1.0/2.0*M_SQRT2*sin(q[0]) + (1.0/2.0)*M_SQRT2*cos(q[0]))*cos(q[1])*cos(q[2])*dq[1] + ((1.0/2.0)*M_SQRT2*sin(q[0]) + (1.0/2.0)*M_SQRT2*cos(q[0]))*cos(q[2])*dq[2] + (-1.0/2.0*M_SQRT2*sin(q[0])*dq[0] - 1.0/2.0*M_SQRT2*cos(q[0])*dq[0])*sin(q[1])*cos(q[2]) + (-1.0/2.0*M_SQRT2*sin(q[0])*dq[0] + (1.0/2.0)*M_SQRT2*cos(q[0])*dq[0])*sin(q[2]);
   out_3734465247287925422[8] = -((1.0/2.0)*M_SQRT2*sin(q[0]) + (1.0/2.0)*M_SQRT2*cos(q[0]))*sin(q[1])*cos(q[2])*dq[1] - ((1.0/2.0)*M_SQRT2*sin(q[0]) + (1.0/2.0)*M_SQRT2*cos(q[0]))*sin(q[2])*cos(q[1])*dq[2] + (-1.0/2.0*M_SQRT2*sin(q[0])*dq[0] + (1.0/2.0)*M_SQRT2*cos(q[0])*dq[0])*cos(q[1])*cos(q[2]);
   out_3734465247287925422[9] = (-1.0/2.0*M_SQRT2*sin(q[0]) - 1.0/2.0*M_SQRT2*cos(q[0]))*sin(q[1])*cos(q[2])*dq[2] + (-1.0/2.0*M_SQRT2*sin(q[0]) - 1.0/2.0*M_SQRT2*cos(q[0]))*sin(q[2])*cos(q[1])*dq[1] - ((1.0/2.0)*M_SQRT2*sin(q[0]) - 1.0/2.0*M_SQRT2*cos(q[0]))*sin(q[2])*dq[2] + ((1.0/2.0)*M_SQRT2*sin(q[0])*dq[0] - 1.0/2.0*M_SQRT2*cos(q[0])*dq[0])*sin(q[1])*sin(q[2]) + ((1.0/2.0)*M_SQRT2*sin(q[0])*dq[0] + (1.0/2.0)*M_SQRT2*cos(q[0])*dq[0])*cos(q[2]);
   out_3734465247287925422[10] = 0;
   out_3734465247287925422[11] = 0;
   out_3734465247287925422[12] = 0;
   out_3734465247287925422[13] = 0;
   out_3734465247287925422[14] = 0;
   out_3734465247287925422[15] = -sin(q[1])*sin(q[2])*dq[2] + cos(q[1])*cos(q[2])*dq[1];
   out_3734465247287925422[16] = -sin(q[1])*sin(q[2])*dq[1] + cos(q[1])*cos(q[2])*dq[2];
   out_3734465247287925422[17] = 0;
   out_3734465247287925422[18] = 0;
   out_3734465247287925422[19] = 0;
   out_3734465247287925422[20] = 0;

}
