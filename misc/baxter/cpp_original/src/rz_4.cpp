/******************************************************************************
 *                       Code generated with sympy 1.9                        *
 *                                                                            *
 *              See http://www.sympy.org/ for more information.               *
 *                                                                            *
 *                   This file is part of 'rz_4_BY_SYMPY_'                    *
 ******************************************************************************/
#include "rz_4.h"
#include <math.h>

void rz_4(double *q, double *out_3128776475110990802) {

   out_3128776475110990802[0] = -1.0/2.0*M_SQRT2*sin(q[0])*sin(q[1])*sin(q[3])*cos(q[2]) + (1.0/2.0)*M_SQRT2*sin(q[0])*sin(q[2])*sin(q[3]) + (1.0/2.0)*M_SQRT2*sin(q[0])*cos(q[1])*cos(q[3]) + (1.0/2.0)*M_SQRT2*sin(q[1])*sin(q[3])*cos(q[0])*cos(q[2]) + (1.0/2.0)*M_SQRT2*sin(q[2])*sin(q[3])*cos(q[0]) - 1.0/2.0*M_SQRT2*cos(q[0])*cos(q[1])*cos(q[3]);
   out_3128776475110990802[1] = (1.0/2.0)*M_SQRT2*sin(q[0])*sin(q[1])*sin(q[3])*cos(q[2]) + (1.0/2.0)*M_SQRT2*sin(q[0])*sin(q[2])*sin(q[3]) - 1.0/2.0*M_SQRT2*sin(q[0])*cos(q[1])*cos(q[3]) + (1.0/2.0)*M_SQRT2*sin(q[1])*sin(q[3])*cos(q[0])*cos(q[2]) - 1.0/2.0*M_SQRT2*sin(q[2])*sin(q[3])*cos(q[0]) - 1.0/2.0*M_SQRT2*cos(q[0])*cos(q[1])*cos(q[3]);
   out_3128776475110990802[2] = -sin(q[1])*cos(q[3]) - sin(q[3])*cos(q[1])*cos(q[2]);

}
