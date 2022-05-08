/******************************************************************************
 *                       Code generated with sympy 1.9                        *
 *                                                                            *
 *              See http://www.sympy.org/ for more information.               *
 *                                                                            *
 *                   This file is part of 'jrz_4_BY_SYMPY_'                   *
 ******************************************************************************/
#include "jrz_4.h"
#include <math.h>

void jrz_4(double *q, double *out_1492015293482457883) {

   out_1492015293482457883[0] = -1.0/2.0*M_SQRT2*sin(q[0])*sin(q[1])*sin(q[3])*cos(q[2]) - 1.0/2.0*M_SQRT2*sin(q[0])*sin(q[2])*sin(q[3]) + (1.0/2.0)*M_SQRT2*sin(q[0])*cos(q[1])*cos(q[3]) - 1.0/2.0*M_SQRT2*sin(q[1])*sin(q[3])*cos(q[0])*cos(q[2]) + (1.0/2.0)*M_SQRT2*sin(q[2])*sin(q[3])*cos(q[0]) + (1.0/2.0)*M_SQRT2*cos(q[0])*cos(q[1])*cos(q[3]);
   out_1492015293482457883[1] = -1.0/2.0*M_SQRT2*sin(q[0])*sin(q[1])*cos(q[3]) - 1.0/2.0*M_SQRT2*sin(q[0])*sin(q[3])*cos(q[1])*cos(q[2]) + (1.0/2.0)*M_SQRT2*sin(q[1])*cos(q[0])*cos(q[3]) + (1.0/2.0)*M_SQRT2*sin(q[3])*cos(q[0])*cos(q[1])*cos(q[2]);
   out_1492015293482457883[2] = (1.0/2.0)*M_SQRT2*sin(q[0])*sin(q[1])*sin(q[2])*sin(q[3]) + (1.0/2.0)*M_SQRT2*sin(q[0])*sin(q[3])*cos(q[2]) - 1.0/2.0*M_SQRT2*sin(q[1])*sin(q[2])*sin(q[3])*cos(q[0]) + (1.0/2.0)*M_SQRT2*sin(q[3])*cos(q[0])*cos(q[2]);
   out_1492015293482457883[3] = -1.0/2.0*M_SQRT2*sin(q[0])*sin(q[1])*cos(q[2])*cos(q[3]) + (1.0/2.0)*M_SQRT2*sin(q[0])*sin(q[2])*cos(q[3]) - 1.0/2.0*M_SQRT2*sin(q[0])*sin(q[3])*cos(q[1]) + (1.0/2.0)*M_SQRT2*sin(q[1])*cos(q[0])*cos(q[2])*cos(q[3]) + (1.0/2.0)*M_SQRT2*sin(q[2])*cos(q[0])*cos(q[3]) + (1.0/2.0)*M_SQRT2*sin(q[3])*cos(q[0])*cos(q[1]);
   out_1492015293482457883[4] = 0;
   out_1492015293482457883[5] = 0;
   out_1492015293482457883[6] = 0;
   out_1492015293482457883[7] = -1.0/2.0*M_SQRT2*sin(q[0])*sin(q[1])*sin(q[3])*cos(q[2]) + (1.0/2.0)*M_SQRT2*sin(q[0])*sin(q[2])*sin(q[3]) + (1.0/2.0)*M_SQRT2*sin(q[0])*cos(q[1])*cos(q[3]) + (1.0/2.0)*M_SQRT2*sin(q[1])*sin(q[3])*cos(q[0])*cos(q[2]) + (1.0/2.0)*M_SQRT2*sin(q[2])*sin(q[3])*cos(q[0]) - 1.0/2.0*M_SQRT2*cos(q[0])*cos(q[1])*cos(q[3]);
   out_1492015293482457883[8] = (1.0/2.0)*M_SQRT2*sin(q[0])*sin(q[1])*cos(q[3]) + (1.0/2.0)*M_SQRT2*sin(q[0])*sin(q[3])*cos(q[1])*cos(q[2]) + (1.0/2.0)*M_SQRT2*sin(q[1])*cos(q[0])*cos(q[3]) + (1.0/2.0)*M_SQRT2*sin(q[3])*cos(q[0])*cos(q[1])*cos(q[2]);
   out_1492015293482457883[9] = -1.0/2.0*M_SQRT2*sin(q[0])*sin(q[1])*sin(q[2])*sin(q[3]) + (1.0/2.0)*M_SQRT2*sin(q[0])*sin(q[3])*cos(q[2]) - 1.0/2.0*M_SQRT2*sin(q[1])*sin(q[2])*sin(q[3])*cos(q[0]) - 1.0/2.0*M_SQRT2*sin(q[3])*cos(q[0])*cos(q[2]);
   out_1492015293482457883[10] = (1.0/2.0)*M_SQRT2*sin(q[0])*sin(q[1])*cos(q[2])*cos(q[3]) + (1.0/2.0)*M_SQRT2*sin(q[0])*sin(q[2])*cos(q[3]) + (1.0/2.0)*M_SQRT2*sin(q[0])*sin(q[3])*cos(q[1]) + (1.0/2.0)*M_SQRT2*sin(q[1])*cos(q[0])*cos(q[2])*cos(q[3]) - 1.0/2.0*M_SQRT2*sin(q[2])*cos(q[0])*cos(q[3]) + (1.0/2.0)*M_SQRT2*sin(q[3])*cos(q[0])*cos(q[1]);
   out_1492015293482457883[11] = 0;
   out_1492015293482457883[12] = 0;
   out_1492015293482457883[13] = 0;
   out_1492015293482457883[14] = 0;
   out_1492015293482457883[15] = sin(q[1])*sin(q[3])*cos(q[2]) - cos(q[1])*cos(q[3]);
   out_1492015293482457883[16] = sin(q[2])*sin(q[3])*cos(q[1]);
   out_1492015293482457883[17] = sin(q[1])*sin(q[3]) - cos(q[1])*cos(q[2])*cos(q[3]);
   out_1492015293482457883[18] = 0;
   out_1492015293482457883[19] = 0;
   out_1492015293482457883[20] = 0;

}
