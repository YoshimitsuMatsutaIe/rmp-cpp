/******************************************************************************
 *                       Code generated with sympy 1.9                        *
 *                                                                            *
 *              See http://www.sympy.org/ for more information.               *
 *                                                                            *
 *                  This file is part of 'JRz_dot_3project'                   *
 ******************************************************************************/
#include "JRz_dot_3.h"
#include <math.h>

void JRz_dot_3(double *dq, double *q, double *out_1502430070897744790) {

   out_1502430070897744790[0] = -(-1.0/2.0*M_SQRT2*sin(q[0]) + (1.0/2.0)*M_SQRT2*cos(q[0]))*sin(q[2])*dq[2] + ((1.0/2.0)*M_SQRT2*sin(q[0]) + (1.0/2.0)*M_SQRT2*cos(q[0]))*sin(q[1])*cos(q[2])*dq[2] + ((1.0/2.0)*M_SQRT2*sin(q[0]) + (1.0/2.0)*M_SQRT2*cos(q[0]))*sin(q[2])*cos(q[1])*dq[1] + (-1.0/2.0*M_SQRT2*sin(q[0])*dq[0] - 1.0/2.0*M_SQRT2*cos(q[0])*dq[0])*cos(q[2]) + (-1.0/2.0*M_SQRT2*sin(q[0])*dq[0] + (1.0/2.0)*M_SQRT2*cos(q[0])*dq[0])*sin(q[1])*sin(q[2]);
   out_1502430070897744790[1] = -((1.0/2.0)*M_SQRT2*sin(q[0]) - 1.0/2.0*M_SQRT2*cos(q[0]))*sin(q[1])*sin(q[2])*dq[1] + ((1.0/2.0)*M_SQRT2*sin(q[0]) - 1.0/2.0*M_SQRT2*cos(q[0]))*cos(q[1])*cos(q[2])*dq[2] + ((1.0/2.0)*M_SQRT2*sin(q[0])*dq[0] + (1.0/2.0)*M_SQRT2*cos(q[0])*dq[0])*sin(q[2])*cos(q[1]);
   out_1502430070897744790[2] = (-1.0/2.0*M_SQRT2*sin(q[0]) - 1.0/2.0*M_SQRT2*cos(q[0]))*cos(q[2])*dq[2] - ((1.0/2.0)*M_SQRT2*sin(q[0]) - 1.0/2.0*M_SQRT2*cos(q[0]))*sin(q[1])*sin(q[2])*dq[2] + ((1.0/2.0)*M_SQRT2*sin(q[0]) - 1.0/2.0*M_SQRT2*cos(q[0]))*cos(q[1])*cos(q[2])*dq[1] + ((1.0/2.0)*M_SQRT2*sin(q[0])*dq[0] - 1.0/2.0*M_SQRT2*cos(q[0])*dq[0])*sin(q[2]) + ((1.0/2.0)*M_SQRT2*sin(q[0])*dq[0] + (1.0/2.0)*M_SQRT2*cos(q[0])*dq[0])*sin(q[1])*cos(q[2]);
   out_1502430070897744790[3] = 0;
   out_1502430070897744790[4] = 0;
   out_1502430070897744790[5] = 0;
   out_1502430070897744790[6] = 0;
   out_1502430070897744790[7] = ((1.0/2.0)*M_SQRT2*sin(q[0]) - 1.0/2.0*M_SQRT2*cos(q[0]))*sin(q[1])*cos(q[2])*dq[2] + ((1.0/2.0)*M_SQRT2*sin(q[0]) - 1.0/2.0*M_SQRT2*cos(q[0]))*sin(q[2])*cos(q[1])*dq[1] - ((1.0/2.0)*M_SQRT2*sin(q[0]) + (1.0/2.0)*M_SQRT2*cos(q[0]))*sin(q[2])*dq[2] + (-1.0/2.0*M_SQRT2*sin(q[0])*dq[0] + (1.0/2.0)*M_SQRT2*cos(q[0])*dq[0])*cos(q[2]) + ((1.0/2.0)*M_SQRT2*sin(q[0])*dq[0] + (1.0/2.0)*M_SQRT2*cos(q[0])*dq[0])*sin(q[1])*sin(q[2]);
   out_1502430070897744790[8] = -(-1.0/2.0*M_SQRT2*sin(q[0]) - 1.0/2.0*M_SQRT2*cos(q[0]))*sin(q[1])*sin(q[2])*dq[1] + (-1.0/2.0*M_SQRT2*sin(q[0]) - 1.0/2.0*M_SQRT2*cos(q[0]))*cos(q[1])*cos(q[2])*dq[2] + ((1.0/2.0)*M_SQRT2*sin(q[0])*dq[0] - 1.0/2.0*M_SQRT2*cos(q[0])*dq[0])*sin(q[2])*cos(q[1]);
   out_1502430070897744790[9] = -(-1.0/2.0*M_SQRT2*sin(q[0]) - 1.0/2.0*M_SQRT2*cos(q[0]))*sin(q[1])*sin(q[2])*dq[2] + (-1.0/2.0*M_SQRT2*sin(q[0]) - 1.0/2.0*M_SQRT2*cos(q[0]))*cos(q[1])*cos(q[2])*dq[1] + (-1.0/2.0*M_SQRT2*sin(q[0]) + (1.0/2.0)*M_SQRT2*cos(q[0]))*cos(q[2])*dq[2] + (-1.0/2.0*M_SQRT2*sin(q[0])*dq[0] - 1.0/2.0*M_SQRT2*cos(q[0])*dq[0])*sin(q[2]) + ((1.0/2.0)*M_SQRT2*sin(q[0])*dq[0] - 1.0/2.0*M_SQRT2*cos(q[0])*dq[0])*sin(q[1])*cos(q[2]);
   out_1502430070897744790[10] = 0;
   out_1502430070897744790[11] = 0;
   out_1502430070897744790[12] = 0;
   out_1502430070897744790[13] = 0;
   out_1502430070897744790[14] = 0;
   out_1502430070897744790[15] = -sin(q[1])*cos(q[2])*dq[2] - sin(q[2])*cos(q[1])*dq[1];
   out_1502430070897744790[16] = -sin(q[1])*cos(q[2])*dq[1] - sin(q[2])*cos(q[1])*dq[2];
   out_1502430070897744790[17] = 0;
   out_1502430070897744790[18] = 0;
   out_1502430070897744790[19] = 0;
   out_1502430070897744790[20] = 0;

}
