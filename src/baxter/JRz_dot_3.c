/******************************************************************************
 *                       Code generated with sympy 1.9                        *
 *                                                                            *
 *              See http://www.sympy.org/ for more information.               *
 *                                                                            *
 *                  This file is part of 'JRz_dot_3project'                   *
 ******************************************************************************/
#include "JRz_dot_3.h"
#include <math.h>

void JRz_dot_3(double *dq, double t, double *out_4323438821035437977) {

   out_4323438821035437977[0] = -(-1.0/2.0*M_SQRT2*sin(q1(t)) + (1.0/2.0)*M_SQRT2*cos(q1(t)))*sin(q3(t))*dq[2] + ((1.0/2.0)*M_SQRT2*sin(q1(t)) + (1.0/2.0)*M_SQRT2*cos(q1(t)))*sin(q2(t))*cos(q3(t))*dq[2] + ((1.0/2.0)*M_SQRT2*sin(q1(t)) + (1.0/2.0)*M_SQRT2*cos(q1(t)))*sin(q3(t))*cos(q2(t))*dq[1] + (-1.0/2.0*M_SQRT2*sin(q1(t))*dq[0] - 1.0/2.0*M_SQRT2*cos(q1(t))*dq[0])*cos(q3(t)) + (-1.0/2.0*M_SQRT2*sin(q1(t))*dq[0] + (1.0/2.0)*M_SQRT2*cos(q1(t))*dq[0])*sin(q2(t))*sin(q3(t));
   out_4323438821035437977[1] = -((1.0/2.0)*M_SQRT2*sin(q1(t)) - 1.0/2.0*M_SQRT2*cos(q1(t)))*sin(q2(t))*sin(q3(t))*dq[1] + ((1.0/2.0)*M_SQRT2*sin(q1(t)) - 1.0/2.0*M_SQRT2*cos(q1(t)))*cos(q2(t))*cos(q3(t))*dq[2] + ((1.0/2.0)*M_SQRT2*sin(q1(t))*dq[0] + (1.0/2.0)*M_SQRT2*cos(q1(t))*dq[0])*sin(q3(t))*cos(q2(t));
   out_4323438821035437977[2] = (-1.0/2.0*M_SQRT2*sin(q1(t)) - 1.0/2.0*M_SQRT2*cos(q1(t)))*cos(q3(t))*dq[2] - ((1.0/2.0)*M_SQRT2*sin(q1(t)) - 1.0/2.0*M_SQRT2*cos(q1(t)))*sin(q2(t))*sin(q3(t))*dq[2] + ((1.0/2.0)*M_SQRT2*sin(q1(t)) - 1.0/2.0*M_SQRT2*cos(q1(t)))*cos(q2(t))*cos(q3(t))*dq[1] + ((1.0/2.0)*M_SQRT2*sin(q1(t))*dq[0] - 1.0/2.0*M_SQRT2*cos(q1(t))*dq[0])*sin(q3(t)) + ((1.0/2.0)*M_SQRT2*sin(q1(t))*dq[0] + (1.0/2.0)*M_SQRT2*cos(q1(t))*dq[0])*sin(q2(t))*cos(q3(t));
   out_4323438821035437977[3] = 0;
   out_4323438821035437977[4] = 0;
   out_4323438821035437977[5] = 0;
   out_4323438821035437977[6] = 0;
   out_4323438821035437977[7] = ((1.0/2.0)*M_SQRT2*sin(q1(t)) - 1.0/2.0*M_SQRT2*cos(q1(t)))*sin(q2(t))*cos(q3(t))*dq[2] + ((1.0/2.0)*M_SQRT2*sin(q1(t)) - 1.0/2.0*M_SQRT2*cos(q1(t)))*sin(q3(t))*cos(q2(t))*dq[1] - ((1.0/2.0)*M_SQRT2*sin(q1(t)) + (1.0/2.0)*M_SQRT2*cos(q1(t)))*sin(q3(t))*dq[2] + (-1.0/2.0*M_SQRT2*sin(q1(t))*dq[0] + (1.0/2.0)*M_SQRT2*cos(q1(t))*dq[0])*cos(q3(t)) + ((1.0/2.0)*M_SQRT2*sin(q1(t))*dq[0] + (1.0/2.0)*M_SQRT2*cos(q1(t))*dq[0])*sin(q2(t))*sin(q3(t));
   out_4323438821035437977[8] = -(-1.0/2.0*M_SQRT2*sin(q1(t)) - 1.0/2.0*M_SQRT2*cos(q1(t)))*sin(q2(t))*sin(q3(t))*dq[1] + (-1.0/2.0*M_SQRT2*sin(q1(t)) - 1.0/2.0*M_SQRT2*cos(q1(t)))*cos(q2(t))*cos(q3(t))*dq[2] + ((1.0/2.0)*M_SQRT2*sin(q1(t))*dq[0] - 1.0/2.0*M_SQRT2*cos(q1(t))*dq[0])*sin(q3(t))*cos(q2(t));
   out_4323438821035437977[9] = -(-1.0/2.0*M_SQRT2*sin(q1(t)) - 1.0/2.0*M_SQRT2*cos(q1(t)))*sin(q2(t))*sin(q3(t))*dq[2] + (-1.0/2.0*M_SQRT2*sin(q1(t)) - 1.0/2.0*M_SQRT2*cos(q1(t)))*cos(q2(t))*cos(q3(t))*dq[1] + (-1.0/2.0*M_SQRT2*sin(q1(t)) + (1.0/2.0)*M_SQRT2*cos(q1(t)))*cos(q3(t))*dq[2] + (-1.0/2.0*M_SQRT2*sin(q1(t))*dq[0] - 1.0/2.0*M_SQRT2*cos(q1(t))*dq[0])*sin(q3(t)) + ((1.0/2.0)*M_SQRT2*sin(q1(t))*dq[0] - 1.0/2.0*M_SQRT2*cos(q1(t))*dq[0])*sin(q2(t))*cos(q3(t));
   out_4323438821035437977[10] = 0;
   out_4323438821035437977[11] = 0;
   out_4323438821035437977[12] = 0;
   out_4323438821035437977[13] = 0;
   out_4323438821035437977[14] = 0;
   out_4323438821035437977[15] = -sin(q2(t))*cos(q3(t))*dq[2] - sin(q3(t))*cos(q2(t))*dq[1];
   out_4323438821035437977[16] = -sin(q2(t))*cos(q3(t))*dq[1] - sin(q3(t))*cos(q2(t))*dq[2];
   out_4323438821035437977[17] = 0;
   out_4323438821035437977[18] = 0;
   out_4323438821035437977[19] = 0;
   out_4323438821035437977[20] = 0;

}
