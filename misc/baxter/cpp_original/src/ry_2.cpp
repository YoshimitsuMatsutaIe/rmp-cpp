/******************************************************************************
 *                       Code generated with sympy 1.9                        *
 *                                                                            *
 *              See http://www.sympy.org/ for more information.               *
 *                                                                            *
 *                   This file is part of 'ry_2_BY_SYMPY_'                    *
 ******************************************************************************/
#include "ry_2.h"
#include <math.h>

void ry_2(double *q, double *out_4876481770081967429) {

   out_4876481770081967429[0] = (1.0/2.0)*M_SQRT2*sin(q[0])*sin(q[1])*sin(q[2]) + (1.0/2.0)*M_SQRT2*sin(q[0])*cos(q[2]) - 1.0/2.0*M_SQRT2*sin(q[1])*sin(q[2])*cos(q[0]) + (1.0/2.0)*M_SQRT2*cos(q[0])*cos(q[2]);
   out_4876481770081967429[1] = -1.0/2.0*M_SQRT2*sin(q[0])*sin(q[1])*sin(q[2]) + (1.0/2.0)*M_SQRT2*sin(q[0])*cos(q[2]) - 1.0/2.0*M_SQRT2*sin(q[1])*sin(q[2])*cos(q[0]) - 1.0/2.0*M_SQRT2*cos(q[0])*cos(q[2]);
   out_4876481770081967429[2] = sin(q[2])*cos(q[1]);

}
