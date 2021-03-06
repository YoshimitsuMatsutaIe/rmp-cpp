/******************************************************************************
 *                       Code generated with sympy 1.9                        *
 *                                                                            *
 *              See http://www.sympy.org/ for more information.               *
 *                                                                            *
 *                 This file is part of 'jrx_1_dot_BY_SYMPY_'                 *
 ******************************************************************************/
#include "jrx_1_dot.h"
#include <math.h>

void jrx_1_dot(double *dq, double *q, double *out_4780964042503968384) {

   out_4780964042503968384[0] = (1.0/2.0)*M_SQRT2*sin(q[0])*sin(q[1])*dq[0] - 1.0/2.0*M_SQRT2*sin(q[0])*cos(q[1])*dq[1] - 1.0/2.0*M_SQRT2*sin(q[1])*cos(q[0])*dq[0] - 1.0/2.0*M_SQRT2*cos(q[0])*cos(q[1])*dq[1];
   out_4780964042503968384[1] = (1.0/2.0)*M_SQRT2*sin(q[0])*sin(q[1])*dq[1] - 1.0/2.0*M_SQRT2*sin(q[0])*cos(q[1])*dq[0] - 1.0/2.0*M_SQRT2*sin(q[1])*cos(q[0])*dq[1] - 1.0/2.0*M_SQRT2*cos(q[0])*cos(q[1])*dq[0];
   out_4780964042503968384[2] = 0;
   out_4780964042503968384[3] = 0;
   out_4780964042503968384[4] = 0;
   out_4780964042503968384[5] = 0;
   out_4780964042503968384[6] = 0;
   out_4780964042503968384[7] = -1.0/2.0*M_SQRT2*sin(q[0])*sin(q[1])*dq[0] - 1.0/2.0*M_SQRT2*sin(q[0])*cos(q[1])*dq[1] - 1.0/2.0*M_SQRT2*sin(q[1])*cos(q[0])*dq[0] + (1.0/2.0)*M_SQRT2*cos(q[0])*cos(q[1])*dq[1];
   out_4780964042503968384[8] = -1.0/2.0*M_SQRT2*sin(q[0])*sin(q[1])*dq[1] - 1.0/2.0*M_SQRT2*sin(q[0])*cos(q[1])*dq[0] - 1.0/2.0*M_SQRT2*sin(q[1])*cos(q[0])*dq[1] + (1.0/2.0)*M_SQRT2*cos(q[0])*cos(q[1])*dq[0];
   out_4780964042503968384[9] = 0;
   out_4780964042503968384[10] = 0;
   out_4780964042503968384[11] = 0;
   out_4780964042503968384[12] = 0;
   out_4780964042503968384[13] = 0;
   out_4780964042503968384[14] = 0;
   out_4780964042503968384[15] = cos(q[1])*dq[1];
   out_4780964042503968384[16] = 0;
   out_4780964042503968384[17] = 0;
   out_4780964042503968384[18] = 0;
   out_4780964042503968384[19] = 0;
   out_4780964042503968384[20] = 0;

}
