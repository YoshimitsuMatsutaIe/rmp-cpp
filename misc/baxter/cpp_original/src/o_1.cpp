/******************************************************************************
 *                       Code generated with sympy 1.9                        *
 *                                                                            *
 *              See http://www.sympy.org/ for more information.               *
 *                                                                            *
 *                    This file is part of 'o_1_BY_SYMPY_'                    *
 ******************************************************************************/
#include "o_1.h"
#include <math.h>

void o_1(double H, double L, double L0, double L1, double h, double *q, double *out_6984911692549192257) {

   out_6984911692549192257[0] = -L + (1.0/2.0)*M_SQRT2*L1*sin(q[0]) - 1.0/2.0*M_SQRT2*L1*cos(q[0]);
   out_6984911692549192257[1] = -1.0/2.0*M_SQRT2*L1*sin(q[0]) - 1.0/2.0*M_SQRT2*L1*cos(q[0]) - h;
   out_6984911692549192257[2] = H + L0;

}
