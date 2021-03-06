/******************************************************************************
 *                       Code generated with sympy 1.9                        *
 *                                                                            *
 *              See http://www.sympy.org/ for more information.               *
 *                                                                            *
 *                 This file is part of 'jo_3_dot_BY_SYMPY_'                  *
 ******************************************************************************/
#include "jo_3_dot.h"
#include <math.h>

void jo_3_dot(double L1, double L2, double L3, double *dq, double *q, double *out_2841018973480798298) {

   out_2841018973480798298[0] = -1.0/2.0*M_SQRT2*L1*sin(q[0])*dq[0] + (1.0/2.0)*M_SQRT2*L1*cos(q[0])*dq[0] - 1.0/2.0*M_SQRT2*L2*sin(q[0])*sin(q[1])*dq[1] - 1.0/2.0*M_SQRT2*L2*sin(q[0])*cos(q[1])*dq[0] - 1.0/2.0*M_SQRT2*L2*sin(q[1])*cos(q[0])*dq[1] + (1.0/2.0)*M_SQRT2*L2*cos(q[0])*cos(q[1])*dq[0] + (1.0/2.0)*M_SQRT2*L3*sin(q[0])*sin(q[1])*sin(q[2])*dq[2] + (1.0/2.0)*M_SQRT2*L3*sin(q[0])*sin(q[1])*cos(q[2])*dq[0] - 1.0/2.0*M_SQRT2*L3*sin(q[0])*sin(q[2])*dq[0] - 1.0/2.0*M_SQRT2*L3*sin(q[0])*cos(q[1])*cos(q[2])*dq[1] - 1.0/2.0*M_SQRT2*L3*sin(q[0])*cos(q[2])*dq[2] + (1.0/2.0)*M_SQRT2*L3*sin(q[1])*sin(q[2])*cos(q[0])*dq[2] - 1.0/2.0*M_SQRT2*L3*sin(q[1])*cos(q[0])*cos(q[2])*dq[0] - 1.0/2.0*M_SQRT2*L3*sin(q[2])*cos(q[0])*dq[0] - 1.0/2.0*M_SQRT2*L3*cos(q[0])*cos(q[1])*cos(q[2])*dq[1] + (1.0/2.0)*M_SQRT2*L3*cos(q[0])*cos(q[2])*dq[2];
   out_2841018973480798298[1] = -1.0/2.0*M_SQRT2*L2*sin(q[0])*sin(q[1])*dq[0] - 1.0/2.0*M_SQRT2*L2*sin(q[0])*cos(q[1])*dq[1] - 1.0/2.0*M_SQRT2*L2*sin(q[1])*cos(q[0])*dq[0] + (1.0/2.0)*M_SQRT2*L2*cos(q[0])*cos(q[1])*dq[1] + (1.0/2.0)*M_SQRT2*L3*sin(q[0])*sin(q[1])*cos(q[2])*dq[1] + (1.0/2.0)*M_SQRT2*L3*sin(q[0])*sin(q[2])*cos(q[1])*dq[2] - 1.0/2.0*M_SQRT2*L3*sin(q[0])*cos(q[1])*cos(q[2])*dq[0] - 1.0/2.0*M_SQRT2*L3*sin(q[1])*cos(q[0])*cos(q[2])*dq[1] - 1.0/2.0*M_SQRT2*L3*sin(q[2])*cos(q[0])*cos(q[1])*dq[2] - 1.0/2.0*M_SQRT2*L3*cos(q[0])*cos(q[1])*cos(q[2])*dq[0];
   out_2841018973480798298[2] = (1.0/2.0)*M_SQRT2*L3*sin(q[0])*sin(q[1])*sin(q[2])*dq[0] + (1.0/2.0)*M_SQRT2*L3*sin(q[0])*sin(q[1])*cos(q[2])*dq[2] + (1.0/2.0)*M_SQRT2*L3*sin(q[0])*sin(q[2])*cos(q[1])*dq[1] - 1.0/2.0*M_SQRT2*L3*sin(q[0])*sin(q[2])*dq[2] - 1.0/2.0*M_SQRT2*L3*sin(q[0])*cos(q[2])*dq[0] + (1.0/2.0)*M_SQRT2*L3*sin(q[1])*sin(q[2])*cos(q[0])*dq[0] - 1.0/2.0*M_SQRT2*L3*sin(q[1])*cos(q[0])*cos(q[2])*dq[2] - 1.0/2.0*M_SQRT2*L3*sin(q[2])*cos(q[0])*cos(q[1])*dq[1] - 1.0/2.0*M_SQRT2*L3*sin(q[2])*cos(q[0])*dq[2] + (1.0/2.0)*M_SQRT2*L3*cos(q[0])*cos(q[2])*dq[0];
   out_2841018973480798298[3] = 0;
   out_2841018973480798298[4] = 0;
   out_2841018973480798298[5] = 0;
   out_2841018973480798298[6] = 0;
   out_2841018973480798298[7] = (1.0/2.0)*M_SQRT2*L1*sin(q[0])*dq[0] + (1.0/2.0)*M_SQRT2*L1*cos(q[0])*dq[0] - 1.0/2.0*M_SQRT2*L2*sin(q[0])*sin(q[1])*dq[1] + (1.0/2.0)*M_SQRT2*L2*sin(q[0])*cos(q[1])*dq[0] + (1.0/2.0)*M_SQRT2*L2*sin(q[1])*cos(q[0])*dq[1] + (1.0/2.0)*M_SQRT2*L2*cos(q[0])*cos(q[1])*dq[0] + (1.0/2.0)*M_SQRT2*L3*sin(q[0])*sin(q[1])*sin(q[2])*dq[2] - 1.0/2.0*M_SQRT2*L3*sin(q[0])*sin(q[1])*cos(q[2])*dq[0] - 1.0/2.0*M_SQRT2*L3*sin(q[0])*sin(q[2])*dq[0] - 1.0/2.0*M_SQRT2*L3*sin(q[0])*cos(q[1])*cos(q[2])*dq[1] + (1.0/2.0)*M_SQRT2*L3*sin(q[0])*cos(q[2])*dq[2] - 1.0/2.0*M_SQRT2*L3*sin(q[1])*sin(q[2])*cos(q[0])*dq[2] - 1.0/2.0*M_SQRT2*L3*sin(q[1])*cos(q[0])*cos(q[2])*dq[0] + (1.0/2.0)*M_SQRT2*L3*sin(q[2])*cos(q[0])*dq[0] + (1.0/2.0)*M_SQRT2*L3*cos(q[0])*cos(q[1])*cos(q[2])*dq[1] + (1.0/2.0)*M_SQRT2*L3*cos(q[0])*cos(q[2])*dq[2];
   out_2841018973480798298[8] = -1.0/2.0*M_SQRT2*L2*sin(q[0])*sin(q[1])*dq[0] + (1.0/2.0)*M_SQRT2*L2*sin(q[0])*cos(q[1])*dq[1] + (1.0/2.0)*M_SQRT2*L2*sin(q[1])*cos(q[0])*dq[0] + (1.0/2.0)*M_SQRT2*L2*cos(q[0])*cos(q[1])*dq[1] - 1.0/2.0*M_SQRT2*L3*sin(q[0])*sin(q[1])*cos(q[2])*dq[1] - 1.0/2.0*M_SQRT2*L3*sin(q[0])*sin(q[2])*cos(q[1])*dq[2] - 1.0/2.0*M_SQRT2*L3*sin(q[0])*cos(q[1])*cos(q[2])*dq[0] - 1.0/2.0*M_SQRT2*L3*sin(q[1])*cos(q[0])*cos(q[2])*dq[1] - 1.0/2.0*M_SQRT2*L3*sin(q[2])*cos(q[0])*cos(q[1])*dq[2] + (1.0/2.0)*M_SQRT2*L3*cos(q[0])*cos(q[1])*cos(q[2])*dq[0];
   out_2841018973480798298[9] = (1.0/2.0)*M_SQRT2*L3*sin(q[0])*sin(q[1])*sin(q[2])*dq[0] - 1.0/2.0*M_SQRT2*L3*sin(q[0])*sin(q[1])*cos(q[2])*dq[2] - 1.0/2.0*M_SQRT2*L3*sin(q[0])*sin(q[2])*cos(q[1])*dq[1] - 1.0/2.0*M_SQRT2*L3*sin(q[0])*sin(q[2])*dq[2] + (1.0/2.0)*M_SQRT2*L3*sin(q[0])*cos(q[2])*dq[0] - 1.0/2.0*M_SQRT2*L3*sin(q[1])*sin(q[2])*cos(q[0])*dq[0] - 1.0/2.0*M_SQRT2*L3*sin(q[1])*cos(q[0])*cos(q[2])*dq[2] - 1.0/2.0*M_SQRT2*L3*sin(q[2])*cos(q[0])*cos(q[1])*dq[1] + (1.0/2.0)*M_SQRT2*L3*sin(q[2])*cos(q[0])*dq[2] + (1.0/2.0)*M_SQRT2*L3*cos(q[0])*cos(q[2])*dq[0];
   out_2841018973480798298[10] = 0;
   out_2841018973480798298[11] = 0;
   out_2841018973480798298[12] = 0;
   out_2841018973480798298[13] = 0;
   out_2841018973480798298[14] = 0;
   out_2841018973480798298[15] = L2*sin(q[1])*dq[1] - L3*sin(q[1])*sin(q[2])*dq[2] + L3*cos(q[1])*cos(q[2])*dq[1];
   out_2841018973480798298[16] = -L3*sin(q[1])*sin(q[2])*dq[1] + L3*cos(q[1])*cos(q[2])*dq[2];
   out_2841018973480798298[17] = 0;
   out_2841018973480798298[18] = 0;
   out_2841018973480798298[19] = 0;
   out_2841018973480798298[20] = 0;

}
