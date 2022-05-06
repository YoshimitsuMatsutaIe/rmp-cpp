/******************************************************************************
 *                       Code generated with sympy 1.9                        *
 *                                                                            *
 *              See http://www.sympy.org/ for more information.               *
 *                                                                            *
 *                 This file is part of 'jry_3_dot_BY_SYMPY_'                 *
 ******************************************************************************/
#include "jry_3_dot.h"
#include <math.h>

void jry_3_dot(double *dq, double *q, double *out_6248397049261436787) {

   out_6248397049261436787[0] = -1.0/2.0*M_SQRT2*sin(q[0])*sin(q[1])*sin(q[2])*sin(q[3])*dq[2] - 1.0/2.0*M_SQRT2*sin(q[0])*sin(q[1])*sin(q[3])*cos(q[2])*dq[0] + (1.0/2.0)*M_SQRT2*sin(q[0])*sin(q[1])*cos(q[2])*cos(q[3])*dq[3] + (1.0/2.0)*M_SQRT2*sin(q[0])*sin(q[1])*cos(q[3])*dq[1] + (1.0/2.0)*M_SQRT2*sin(q[0])*sin(q[2])*sin(q[3])*dq[0] + (1.0/2.0)*M_SQRT2*sin(q[0])*sin(q[2])*cos(q[3])*dq[3] + (1.0/2.0)*M_SQRT2*sin(q[0])*sin(q[3])*cos(q[1])*cos(q[2])*dq[1] + (1.0/2.0)*M_SQRT2*sin(q[0])*sin(q[3])*cos(q[1])*dq[3] + (1.0/2.0)*M_SQRT2*sin(q[0])*sin(q[3])*cos(q[2])*dq[2] + (1.0/2.0)*M_SQRT2*sin(q[0])*cos(q[1])*cos(q[3])*dq[0] - 1.0/2.0*M_SQRT2*sin(q[1])*sin(q[2])*sin(q[3])*cos(q[0])*dq[2] + (1.0/2.0)*M_SQRT2*sin(q[1])*sin(q[3])*cos(q[0])*cos(q[2])*dq[0] + (1.0/2.0)*M_SQRT2*sin(q[1])*cos(q[0])*cos(q[2])*cos(q[3])*dq[3] + (1.0/2.0)*M_SQRT2*sin(q[1])*cos(q[0])*cos(q[3])*dq[1] + (1.0/2.0)*M_SQRT2*sin(q[2])*sin(q[3])*cos(q[0])*dq[0] - 1.0/2.0*M_SQRT2*sin(q[2])*cos(q[0])*cos(q[3])*dq[3] + (1.0/2.0)*M_SQRT2*sin(q[3])*cos(q[0])*cos(q[1])*cos(q[2])*dq[1] + (1.0/2.0)*M_SQRT2*sin(q[3])*cos(q[0])*cos(q[1])*dq[3] - 1.0/2.0*M_SQRT2*sin(q[3])*cos(q[0])*cos(q[2])*dq[2] - 1.0/2.0*M_SQRT2*cos(q[0])*cos(q[1])*cos(q[3])*dq[0];
   out_6248397049261436787[1] = -1.0/2.0*M_SQRT2*sin(q[0])*sin(q[1])*sin(q[3])*cos(q[2])*dq[1] - 1.0/2.0*M_SQRT2*sin(q[0])*sin(q[1])*sin(q[3])*dq[3] + (1.0/2.0)*M_SQRT2*sin(q[0])*sin(q[1])*cos(q[3])*dq[0] - 1.0/2.0*M_SQRT2*sin(q[0])*sin(q[2])*sin(q[3])*cos(q[1])*dq[2] + (1.0/2.0)*M_SQRT2*sin(q[0])*sin(q[3])*cos(q[1])*cos(q[2])*dq[0] + (1.0/2.0)*M_SQRT2*sin(q[0])*cos(q[1])*cos(q[2])*cos(q[3])*dq[3] + (1.0/2.0)*M_SQRT2*sin(q[0])*cos(q[1])*cos(q[3])*dq[1] + (1.0/2.0)*M_SQRT2*sin(q[1])*sin(q[3])*cos(q[0])*cos(q[2])*dq[1] + (1.0/2.0)*M_SQRT2*sin(q[1])*sin(q[3])*cos(q[0])*dq[3] + (1.0/2.0)*M_SQRT2*sin(q[1])*cos(q[0])*cos(q[3])*dq[0] + (1.0/2.0)*M_SQRT2*sin(q[2])*sin(q[3])*cos(q[0])*cos(q[1])*dq[2] + (1.0/2.0)*M_SQRT2*sin(q[3])*cos(q[0])*cos(q[1])*cos(q[2])*dq[0] - 1.0/2.0*M_SQRT2*cos(q[0])*cos(q[1])*cos(q[2])*cos(q[3])*dq[3] - 1.0/2.0*M_SQRT2*cos(q[0])*cos(q[1])*cos(q[3])*dq[1];
   out_6248397049261436787[2] = -1.0/2.0*M_SQRT2*sin(q[0])*sin(q[1])*sin(q[2])*sin(q[3])*dq[0] - 1.0/2.0*M_SQRT2*sin(q[0])*sin(q[1])*sin(q[2])*cos(q[3])*dq[3] - 1.0/2.0*M_SQRT2*sin(q[0])*sin(q[1])*sin(q[3])*cos(q[2])*dq[2] - 1.0/2.0*M_SQRT2*sin(q[0])*sin(q[2])*sin(q[3])*cos(q[1])*dq[1] + (1.0/2.0)*M_SQRT2*sin(q[0])*sin(q[2])*sin(q[3])*dq[2] + (1.0/2.0)*M_SQRT2*sin(q[0])*sin(q[3])*cos(q[2])*dq[0] - 1.0/2.0*M_SQRT2*sin(q[0])*cos(q[2])*cos(q[3])*dq[3] - 1.0/2.0*M_SQRT2*sin(q[1])*sin(q[2])*sin(q[3])*cos(q[0])*dq[0] + (1.0/2.0)*M_SQRT2*sin(q[1])*sin(q[2])*cos(q[0])*cos(q[3])*dq[3] + (1.0/2.0)*M_SQRT2*sin(q[1])*sin(q[3])*cos(q[0])*cos(q[2])*dq[2] + (1.0/2.0)*M_SQRT2*sin(q[2])*sin(q[3])*cos(q[0])*cos(q[1])*dq[1] + (1.0/2.0)*M_SQRT2*sin(q[2])*sin(q[3])*cos(q[0])*dq[2] - 1.0/2.0*M_SQRT2*sin(q[3])*cos(q[0])*cos(q[2])*dq[0] - 1.0/2.0*M_SQRT2*cos(q[0])*cos(q[2])*cos(q[3])*dq[3];
   out_6248397049261436787[3] = -1.0/2.0*M_SQRT2*sin(q[0])*sin(q[1])*sin(q[2])*cos(q[3])*dq[2] - 1.0/2.0*M_SQRT2*sin(q[0])*sin(q[1])*sin(q[3])*cos(q[2])*dq[3] - 1.0/2.0*M_SQRT2*sin(q[0])*sin(q[1])*sin(q[3])*dq[1] + (1.0/2.0)*M_SQRT2*sin(q[0])*sin(q[1])*cos(q[2])*cos(q[3])*dq[0] + (1.0/2.0)*M_SQRT2*sin(q[0])*sin(q[2])*sin(q[3])*dq[3] + (1.0/2.0)*M_SQRT2*sin(q[0])*sin(q[2])*cos(q[3])*dq[0] + (1.0/2.0)*M_SQRT2*sin(q[0])*sin(q[3])*cos(q[1])*dq[0] + (1.0/2.0)*M_SQRT2*sin(q[0])*cos(q[1])*cos(q[2])*cos(q[3])*dq[1] + (1.0/2.0)*M_SQRT2*sin(q[0])*cos(q[1])*cos(q[3])*dq[3] - 1.0/2.0*M_SQRT2*sin(q[0])*cos(q[2])*cos(q[3])*dq[2] + (1.0/2.0)*M_SQRT2*sin(q[1])*sin(q[2])*cos(q[0])*cos(q[3])*dq[2] + (1.0/2.0)*M_SQRT2*sin(q[1])*sin(q[3])*cos(q[0])*cos(q[2])*dq[3] + (1.0/2.0)*M_SQRT2*sin(q[1])*sin(q[3])*cos(q[0])*dq[1] + (1.0/2.0)*M_SQRT2*sin(q[1])*cos(q[0])*cos(q[2])*cos(q[3])*dq[0] + (1.0/2.0)*M_SQRT2*sin(q[2])*sin(q[3])*cos(q[0])*dq[3] - 1.0/2.0*M_SQRT2*sin(q[2])*cos(q[0])*cos(q[3])*dq[0] + (1.0/2.0)*M_SQRT2*sin(q[3])*cos(q[0])*cos(q[1])*dq[0] - 1.0/2.0*M_SQRT2*cos(q[0])*cos(q[1])*cos(q[2])*cos(q[3])*dq[1] - 1.0/2.0*M_SQRT2*cos(q[0])*cos(q[1])*cos(q[3])*dq[3] - 1.0/2.0*M_SQRT2*cos(q[0])*cos(q[2])*cos(q[3])*dq[2];
   out_6248397049261436787[4] = 0;
   out_6248397049261436787[5] = 0;
   out_6248397049261436787[6] = 0;
   out_6248397049261436787[7] = -1.0/2.0*M_SQRT2*sin(q[0])*sin(q[1])*sin(q[2])*sin(q[3])*dq[2] + (1.0/2.0)*M_SQRT2*sin(q[0])*sin(q[1])*sin(q[3])*cos(q[2])*dq[0] + (1.0/2.0)*M_SQRT2*sin(q[0])*sin(q[1])*cos(q[2])*cos(q[3])*dq[3] + (1.0/2.0)*M_SQRT2*sin(q[0])*sin(q[1])*cos(q[3])*dq[1] + (1.0/2.0)*M_SQRT2*sin(q[0])*sin(q[2])*sin(q[3])*dq[0] - 1.0/2.0*M_SQRT2*sin(q[0])*sin(q[2])*cos(q[3])*dq[3] + (1.0/2.0)*M_SQRT2*sin(q[0])*sin(q[3])*cos(q[1])*cos(q[2])*dq[1] + (1.0/2.0)*M_SQRT2*sin(q[0])*sin(q[3])*cos(q[1])*dq[3] - 1.0/2.0*M_SQRT2*sin(q[0])*sin(q[3])*cos(q[2])*dq[2] - 1.0/2.0*M_SQRT2*sin(q[0])*cos(q[1])*cos(q[3])*dq[0] + (1.0/2.0)*M_SQRT2*sin(q[1])*sin(q[2])*sin(q[3])*cos(q[0])*dq[2] + (1.0/2.0)*M_SQRT2*sin(q[1])*sin(q[3])*cos(q[0])*cos(q[2])*dq[0] - 1.0/2.0*M_SQRT2*sin(q[1])*cos(q[0])*cos(q[2])*cos(q[3])*dq[3] - 1.0/2.0*M_SQRT2*sin(q[1])*cos(q[0])*cos(q[3])*dq[1] - 1.0/2.0*M_SQRT2*sin(q[2])*sin(q[3])*cos(q[0])*dq[0] - 1.0/2.0*M_SQRT2*sin(q[2])*cos(q[0])*cos(q[3])*dq[3] - 1.0/2.0*M_SQRT2*sin(q[3])*cos(q[0])*cos(q[1])*cos(q[2])*dq[1] - 1.0/2.0*M_SQRT2*sin(q[3])*cos(q[0])*cos(q[1])*dq[3] - 1.0/2.0*M_SQRT2*sin(q[3])*cos(q[0])*cos(q[2])*dq[2] - 1.0/2.0*M_SQRT2*cos(q[0])*cos(q[1])*cos(q[3])*dq[0];
   out_6248397049261436787[8] = (1.0/2.0)*M_SQRT2*sin(q[0])*sin(q[1])*sin(q[3])*cos(q[2])*dq[1] + (1.0/2.0)*M_SQRT2*sin(q[0])*sin(q[1])*sin(q[3])*dq[3] + (1.0/2.0)*M_SQRT2*sin(q[0])*sin(q[1])*cos(q[3])*dq[0] + (1.0/2.0)*M_SQRT2*sin(q[0])*sin(q[2])*sin(q[3])*cos(q[1])*dq[2] + (1.0/2.0)*M_SQRT2*sin(q[0])*sin(q[3])*cos(q[1])*cos(q[2])*dq[0] - 1.0/2.0*M_SQRT2*sin(q[0])*cos(q[1])*cos(q[2])*cos(q[3])*dq[3] - 1.0/2.0*M_SQRT2*sin(q[0])*cos(q[1])*cos(q[3])*dq[1] + (1.0/2.0)*M_SQRT2*sin(q[1])*sin(q[3])*cos(q[0])*cos(q[2])*dq[1] + (1.0/2.0)*M_SQRT2*sin(q[1])*sin(q[3])*cos(q[0])*dq[3] - 1.0/2.0*M_SQRT2*sin(q[1])*cos(q[0])*cos(q[3])*dq[0] + (1.0/2.0)*M_SQRT2*sin(q[2])*sin(q[3])*cos(q[0])*cos(q[1])*dq[2] - 1.0/2.0*M_SQRT2*sin(q[3])*cos(q[0])*cos(q[1])*cos(q[2])*dq[0] - 1.0/2.0*M_SQRT2*cos(q[0])*cos(q[1])*cos(q[2])*cos(q[3])*dq[3] - 1.0/2.0*M_SQRT2*cos(q[0])*cos(q[1])*cos(q[3])*dq[1];
   out_6248397049261436787[9] = -1.0/2.0*M_SQRT2*sin(q[0])*sin(q[1])*sin(q[2])*sin(q[3])*dq[0] + (1.0/2.0)*M_SQRT2*sin(q[0])*sin(q[1])*sin(q[2])*cos(q[3])*dq[3] + (1.0/2.0)*M_SQRT2*sin(q[0])*sin(q[1])*sin(q[3])*cos(q[2])*dq[2] + (1.0/2.0)*M_SQRT2*sin(q[0])*sin(q[2])*sin(q[3])*cos(q[1])*dq[1] + (1.0/2.0)*M_SQRT2*sin(q[0])*sin(q[2])*sin(q[3])*dq[2] - 1.0/2.0*M_SQRT2*sin(q[0])*sin(q[3])*cos(q[2])*dq[0] - 1.0/2.0*M_SQRT2*sin(q[0])*cos(q[2])*cos(q[3])*dq[3] + (1.0/2.0)*M_SQRT2*sin(q[1])*sin(q[2])*sin(q[3])*cos(q[0])*dq[0] + (1.0/2.0)*M_SQRT2*sin(q[1])*sin(q[2])*cos(q[0])*cos(q[3])*dq[3] + (1.0/2.0)*M_SQRT2*sin(q[1])*sin(q[3])*cos(q[0])*cos(q[2])*dq[2] + (1.0/2.0)*M_SQRT2*sin(q[2])*sin(q[3])*cos(q[0])*cos(q[1])*dq[1] - 1.0/2.0*M_SQRT2*sin(q[2])*sin(q[3])*cos(q[0])*dq[2] - 1.0/2.0*M_SQRT2*sin(q[3])*cos(q[0])*cos(q[2])*dq[0] + (1.0/2.0)*M_SQRT2*cos(q[0])*cos(q[2])*cos(q[3])*dq[3];
   out_6248397049261436787[10] = (1.0/2.0)*M_SQRT2*sin(q[0])*sin(q[1])*sin(q[2])*cos(q[3])*dq[2] + (1.0/2.0)*M_SQRT2*sin(q[0])*sin(q[1])*sin(q[3])*cos(q[2])*dq[3] + (1.0/2.0)*M_SQRT2*sin(q[0])*sin(q[1])*sin(q[3])*dq[1] + (1.0/2.0)*M_SQRT2*sin(q[0])*sin(q[1])*cos(q[2])*cos(q[3])*dq[0] + (1.0/2.0)*M_SQRT2*sin(q[0])*sin(q[2])*sin(q[3])*dq[3] - 1.0/2.0*M_SQRT2*sin(q[0])*sin(q[2])*cos(q[3])*dq[0] + (1.0/2.0)*M_SQRT2*sin(q[0])*sin(q[3])*cos(q[1])*dq[0] - 1.0/2.0*M_SQRT2*sin(q[0])*cos(q[1])*cos(q[2])*cos(q[3])*dq[1] - 1.0/2.0*M_SQRT2*sin(q[0])*cos(q[1])*cos(q[3])*dq[3] - 1.0/2.0*M_SQRT2*sin(q[0])*cos(q[2])*cos(q[3])*dq[2] + (1.0/2.0)*M_SQRT2*sin(q[1])*sin(q[2])*cos(q[0])*cos(q[3])*dq[2] + (1.0/2.0)*M_SQRT2*sin(q[1])*sin(q[3])*cos(q[0])*cos(q[2])*dq[3] + (1.0/2.0)*M_SQRT2*sin(q[1])*sin(q[3])*cos(q[0])*dq[1] - 1.0/2.0*M_SQRT2*sin(q[1])*cos(q[0])*cos(q[2])*cos(q[3])*dq[0] - 1.0/2.0*M_SQRT2*sin(q[2])*sin(q[3])*cos(q[0])*dq[3] - 1.0/2.0*M_SQRT2*sin(q[2])*cos(q[0])*cos(q[3])*dq[0] - 1.0/2.0*M_SQRT2*sin(q[3])*cos(q[0])*cos(q[1])*dq[0] - 1.0/2.0*M_SQRT2*cos(q[0])*cos(q[1])*cos(q[2])*cos(q[3])*dq[1] - 1.0/2.0*M_SQRT2*cos(q[0])*cos(q[1])*cos(q[3])*dq[3] + (1.0/2.0)*M_SQRT2*cos(q[0])*cos(q[2])*cos(q[3])*dq[2];
   out_6248397049261436787[11] = 0;
   out_6248397049261436787[12] = 0;
   out_6248397049261436787[13] = 0;
   out_6248397049261436787[14] = 0;
   out_6248397049261436787[15] = sin(q[1])*sin(q[2])*sin(q[3])*dq[2] - sin(q[1])*cos(q[2])*cos(q[3])*dq[3] - sin(q[1])*cos(q[3])*dq[1] - sin(q[3])*cos(q[1])*cos(q[2])*dq[1] - sin(q[3])*cos(q[1])*dq[3];
   out_6248397049261436787[16] = sin(q[1])*sin(q[2])*sin(q[3])*dq[1] - sin(q[2])*cos(q[1])*cos(q[3])*dq[3] - sin(q[3])*cos(q[1])*cos(q[2])*dq[2];
   out_6248397049261436787[17] = -sin(q[1])*cos(q[2])*cos(q[3])*dq[1] - sin(q[1])*cos(q[3])*dq[3] - sin(q[2])*cos(q[1])*cos(q[3])*dq[2] - sin(q[3])*cos(q[1])*cos(q[2])*dq[3] - sin(q[3])*cos(q[1])*dq[1];
   out_6248397049261436787[18] = 0;
   out_6248397049261436787[19] = 0;
   out_6248397049261436787[20] = 0;

}
