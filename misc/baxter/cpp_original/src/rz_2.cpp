/******************************************************************************
 *                       Code generated with sympy 1.9                        *
 *                                                                            *
 *              See http://www.sympy.org/ for more information.               *
 *                                                                            *
 *                   This file is part of 'rz_2_BY_SYMPY_'                    *
 ******************************************************************************/
#include "rz_2.h"
#include <math.h>

void rz_2(double *q, double *out_2737531573660397526) {

   out_2737531573660397526[0] = (1.0/2.0)*M_SQRT2*sin(q[0])*cos(q[1]) - 1.0/2.0*M_SQRT2*cos(q[0])*cos(q[1]);
   out_2737531573660397526[1] = -1.0/2.0*M_SQRT2*sin(q[0])*cos(q[1]) - 1.0/2.0*M_SQRT2*cos(q[0])*cos(q[1]);
   out_2737531573660397526[2] = -sin(q[1]);

}
