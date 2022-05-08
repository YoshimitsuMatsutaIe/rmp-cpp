/******************************************************************************
 *                       Code generated with sympy 1.9                        *
 *                                                                            *
 *              See http://www.sympy.org/ for more information.               *
 *                                                                            *
 *                   This file is part of 'rx_2_BY_SYMPY_'                    *
 ******************************************************************************/
#include "rx_2.h"
#include <math.h>

void rx_2(double *q, double *out_1069801093481833741) {

   out_1069801093481833741[0] = -1.0/2.0*M_SQRT2*sin(q[0])*sin(q[1])*cos(q[2]) + (1.0/2.0)*M_SQRT2*sin(q[0])*sin(q[2]) + (1.0/2.0)*M_SQRT2*sin(q[1])*cos(q[0])*cos(q[2]) + (1.0/2.0)*M_SQRT2*sin(q[2])*cos(q[0]);
   out_1069801093481833741[1] = (1.0/2.0)*M_SQRT2*sin(q[0])*sin(q[1])*cos(q[2]) + (1.0/2.0)*M_SQRT2*sin(q[0])*sin(q[2]) + (1.0/2.0)*M_SQRT2*sin(q[1])*cos(q[0])*cos(q[2]) - 1.0/2.0*M_SQRT2*sin(q[2])*cos(q[0]);
   out_1069801093481833741[2] = -cos(q[1])*cos(q[2]);

}
