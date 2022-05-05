/******************************************************************************
 *                       Code generated with sympy 1.9                        *
 *                                                                            *
 *              See http://www.sympy.org/ for more information.               *
 *                                                                            *
 *                 This file is part of 'jrx_2_dot_BY_SYMPY_'                 *
 ******************************************************************************/
#include "jrx_2_dot.h"
#include <math.h>

void jrx_2_dot(double *dq, double *q, double *out_8176889151126597957) {

   out_8176889151126597957[0] = (1.0/2.0)*M_SQRT2*sin(q[0])*sin(q[1])*sin(q[2])*dq[2] + (1.0/2.0)*M_SQRT2*sin(q[0])*sin(q[1])*cos(q[2])*dq[0] - 1.0/2.0*M_SQRT2*sin(q[0])*sin(q[2])*dq[0] - 1.0/2.0*M_SQRT2*sin(q[0])*cos(q[1])*cos(q[2])*dq[1] - 1.0/2.0*M_SQRT2*sin(q[0])*cos(q[2])*dq[2] + (1.0/2.0)*M_SQRT2*sin(q[1])*sin(q[2])*cos(q[0])*dq[2] - 1.0/2.0*M_SQRT2*sin(q[1])*cos(q[0])*cos(q[2])*dq[0] - 1.0/2.0*M_SQRT2*sin(q[2])*cos(q[0])*dq[0] - 1.0/2.0*M_SQRT2*cos(q[0])*cos(q[1])*cos(q[2])*dq[1] + (1.0/2.0)*M_SQRT2*cos(q[0])*cos(q[2])*dq[2];
   out_8176889151126597957[1] = (1.0/2.0)*M_SQRT2*sin(q[0])*sin(q[1])*cos(q[2])*dq[1] + (1.0/2.0)*M_SQRT2*sin(q[0])*sin(q[2])*cos(q[1])*dq[2] - 1.0/2.0*M_SQRT2*sin(q[0])*cos(q[1])*cos(q[2])*dq[0] - 1.0/2.0*M_SQRT2*sin(q[1])*cos(q[0])*cos(q[2])*dq[1] - 1.0/2.0*M_SQRT2*sin(q[2])*cos(q[0])*cos(q[1])*dq[2] - 1.0/2.0*M_SQRT2*cos(q[0])*cos(q[1])*cos(q[2])*dq[0];
   out_8176889151126597957[2] = (1.0/2.0)*M_SQRT2*sin(q[0])*sin(q[1])*sin(q[2])*dq[0] + (1.0/2.0)*M_SQRT2*sin(q[0])*sin(q[1])*cos(q[2])*dq[2] + (1.0/2.0)*M_SQRT2*sin(q[0])*sin(q[2])*cos(q[1])*dq[1] - 1.0/2.0*M_SQRT2*sin(q[0])*sin(q[2])*dq[2] - 1.0/2.0*M_SQRT2*sin(q[0])*cos(q[2])*dq[0] + (1.0/2.0)*M_SQRT2*sin(q[1])*sin(q[2])*cos(q[0])*dq[0] - 1.0/2.0*M_SQRT2*sin(q[1])*cos(q[0])*cos(q[2])*dq[2] - 1.0/2.0*M_SQRT2*sin(q[2])*cos(q[0])*cos(q[1])*dq[1] - 1.0/2.0*M_SQRT2*sin(q[2])*cos(q[0])*dq[2] + (1.0/2.0)*M_SQRT2*cos(q[0])*cos(q[2])*dq[0];
   out_8176889151126597957[3] = 0;
   out_8176889151126597957[4] = 0;
   out_8176889151126597957[5] = 0;
   out_8176889151126597957[6] = 0;
   out_8176889151126597957[7] = (1.0/2.0)*M_SQRT2*sin(q[0])*sin(q[1])*sin(q[2])*dq[2] - 1.0/2.0*M_SQRT2*sin(q[0])*sin(q[1])*cos(q[2])*dq[0] - 1.0/2.0*M_SQRT2*sin(q[0])*sin(q[2])*dq[0] - 1.0/2.0*M_SQRT2*sin(q[0])*cos(q[1])*cos(q[2])*dq[1] + (1.0/2.0)*M_SQRT2*sin(q[0])*cos(q[2])*dq[2] - 1.0/2.0*M_SQRT2*sin(q[1])*sin(q[2])*cos(q[0])*dq[2] - 1.0/2.0*M_SQRT2*sin(q[1])*cos(q[0])*cos(q[2])*dq[0] + (1.0/2.0)*M_SQRT2*sin(q[2])*cos(q[0])*dq[0] + (1.0/2.0)*M_SQRT2*cos(q[0])*cos(q[1])*cos(q[2])*dq[1] + (1.0/2.0)*M_SQRT2*cos(q[0])*cos(q[2])*dq[2];
   out_8176889151126597957[8] = -1.0/2.0*M_SQRT2*sin(q[0])*sin(q[1])*cos(q[2])*dq[1] - 1.0/2.0*M_SQRT2*sin(q[0])*sin(q[2])*cos(q[1])*dq[2] - 1.0/2.0*M_SQRT2*sin(q[0])*cos(q[1])*cos(q[2])*dq[0] - 1.0/2.0*M_SQRT2*sin(q[1])*cos(q[0])*cos(q[2])*dq[1] - 1.0/2.0*M_SQRT2*sin(q[2])*cos(q[0])*cos(q[1])*dq[2] + (1.0/2.0)*M_SQRT2*cos(q[0])*cos(q[1])*cos(q[2])*dq[0];
   out_8176889151126597957[9] = (1.0/2.0)*M_SQRT2*sin(q[0])*sin(q[1])*sin(q[2])*dq[0] - 1.0/2.0*M_SQRT2*sin(q[0])*sin(q[1])*cos(q[2])*dq[2] - 1.0/2.0*M_SQRT2*sin(q[0])*sin(q[2])*cos(q[1])*dq[1] - 1.0/2.0*M_SQRT2*sin(q[0])*sin(q[2])*dq[2] + (1.0/2.0)*M_SQRT2*sin(q[0])*cos(q[2])*dq[0] - 1.0/2.0*M_SQRT2*sin(q[1])*sin(q[2])*cos(q[0])*dq[0] - 1.0/2.0*M_SQRT2*sin(q[1])*cos(q[0])*cos(q[2])*dq[2] - 1.0/2.0*M_SQRT2*sin(q[2])*cos(q[0])*cos(q[1])*dq[1] + (1.0/2.0)*M_SQRT2*sin(q[2])*cos(q[0])*dq[2] + (1.0/2.0)*M_SQRT2*cos(q[0])*cos(q[2])*dq[0];
   out_8176889151126597957[10] = 0;
   out_8176889151126597957[11] = 0;
   out_8176889151126597957[12] = 0;
   out_8176889151126597957[13] = 0;
   out_8176889151126597957[14] = 0;
   out_8176889151126597957[15] = -sin(q[1])*sin(q[2])*dq[2] + cos(q[1])*cos(q[2])*dq[1];
   out_8176889151126597957[16] = -sin(q[1])*sin(q[2])*dq[1] + cos(q[1])*cos(q[2])*dq[2];
   out_8176889151126597957[17] = 0;
   out_8176889151126597957[18] = 0;
   out_8176889151126597957[19] = 0;
   out_8176889151126597957[20] = 0;

}
