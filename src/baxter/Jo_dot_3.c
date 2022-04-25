/******************************************************************************
 *                       Code generated with sympy 1.9                        *
 *                                                                            *
 *              See http://www.sympy.org/ for more information.               *
 *                                                                            *
 *                   This file is part of 'Jo_dot_3project'                   *
 ******************************************************************************/
#include "include/baxter/Jo_dot_3.h"
#include <math.h>

void Jo_dot_3(double L1, double L2, double L3, double *dq, double t, double *out_736230935936264773) {

   out_736230935936264773[0] = L1*(-1.0/2.0*M_SQRT2*sin(q1(t))*dq[0] + (1.0/2.0)*M_SQRT2*cos(q1(t))*dq[0]) - L2*((1.0/2.0)*M_SQRT2*sin(q1(t)) + (1.0/2.0)*M_SQRT2*cos(q1(t)))*sin(q2(t))*dq[1] + L2*(-1.0/2.0*M_SQRT2*sin(q1(t))*dq[0] + (1.0/2.0)*M_SQRT2*cos(q1(t))*dq[0])*cos(q2(t)) + L3*(-(-1.0/2.0*M_SQRT2*sin(q1(t)) - 1.0/2.0*M_SQRT2*cos(q1(t)))*sin(q2(t))*sin(q3(t))*dq[2] + (-1.0/2.0*M_SQRT2*sin(q1(t)) - 1.0/2.0*M_SQRT2*cos(q1(t)))*cos(q2(t))*cos(q3(t))*dq[1] + (-1.0/2.0*M_SQRT2*sin(q1(t)) + (1.0/2.0)*M_SQRT2*cos(q1(t)))*cos(q3(t))*dq[2] + (-1.0/2.0*M_SQRT2*sin(q1(t))*dq[0] - 1.0/2.0*M_SQRT2*cos(q1(t))*dq[0])*sin(q3(t)) + ((1.0/2.0)*M_SQRT2*sin(q1(t))*dq[0] - 1.0/2.0*M_SQRT2*cos(q1(t))*dq[0])*sin(q2(t))*cos(q3(t)));
   out_736230935936264773[1] = -L2*((1.0/2.0)*M_SQRT2*sin(q1(t)) - 1.0/2.0*M_SQRT2*cos(q1(t)))*cos(q2(t))*dq[1] - L2*((1.0/2.0)*M_SQRT2*sin(q1(t))*dq[0] + (1.0/2.0)*M_SQRT2*cos(q1(t))*dq[0])*sin(q2(t)) - L3*(-1.0/2.0*M_SQRT2*sin(q1(t)) + (1.0/2.0)*M_SQRT2*cos(q1(t)))*sin(q2(t))*cos(q3(t))*dq[1] - L3*(-1.0/2.0*M_SQRT2*sin(q1(t)) + (1.0/2.0)*M_SQRT2*cos(q1(t)))*sin(q3(t))*cos(q2(t))*dq[2] + L3*(-1.0/2.0*M_SQRT2*sin(q1(t))*dq[0] - 1.0/2.0*M_SQRT2*cos(q1(t))*dq[0])*cos(q2(t))*cos(q3(t));
   out_736230935936264773[2] = L3*(((1.0/2.0)*M_SQRT2*sin(q1(t)) - 1.0/2.0*M_SQRT2*cos(q1(t)))*sin(q2(t))*cos(q3(t))*dq[2] + ((1.0/2.0)*M_SQRT2*sin(q1(t)) - 1.0/2.0*M_SQRT2*cos(q1(t)))*sin(q3(t))*cos(q2(t))*dq[1] - ((1.0/2.0)*M_SQRT2*sin(q1(t)) + (1.0/2.0)*M_SQRT2*cos(q1(t)))*sin(q3(t))*dq[2] + (-1.0/2.0*M_SQRT2*sin(q1(t))*dq[0] + (1.0/2.0)*M_SQRT2*cos(q1(t))*dq[0])*cos(q3(t)) + ((1.0/2.0)*M_SQRT2*sin(q1(t))*dq[0] + (1.0/2.0)*M_SQRT2*cos(q1(t))*dq[0])*sin(q2(t))*sin(q3(t)));
   out_736230935936264773[3] = 0;
   out_736230935936264773[4] = 0;
   out_736230935936264773[5] = 0;
   out_736230935936264773[6] = 0;
   out_736230935936264773[7] = L1*((1.0/2.0)*M_SQRT2*sin(q1(t))*dq[0] + (1.0/2.0)*M_SQRT2*cos(q1(t))*dq[0]) - L2*((1.0/2.0)*M_SQRT2*sin(q1(t)) - 1.0/2.0*M_SQRT2*cos(q1(t)))*sin(q2(t))*dq[1] + L2*((1.0/2.0)*M_SQRT2*sin(q1(t))*dq[0] + (1.0/2.0)*M_SQRT2*cos(q1(t))*dq[0])*cos(q2(t)) + L3*(-(-1.0/2.0*M_SQRT2*sin(q1(t)) + (1.0/2.0)*M_SQRT2*cos(q1(t)))*sin(q2(t))*sin(q3(t))*dq[2] + (-1.0/2.0*M_SQRT2*sin(q1(t)) + (1.0/2.0)*M_SQRT2*cos(q1(t)))*cos(q2(t))*cos(q3(t))*dq[1] + ((1.0/2.0)*M_SQRT2*sin(q1(t)) + (1.0/2.0)*M_SQRT2*cos(q1(t)))*cos(q3(t))*dq[2] + (-1.0/2.0*M_SQRT2*sin(q1(t))*dq[0] - 1.0/2.0*M_SQRT2*cos(q1(t))*dq[0])*sin(q2(t))*cos(q3(t)) + (-1.0/2.0*M_SQRT2*sin(q1(t))*dq[0] + (1.0/2.0)*M_SQRT2*cos(q1(t))*dq[0])*sin(q3(t)));
   out_736230935936264773[8] = -L2*(-1.0/2.0*M_SQRT2*sin(q1(t)) - 1.0/2.0*M_SQRT2*cos(q1(t)))*cos(q2(t))*dq[1] - L2*((1.0/2.0)*M_SQRT2*sin(q1(t))*dq[0] - 1.0/2.0*M_SQRT2*cos(q1(t))*dq[0])*sin(q2(t)) - L3*((1.0/2.0)*M_SQRT2*sin(q1(t)) + (1.0/2.0)*M_SQRT2*cos(q1(t)))*sin(q2(t))*cos(q3(t))*dq[1] - L3*((1.0/2.0)*M_SQRT2*sin(q1(t)) + (1.0/2.0)*M_SQRT2*cos(q1(t)))*sin(q3(t))*cos(q2(t))*dq[2] + L3*(-1.0/2.0*M_SQRT2*sin(q1(t))*dq[0] + (1.0/2.0)*M_SQRT2*cos(q1(t))*dq[0])*cos(q2(t))*cos(q3(t));
   out_736230935936264773[9] = L3*((-1.0/2.0*M_SQRT2*sin(q1(t)) - 1.0/2.0*M_SQRT2*cos(q1(t)))*sin(q2(t))*cos(q3(t))*dq[2] + (-1.0/2.0*M_SQRT2*sin(q1(t)) - 1.0/2.0*M_SQRT2*cos(q1(t)))*sin(q3(t))*cos(q2(t))*dq[1] - ((1.0/2.0)*M_SQRT2*sin(q1(t)) - 1.0/2.0*M_SQRT2*cos(q1(t)))*sin(q3(t))*dq[2] + ((1.0/2.0)*M_SQRT2*sin(q1(t))*dq[0] - 1.0/2.0*M_SQRT2*cos(q1(t))*dq[0])*sin(q2(t))*sin(q3(t)) + ((1.0/2.0)*M_SQRT2*sin(q1(t))*dq[0] + (1.0/2.0)*M_SQRT2*cos(q1(t))*dq[0])*cos(q3(t)));
   out_736230935936264773[10] = 0;
   out_736230935936264773[11] = 0;
   out_736230935936264773[12] = 0;
   out_736230935936264773[13] = 0;
   out_736230935936264773[14] = 0;
   out_736230935936264773[15] = L2*sin(q2(t))*dq[1] - L3*sin(q2(t))*sin(q3(t))*dq[2] + L3*cos(q2(t))*cos(q3(t))*dq[1];
   out_736230935936264773[16] = -L3*sin(q2(t))*sin(q3(t))*dq[1] + L3*cos(q2(t))*cos(q3(t))*dq[2];
   out_736230935936264773[17] = 0;
   out_736230935936264773[18] = 0;
   out_736230935936264773[19] = 0;
   out_736230935936264773[20] = 0;

}
