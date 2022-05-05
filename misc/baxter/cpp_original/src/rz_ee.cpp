/******************************************************************************
 *                       Code generated with sympy 1.9                        *
 *                                                                            *
 *              See http://www.sympy.org/ for more information.               *
 *                                                                            *
 *                   This file is part of 'rz_ee_BY_SYMPY_'                   *
 ******************************************************************************/
#include "rz_ee.h"
#include <math.h>

void rz_ee(double *q, double *out_6876482866676479549) {

   out_6876482866676479549[0] = (1.0/2.0)*M_SQRT2*sin(q[0])*sin(q[1])*sin(q[2])*sin(q[4])*sin(q[5]) - 1.0/2.0*M_SQRT2*sin(q[0])*sin(q[1])*sin(q[3])*cos(q[2])*cos(q[5]) - 1.0/2.0*M_SQRT2*sin(q[0])*sin(q[1])*sin(q[5])*cos(q[2])*cos(q[3])*cos(q[4]) + (1.0/2.0)*M_SQRT2*sin(q[0])*sin(q[2])*sin(q[3])*cos(q[5]) + (1.0/2.0)*M_SQRT2*sin(q[0])*sin(q[2])*sin(q[5])*cos(q[3])*cos(q[4]) - 1.0/2.0*M_SQRT2*sin(q[0])*sin(q[3])*sin(q[5])*cos(q[1])*cos(q[4]) + (1.0/2.0)*M_SQRT2*sin(q[0])*sin(q[4])*sin(q[5])*cos(q[2]) + (1.0/2.0)*M_SQRT2*sin(q[0])*cos(q[1])*cos(q[3])*cos(q[5]) - 1.0/2.0*M_SQRT2*sin(q[1])*sin(q[2])*sin(q[4])*sin(q[5])*cos(q[0]) + (1.0/2.0)*M_SQRT2*sin(q[1])*sin(q[3])*cos(q[0])*cos(q[2])*cos(q[5]) + (1.0/2.0)*M_SQRT2*sin(q[1])*sin(q[5])*cos(q[0])*cos(q[2])*cos(q[3])*cos(q[4]) + (1.0/2.0)*M_SQRT2*sin(q[2])*sin(q[3])*cos(q[0])*cos(q[5]) + (1.0/2.0)*M_SQRT2*sin(q[2])*sin(q[5])*cos(q[0])*cos(q[3])*cos(q[4]) + (1.0/2.0)*M_SQRT2*sin(q[3])*sin(q[5])*cos(q[0])*cos(q[1])*cos(q[4]) + (1.0/2.0)*M_SQRT2*sin(q[4])*sin(q[5])*cos(q[0])*cos(q[2]) - 1.0/2.0*M_SQRT2*cos(q[0])*cos(q[1])*cos(q[3])*cos(q[5]);
   out_6876482866676479549[1] = -1.0/2.0*M_SQRT2*sin(q[0])*sin(q[1])*sin(q[2])*sin(q[4])*sin(q[5]) + (1.0/2.0)*M_SQRT2*sin(q[0])*sin(q[1])*sin(q[3])*cos(q[2])*cos(q[5]) + (1.0/2.0)*M_SQRT2*sin(q[0])*sin(q[1])*sin(q[5])*cos(q[2])*cos(q[3])*cos(q[4]) + (1.0/2.0)*M_SQRT2*sin(q[0])*sin(q[2])*sin(q[3])*cos(q[5]) + (1.0/2.0)*M_SQRT2*sin(q[0])*sin(q[2])*sin(q[5])*cos(q[3])*cos(q[4]) + (1.0/2.0)*M_SQRT2*sin(q[0])*sin(q[3])*sin(q[5])*cos(q[1])*cos(q[4]) + (1.0/2.0)*M_SQRT2*sin(q[0])*sin(q[4])*sin(q[5])*cos(q[2]) - 1.0/2.0*M_SQRT2*sin(q[0])*cos(q[1])*cos(q[3])*cos(q[5]) - 1.0/2.0*M_SQRT2*sin(q[1])*sin(q[2])*sin(q[4])*sin(q[5])*cos(q[0]) + (1.0/2.0)*M_SQRT2*sin(q[1])*sin(q[3])*cos(q[0])*cos(q[2])*cos(q[5]) + (1.0/2.0)*M_SQRT2*sin(q[1])*sin(q[5])*cos(q[0])*cos(q[2])*cos(q[3])*cos(q[4]) - 1.0/2.0*M_SQRT2*sin(q[2])*sin(q[3])*cos(q[0])*cos(q[5]) - 1.0/2.0*M_SQRT2*sin(q[2])*sin(q[5])*cos(q[0])*cos(q[3])*cos(q[4]) + (1.0/2.0)*M_SQRT2*sin(q[3])*sin(q[5])*cos(q[0])*cos(q[1])*cos(q[4]) - 1.0/2.0*M_SQRT2*sin(q[4])*sin(q[5])*cos(q[0])*cos(q[2]) - 1.0/2.0*M_SQRT2*cos(q[0])*cos(q[1])*cos(q[3])*cos(q[5]);
   out_6876482866676479549[2] = sin(q[1])*sin(q[3])*sin(q[5])*cos(q[4]) - sin(q[1])*cos(q[3])*cos(q[5]) + sin(q[2])*sin(q[4])*sin(q[5])*cos(q[1]) - sin(q[3])*cos(q[1])*cos(q[2])*cos(q[5]) - sin(q[5])*cos(q[1])*cos(q[2])*cos(q[3])*cos(q[4]);

}
