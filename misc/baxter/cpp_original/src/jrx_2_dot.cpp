/******************************************************************************
 *                       Code generated with sympy 1.9                        *
 *                                                                            *
 *              See http://www.sympy.org/ for more information.               *
 *                                                                            *
 *                 This file is part of 'jrx_2_dot_BY_SYMPY_'                 *
 ******************************************************************************/
#include "jrx_2_dot.h"
#include <math.h>

void jrx_2_dot(double *dq, double *q, double *out_7007886000655280644) {

   out_7007886000655280644[0] = (1.0/2.0)*M_SQRT2*sin(q[0])*sin(q[1])*sin(q[2])*dq[2] + (1.0/2.0)*M_SQRT2*sin(q[0])*sin(q[1])*cos(q[2])*dq[0] - 1.0/2.0*M_SQRT2*sin(q[0])*sin(q[2])*dq[0] - 1.0/2.0*M_SQRT2*sin(q[0])*cos(q[1])*cos(q[2])*dq[1] - 1.0/2.0*M_SQRT2*sin(q[0])*cos(q[2])*dq[2] + (1.0/2.0)*M_SQRT2*sin(q[1])*sin(q[2])*cos(q[0])*dq[2] - 1.0/2.0*M_SQRT2*sin(q[1])*cos(q[0])*cos(q[2])*dq[0] - 1.0/2.0*M_SQRT2*sin(q[2])*cos(q[0])*dq[0] - 1.0/2.0*M_SQRT2*cos(q[0])*cos(q[1])*cos(q[2])*dq[1] + (1.0/2.0)*M_SQRT2*cos(q[0])*cos(q[2])*dq[2];
   out_7007886000655280644[1] = (1.0/2.0)*M_SQRT2*sin(q[0])*sin(q[1])*cos(q[2])*dq[1] + (1.0/2.0)*M_SQRT2*sin(q[0])*sin(q[2])*cos(q[1])*dq[2] - 1.0/2.0*M_SQRT2*sin(q[0])*cos(q[1])*cos(q[2])*dq[0] - 1.0/2.0*M_SQRT2*sin(q[1])*cos(q[0])*cos(q[2])*dq[1] - 1.0/2.0*M_SQRT2*sin(q[2])*cos(q[0])*cos(q[1])*dq[2] - 1.0/2.0*M_SQRT2*cos(q[0])*cos(q[1])*cos(q[2])*dq[0];
   out_7007886000655280644[2] = (1.0/2.0)*M_SQRT2*sin(q[0])*sin(q[1])*sin(q[2])*dq[0] + (1.0/2.0)*M_SQRT2*sin(q[0])*sin(q[1])*cos(q[2])*dq[2] + (1.0/2.0)*M_SQRT2*sin(q[0])*sin(q[2])*cos(q[1])*dq[1] - 1.0/2.0*M_SQRT2*sin(q[0])*sin(q[2])*dq[2] - 1.0/2.0*M_SQRT2*sin(q[0])*cos(q[2])*dq[0] + (1.0/2.0)*M_SQRT2*sin(q[1])*sin(q[2])*cos(q[0])*dq[0] - 1.0/2.0*M_SQRT2*sin(q[1])*cos(q[0])*cos(q[2])*dq[2] - 1.0/2.0*M_SQRT2*sin(q[2])*cos(q[0])*cos(q[1])*dq[1] - 1.0/2.0*M_SQRT2*sin(q[2])*cos(q[0])*dq[2] + (1.0/2.0)*M_SQRT2*cos(q[0])*cos(q[2])*dq[0];
   out_7007886000655280644[3] = 0;
   out_7007886000655280644[4] = 0;
   out_7007886000655280644[5] = 0;
   out_7007886000655280644[6] = 0;
   out_7007886000655280644[7] = (1.0/2.0)*M_SQRT2*sin(q[0])*sin(q[1])*sin(q[2])*dq[2] - 1.0/2.0*M_SQRT2*sin(q[0])*sin(q[1])*cos(q[2])*dq[0] - 1.0/2.0*M_SQRT2*sin(q[0])*sin(q[2])*dq[0] - 1.0/2.0*M_SQRT2*sin(q[0])*cos(q[1])*cos(q[2])*dq[1] + (1.0/2.0)*M_SQRT2*sin(q[0])*cos(q[2])*dq[2] - 1.0/2.0*M_SQRT2*sin(q[1])*sin(q[2])*cos(q[0])*dq[2] - 1.0/2.0*M_SQRT2*sin(q[1])*cos(q[0])*cos(q[2])*dq[0] + (1.0/2.0)*M_SQRT2*sin(q[2])*cos(q[0])*dq[0] + (1.0/2.0)*M_SQRT2*cos(q[0])*cos(q[1])*cos(q[2])*dq[1] + (1.0/2.0)*M_SQRT2*cos(q[0])*cos(q[2])*dq[2];
   out_7007886000655280644[8] = -1.0/2.0*M_SQRT2*sin(q[0])*sin(q[1])*cos(q[2])*dq[1] - 1.0/2.0*M_SQRT2*sin(q[0])*sin(q[2])*cos(q[1])*dq[2] - 1.0/2.0*M_SQRT2*sin(q[0])*cos(q[1])*cos(q[2])*dq[0] - 1.0/2.0*M_SQRT2*sin(q[1])*cos(q[0])*cos(q[2])*dq[1] - 1.0/2.0*M_SQRT2*sin(q[2])*cos(q[0])*cos(q[1])*dq[2] + (1.0/2.0)*M_SQRT2*cos(q[0])*cos(q[1])*cos(q[2])*dq[0];
   out_7007886000655280644[9] = (1.0/2.0)*M_SQRT2*sin(q[0])*sin(q[1])*sin(q[2])*dq[0] - 1.0/2.0*M_SQRT2*sin(q[0])*sin(q[1])*cos(q[2])*dq[2] - 1.0/2.0*M_SQRT2*sin(q[0])*sin(q[2])*cos(q[1])*dq[1] - 1.0/2.0*M_SQRT2*sin(q[0])*sin(q[2])*dq[2] + (1.0/2.0)*M_SQRT2*sin(q[0])*cos(q[2])*dq[0] - 1.0/2.0*M_SQRT2*sin(q[1])*sin(q[2])*cos(q[0])*dq[0] - 1.0/2.0*M_SQRT2*sin(q[1])*cos(q[0])*cos(q[2])*dq[2] - 1.0/2.0*M_SQRT2*sin(q[2])*cos(q[0])*cos(q[1])*dq[1] + (1.0/2.0)*M_SQRT2*sin(q[2])*cos(q[0])*dq[2] + (1.0/2.0)*M_SQRT2*cos(q[0])*cos(q[2])*dq[0];
   out_7007886000655280644[10] = 0;
   out_7007886000655280644[11] = 0;
   out_7007886000655280644[12] = 0;
   out_7007886000655280644[13] = 0;
   out_7007886000655280644[14] = 0;
   out_7007886000655280644[15] = -sin(q[1])*sin(q[2])*dq[2] + cos(q[1])*cos(q[2])*dq[1];
   out_7007886000655280644[16] = -sin(q[1])*sin(q[2])*dq[1] + cos(q[1])*cos(q[2])*dq[2];
   out_7007886000655280644[17] = 0;
   out_7007886000655280644[18] = 0;
   out_7007886000655280644[19] = 0;
   out_7007886000655280644[20] = 0;

}
