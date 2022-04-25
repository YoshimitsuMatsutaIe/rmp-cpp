/******************************************************************************
 *                       Code generated with sympy 1.9                        *
 *                                                                            *
 *              See http://www.sympy.org/ for more information.               *
 *                                                                            *
 *                  This file is part of 'JRx_dot_5project'                   *
 ******************************************************************************/
#include "JRx_dot_5.h"
#include <math.h>

void JRx_dot_5(double *dq, double t, double *out_8288534879187818585) {

   out_8288534879187818585[0] = -(((-1.0/2.0*M_SQRT2*sin(q1(t)) + (1.0/2.0)*M_SQRT2*cos(q1(t)))*cos(q3(t)) + ((1.0/2.0)*M_SQRT2*sin(q1(t)) + (1.0/2.0)*M_SQRT2*cos(q1(t)))*sin(q2(t))*sin(q3(t)))*sin(q5(t)) + ((-1.0/2.0*M_SQRT2*sin(q1(t)) - 1.0/2.0*M_SQRT2*cos(q1(t)))*sin(q4(t))*cos(q2(t)) + ((-1.0/2.0*M_SQRT2*sin(q1(t)) - 1.0/2.0*M_SQRT2*cos(q1(t)))*sin(q2(t))*cos(q3(t)) + (-1.0/2.0*M_SQRT2*sin(q1(t)) + (1.0/2.0)*M_SQRT2*cos(q1(t)))*sin(q3(t)))*cos(q4(t)))*cos(q5(t)))*sin(q6(t))*dq[5] + (-((1.0/2.0)*M_SQRT2*sin(q1(t)) + (1.0/2.0)*M_SQRT2*cos(q1(t)))*cos(q2(t))*cos(q4(t)) - ((-1.0/2.0*M_SQRT2*sin(q1(t)) - 1.0/2.0*M_SQRT2*cos(q1(t)))*sin(q2(t))*cos(q3(t)) + (-1.0/2.0*M_SQRT2*sin(q1(t)) + (1.0/2.0)*M_SQRT2*cos(q1(t)))*sin(q3(t)))*sin(q4(t)))*cos(q6(t))*dq[5] + (((-1.0/2.0*M_SQRT2*sin(q1(t)) + (1.0/2.0)*M_SQRT2*cos(q1(t)))*cos(q3(t)) + ((1.0/2.0)*M_SQRT2*sin(q1(t)) + (1.0/2.0)*M_SQRT2*cos(q1(t)))*sin(q2(t))*sin(q3(t)))*cos(q5(t))*dq[4] - ((-1.0/2.0*M_SQRT2*sin(q1(t)) - 1.0/2.0*M_SQRT2*cos(q1(t)))*sin(q4(t))*cos(q2(t)) + ((-1.0/2.0*M_SQRT2*sin(q1(t)) - 1.0/2.0*M_SQRT2*cos(q1(t)))*sin(q2(t))*cos(q3(t)) + (-1.0/2.0*M_SQRT2*sin(q1(t)) + (1.0/2.0)*M_SQRT2*cos(q1(t)))*sin(q3(t)))*cos(q4(t)))*sin(q5(t))*dq[4] + (-(-1.0/2.0*M_SQRT2*sin(q1(t)) + (1.0/2.0)*M_SQRT2*cos(q1(t)))*sin(q3(t))*dq[2] + ((1.0/2.0)*M_SQRT2*sin(q1(t)) + (1.0/2.0)*M_SQRT2*cos(q1(t)))*sin(q2(t))*cos(q3(t))*dq[2] + ((1.0/2.0)*M_SQRT2*sin(q1(t)) + (1.0/2.0)*M_SQRT2*cos(q1(t)))*sin(q3(t))*cos(q2(t))*dq[1] + (-1.0/2.0*M_SQRT2*sin(q1(t))*dq[0] - 1.0/2.0*M_SQRT2*cos(q1(t))*dq[0])*cos(q3(t)) + (-1.0/2.0*M_SQRT2*sin(q1(t))*dq[0] + (1.0/2.0)*M_SQRT2*cos(q1(t))*dq[0])*sin(q2(t))*sin(q3(t)))*sin(q5(t)) + (-(-1.0/2.0*M_SQRT2*sin(q1(t)) - 1.0/2.0*M_SQRT2*cos(q1(t)))*sin(q2(t))*sin(q4(t))*dq[1] + (-1.0/2.0*M_SQRT2*sin(q1(t)) - 1.0/2.0*M_SQRT2*cos(q1(t)))*cos(q2(t))*cos(q4(t))*dq[3] + ((1.0/2.0)*M_SQRT2*sin(q1(t))*dq[0] - 1.0/2.0*M_SQRT2*cos(q1(t))*dq[0])*sin(q4(t))*cos(q2(t)) - ((-1.0/2.0*M_SQRT2*sin(q1(t)) - 1.0/2.0*M_SQRT2*cos(q1(t)))*sin(q2(t))*cos(q3(t)) + (-1.0/2.0*M_SQRT2*sin(q1(t)) + (1.0/2.0)*M_SQRT2*cos(q1(t)))*sin(q3(t)))*sin(q4(t))*dq[3] + (-(-1.0/2.0*M_SQRT2*sin(q1(t)) - 1.0/2.0*M_SQRT2*cos(q1(t)))*sin(q2(t))*sin(q3(t))*dq[2] + (-1.0/2.0*M_SQRT2*sin(q1(t)) - 1.0/2.0*M_SQRT2*cos(q1(t)))*cos(q2(t))*cos(q3(t))*dq[1] + (-1.0/2.0*M_SQRT2*sin(q1(t)) + (1.0/2.0)*M_SQRT2*cos(q1(t)))*cos(q3(t))*dq[2] + (-1.0/2.0*M_SQRT2*sin(q1(t))*dq[0] - 1.0/2.0*M_SQRT2*cos(q1(t))*dq[0])*sin(q3(t)) + ((1.0/2.0)*M_SQRT2*sin(q1(t))*dq[0] - 1.0/2.0*M_SQRT2*cos(q1(t))*dq[0])*sin(q2(t))*cos(q3(t)))*cos(q4(t)))*cos(q5(t)))*cos(q6(t)) + (-(-1.0/2.0*M_SQRT2*sin(q1(t)) - 1.0/2.0*M_SQRT2*cos(q1(t)))*sin(q2(t))*cos(q4(t))*dq[1] - (-1.0/2.0*M_SQRT2*sin(q1(t)) - 1.0/2.0*M_SQRT2*cos(q1(t)))*sin(q4(t))*cos(q2(t))*dq[3] + ((1.0/2.0)*M_SQRT2*sin(q1(t))*dq[0] - 1.0/2.0*M_SQRT2*cos(q1(t))*dq[0])*cos(q2(t))*cos(q4(t)) + (-(-1.0/2.0*M_SQRT2*sin(q1(t)) - 1.0/2.0*M_SQRT2*cos(q1(t)))*sin(q2(t))*cos(q3(t)) - (-1.0/2.0*M_SQRT2*sin(q1(t)) + (1.0/2.0)*M_SQRT2*cos(q1(t)))*sin(q3(t)))*cos(q4(t))*dq[3] + ((-1.0/2.0*M_SQRT2*sin(q1(t)) - 1.0/2.0*M_SQRT2*cos(q1(t)))*sin(q2(t))*sin(q3(t))*dq[2] - (-1.0/2.0*M_SQRT2*sin(q1(t)) - 1.0/2.0*M_SQRT2*cos(q1(t)))*cos(q2(t))*cos(q3(t))*dq[1] - (-1.0/2.0*M_SQRT2*sin(q1(t)) + (1.0/2.0)*M_SQRT2*cos(q1(t)))*cos(q3(t))*dq[2] - (-1.0/2.0*M_SQRT2*sin(q1(t))*dq[0] - 1.0/2.0*M_SQRT2*cos(q1(t))*dq[0])*sin(q3(t)) - ((1.0/2.0)*M_SQRT2*sin(q1(t))*dq[0] - 1.0/2.0*M_SQRT2*cos(q1(t))*dq[0])*sin(q2(t))*cos(q3(t)))*sin(q4(t)))*sin(q6(t));
   out_8288534879187818585[1] = (-(-1.0/2.0*M_SQRT2*sin(q1(t)) + (1.0/2.0)*M_SQRT2*cos(q1(t)))*sin(q4(t))*cos(q2(t))*cos(q3(t)) + ((1.0/2.0)*M_SQRT2*sin(q1(t)) - 1.0/2.0*M_SQRT2*cos(q1(t)))*sin(q2(t))*cos(q4(t)))*cos(q6(t))*dq[5] - (((1.0/2.0)*M_SQRT2*sin(q1(t)) - 1.0/2.0*M_SQRT2*cos(q1(t)))*sin(q3(t))*sin(q5(t))*cos(q2(t)) + (-(-1.0/2.0*M_SQRT2*sin(q1(t)) + (1.0/2.0)*M_SQRT2*cos(q1(t)))*sin(q2(t))*sin(q4(t)) + (-1.0/2.0*M_SQRT2*sin(q1(t)) + (1.0/2.0)*M_SQRT2*cos(q1(t)))*cos(q2(t))*cos(q3(t))*cos(q4(t)))*cos(q5(t)))*sin(q6(t))*dq[5] + (-((1.0/2.0)*M_SQRT2*sin(q1(t)) - 1.0/2.0*M_SQRT2*cos(q1(t)))*sin(q2(t))*sin(q3(t))*sin(q5(t))*dq[1] + ((1.0/2.0)*M_SQRT2*sin(q1(t)) - 1.0/2.0*M_SQRT2*cos(q1(t)))*sin(q3(t))*cos(q2(t))*cos(q5(t))*dq[4] + ((1.0/2.0)*M_SQRT2*sin(q1(t)) - 1.0/2.0*M_SQRT2*cos(q1(t)))*sin(q5(t))*cos(q2(t))*cos(q3(t))*dq[2] + ((1.0/2.0)*M_SQRT2*sin(q1(t))*dq[0] + (1.0/2.0)*M_SQRT2*cos(q1(t))*dq[0])*sin(q3(t))*sin(q5(t))*cos(q2(t)) - (-(-1.0/2.0*M_SQRT2*sin(q1(t)) + (1.0/2.0)*M_SQRT2*cos(q1(t)))*sin(q2(t))*sin(q4(t)) + (-1.0/2.0*M_SQRT2*sin(q1(t)) + (1.0/2.0)*M_SQRT2*cos(q1(t)))*cos(q2(t))*cos(q3(t))*cos(q4(t)))*sin(q5(t))*dq[4] + (-(-1.0/2.0*M_SQRT2*sin(q1(t)) + (1.0/2.0)*M_SQRT2*cos(q1(t)))*sin(q2(t))*cos(q3(t))*cos(q4(t))*dq[1] - (-1.0/2.0*M_SQRT2*sin(q1(t)) + (1.0/2.0)*M_SQRT2*cos(q1(t)))*sin(q3(t))*cos(q2(t))*cos(q4(t))*dq[2] - (-1.0/2.0*M_SQRT2*sin(q1(t)) + (1.0/2.0)*M_SQRT2*cos(q1(t)))*sin(q4(t))*cos(q2(t))*cos(q3(t))*dq[3] + ((1.0/2.0)*M_SQRT2*sin(q1(t)) - 1.0/2.0*M_SQRT2*cos(q1(t)))*sin(q2(t))*cos(q4(t))*dq[3] + ((1.0/2.0)*M_SQRT2*sin(q1(t)) - 1.0/2.0*M_SQRT2*cos(q1(t)))*sin(q4(t))*cos(q2(t))*dq[1] + (-1.0/2.0*M_SQRT2*sin(q1(t))*dq[0] - 1.0/2.0*M_SQRT2*cos(q1(t))*dq[0])*cos(q2(t))*cos(q3(t))*cos(q4(t)) + ((1.0/2.0)*M_SQRT2*sin(q1(t))*dq[0] + (1.0/2.0)*M_SQRT2*cos(q1(t))*dq[0])*sin(q2(t))*sin(q4(t)))*cos(q5(t)))*cos(q6(t)) + (-((1.0/2.0)*M_SQRT2*sin(q1(t)) - 1.0/2.0*M_SQRT2*cos(q1(t)))*sin(q2(t))*sin(q4(t))*cos(q3(t))*dq[1] - ((1.0/2.0)*M_SQRT2*sin(q1(t)) - 1.0/2.0*M_SQRT2*cos(q1(t)))*sin(q2(t))*sin(q4(t))*dq[3] - ((1.0/2.0)*M_SQRT2*sin(q1(t)) - 1.0/2.0*M_SQRT2*cos(q1(t)))*sin(q3(t))*sin(q4(t))*cos(q2(t))*dq[2] + ((1.0/2.0)*M_SQRT2*sin(q1(t)) - 1.0/2.0*M_SQRT2*cos(q1(t)))*cos(q2(t))*cos(q3(t))*cos(q4(t))*dq[3] + ((1.0/2.0)*M_SQRT2*sin(q1(t)) - 1.0/2.0*M_SQRT2*cos(q1(t)))*cos(q2(t))*cos(q4(t))*dq[1] + ((1.0/2.0)*M_SQRT2*sin(q1(t))*dq[0] + (1.0/2.0)*M_SQRT2*cos(q1(t))*dq[0])*sin(q2(t))*cos(q4(t)) + ((1.0/2.0)*M_SQRT2*sin(q1(t))*dq[0] + (1.0/2.0)*M_SQRT2*cos(q1(t))*dq[0])*sin(q4(t))*cos(q2(t))*cos(q3(t)))*sin(q6(t));
   out_8288534879187818585[2] = ((-1.0/2.0*M_SQRT2*sin(q1(t)) + (1.0/2.0)*M_SQRT2*cos(q1(t)))*sin(q2(t))*sin(q3(t)) - ((1.0/2.0)*M_SQRT2*sin(q1(t)) + (1.0/2.0)*M_SQRT2*cos(q1(t)))*cos(q3(t)))*sin(q4(t))*cos(q6(t))*dq[5] + ((-1.0/2.0*M_SQRT2*sin(q1(t)) + (1.0/2.0)*M_SQRT2*cos(q1(t)))*sin(q2(t))*sin(q3(t)) - ((1.0/2.0)*M_SQRT2*sin(q1(t)) + (1.0/2.0)*M_SQRT2*cos(q1(t)))*cos(q3(t)))*sin(q6(t))*cos(q4(t))*dq[3] - ((-(-1.0/2.0*M_SQRT2*sin(q1(t)) + (1.0/2.0)*M_SQRT2*cos(q1(t)))*sin(q2(t))*sin(q3(t)) + ((1.0/2.0)*M_SQRT2*sin(q1(t)) + (1.0/2.0)*M_SQRT2*cos(q1(t)))*cos(q3(t)))*cos(q4(t))*cos(q5(t)) + (((1.0/2.0)*M_SQRT2*sin(q1(t)) - 1.0/2.0*M_SQRT2*cos(q1(t)))*sin(q2(t))*cos(q3(t)) - ((1.0/2.0)*M_SQRT2*sin(q1(t)) + (1.0/2.0)*M_SQRT2*cos(q1(t)))*sin(q3(t)))*sin(q5(t)))*sin(q6(t))*dq[5] + (-((1.0/2.0)*M_SQRT2*sin(q1(t)) - 1.0/2.0*M_SQRT2*cos(q1(t)))*sin(q2(t))*cos(q3(t))*dq[2] - ((1.0/2.0)*M_SQRT2*sin(q1(t)) - 1.0/2.0*M_SQRT2*cos(q1(t)))*sin(q3(t))*cos(q2(t))*dq[1] + ((1.0/2.0)*M_SQRT2*sin(q1(t)) + (1.0/2.0)*M_SQRT2*cos(q1(t)))*sin(q3(t))*dq[2] - (-1.0/2.0*M_SQRT2*sin(q1(t))*dq[0] + (1.0/2.0)*M_SQRT2*cos(q1(t))*dq[0])*cos(q3(t)) - ((1.0/2.0)*M_SQRT2*sin(q1(t))*dq[0] + (1.0/2.0)*M_SQRT2*cos(q1(t))*dq[0])*sin(q2(t))*sin(q3(t)))*sin(q4(t))*sin(q6(t)) + (-(-(-1.0/2.0*M_SQRT2*sin(q1(t)) + (1.0/2.0)*M_SQRT2*cos(q1(t)))*sin(q2(t))*sin(q3(t)) + ((1.0/2.0)*M_SQRT2*sin(q1(t)) + (1.0/2.0)*M_SQRT2*cos(q1(t)))*cos(q3(t)))*sin(q4(t))*cos(q5(t))*dq[3] - (-(-1.0/2.0*M_SQRT2*sin(q1(t)) + (1.0/2.0)*M_SQRT2*cos(q1(t)))*sin(q2(t))*sin(q3(t)) + ((1.0/2.0)*M_SQRT2*sin(q1(t)) + (1.0/2.0)*M_SQRT2*cos(q1(t)))*cos(q3(t)))*sin(q5(t))*cos(q4(t))*dq[4] + (((1.0/2.0)*M_SQRT2*sin(q1(t)) - 1.0/2.0*M_SQRT2*cos(q1(t)))*sin(q2(t))*cos(q3(t)) - ((1.0/2.0)*M_SQRT2*sin(q1(t)) + (1.0/2.0)*M_SQRT2*cos(q1(t)))*sin(q3(t)))*cos(q5(t))*dq[4] + ((-1.0/2.0*M_SQRT2*sin(q1(t)) - 1.0/2.0*M_SQRT2*cos(q1(t)))*cos(q3(t))*dq[2] - ((1.0/2.0)*M_SQRT2*sin(q1(t)) - 1.0/2.0*M_SQRT2*cos(q1(t)))*sin(q2(t))*sin(q3(t))*dq[2] + ((1.0/2.0)*M_SQRT2*sin(q1(t)) - 1.0/2.0*M_SQRT2*cos(q1(t)))*cos(q2(t))*cos(q3(t))*dq[1] + ((1.0/2.0)*M_SQRT2*sin(q1(t))*dq[0] - 1.0/2.0*M_SQRT2*cos(q1(t))*dq[0])*sin(q3(t)) + ((1.0/2.0)*M_SQRT2*sin(q1(t))*dq[0] + (1.0/2.0)*M_SQRT2*cos(q1(t))*dq[0])*sin(q2(t))*cos(q3(t)))*sin(q5(t)) + (((1.0/2.0)*M_SQRT2*sin(q1(t)) - 1.0/2.0*M_SQRT2*cos(q1(t)))*sin(q2(t))*cos(q3(t))*dq[2] + ((1.0/2.0)*M_SQRT2*sin(q1(t)) - 1.0/2.0*M_SQRT2*cos(q1(t)))*sin(q3(t))*cos(q2(t))*dq[1] - ((1.0/2.0)*M_SQRT2*sin(q1(t)) + (1.0/2.0)*M_SQRT2*cos(q1(t)))*sin(q3(t))*dq[2] + (-1.0/2.0*M_SQRT2*sin(q1(t))*dq[0] + (1.0/2.0)*M_SQRT2*cos(q1(t))*dq[0])*cos(q3(t)) + ((1.0/2.0)*M_SQRT2*sin(q1(t))*dq[0] + (1.0/2.0)*M_SQRT2*cos(q1(t))*dq[0])*sin(q2(t))*sin(q3(t)))*cos(q4(t))*cos(q5(t)))*cos(q6(t));
   out_8288534879187818585[3] = -((-1.0/2.0*M_SQRT2*sin(q1(t)) + (1.0/2.0)*M_SQRT2*cos(q1(t)))*cos(q2(t))*cos(q4(t)) - (-((1.0/2.0)*M_SQRT2*sin(q1(t)) - 1.0/2.0*M_SQRT2*cos(q1(t)))*sin(q2(t))*cos(q3(t)) + ((1.0/2.0)*M_SQRT2*sin(q1(t)) + (1.0/2.0)*M_SQRT2*cos(q1(t)))*sin(q3(t)))*sin(q4(t)))*sin(q5(t))*cos(q6(t))*dq[4] - ((-1.0/2.0*M_SQRT2*sin(q1(t)) + (1.0/2.0)*M_SQRT2*cos(q1(t)))*cos(q2(t))*cos(q4(t)) - (-((1.0/2.0)*M_SQRT2*sin(q1(t)) - 1.0/2.0*M_SQRT2*cos(q1(t)))*sin(q2(t))*cos(q3(t)) + ((1.0/2.0)*M_SQRT2*sin(q1(t)) + (1.0/2.0)*M_SQRT2*cos(q1(t)))*sin(q3(t)))*sin(q4(t)))*sin(q6(t))*cos(q5(t))*dq[5] + (((1.0/2.0)*M_SQRT2*sin(q1(t)) - 1.0/2.0*M_SQRT2*cos(q1(t)))*sin(q4(t))*cos(q2(t)) - (-((1.0/2.0)*M_SQRT2*sin(q1(t)) - 1.0/2.0*M_SQRT2*cos(q1(t)))*sin(q2(t))*cos(q3(t)) + ((1.0/2.0)*M_SQRT2*sin(q1(t)) + (1.0/2.0)*M_SQRT2*cos(q1(t)))*sin(q3(t)))*cos(q4(t)))*cos(q6(t))*dq[5] + (-(-1.0/2.0*M_SQRT2*sin(q1(t)) + (1.0/2.0)*M_SQRT2*cos(q1(t)))*sin(q2(t))*cos(q4(t))*dq[1] - (-1.0/2.0*M_SQRT2*sin(q1(t)) + (1.0/2.0)*M_SQRT2*cos(q1(t)))*sin(q4(t))*cos(q2(t))*dq[3] + (-1.0/2.0*M_SQRT2*sin(q1(t))*dq[0] - 1.0/2.0*M_SQRT2*cos(q1(t))*dq[0])*cos(q2(t))*cos(q4(t)) + (((1.0/2.0)*M_SQRT2*sin(q1(t)) - 1.0/2.0*M_SQRT2*cos(q1(t)))*sin(q2(t))*cos(q3(t)) - ((1.0/2.0)*M_SQRT2*sin(q1(t)) + (1.0/2.0)*M_SQRT2*cos(q1(t)))*sin(q3(t)))*cos(q4(t))*dq[3] + ((-1.0/2.0*M_SQRT2*sin(q1(t)) + (1.0/2.0)*M_SQRT2*cos(q1(t)))*sin(q2(t))*sin(q3(t))*dq[2] - (-1.0/2.0*M_SQRT2*sin(q1(t)) + (1.0/2.0)*M_SQRT2*cos(q1(t)))*cos(q2(t))*cos(q3(t))*dq[1] - ((1.0/2.0)*M_SQRT2*sin(q1(t)) + (1.0/2.0)*M_SQRT2*cos(q1(t)))*cos(q3(t))*dq[2] - (-1.0/2.0*M_SQRT2*sin(q1(t))*dq[0] - 1.0/2.0*M_SQRT2*cos(q1(t))*dq[0])*sin(q2(t))*cos(q3(t)) - (-1.0/2.0*M_SQRT2*sin(q1(t))*dq[0] + (1.0/2.0)*M_SQRT2*cos(q1(t))*dq[0])*sin(q3(t)))*sin(q4(t)))*cos(q5(t))*cos(q6(t)) + (-((1.0/2.0)*M_SQRT2*sin(q1(t)) - 1.0/2.0*M_SQRT2*cos(q1(t)))*sin(q2(t))*sin(q4(t))*dq[1] + ((1.0/2.0)*M_SQRT2*sin(q1(t)) - 1.0/2.0*M_SQRT2*cos(q1(t)))*cos(q2(t))*cos(q4(t))*dq[3] + ((1.0/2.0)*M_SQRT2*sin(q1(t))*dq[0] + (1.0/2.0)*M_SQRT2*cos(q1(t))*dq[0])*sin(q4(t))*cos(q2(t)) - (((1.0/2.0)*M_SQRT2*sin(q1(t)) - 1.0/2.0*M_SQRT2*cos(q1(t)))*sin(q2(t))*cos(q3(t)) - ((1.0/2.0)*M_SQRT2*sin(q1(t)) + (1.0/2.0)*M_SQRT2*cos(q1(t)))*sin(q3(t)))*sin(q4(t))*dq[3] + ((-1.0/2.0*M_SQRT2*sin(q1(t)) + (1.0/2.0)*M_SQRT2*cos(q1(t)))*sin(q2(t))*sin(q3(t))*dq[2] - (-1.0/2.0*M_SQRT2*sin(q1(t)) + (1.0/2.0)*M_SQRT2*cos(q1(t)))*cos(q2(t))*cos(q3(t))*dq[1] - ((1.0/2.0)*M_SQRT2*sin(q1(t)) + (1.0/2.0)*M_SQRT2*cos(q1(t)))*cos(q3(t))*dq[2] - (-1.0/2.0*M_SQRT2*sin(q1(t))*dq[0] - 1.0/2.0*M_SQRT2*cos(q1(t))*dq[0])*sin(q2(t))*cos(q3(t)) - (-1.0/2.0*M_SQRT2*sin(q1(t))*dq[0] + (1.0/2.0)*M_SQRT2*cos(q1(t))*dq[0])*sin(q3(t)))*cos(q4(t)))*sin(q6(t));
   out_8288534879187818585[4] = -((((1.0/2.0)*M_SQRT2*sin(q1(t)) - 1.0/2.0*M_SQRT2*cos(q1(t)))*sin(q2(t))*sin(q3(t)) + ((1.0/2.0)*M_SQRT2*sin(q1(t)) + (1.0/2.0)*M_SQRT2*cos(q1(t)))*cos(q3(t)))*cos(q5(t)) - (-((1.0/2.0)*M_SQRT2*sin(q1(t)) - 1.0/2.0*M_SQRT2*cos(q1(t)))*sin(q4(t))*cos(q2(t)) + (-((1.0/2.0)*M_SQRT2*sin(q1(t)) - 1.0/2.0*M_SQRT2*cos(q1(t)))*sin(q2(t))*cos(q3(t)) + ((1.0/2.0)*M_SQRT2*sin(q1(t)) + (1.0/2.0)*M_SQRT2*cos(q1(t)))*sin(q3(t)))*cos(q4(t)))*sin(q5(t)))*sin(q6(t))*dq[5] + (-(((1.0/2.0)*M_SQRT2*sin(q1(t)) - 1.0/2.0*M_SQRT2*cos(q1(t)))*sin(q2(t))*sin(q3(t)) + ((1.0/2.0)*M_SQRT2*sin(q1(t)) + (1.0/2.0)*M_SQRT2*cos(q1(t)))*cos(q3(t)))*sin(q5(t))*dq[4] + (((1.0/2.0)*M_SQRT2*sin(q1(t)) - 1.0/2.0*M_SQRT2*cos(q1(t)))*sin(q4(t))*cos(q2(t)) - (-((1.0/2.0)*M_SQRT2*sin(q1(t)) - 1.0/2.0*M_SQRT2*cos(q1(t)))*sin(q2(t))*cos(q3(t)) + ((1.0/2.0)*M_SQRT2*sin(q1(t)) + (1.0/2.0)*M_SQRT2*cos(q1(t)))*sin(q3(t)))*cos(q4(t)))*cos(q5(t))*dq[4] + ((-1.0/2.0*M_SQRT2*sin(q1(t)) + (1.0/2.0)*M_SQRT2*cos(q1(t)))*sin(q2(t))*sin(q4(t))*dq[1] - (-1.0/2.0*M_SQRT2*sin(q1(t)) + (1.0/2.0)*M_SQRT2*cos(q1(t)))*cos(q2(t))*cos(q4(t))*dq[3] - (-1.0/2.0*M_SQRT2*sin(q1(t))*dq[0] - 1.0/2.0*M_SQRT2*cos(q1(t))*dq[0])*sin(q4(t))*cos(q2(t)) + (-((1.0/2.0)*M_SQRT2*sin(q1(t)) - 1.0/2.0*M_SQRT2*cos(q1(t)))*sin(q2(t))*cos(q3(t)) + ((1.0/2.0)*M_SQRT2*sin(q1(t)) + (1.0/2.0)*M_SQRT2*cos(q1(t)))*sin(q3(t)))*sin(q4(t))*dq[3] - (-(-1.0/2.0*M_SQRT2*sin(q1(t)) + (1.0/2.0)*M_SQRT2*cos(q1(t)))*sin(q2(t))*sin(q3(t))*dq[2] + (-1.0/2.0*M_SQRT2*sin(q1(t)) + (1.0/2.0)*M_SQRT2*cos(q1(t)))*cos(q2(t))*cos(q3(t))*dq[1] + ((1.0/2.0)*M_SQRT2*sin(q1(t)) + (1.0/2.0)*M_SQRT2*cos(q1(t)))*cos(q3(t))*dq[2] + (-1.0/2.0*M_SQRT2*sin(q1(t))*dq[0] - 1.0/2.0*M_SQRT2*cos(q1(t))*dq[0])*sin(q2(t))*cos(q3(t)) + (-1.0/2.0*M_SQRT2*sin(q1(t))*dq[0] + (1.0/2.0)*M_SQRT2*cos(q1(t))*dq[0])*sin(q3(t)))*cos(q4(t)))*sin(q5(t)) + (((1.0/2.0)*M_SQRT2*sin(q1(t)) - 1.0/2.0*M_SQRT2*cos(q1(t)))*sin(q2(t))*cos(q3(t))*dq[2] + ((1.0/2.0)*M_SQRT2*sin(q1(t)) - 1.0/2.0*M_SQRT2*cos(q1(t)))*sin(q3(t))*cos(q2(t))*dq[1] - ((1.0/2.0)*M_SQRT2*sin(q1(t)) + (1.0/2.0)*M_SQRT2*cos(q1(t)))*sin(q3(t))*dq[2] + (-1.0/2.0*M_SQRT2*sin(q1(t))*dq[0] + (1.0/2.0)*M_SQRT2*cos(q1(t))*dq[0])*cos(q3(t)) + ((1.0/2.0)*M_SQRT2*sin(q1(t))*dq[0] + (1.0/2.0)*M_SQRT2*cos(q1(t))*dq[0])*sin(q2(t))*sin(q3(t)))*cos(q5(t)))*cos(q6(t));
   out_8288534879187818585[5] = (-(((1.0/2.0)*M_SQRT2*sin(q1(t)) - 1.0/2.0*M_SQRT2*cos(q1(t)))*sin(q2(t))*sin(q3(t)) + ((1.0/2.0)*M_SQRT2*sin(q1(t)) + (1.0/2.0)*M_SQRT2*cos(q1(t)))*cos(q3(t)))*sin(q5(t)) - (-((1.0/2.0)*M_SQRT2*sin(q1(t)) - 1.0/2.0*M_SQRT2*cos(q1(t)))*sin(q4(t))*cos(q2(t)) + (-((1.0/2.0)*M_SQRT2*sin(q1(t)) - 1.0/2.0*M_SQRT2*cos(q1(t)))*sin(q2(t))*cos(q3(t)) + ((1.0/2.0)*M_SQRT2*sin(q1(t)) + (1.0/2.0)*M_SQRT2*cos(q1(t)))*sin(q3(t)))*cos(q4(t)))*cos(q5(t)))*cos(q6(t))*dq[5] - (-((1.0/2.0)*M_SQRT2*sin(q1(t)) - 1.0/2.0*M_SQRT2*cos(q1(t)))*cos(q2(t))*cos(q4(t)) - (-((1.0/2.0)*M_SQRT2*sin(q1(t)) - 1.0/2.0*M_SQRT2*cos(q1(t)))*sin(q2(t))*cos(q3(t)) + ((1.0/2.0)*M_SQRT2*sin(q1(t)) + (1.0/2.0)*M_SQRT2*cos(q1(t)))*sin(q3(t)))*sin(q4(t)))*sin(q6(t))*dq[5] + (-(((1.0/2.0)*M_SQRT2*sin(q1(t)) - 1.0/2.0*M_SQRT2*cos(q1(t)))*sin(q2(t))*sin(q3(t)) + ((1.0/2.0)*M_SQRT2*sin(q1(t)) + (1.0/2.0)*M_SQRT2*cos(q1(t)))*cos(q3(t)))*cos(q5(t))*dq[4] + (-((1.0/2.0)*M_SQRT2*sin(q1(t)) - 1.0/2.0*M_SQRT2*cos(q1(t)))*sin(q4(t))*cos(q2(t)) + (-((1.0/2.0)*M_SQRT2*sin(q1(t)) - 1.0/2.0*M_SQRT2*cos(q1(t)))*sin(q2(t))*cos(q3(t)) + ((1.0/2.0)*M_SQRT2*sin(q1(t)) + (1.0/2.0)*M_SQRT2*cos(q1(t)))*sin(q3(t)))*cos(q4(t)))*sin(q5(t))*dq[4] - (-(-1.0/2.0*M_SQRT2*sin(q1(t)) + (1.0/2.0)*M_SQRT2*cos(q1(t)))*sin(q2(t))*sin(q4(t))*dq[1] + (-1.0/2.0*M_SQRT2*sin(q1(t)) + (1.0/2.0)*M_SQRT2*cos(q1(t)))*cos(q2(t))*cos(q4(t))*dq[3] + (-1.0/2.0*M_SQRT2*sin(q1(t))*dq[0] - 1.0/2.0*M_SQRT2*cos(q1(t))*dq[0])*sin(q4(t))*cos(q2(t)) - (-((1.0/2.0)*M_SQRT2*sin(q1(t)) - 1.0/2.0*M_SQRT2*cos(q1(t)))*sin(q2(t))*cos(q3(t)) + ((1.0/2.0)*M_SQRT2*sin(q1(t)) + (1.0/2.0)*M_SQRT2*cos(q1(t)))*sin(q3(t)))*sin(q4(t))*dq[3] + (-(-1.0/2.0*M_SQRT2*sin(q1(t)) + (1.0/2.0)*M_SQRT2*cos(q1(t)))*sin(q2(t))*sin(q3(t))*dq[2] + (-1.0/2.0*M_SQRT2*sin(q1(t)) + (1.0/2.0)*M_SQRT2*cos(q1(t)))*cos(q2(t))*cos(q3(t))*dq[1] + ((1.0/2.0)*M_SQRT2*sin(q1(t)) + (1.0/2.0)*M_SQRT2*cos(q1(t)))*cos(q3(t))*dq[2] + (-1.0/2.0*M_SQRT2*sin(q1(t))*dq[0] - 1.0/2.0*M_SQRT2*cos(q1(t))*dq[0])*sin(q2(t))*cos(q3(t)) + (-1.0/2.0*M_SQRT2*sin(q1(t))*dq[0] + (1.0/2.0)*M_SQRT2*cos(q1(t))*dq[0])*sin(q3(t)))*cos(q4(t)))*cos(q5(t)) - (((1.0/2.0)*M_SQRT2*sin(q1(t)) - 1.0/2.0*M_SQRT2*cos(q1(t)))*sin(q2(t))*cos(q3(t))*dq[2] + ((1.0/2.0)*M_SQRT2*sin(q1(t)) - 1.0/2.0*M_SQRT2*cos(q1(t)))*sin(q3(t))*cos(q2(t))*dq[1] - ((1.0/2.0)*M_SQRT2*sin(q1(t)) + (1.0/2.0)*M_SQRT2*cos(q1(t)))*sin(q3(t))*dq[2] + (-1.0/2.0*M_SQRT2*sin(q1(t))*dq[0] + (1.0/2.0)*M_SQRT2*cos(q1(t))*dq[0])*cos(q3(t)) + ((1.0/2.0)*M_SQRT2*sin(q1(t))*dq[0] + (1.0/2.0)*M_SQRT2*cos(q1(t))*dq[0])*sin(q2(t))*sin(q3(t)))*sin(q5(t)))*sin(q6(t)) + (-(-1.0/2.0*M_SQRT2*sin(q1(t)) + (1.0/2.0)*M_SQRT2*cos(q1(t)))*sin(q2(t))*cos(q4(t))*dq[1] - (-1.0/2.0*M_SQRT2*sin(q1(t)) + (1.0/2.0)*M_SQRT2*cos(q1(t)))*sin(q4(t))*cos(q2(t))*dq[3] + (-1.0/2.0*M_SQRT2*sin(q1(t))*dq[0] - 1.0/2.0*M_SQRT2*cos(q1(t))*dq[0])*cos(q2(t))*cos(q4(t)) + (((1.0/2.0)*M_SQRT2*sin(q1(t)) - 1.0/2.0*M_SQRT2*cos(q1(t)))*sin(q2(t))*cos(q3(t)) - ((1.0/2.0)*M_SQRT2*sin(q1(t)) + (1.0/2.0)*M_SQRT2*cos(q1(t)))*sin(q3(t)))*cos(q4(t))*dq[3] + ((-1.0/2.0*M_SQRT2*sin(q1(t)) + (1.0/2.0)*M_SQRT2*cos(q1(t)))*sin(q2(t))*sin(q3(t))*dq[2] - (-1.0/2.0*M_SQRT2*sin(q1(t)) + (1.0/2.0)*M_SQRT2*cos(q1(t)))*cos(q2(t))*cos(q3(t))*dq[1] - ((1.0/2.0)*M_SQRT2*sin(q1(t)) + (1.0/2.0)*M_SQRT2*cos(q1(t)))*cos(q3(t))*dq[2] - (-1.0/2.0*M_SQRT2*sin(q1(t))*dq[0] - 1.0/2.0*M_SQRT2*cos(q1(t))*dq[0])*sin(q2(t))*cos(q3(t)) - (-1.0/2.0*M_SQRT2*sin(q1(t))*dq[0] + (1.0/2.0)*M_SQRT2*cos(q1(t))*dq[0])*sin(q3(t)))*sin(q4(t)))*cos(q6(t));
   out_8288534879187818585[6] = 0;
   out_8288534879187818585[7] = -(((-1.0/2.0*M_SQRT2*sin(q1(t)) + (1.0/2.0)*M_SQRT2*cos(q1(t)))*sin(q4(t))*cos(q2(t)) + ((-1.0/2.0*M_SQRT2*sin(q1(t)) + (1.0/2.0)*M_SQRT2*cos(q1(t)))*sin(q2(t))*cos(q3(t)) + ((1.0/2.0)*M_SQRT2*sin(q1(t)) + (1.0/2.0)*M_SQRT2*cos(q1(t)))*sin(q3(t)))*cos(q4(t)))*cos(q5(t)) + (((1.0/2.0)*M_SQRT2*sin(q1(t)) - 1.0/2.0*M_SQRT2*cos(q1(t)))*sin(q2(t))*sin(q3(t)) + ((1.0/2.0)*M_SQRT2*sin(q1(t)) + (1.0/2.0)*M_SQRT2*cos(q1(t)))*cos(q3(t)))*sin(q5(t)))*sin(q6(t))*dq[5] + (-((1.0/2.0)*M_SQRT2*sin(q1(t)) - 1.0/2.0*M_SQRT2*cos(q1(t)))*cos(q2(t))*cos(q4(t)) - ((-1.0/2.0*M_SQRT2*sin(q1(t)) + (1.0/2.0)*M_SQRT2*cos(q1(t)))*sin(q2(t))*cos(q3(t)) + ((1.0/2.0)*M_SQRT2*sin(q1(t)) + (1.0/2.0)*M_SQRT2*cos(q1(t)))*sin(q3(t)))*sin(q4(t)))*cos(q6(t))*dq[5] + (-((-1.0/2.0*M_SQRT2*sin(q1(t)) + (1.0/2.0)*M_SQRT2*cos(q1(t)))*sin(q4(t))*cos(q2(t)) + ((-1.0/2.0*M_SQRT2*sin(q1(t)) + (1.0/2.0)*M_SQRT2*cos(q1(t)))*sin(q2(t))*cos(q3(t)) + ((1.0/2.0)*M_SQRT2*sin(q1(t)) + (1.0/2.0)*M_SQRT2*cos(q1(t)))*sin(q3(t)))*cos(q4(t)))*sin(q5(t))*dq[4] + (((1.0/2.0)*M_SQRT2*sin(q1(t)) - 1.0/2.0*M_SQRT2*cos(q1(t)))*sin(q2(t))*sin(q3(t)) + ((1.0/2.0)*M_SQRT2*sin(q1(t)) + (1.0/2.0)*M_SQRT2*cos(q1(t)))*cos(q3(t)))*cos(q5(t))*dq[4] + (-(-1.0/2.0*M_SQRT2*sin(q1(t)) + (1.0/2.0)*M_SQRT2*cos(q1(t)))*sin(q2(t))*sin(q4(t))*dq[1] + (-1.0/2.0*M_SQRT2*sin(q1(t)) + (1.0/2.0)*M_SQRT2*cos(q1(t)))*cos(q2(t))*cos(q4(t))*dq[3] + (-1.0/2.0*M_SQRT2*sin(q1(t))*dq[0] - 1.0/2.0*M_SQRT2*cos(q1(t))*dq[0])*sin(q4(t))*cos(q2(t)) - ((-1.0/2.0*M_SQRT2*sin(q1(t)) + (1.0/2.0)*M_SQRT2*cos(q1(t)))*sin(q2(t))*cos(q3(t)) + ((1.0/2.0)*M_SQRT2*sin(q1(t)) + (1.0/2.0)*M_SQRT2*cos(q1(t)))*sin(q3(t)))*sin(q4(t))*dq[3] + (-(-1.0/2.0*M_SQRT2*sin(q1(t)) + (1.0/2.0)*M_SQRT2*cos(q1(t)))*sin(q2(t))*sin(q3(t))*dq[2] + (-1.0/2.0*M_SQRT2*sin(q1(t)) + (1.0/2.0)*M_SQRT2*cos(q1(t)))*cos(q2(t))*cos(q3(t))*dq[1] + ((1.0/2.0)*M_SQRT2*sin(q1(t)) + (1.0/2.0)*M_SQRT2*cos(q1(t)))*cos(q3(t))*dq[2] + (-1.0/2.0*M_SQRT2*sin(q1(t))*dq[0] - 1.0/2.0*M_SQRT2*cos(q1(t))*dq[0])*sin(q2(t))*cos(q3(t)) + (-1.0/2.0*M_SQRT2*sin(q1(t))*dq[0] + (1.0/2.0)*M_SQRT2*cos(q1(t))*dq[0])*sin(q3(t)))*cos(q4(t)))*cos(q5(t)) + (((1.0/2.0)*M_SQRT2*sin(q1(t)) - 1.0/2.0*M_SQRT2*cos(q1(t)))*sin(q2(t))*cos(q3(t))*dq[2] + ((1.0/2.0)*M_SQRT2*sin(q1(t)) - 1.0/2.0*M_SQRT2*cos(q1(t)))*sin(q3(t))*cos(q2(t))*dq[1] - ((1.0/2.0)*M_SQRT2*sin(q1(t)) + (1.0/2.0)*M_SQRT2*cos(q1(t)))*sin(q3(t))*dq[2] + (-1.0/2.0*M_SQRT2*sin(q1(t))*dq[0] + (1.0/2.0)*M_SQRT2*cos(q1(t))*dq[0])*cos(q3(t)) + ((1.0/2.0)*M_SQRT2*sin(q1(t))*dq[0] + (1.0/2.0)*M_SQRT2*cos(q1(t))*dq[0])*sin(q2(t))*sin(q3(t)))*sin(q5(t)))*cos(q6(t)) + (-(-1.0/2.0*M_SQRT2*sin(q1(t)) + (1.0/2.0)*M_SQRT2*cos(q1(t)))*sin(q2(t))*cos(q4(t))*dq[1] - (-1.0/2.0*M_SQRT2*sin(q1(t)) + (1.0/2.0)*M_SQRT2*cos(q1(t)))*sin(q4(t))*cos(q2(t))*dq[3] + (-1.0/2.0*M_SQRT2*sin(q1(t))*dq[0] - 1.0/2.0*M_SQRT2*cos(q1(t))*dq[0])*cos(q2(t))*cos(q4(t)) + (-(-1.0/2.0*M_SQRT2*sin(q1(t)) + (1.0/2.0)*M_SQRT2*cos(q1(t)))*sin(q2(t))*cos(q3(t)) - ((1.0/2.0)*M_SQRT2*sin(q1(t)) + (1.0/2.0)*M_SQRT2*cos(q1(t)))*sin(q3(t)))*cos(q4(t))*dq[3] + ((-1.0/2.0*M_SQRT2*sin(q1(t)) + (1.0/2.0)*M_SQRT2*cos(q1(t)))*sin(q2(t))*sin(q3(t))*dq[2] - (-1.0/2.0*M_SQRT2*sin(q1(t)) + (1.0/2.0)*M_SQRT2*cos(q1(t)))*cos(q2(t))*cos(q3(t))*dq[1] - ((1.0/2.0)*M_SQRT2*sin(q1(t)) + (1.0/2.0)*M_SQRT2*cos(q1(t)))*cos(q3(t))*dq[2] - (-1.0/2.0*M_SQRT2*sin(q1(t))*dq[0] - 1.0/2.0*M_SQRT2*cos(q1(t))*dq[0])*sin(q2(t))*cos(q3(t)) - (-1.0/2.0*M_SQRT2*sin(q1(t))*dq[0] + (1.0/2.0)*M_SQRT2*cos(q1(t))*dq[0])*sin(q3(t)))*sin(q4(t)))*sin(q6(t));
   out_8288534879187818585[8] = ((-1.0/2.0*M_SQRT2*sin(q1(t)) - 1.0/2.0*M_SQRT2*cos(q1(t)))*sin(q2(t))*cos(q4(t)) - ((1.0/2.0)*M_SQRT2*sin(q1(t)) + (1.0/2.0)*M_SQRT2*cos(q1(t)))*sin(q4(t))*cos(q2(t))*cos(q3(t)))*cos(q6(t))*dq[5] - ((-1.0/2.0*M_SQRT2*sin(q1(t)) - 1.0/2.0*M_SQRT2*cos(q1(t)))*sin(q3(t))*sin(q5(t))*cos(q2(t)) + (-((1.0/2.0)*M_SQRT2*sin(q1(t)) + (1.0/2.0)*M_SQRT2*cos(q1(t)))*sin(q2(t))*sin(q4(t)) + ((1.0/2.0)*M_SQRT2*sin(q1(t)) + (1.0/2.0)*M_SQRT2*cos(q1(t)))*cos(q2(t))*cos(q3(t))*cos(q4(t)))*cos(q5(t)))*sin(q6(t))*dq[5] + (-(-1.0/2.0*M_SQRT2*sin(q1(t)) - 1.0/2.0*M_SQRT2*cos(q1(t)))*sin(q2(t))*sin(q3(t))*sin(q5(t))*dq[1] + (-1.0/2.0*M_SQRT2*sin(q1(t)) - 1.0/2.0*M_SQRT2*cos(q1(t)))*sin(q3(t))*cos(q2(t))*cos(q5(t))*dq[4] + (-1.0/2.0*M_SQRT2*sin(q1(t)) - 1.0/2.0*M_SQRT2*cos(q1(t)))*sin(q5(t))*cos(q2(t))*cos(q3(t))*dq[2] + ((1.0/2.0)*M_SQRT2*sin(q1(t))*dq[0] - 1.0/2.0*M_SQRT2*cos(q1(t))*dq[0])*sin(q3(t))*sin(q5(t))*cos(q2(t)) - (-((1.0/2.0)*M_SQRT2*sin(q1(t)) + (1.0/2.0)*M_SQRT2*cos(q1(t)))*sin(q2(t))*sin(q4(t)) + ((1.0/2.0)*M_SQRT2*sin(q1(t)) + (1.0/2.0)*M_SQRT2*cos(q1(t)))*cos(q2(t))*cos(q3(t))*cos(q4(t)))*sin(q5(t))*dq[4] + ((-1.0/2.0*M_SQRT2*sin(q1(t)) - 1.0/2.0*M_SQRT2*cos(q1(t)))*sin(q2(t))*cos(q4(t))*dq[3] + (-1.0/2.0*M_SQRT2*sin(q1(t)) - 1.0/2.0*M_SQRT2*cos(q1(t)))*sin(q4(t))*cos(q2(t))*dq[1] - ((1.0/2.0)*M_SQRT2*sin(q1(t)) + (1.0/2.0)*M_SQRT2*cos(q1(t)))*sin(q2(t))*cos(q3(t))*cos(q4(t))*dq[1] - ((1.0/2.0)*M_SQRT2*sin(q1(t)) + (1.0/2.0)*M_SQRT2*cos(q1(t)))*sin(q3(t))*cos(q2(t))*cos(q4(t))*dq[2] - ((1.0/2.0)*M_SQRT2*sin(q1(t)) + (1.0/2.0)*M_SQRT2*cos(q1(t)))*sin(q4(t))*cos(q2(t))*cos(q3(t))*dq[3] + (-1.0/2.0*M_SQRT2*sin(q1(t))*dq[0] + (1.0/2.0)*M_SQRT2*cos(q1(t))*dq[0])*cos(q2(t))*cos(q3(t))*cos(q4(t)) + ((1.0/2.0)*M_SQRT2*sin(q1(t))*dq[0] - 1.0/2.0*M_SQRT2*cos(q1(t))*dq[0])*sin(q2(t))*sin(q4(t)))*cos(q5(t)))*cos(q6(t)) + (-(-1.0/2.0*M_SQRT2*sin(q1(t)) - 1.0/2.0*M_SQRT2*cos(q1(t)))*sin(q2(t))*sin(q4(t))*cos(q3(t))*dq[1] - (-1.0/2.0*M_SQRT2*sin(q1(t)) - 1.0/2.0*M_SQRT2*cos(q1(t)))*sin(q2(t))*sin(q4(t))*dq[3] - (-1.0/2.0*M_SQRT2*sin(q1(t)) - 1.0/2.0*M_SQRT2*cos(q1(t)))*sin(q3(t))*sin(q4(t))*cos(q2(t))*dq[2] + (-1.0/2.0*M_SQRT2*sin(q1(t)) - 1.0/2.0*M_SQRT2*cos(q1(t)))*cos(q2(t))*cos(q3(t))*cos(q4(t))*dq[3] + (-1.0/2.0*M_SQRT2*sin(q1(t)) - 1.0/2.0*M_SQRT2*cos(q1(t)))*cos(q2(t))*cos(q4(t))*dq[1] + ((1.0/2.0)*M_SQRT2*sin(q1(t))*dq[0] - 1.0/2.0*M_SQRT2*cos(q1(t))*dq[0])*sin(q2(t))*cos(q4(t)) + ((1.0/2.0)*M_SQRT2*sin(q1(t))*dq[0] - 1.0/2.0*M_SQRT2*cos(q1(t))*dq[0])*sin(q4(t))*cos(q2(t))*cos(q3(t)))*sin(q6(t));
   out_8288534879187818585[9] = (-((1.0/2.0)*M_SQRT2*sin(q1(t)) - 1.0/2.0*M_SQRT2*cos(q1(t)))*cos(q3(t)) + ((1.0/2.0)*M_SQRT2*sin(q1(t)) + (1.0/2.0)*M_SQRT2*cos(q1(t)))*sin(q2(t))*sin(q3(t)))*sin(q4(t))*cos(q6(t))*dq[5] + (-((1.0/2.0)*M_SQRT2*sin(q1(t)) - 1.0/2.0*M_SQRT2*cos(q1(t)))*cos(q3(t)) + ((1.0/2.0)*M_SQRT2*sin(q1(t)) + (1.0/2.0)*M_SQRT2*cos(q1(t)))*sin(q2(t))*sin(q3(t)))*sin(q6(t))*cos(q4(t))*dq[3] - ((((1.0/2.0)*M_SQRT2*sin(q1(t)) - 1.0/2.0*M_SQRT2*cos(q1(t)))*cos(q3(t)) - ((1.0/2.0)*M_SQRT2*sin(q1(t)) + (1.0/2.0)*M_SQRT2*cos(q1(t)))*sin(q2(t))*sin(q3(t)))*cos(q4(t))*cos(q5(t)) + ((-1.0/2.0*M_SQRT2*sin(q1(t)) - 1.0/2.0*M_SQRT2*cos(q1(t)))*sin(q2(t))*cos(q3(t)) - ((1.0/2.0)*M_SQRT2*sin(q1(t)) - 1.0/2.0*M_SQRT2*cos(q1(t)))*sin(q3(t)))*sin(q5(t)))*sin(q6(t))*dq[5] + (-(-1.0/2.0*M_SQRT2*sin(q1(t)) - 1.0/2.0*M_SQRT2*cos(q1(t)))*sin(q2(t))*cos(q3(t))*dq[2] - (-1.0/2.0*M_SQRT2*sin(q1(t)) - 1.0/2.0*M_SQRT2*cos(q1(t)))*sin(q3(t))*cos(q2(t))*dq[1] + ((1.0/2.0)*M_SQRT2*sin(q1(t)) - 1.0/2.0*M_SQRT2*cos(q1(t)))*sin(q3(t))*dq[2] - ((1.0/2.0)*M_SQRT2*sin(q1(t))*dq[0] - 1.0/2.0*M_SQRT2*cos(q1(t))*dq[0])*sin(q2(t))*sin(q3(t)) - ((1.0/2.0)*M_SQRT2*sin(q1(t))*dq[0] + (1.0/2.0)*M_SQRT2*cos(q1(t))*dq[0])*cos(q3(t)))*sin(q4(t))*sin(q6(t)) + (-(((1.0/2.0)*M_SQRT2*sin(q1(t)) - 1.0/2.0*M_SQRT2*cos(q1(t)))*cos(q3(t)) - ((1.0/2.0)*M_SQRT2*sin(q1(t)) + (1.0/2.0)*M_SQRT2*cos(q1(t)))*sin(q2(t))*sin(q3(t)))*sin(q4(t))*cos(q5(t))*dq[3] - (((1.0/2.0)*M_SQRT2*sin(q1(t)) - 1.0/2.0*M_SQRT2*cos(q1(t)))*cos(q3(t)) - ((1.0/2.0)*M_SQRT2*sin(q1(t)) + (1.0/2.0)*M_SQRT2*cos(q1(t)))*sin(q2(t))*sin(q3(t)))*sin(q5(t))*cos(q4(t))*dq[4] + ((-1.0/2.0*M_SQRT2*sin(q1(t)) - 1.0/2.0*M_SQRT2*cos(q1(t)))*sin(q2(t))*cos(q3(t)) - ((1.0/2.0)*M_SQRT2*sin(q1(t)) - 1.0/2.0*M_SQRT2*cos(q1(t)))*sin(q3(t)))*cos(q5(t))*dq[4] + (-(-1.0/2.0*M_SQRT2*sin(q1(t)) - 1.0/2.0*M_SQRT2*cos(q1(t)))*sin(q2(t))*sin(q3(t))*dq[2] + (-1.0/2.0*M_SQRT2*sin(q1(t)) - 1.0/2.0*M_SQRT2*cos(q1(t)))*cos(q2(t))*cos(q3(t))*dq[1] + (-1.0/2.0*M_SQRT2*sin(q1(t)) + (1.0/2.0)*M_SQRT2*cos(q1(t)))*cos(q3(t))*dq[2] + (-1.0/2.0*M_SQRT2*sin(q1(t))*dq[0] - 1.0/2.0*M_SQRT2*cos(q1(t))*dq[0])*sin(q3(t)) + ((1.0/2.0)*M_SQRT2*sin(q1(t))*dq[0] - 1.0/2.0*M_SQRT2*cos(q1(t))*dq[0])*sin(q2(t))*cos(q3(t)))*sin(q5(t)) + ((-1.0/2.0*M_SQRT2*sin(q1(t)) - 1.0/2.0*M_SQRT2*cos(q1(t)))*sin(q2(t))*cos(q3(t))*dq[2] + (-1.0/2.0*M_SQRT2*sin(q1(t)) - 1.0/2.0*M_SQRT2*cos(q1(t)))*sin(q3(t))*cos(q2(t))*dq[1] - ((1.0/2.0)*M_SQRT2*sin(q1(t)) - 1.0/2.0*M_SQRT2*cos(q1(t)))*sin(q3(t))*dq[2] + ((1.0/2.0)*M_SQRT2*sin(q1(t))*dq[0] - 1.0/2.0*M_SQRT2*cos(q1(t))*dq[0])*sin(q2(t))*sin(q3(t)) + ((1.0/2.0)*M_SQRT2*sin(q1(t))*dq[0] + (1.0/2.0)*M_SQRT2*cos(q1(t))*dq[0])*cos(q3(t)))*cos(q4(t))*cos(q5(t)))*cos(q6(t));
   out_8288534879187818585[10] = ((-1.0/2.0*M_SQRT2*sin(q1(t)) - 1.0/2.0*M_SQRT2*cos(q1(t)))*sin(q4(t))*cos(q2(t)) - (-(-1.0/2.0*M_SQRT2*sin(q1(t)) - 1.0/2.0*M_SQRT2*cos(q1(t)))*sin(q2(t))*cos(q3(t)) + ((1.0/2.0)*M_SQRT2*sin(q1(t)) - 1.0/2.0*M_SQRT2*cos(q1(t)))*sin(q3(t)))*cos(q4(t)))*cos(q6(t))*dq[5] - (((1.0/2.0)*M_SQRT2*sin(q1(t)) + (1.0/2.0)*M_SQRT2*cos(q1(t)))*cos(q2(t))*cos(q4(t)) - (-(-1.0/2.0*M_SQRT2*sin(q1(t)) - 1.0/2.0*M_SQRT2*cos(q1(t)))*sin(q2(t))*cos(q3(t)) + ((1.0/2.0)*M_SQRT2*sin(q1(t)) - 1.0/2.0*M_SQRT2*cos(q1(t)))*sin(q3(t)))*sin(q4(t)))*sin(q5(t))*cos(q6(t))*dq[4] - (((1.0/2.0)*M_SQRT2*sin(q1(t)) + (1.0/2.0)*M_SQRT2*cos(q1(t)))*cos(q2(t))*cos(q4(t)) - (-(-1.0/2.0*M_SQRT2*sin(q1(t)) - 1.0/2.0*M_SQRT2*cos(q1(t)))*sin(q2(t))*cos(q3(t)) + ((1.0/2.0)*M_SQRT2*sin(q1(t)) - 1.0/2.0*M_SQRT2*cos(q1(t)))*sin(q3(t)))*sin(q4(t)))*sin(q6(t))*cos(q5(t))*dq[5] + (-(-1.0/2.0*M_SQRT2*sin(q1(t)) - 1.0/2.0*M_SQRT2*cos(q1(t)))*sin(q2(t))*sin(q4(t))*dq[1] + (-1.0/2.0*M_SQRT2*sin(q1(t)) - 1.0/2.0*M_SQRT2*cos(q1(t)))*cos(q2(t))*cos(q4(t))*dq[3] + ((1.0/2.0)*M_SQRT2*sin(q1(t))*dq[0] - 1.0/2.0*M_SQRT2*cos(q1(t))*dq[0])*sin(q4(t))*cos(q2(t)) - ((-1.0/2.0*M_SQRT2*sin(q1(t)) - 1.0/2.0*M_SQRT2*cos(q1(t)))*sin(q2(t))*cos(q3(t)) - ((1.0/2.0)*M_SQRT2*sin(q1(t)) - 1.0/2.0*M_SQRT2*cos(q1(t)))*sin(q3(t)))*sin(q4(t))*dq[3] + (-((1.0/2.0)*M_SQRT2*sin(q1(t)) - 1.0/2.0*M_SQRT2*cos(q1(t)))*cos(q3(t))*dq[2] + ((1.0/2.0)*M_SQRT2*sin(q1(t)) + (1.0/2.0)*M_SQRT2*cos(q1(t)))*sin(q2(t))*sin(q3(t))*dq[2] - ((1.0/2.0)*M_SQRT2*sin(q1(t)) + (1.0/2.0)*M_SQRT2*cos(q1(t)))*cos(q2(t))*cos(q3(t))*dq[1] - (-1.0/2.0*M_SQRT2*sin(q1(t))*dq[0] + (1.0/2.0)*M_SQRT2*cos(q1(t))*dq[0])*sin(q2(t))*cos(q3(t)) - ((1.0/2.0)*M_SQRT2*sin(q1(t))*dq[0] + (1.0/2.0)*M_SQRT2*cos(q1(t))*dq[0])*sin(q3(t)))*cos(q4(t)))*sin(q6(t)) + (-((1.0/2.0)*M_SQRT2*sin(q1(t)) + (1.0/2.0)*M_SQRT2*cos(q1(t)))*sin(q2(t))*cos(q4(t))*dq[1] - ((1.0/2.0)*M_SQRT2*sin(q1(t)) + (1.0/2.0)*M_SQRT2*cos(q1(t)))*sin(q4(t))*cos(q2(t))*dq[3] + (-1.0/2.0*M_SQRT2*sin(q1(t))*dq[0] + (1.0/2.0)*M_SQRT2*cos(q1(t))*dq[0])*cos(q2(t))*cos(q4(t)) + ((-1.0/2.0*M_SQRT2*sin(q1(t)) - 1.0/2.0*M_SQRT2*cos(q1(t)))*sin(q2(t))*cos(q3(t)) - ((1.0/2.0)*M_SQRT2*sin(q1(t)) - 1.0/2.0*M_SQRT2*cos(q1(t)))*sin(q3(t)))*cos(q4(t))*dq[3] + (-((1.0/2.0)*M_SQRT2*sin(q1(t)) - 1.0/2.0*M_SQRT2*cos(q1(t)))*cos(q3(t))*dq[2] + ((1.0/2.0)*M_SQRT2*sin(q1(t)) + (1.0/2.0)*M_SQRT2*cos(q1(t)))*sin(q2(t))*sin(q3(t))*dq[2] - ((1.0/2.0)*M_SQRT2*sin(q1(t)) + (1.0/2.0)*M_SQRT2*cos(q1(t)))*cos(q2(t))*cos(q3(t))*dq[1] - (-1.0/2.0*M_SQRT2*sin(q1(t))*dq[0] + (1.0/2.0)*M_SQRT2*cos(q1(t))*dq[0])*sin(q2(t))*cos(q3(t)) - ((1.0/2.0)*M_SQRT2*sin(q1(t))*dq[0] + (1.0/2.0)*M_SQRT2*cos(q1(t))*dq[0])*sin(q3(t)))*sin(q4(t)))*cos(q5(t))*cos(q6(t));
   out_8288534879187818585[11] = -(((-1.0/2.0*M_SQRT2*sin(q1(t)) - 1.0/2.0*M_SQRT2*cos(q1(t)))*sin(q2(t))*sin(q3(t)) + ((1.0/2.0)*M_SQRT2*sin(q1(t)) - 1.0/2.0*M_SQRT2*cos(q1(t)))*cos(q3(t)))*cos(q5(t)) - (-(-1.0/2.0*M_SQRT2*sin(q1(t)) - 1.0/2.0*M_SQRT2*cos(q1(t)))*sin(q4(t))*cos(q2(t)) + (-(-1.0/2.0*M_SQRT2*sin(q1(t)) - 1.0/2.0*M_SQRT2*cos(q1(t)))*sin(q2(t))*cos(q3(t)) + ((1.0/2.0)*M_SQRT2*sin(q1(t)) - 1.0/2.0*M_SQRT2*cos(q1(t)))*sin(q3(t)))*cos(q4(t)))*sin(q5(t)))*sin(q6(t))*dq[5] + (-((-1.0/2.0*M_SQRT2*sin(q1(t)) - 1.0/2.0*M_SQRT2*cos(q1(t)))*sin(q2(t))*sin(q3(t)) + ((1.0/2.0)*M_SQRT2*sin(q1(t)) - 1.0/2.0*M_SQRT2*cos(q1(t)))*cos(q3(t)))*sin(q5(t))*dq[4] + ((-1.0/2.0*M_SQRT2*sin(q1(t)) - 1.0/2.0*M_SQRT2*cos(q1(t)))*sin(q4(t))*cos(q2(t)) - (-(-1.0/2.0*M_SQRT2*sin(q1(t)) - 1.0/2.0*M_SQRT2*cos(q1(t)))*sin(q2(t))*cos(q3(t)) + ((1.0/2.0)*M_SQRT2*sin(q1(t)) - 1.0/2.0*M_SQRT2*cos(q1(t)))*sin(q3(t)))*cos(q4(t)))*cos(q5(t))*dq[4] + ((-1.0/2.0*M_SQRT2*sin(q1(t)) - 1.0/2.0*M_SQRT2*cos(q1(t)))*sin(q2(t))*cos(q3(t))*dq[2] + (-1.0/2.0*M_SQRT2*sin(q1(t)) - 1.0/2.0*M_SQRT2*cos(q1(t)))*sin(q3(t))*cos(q2(t))*dq[1] - ((1.0/2.0)*M_SQRT2*sin(q1(t)) - 1.0/2.0*M_SQRT2*cos(q1(t)))*sin(q3(t))*dq[2] + ((1.0/2.0)*M_SQRT2*sin(q1(t))*dq[0] - 1.0/2.0*M_SQRT2*cos(q1(t))*dq[0])*sin(q2(t))*sin(q3(t)) + ((1.0/2.0)*M_SQRT2*sin(q1(t))*dq[0] + (1.0/2.0)*M_SQRT2*cos(q1(t))*dq[0])*cos(q3(t)))*cos(q5(t)) + (((1.0/2.0)*M_SQRT2*sin(q1(t)) + (1.0/2.0)*M_SQRT2*cos(q1(t)))*sin(q2(t))*sin(q4(t))*dq[1] - ((1.0/2.0)*M_SQRT2*sin(q1(t)) + (1.0/2.0)*M_SQRT2*cos(q1(t)))*cos(q2(t))*cos(q4(t))*dq[3] - (-1.0/2.0*M_SQRT2*sin(q1(t))*dq[0] + (1.0/2.0)*M_SQRT2*cos(q1(t))*dq[0])*sin(q4(t))*cos(q2(t)) + (-(-1.0/2.0*M_SQRT2*sin(q1(t)) - 1.0/2.0*M_SQRT2*cos(q1(t)))*sin(q2(t))*cos(q3(t)) + ((1.0/2.0)*M_SQRT2*sin(q1(t)) - 1.0/2.0*M_SQRT2*cos(q1(t)))*sin(q3(t)))*sin(q4(t))*dq[3] - (((1.0/2.0)*M_SQRT2*sin(q1(t)) - 1.0/2.0*M_SQRT2*cos(q1(t)))*cos(q3(t))*dq[2] - ((1.0/2.0)*M_SQRT2*sin(q1(t)) + (1.0/2.0)*M_SQRT2*cos(q1(t)))*sin(q2(t))*sin(q3(t))*dq[2] + ((1.0/2.0)*M_SQRT2*sin(q1(t)) + (1.0/2.0)*M_SQRT2*cos(q1(t)))*cos(q2(t))*cos(q3(t))*dq[1] + (-1.0/2.0*M_SQRT2*sin(q1(t))*dq[0] + (1.0/2.0)*M_SQRT2*cos(q1(t))*dq[0])*sin(q2(t))*cos(q3(t)) + ((1.0/2.0)*M_SQRT2*sin(q1(t))*dq[0] + (1.0/2.0)*M_SQRT2*cos(q1(t))*dq[0])*sin(q3(t)))*cos(q4(t)))*sin(q5(t)))*cos(q6(t));
   out_8288534879187818585[12] = (-((-1.0/2.0*M_SQRT2*sin(q1(t)) - 1.0/2.0*M_SQRT2*cos(q1(t)))*sin(q2(t))*sin(q3(t)) + ((1.0/2.0)*M_SQRT2*sin(q1(t)) - 1.0/2.0*M_SQRT2*cos(q1(t)))*cos(q3(t)))*sin(q5(t)) - (-(-1.0/2.0*M_SQRT2*sin(q1(t)) - 1.0/2.0*M_SQRT2*cos(q1(t)))*sin(q4(t))*cos(q2(t)) + (-(-1.0/2.0*M_SQRT2*sin(q1(t)) - 1.0/2.0*M_SQRT2*cos(q1(t)))*sin(q2(t))*cos(q3(t)) + ((1.0/2.0)*M_SQRT2*sin(q1(t)) - 1.0/2.0*M_SQRT2*cos(q1(t)))*sin(q3(t)))*cos(q4(t)))*cos(q5(t)))*cos(q6(t))*dq[5] - (-(-1.0/2.0*M_SQRT2*sin(q1(t)) - 1.0/2.0*M_SQRT2*cos(q1(t)))*cos(q2(t))*cos(q4(t)) - (-(-1.0/2.0*M_SQRT2*sin(q1(t)) - 1.0/2.0*M_SQRT2*cos(q1(t)))*sin(q2(t))*cos(q3(t)) + ((1.0/2.0)*M_SQRT2*sin(q1(t)) - 1.0/2.0*M_SQRT2*cos(q1(t)))*sin(q3(t)))*sin(q4(t)))*sin(q6(t))*dq[5] + (-((-1.0/2.0*M_SQRT2*sin(q1(t)) - 1.0/2.0*M_SQRT2*cos(q1(t)))*sin(q2(t))*sin(q3(t)) + ((1.0/2.0)*M_SQRT2*sin(q1(t)) - 1.0/2.0*M_SQRT2*cos(q1(t)))*cos(q3(t)))*cos(q5(t))*dq[4] + (-(-1.0/2.0*M_SQRT2*sin(q1(t)) - 1.0/2.0*M_SQRT2*cos(q1(t)))*sin(q4(t))*cos(q2(t)) + (-(-1.0/2.0*M_SQRT2*sin(q1(t)) - 1.0/2.0*M_SQRT2*cos(q1(t)))*sin(q2(t))*cos(q3(t)) + ((1.0/2.0)*M_SQRT2*sin(q1(t)) - 1.0/2.0*M_SQRT2*cos(q1(t)))*sin(q3(t)))*cos(q4(t)))*sin(q5(t))*dq[4] - ((-1.0/2.0*M_SQRT2*sin(q1(t)) - 1.0/2.0*M_SQRT2*cos(q1(t)))*sin(q2(t))*cos(q3(t))*dq[2] + (-1.0/2.0*M_SQRT2*sin(q1(t)) - 1.0/2.0*M_SQRT2*cos(q1(t)))*sin(q3(t))*cos(q2(t))*dq[1] - ((1.0/2.0)*M_SQRT2*sin(q1(t)) - 1.0/2.0*M_SQRT2*cos(q1(t)))*sin(q3(t))*dq[2] + ((1.0/2.0)*M_SQRT2*sin(q1(t))*dq[0] - 1.0/2.0*M_SQRT2*cos(q1(t))*dq[0])*sin(q2(t))*sin(q3(t)) + ((1.0/2.0)*M_SQRT2*sin(q1(t))*dq[0] + (1.0/2.0)*M_SQRT2*cos(q1(t))*dq[0])*cos(q3(t)))*sin(q5(t)) - (-((1.0/2.0)*M_SQRT2*sin(q1(t)) + (1.0/2.0)*M_SQRT2*cos(q1(t)))*sin(q2(t))*sin(q4(t))*dq[1] + ((1.0/2.0)*M_SQRT2*sin(q1(t)) + (1.0/2.0)*M_SQRT2*cos(q1(t)))*cos(q2(t))*cos(q4(t))*dq[3] + (-1.0/2.0*M_SQRT2*sin(q1(t))*dq[0] + (1.0/2.0)*M_SQRT2*cos(q1(t))*dq[0])*sin(q4(t))*cos(q2(t)) - (-(-1.0/2.0*M_SQRT2*sin(q1(t)) - 1.0/2.0*M_SQRT2*cos(q1(t)))*sin(q2(t))*cos(q3(t)) + ((1.0/2.0)*M_SQRT2*sin(q1(t)) - 1.0/2.0*M_SQRT2*cos(q1(t)))*sin(q3(t)))*sin(q4(t))*dq[3] + (((1.0/2.0)*M_SQRT2*sin(q1(t)) - 1.0/2.0*M_SQRT2*cos(q1(t)))*cos(q3(t))*dq[2] - ((1.0/2.0)*M_SQRT2*sin(q1(t)) + (1.0/2.0)*M_SQRT2*cos(q1(t)))*sin(q2(t))*sin(q3(t))*dq[2] + ((1.0/2.0)*M_SQRT2*sin(q1(t)) + (1.0/2.0)*M_SQRT2*cos(q1(t)))*cos(q2(t))*cos(q3(t))*dq[1] + (-1.0/2.0*M_SQRT2*sin(q1(t))*dq[0] + (1.0/2.0)*M_SQRT2*cos(q1(t))*dq[0])*sin(q2(t))*cos(q3(t)) + ((1.0/2.0)*M_SQRT2*sin(q1(t))*dq[0] + (1.0/2.0)*M_SQRT2*cos(q1(t))*dq[0])*sin(q3(t)))*cos(q4(t)))*cos(q5(t)))*sin(q6(t)) + (-((1.0/2.0)*M_SQRT2*sin(q1(t)) + (1.0/2.0)*M_SQRT2*cos(q1(t)))*sin(q2(t))*cos(q4(t))*dq[1] - ((1.0/2.0)*M_SQRT2*sin(q1(t)) + (1.0/2.0)*M_SQRT2*cos(q1(t)))*sin(q4(t))*cos(q2(t))*dq[3] + (-1.0/2.0*M_SQRT2*sin(q1(t))*dq[0] + (1.0/2.0)*M_SQRT2*cos(q1(t))*dq[0])*cos(q2(t))*cos(q4(t)) + ((-1.0/2.0*M_SQRT2*sin(q1(t)) - 1.0/2.0*M_SQRT2*cos(q1(t)))*sin(q2(t))*cos(q3(t)) - ((1.0/2.0)*M_SQRT2*sin(q1(t)) - 1.0/2.0*M_SQRT2*cos(q1(t)))*sin(q3(t)))*cos(q4(t))*dq[3] + (-((1.0/2.0)*M_SQRT2*sin(q1(t)) - 1.0/2.0*M_SQRT2*cos(q1(t)))*cos(q3(t))*dq[2] + ((1.0/2.0)*M_SQRT2*sin(q1(t)) + (1.0/2.0)*M_SQRT2*cos(q1(t)))*sin(q2(t))*sin(q3(t))*dq[2] - ((1.0/2.0)*M_SQRT2*sin(q1(t)) + (1.0/2.0)*M_SQRT2*cos(q1(t)))*cos(q2(t))*cos(q3(t))*dq[1] - (-1.0/2.0*M_SQRT2*sin(q1(t))*dq[0] + (1.0/2.0)*M_SQRT2*cos(q1(t))*dq[0])*sin(q2(t))*cos(q3(t)) - ((1.0/2.0)*M_SQRT2*sin(q1(t))*dq[0] + (1.0/2.0)*M_SQRT2*cos(q1(t))*dq[0])*sin(q3(t)))*sin(q4(t)))*cos(q6(t));
   out_8288534879187818585[13] = 0;
   out_8288534879187818585[14] = 0;
   out_8288534879187818585[15] = -((sin(q2(t))*cos(q3(t))*cos(q4(t)) + sin(q4(t))*cos(q2(t)))*cos(q5(t)) - sin(q2(t))*sin(q3(t))*sin(q5(t)))*sin(q6(t))*dq[5] + (-sin(q2(t))*sin(q4(t))*cos(q3(t)) + cos(q2(t))*cos(q4(t)))*cos(q6(t))*dq[5] + (-(sin(q2(t))*cos(q3(t))*cos(q4(t)) + sin(q4(t))*cos(q2(t)))*sin(q5(t))*dq[4] + (-sin(q2(t))*sin(q3(t))*cos(q4(t))*dq[2] - sin(q2(t))*sin(q4(t))*cos(q3(t))*dq[3] - sin(q2(t))*sin(q4(t))*dq[1] + cos(q2(t))*cos(q3(t))*cos(q4(t))*dq[1] + cos(q2(t))*cos(q4(t))*dq[3])*cos(q5(t)) - sin(q2(t))*sin(q3(t))*cos(q5(t))*dq[4] - sin(q2(t))*sin(q5(t))*cos(q3(t))*dq[2] - sin(q3(t))*sin(q5(t))*cos(q2(t))*dq[1])*cos(q6(t)) + (sin(q2(t))*sin(q3(t))*sin(q4(t))*dq[2] - sin(q2(t))*cos(q3(t))*cos(q4(t))*dq[3] - sin(q2(t))*cos(q4(t))*dq[1] - sin(q4(t))*cos(q2(t))*cos(q3(t))*dq[1] - sin(q4(t))*cos(q2(t))*dq[3])*sin(q6(t));
   out_8288534879187818585[16] = -(sin(q3(t))*cos(q2(t))*cos(q4(t))*cos(q5(t)) + sin(q5(t))*cos(q2(t))*cos(q3(t)))*sin(q6(t))*dq[5] + (-sin(q2(t))*sin(q3(t))*cos(q4(t))*cos(q5(t))*dq[1] - sin(q2(t))*sin(q5(t))*cos(q3(t))*dq[1] - sin(q3(t))*sin(q4(t))*cos(q2(t))*cos(q5(t))*dq[3] - sin(q3(t))*sin(q5(t))*cos(q2(t))*cos(q4(t))*dq[4] - sin(q3(t))*sin(q5(t))*cos(q2(t))*dq[2] + cos(q2(t))*cos(q3(t))*cos(q4(t))*cos(q5(t))*dq[2] + cos(q2(t))*cos(q3(t))*cos(q5(t))*dq[4])*cos(q6(t)) + sin(q2(t))*sin(q3(t))*sin(q4(t))*sin(q6(t))*dq[1] - sin(q3(t))*sin(q4(t))*cos(q2(t))*cos(q6(t))*dq[5] - sin(q3(t))*sin(q6(t))*cos(q2(t))*cos(q4(t))*dq[3] - sin(q4(t))*sin(q6(t))*cos(q2(t))*cos(q3(t))*dq[2];
   out_8288534879187818585[17] = (-sin(q2(t))*sin(q4(t)) + cos(q2(t))*cos(q3(t))*cos(q4(t)))*cos(q6(t))*dq[5] - (sin(q2(t))*cos(q4(t)) + sin(q4(t))*cos(q2(t))*cos(q3(t)))*sin(q5(t))*cos(q6(t))*dq[4] - (sin(q2(t))*cos(q4(t)) + sin(q4(t))*cos(q2(t))*cos(q3(t)))*sin(q6(t))*cos(q5(t))*dq[5] + (-sin(q2(t))*sin(q4(t))*cos(q3(t))*dq[1] - sin(q2(t))*sin(q4(t))*dq[3] - sin(q3(t))*sin(q4(t))*cos(q2(t))*dq[2] + cos(q2(t))*cos(q3(t))*cos(q4(t))*dq[3] + cos(q2(t))*cos(q4(t))*dq[1])*cos(q5(t))*cos(q6(t)) + (-sin(q2(t))*cos(q3(t))*cos(q4(t))*dq[1] - sin(q2(t))*cos(q4(t))*dq[3] - sin(q3(t))*cos(q2(t))*cos(q4(t))*dq[2] - sin(q4(t))*cos(q2(t))*cos(q3(t))*dq[3] - sin(q4(t))*cos(q2(t))*dq[1])*sin(q6(t));
   out_8288534879187818585[18] = -(-(sin(q2(t))*sin(q4(t)) - cos(q2(t))*cos(q3(t))*cos(q4(t)))*sin(q5(t)) + sin(q3(t))*cos(q2(t))*cos(q5(t)))*sin(q6(t))*dq[5] + ((-sin(q2(t))*sin(q4(t)) + cos(q2(t))*cos(q3(t))*cos(q4(t)))*cos(q5(t))*dq[4] + (-sin(q2(t))*cos(q3(t))*cos(q4(t))*dq[1] - sin(q2(t))*cos(q4(t))*dq[3] - sin(q3(t))*cos(q2(t))*cos(q4(t))*dq[2] - sin(q4(t))*cos(q2(t))*cos(q3(t))*dq[3] - sin(q4(t))*cos(q2(t))*dq[1])*sin(q5(t)) - sin(q2(t))*sin(q3(t))*cos(q5(t))*dq[1] - sin(q3(t))*sin(q5(t))*cos(q2(t))*dq[4] + cos(q2(t))*cos(q3(t))*cos(q5(t))*dq[2])*cos(q6(t));
   out_8288534879187818585[19] = (-(sin(q2(t))*sin(q4(t)) - cos(q2(t))*cos(q3(t))*cos(q4(t)))*cos(q5(t)) - sin(q3(t))*sin(q5(t))*cos(q2(t)))*cos(q6(t))*dq[5] - (sin(q2(t))*cos(q4(t)) + sin(q4(t))*cos(q2(t))*cos(q3(t)))*sin(q6(t))*dq[5] + ((sin(q2(t))*sin(q4(t)) - cos(q2(t))*cos(q3(t))*cos(q4(t)))*sin(q5(t))*dq[4] - (sin(q2(t))*cos(q3(t))*cos(q4(t))*dq[1] + sin(q2(t))*cos(q4(t))*dq[3] + sin(q3(t))*cos(q2(t))*cos(q4(t))*dq[2] + sin(q4(t))*cos(q2(t))*cos(q3(t))*dq[3] + sin(q4(t))*cos(q2(t))*dq[1])*cos(q5(t)) + sin(q2(t))*sin(q3(t))*sin(q5(t))*dq[1] - sin(q3(t))*cos(q2(t))*cos(q5(t))*dq[4] - sin(q5(t))*cos(q2(t))*cos(q3(t))*dq[2])*sin(q6(t)) + (-sin(q2(t))*sin(q4(t))*cos(q3(t))*dq[1] - sin(q2(t))*sin(q4(t))*dq[3] - sin(q3(t))*sin(q4(t))*cos(q2(t))*dq[2] + cos(q2(t))*cos(q3(t))*cos(q4(t))*dq[3] + cos(q2(t))*cos(q4(t))*dq[1])*cos(q6(t));
   out_8288534879187818585[20] = 0;

}
