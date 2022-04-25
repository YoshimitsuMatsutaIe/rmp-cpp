/******************************************************************************
 *                       Code generated with sympy 1.9                        *
 *                                                                            *
 *              See http://www.sympy.org/ for more information.               *
 *                                                                            *
 *                  This file is part of 'JRx_dot_2project'                   *
 ******************************************************************************/
#include "include/baxter/JRx_dot_2.h"
#include <math.h>

void JRx_dot_2(double *dq, double t, double *out_6745844526705333011) {

   out_6745844526705333011[0] = -(-1.0/2.0*M_SQRT2*sin(q1(t)) - 1.0/2.0*M_SQRT2*cos(q1(t)))*sin(q2(t))*sin(q3(t))*dq[2] + (-1.0/2.0*M_SQRT2*sin(q1(t)) - 1.0/2.0*M_SQRT2*cos(q1(t)))*cos(q2(t))*cos(q3(t))*dq[1] + (-1.0/2.0*M_SQRT2*sin(q1(t)) + (1.0/2.0)*M_SQRT2*cos(q1(t)))*cos(q3(t))*dq[2] + (-1.0/2.0*M_SQRT2*sin(q1(t))*dq[0] - 1.0/2.0*M_SQRT2*cos(q1(t))*dq[0])*sin(q3(t)) + ((1.0/2.0)*M_SQRT2*sin(q1(t))*dq[0] - 1.0/2.0*M_SQRT2*cos(q1(t))*dq[0])*sin(q2(t))*cos(q3(t));
   out_6745844526705333011[1] = -(-1.0/2.0*M_SQRT2*sin(q1(t)) + (1.0/2.0)*M_SQRT2*cos(q1(t)))*sin(q2(t))*cos(q3(t))*dq[1] - (-1.0/2.0*M_SQRT2*sin(q1(t)) + (1.0/2.0)*M_SQRT2*cos(q1(t)))*sin(q3(t))*cos(q2(t))*dq[2] + (-1.0/2.0*M_SQRT2*sin(q1(t))*dq[0] - 1.0/2.0*M_SQRT2*cos(q1(t))*dq[0])*cos(q2(t))*cos(q3(t));
   out_6745844526705333011[2] = ((1.0/2.0)*M_SQRT2*sin(q1(t)) - 1.0/2.0*M_SQRT2*cos(q1(t)))*sin(q2(t))*cos(q3(t))*dq[2] + ((1.0/2.0)*M_SQRT2*sin(q1(t)) - 1.0/2.0*M_SQRT2*cos(q1(t)))*sin(q3(t))*cos(q2(t))*dq[1] - ((1.0/2.0)*M_SQRT2*sin(q1(t)) + (1.0/2.0)*M_SQRT2*cos(q1(t)))*sin(q3(t))*dq[2] + (-1.0/2.0*M_SQRT2*sin(q1(t))*dq[0] + (1.0/2.0)*M_SQRT2*cos(q1(t))*dq[0])*cos(q3(t)) + ((1.0/2.0)*M_SQRT2*sin(q1(t))*dq[0] + (1.0/2.0)*M_SQRT2*cos(q1(t))*dq[0])*sin(q2(t))*sin(q3(t));
   out_6745844526705333011[3] = 0;
   out_6745844526705333011[4] = 0;
   out_6745844526705333011[5] = 0;
   out_6745844526705333011[6] = 0;
   out_6745844526705333011[7] = -(-1.0/2.0*M_SQRT2*sin(q1(t)) + (1.0/2.0)*M_SQRT2*cos(q1(t)))*sin(q2(t))*sin(q3(t))*dq[2] + (-1.0/2.0*M_SQRT2*sin(q1(t)) + (1.0/2.0)*M_SQRT2*cos(q1(t)))*cos(q2(t))*cos(q3(t))*dq[1] + ((1.0/2.0)*M_SQRT2*sin(q1(t)) + (1.0/2.0)*M_SQRT2*cos(q1(t)))*cos(q3(t))*dq[2] + (-1.0/2.0*M_SQRT2*sin(q1(t))*dq[0] - 1.0/2.0*M_SQRT2*cos(q1(t))*dq[0])*sin(q2(t))*cos(q3(t)) + (-1.0/2.0*M_SQRT2*sin(q1(t))*dq[0] + (1.0/2.0)*M_SQRT2*cos(q1(t))*dq[0])*sin(q3(t));
   out_6745844526705333011[8] = -((1.0/2.0)*M_SQRT2*sin(q1(t)) + (1.0/2.0)*M_SQRT2*cos(q1(t)))*sin(q2(t))*cos(q3(t))*dq[1] - ((1.0/2.0)*M_SQRT2*sin(q1(t)) + (1.0/2.0)*M_SQRT2*cos(q1(t)))*sin(q3(t))*cos(q2(t))*dq[2] + (-1.0/2.0*M_SQRT2*sin(q1(t))*dq[0] + (1.0/2.0)*M_SQRT2*cos(q1(t))*dq[0])*cos(q2(t))*cos(q3(t));
   out_6745844526705333011[9] = (-1.0/2.0*M_SQRT2*sin(q1(t)) - 1.0/2.0*M_SQRT2*cos(q1(t)))*sin(q2(t))*cos(q3(t))*dq[2] + (-1.0/2.0*M_SQRT2*sin(q1(t)) - 1.0/2.0*M_SQRT2*cos(q1(t)))*sin(q3(t))*cos(q2(t))*dq[1] - ((1.0/2.0)*M_SQRT2*sin(q1(t)) - 1.0/2.0*M_SQRT2*cos(q1(t)))*sin(q3(t))*dq[2] + ((1.0/2.0)*M_SQRT2*sin(q1(t))*dq[0] - 1.0/2.0*M_SQRT2*cos(q1(t))*dq[0])*sin(q2(t))*sin(q3(t)) + ((1.0/2.0)*M_SQRT2*sin(q1(t))*dq[0] + (1.0/2.0)*M_SQRT2*cos(q1(t))*dq[0])*cos(q3(t));
   out_6745844526705333011[10] = 0;
   out_6745844526705333011[11] = 0;
   out_6745844526705333011[12] = 0;
   out_6745844526705333011[13] = 0;
   out_6745844526705333011[14] = 0;
   out_6745844526705333011[15] = -sin(q2(t))*sin(q3(t))*dq[2] + cos(q2(t))*cos(q3(t))*dq[1];
   out_6745844526705333011[16] = -sin(q2(t))*sin(q3(t))*dq[1] + cos(q2(t))*cos(q3(t))*dq[2];
   out_6745844526705333011[17] = 0;
   out_6745844526705333011[18] = 0;
   out_6745844526705333011[19] = 0;
   out_6745844526705333011[20] = 0;

}
