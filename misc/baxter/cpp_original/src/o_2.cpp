/******************************************************************************
 *                       Code generated with sympy 1.9                        *
 *                                                                            *
 *              See http://www.sympy.org/ for more information.               *
 *                                                                            *
 *                    This file is part of 'o_2_BY_SYMPY_'                    *
 ******************************************************************************/
#include "o_2.h"
#include <math.h>

void o_2(double H, double L, double L0, double L1, double L2, double h, double *q, double *out_1189857661900614655) {

   out_1189857661900614655[0] = -L + (1.0/2.0)*M_SQRT2*L1*sin(q[0]) - 1.0/2.0*M_SQRT2*L1*cos(q[0]) + (1.0/2.0)*M_SQRT2*L2*sin(q[0])*cos(q[1]) - 1.0/2.0*M_SQRT2*L2*cos(q[0])*cos(q[1]);
   out_1189857661900614655[1] = -1.0/2.0*M_SQRT2*L1*sin(q[0]) - 1.0/2.0*M_SQRT2*L1*cos(q[0]) - 1.0/2.0*M_SQRT2*L2*sin(q[0])*cos(q[1]) - 1.0/2.0*M_SQRT2*L2*cos(q[0])*cos(q[1]) - h;
   out_1189857661900614655[2] = H + L0 - L2*sin(q[1]);

}
