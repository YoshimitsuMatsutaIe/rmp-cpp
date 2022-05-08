/******************************************************************************
 *                       Code generated with sympy 1.9                        *
 *                                                                            *
 *              See http://www.sympy.org/ for more information.               *
 *                                                                            *
 *                   This file is part of 'rx_1_BY_SYMPY_'                    *
 ******************************************************************************/
#include "rx_1.h"
#include <math.h>

void rx_1(double *q, double *out_1553034266912289819) {

   out_1553034266912289819[0] = -1.0/2.0*M_SQRT2*sin(q[0])*sin(q[1]) + (1.0/2.0)*M_SQRT2*sin(q[1])*cos(q[0]);
   out_1553034266912289819[1] = (1.0/2.0)*M_SQRT2*sin(q[0])*sin(q[1]) + (1.0/2.0)*M_SQRT2*sin(q[1])*cos(q[0]);
   out_1553034266912289819[2] = -cos(q[1]);

}
