/******************************************************************************
 *                       Code generated with sympy 1.9                        *
 *                                                                            *
 *              See http://www.sympy.org/ for more information.               *
 *                                                                            *
 *                 This file is part of 'jry_1_dot_BY_SYMPY_'                 *
 ******************************************************************************/
#include "jry_1_dot.h"
#include <math.h>

void jry_1_dot(double *dq, double *q, double *out_5244164377317141948) {

   out_5244164377317141948[0] = (1.0/2.0)*M_SQRT2*sin(q[0])*sin(q[1])*dq[1] + (1.0/2.0)*M_SQRT2*sin(q[0])*cos(q[1])*dq[0] + (1.0/2.0)*M_SQRT2*sin(q[1])*cos(q[0])*dq[1] - 1.0/2.0*M_SQRT2*cos(q[0])*cos(q[1])*dq[0];
   out_5244164377317141948[1] = (1.0/2.0)*M_SQRT2*sin(q[0])*sin(q[1])*dq[0] + (1.0/2.0)*M_SQRT2*sin(q[0])*cos(q[1])*dq[1] + (1.0/2.0)*M_SQRT2*sin(q[1])*cos(q[0])*dq[0] - 1.0/2.0*M_SQRT2*cos(q[0])*cos(q[1])*dq[1];
   out_5244164377317141948[2] = 0;
   out_5244164377317141948[3] = 0;
   out_5244164377317141948[4] = 0;
   out_5244164377317141948[5] = 0;
   out_5244164377317141948[6] = 0;
   out_5244164377317141948[7] = (1.0/2.0)*M_SQRT2*sin(q[0])*sin(q[1])*dq[1] - 1.0/2.0*M_SQRT2*sin(q[0])*cos(q[1])*dq[0] - 1.0/2.0*M_SQRT2*sin(q[1])*cos(q[0])*dq[1] - 1.0/2.0*M_SQRT2*cos(q[0])*cos(q[1])*dq[0];
   out_5244164377317141948[8] = (1.0/2.0)*M_SQRT2*sin(q[0])*sin(q[1])*dq[0] - 1.0/2.0*M_SQRT2*sin(q[0])*cos(q[1])*dq[1] - 1.0/2.0*M_SQRT2*sin(q[1])*cos(q[0])*dq[0] - 1.0/2.0*M_SQRT2*cos(q[0])*cos(q[1])*dq[1];
   out_5244164377317141948[9] = 0;
   out_5244164377317141948[10] = 0;
   out_5244164377317141948[11] = 0;
   out_5244164377317141948[12] = 0;
   out_5244164377317141948[13] = 0;
   out_5244164377317141948[14] = 0;
   out_5244164377317141948[15] = -sin(q[1])*dq[1];
   out_5244164377317141948[16] = 0;
   out_5244164377317141948[17] = 0;
   out_5244164377317141948[18] = 0;
   out_5244164377317141948[19] = 0;
   out_5244164377317141948[20] = 0;

}