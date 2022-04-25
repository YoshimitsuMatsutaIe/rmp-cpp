/******************************************************************************
 *                       Code generated with sympy 1.9                        *
 *                                                                            *
 *              See http://www.sympy.org/ for more information.               *
 *                                                                            *
 *                   This file is part of 'Jo_dot_3project'                   *
 ******************************************************************************/
#include "Jo_dot_3.h"
#include <math.h>

void Jo_dot_3(double L1, double L2, double L3, double *dq, double *q, double *out_3545977738159695851) {

   out_3545977738159695851[0] = L1*(-1.0/2.0*M_SQRT2*sin(q[0])*dq[0] + (1.0/2.0)*M_SQRT2*cos(q[0])*dq[0]) - L2*((1.0/2.0)*M_SQRT2*sin(q[0]) + (1.0/2.0)*M_SQRT2*cos(q[0]))*sin(q[1])*dq[1] + L2*(-1.0/2.0*M_SQRT2*sin(q[0])*dq[0] + (1.0/2.0)*M_SQRT2*cos(q[0])*dq[0])*cos(q[1]) + L3*(-(-1.0/2.0*M_SQRT2*sin(q[0]) - 1.0/2.0*M_SQRT2*cos(q[0]))*sin(q[1])*sin(q[2])*dq[2] + (-1.0/2.0*M_SQRT2*sin(q[0]) - 1.0/2.0*M_SQRT2*cos(q[0]))*cos(q[1])*cos(q[2])*dq[1] + (-1.0/2.0*M_SQRT2*sin(q[0]) + (1.0/2.0)*M_SQRT2*cos(q[0]))*cos(q[2])*dq[2] + (-1.0/2.0*M_SQRT2*sin(q[0])*dq[0] - 1.0/2.0*M_SQRT2*cos(q[0])*dq[0])*sin(q[2]) + ((1.0/2.0)*M_SQRT2*sin(q[0])*dq[0] - 1.0/2.0*M_SQRT2*cos(q[0])*dq[0])*sin(q[1])*cos(q[2]));
   out_3545977738159695851[1] = -L2*((1.0/2.0)*M_SQRT2*sin(q[0]) - 1.0/2.0*M_SQRT2*cos(q[0]))*cos(q[1])*dq[1] - L2*((1.0/2.0)*M_SQRT2*sin(q[0])*dq[0] + (1.0/2.0)*M_SQRT2*cos(q[0])*dq[0])*sin(q[1]) - L3*(-1.0/2.0*M_SQRT2*sin(q[0]) + (1.0/2.0)*M_SQRT2*cos(q[0]))*sin(q[1])*cos(q[2])*dq[1] - L3*(-1.0/2.0*M_SQRT2*sin(q[0]) + (1.0/2.0)*M_SQRT2*cos(q[0]))*sin(q[2])*cos(q[1])*dq[2] + L3*(-1.0/2.0*M_SQRT2*sin(q[0])*dq[0] - 1.0/2.0*M_SQRT2*cos(q[0])*dq[0])*cos(q[1])*cos(q[2]);
   out_3545977738159695851[2] = L3*(((1.0/2.0)*M_SQRT2*sin(q[0]) - 1.0/2.0*M_SQRT2*cos(q[0]))*sin(q[1])*cos(q[2])*dq[2] + ((1.0/2.0)*M_SQRT2*sin(q[0]) - 1.0/2.0*M_SQRT2*cos(q[0]))*sin(q[2])*cos(q[1])*dq[1] - ((1.0/2.0)*M_SQRT2*sin(q[0]) + (1.0/2.0)*M_SQRT2*cos(q[0]))*sin(q[2])*dq[2] + (-1.0/2.0*M_SQRT2*sin(q[0])*dq[0] + (1.0/2.0)*M_SQRT2*cos(q[0])*dq[0])*cos(q[2]) + ((1.0/2.0)*M_SQRT2*sin(q[0])*dq[0] + (1.0/2.0)*M_SQRT2*cos(q[0])*dq[0])*sin(q[1])*sin(q[2]));
   out_3545977738159695851[3] = 0;
   out_3545977738159695851[4] = 0;
   out_3545977738159695851[5] = 0;
   out_3545977738159695851[6] = 0;
   out_3545977738159695851[7] = L1*((1.0/2.0)*M_SQRT2*sin(q[0])*dq[0] + (1.0/2.0)*M_SQRT2*cos(q[0])*dq[0]) - L2*((1.0/2.0)*M_SQRT2*sin(q[0]) - 1.0/2.0*M_SQRT2*cos(q[0]))*sin(q[1])*dq[1] + L2*((1.0/2.0)*M_SQRT2*sin(q[0])*dq[0] + (1.0/2.0)*M_SQRT2*cos(q[0])*dq[0])*cos(q[1]) + L3*(-(-1.0/2.0*M_SQRT2*sin(q[0]) + (1.0/2.0)*M_SQRT2*cos(q[0]))*sin(q[1])*sin(q[2])*dq[2] + (-1.0/2.0*M_SQRT2*sin(q[0]) + (1.0/2.0)*M_SQRT2*cos(q[0]))*cos(q[1])*cos(q[2])*dq[1] + ((1.0/2.0)*M_SQRT2*sin(q[0]) + (1.0/2.0)*M_SQRT2*cos(q[0]))*cos(q[2])*dq[2] + (-1.0/2.0*M_SQRT2*sin(q[0])*dq[0] - 1.0/2.0*M_SQRT2*cos(q[0])*dq[0])*sin(q[1])*cos(q[2]) + (-1.0/2.0*M_SQRT2*sin(q[0])*dq[0] + (1.0/2.0)*M_SQRT2*cos(q[0])*dq[0])*sin(q[2]));
   out_3545977738159695851[8] = -L2*(-1.0/2.0*M_SQRT2*sin(q[0]) - 1.0/2.0*M_SQRT2*cos(q[0]))*cos(q[1])*dq[1] - L2*((1.0/2.0)*M_SQRT2*sin(q[0])*dq[0] - 1.0/2.0*M_SQRT2*cos(q[0])*dq[0])*sin(q[1]) - L3*((1.0/2.0)*M_SQRT2*sin(q[0]) + (1.0/2.0)*M_SQRT2*cos(q[0]))*sin(q[1])*cos(q[2])*dq[1] - L3*((1.0/2.0)*M_SQRT2*sin(q[0]) + (1.0/2.0)*M_SQRT2*cos(q[0]))*sin(q[2])*cos(q[1])*dq[2] + L3*(-1.0/2.0*M_SQRT2*sin(q[0])*dq[0] + (1.0/2.0)*M_SQRT2*cos(q[0])*dq[0])*cos(q[1])*cos(q[2]);
   out_3545977738159695851[9] = L3*((-1.0/2.0*M_SQRT2*sin(q[0]) - 1.0/2.0*M_SQRT2*cos(q[0]))*sin(q[1])*cos(q[2])*dq[2] + (-1.0/2.0*M_SQRT2*sin(q[0]) - 1.0/2.0*M_SQRT2*cos(q[0]))*sin(q[2])*cos(q[1])*dq[1] - ((1.0/2.0)*M_SQRT2*sin(q[0]) - 1.0/2.0*M_SQRT2*cos(q[0]))*sin(q[2])*dq[2] + ((1.0/2.0)*M_SQRT2*sin(q[0])*dq[0] - 1.0/2.0*M_SQRT2*cos(q[0])*dq[0])*sin(q[1])*sin(q[2]) + ((1.0/2.0)*M_SQRT2*sin(q[0])*dq[0] + (1.0/2.0)*M_SQRT2*cos(q[0])*dq[0])*cos(q[2]));
   out_3545977738159695851[10] = 0;
   out_3545977738159695851[11] = 0;
   out_3545977738159695851[12] = 0;
   out_3545977738159695851[13] = 0;
   out_3545977738159695851[14] = 0;
   out_3545977738159695851[15] = L2*sin(q[1])*dq[1] - L3*sin(q[1])*sin(q[2])*dq[2] + L3*cos(q[1])*cos(q[2])*dq[1];
   out_3545977738159695851[16] = -L3*sin(q[1])*sin(q[2])*dq[1] + L3*cos(q[1])*cos(q[2])*dq[2];
   out_3545977738159695851[17] = 0;
   out_3545977738159695851[18] = 0;
   out_3545977738159695851[19] = 0;
   out_3545977738159695851[20] = 0;

}
