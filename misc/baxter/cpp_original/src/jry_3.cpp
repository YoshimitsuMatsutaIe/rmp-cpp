/******************************************************************************
 *                       Code generated with sympy 1.9                        *
 *                                                                            *
 *              See http://www.sympy.org/ for more information.               *
 *                                                                            *
 *                   This file is part of 'jry_3_BY_SYMPY_'                   *
 ******************************************************************************/
#include "jry_3.h"
#include <math.h>

void jry_3(double *q, double *out_292068318486894592) {

   out_292068318486894592[0] = (1.0/2.0)*M_SQRT2*sin(q[0])*sin(q[1])*sin(q[3])*cos(q[2]) + (1.0/2.0)*M_SQRT2*sin(q[0])*sin(q[2])*sin(q[3]) - 1.0/2.0*M_SQRT2*sin(q[0])*cos(q[1])*cos(q[3]) + (1.0/2.0)*M_SQRT2*sin(q[1])*sin(q[3])*cos(q[0])*cos(q[2]) - 1.0/2.0*M_SQRT2*sin(q[2])*sin(q[3])*cos(q[0]) - 1.0/2.0*M_SQRT2*cos(q[0])*cos(q[1])*cos(q[3]);
   out_292068318486894592[1] = (1.0/2.0)*M_SQRT2*sin(q[0])*sin(q[1])*cos(q[3]) + (1.0/2.0)*M_SQRT2*sin(q[0])*sin(q[3])*cos(q[1])*cos(q[2]) - 1.0/2.0*M_SQRT2*sin(q[1])*cos(q[0])*cos(q[3]) - 1.0/2.0*M_SQRT2*sin(q[3])*cos(q[0])*cos(q[1])*cos(q[2]);
   out_292068318486894592[2] = -1.0/2.0*M_SQRT2*sin(q[0])*sin(q[1])*sin(q[2])*sin(q[3]) - 1.0/2.0*M_SQRT2*sin(q[0])*sin(q[3])*cos(q[2]) + (1.0/2.0)*M_SQRT2*sin(q[1])*sin(q[2])*sin(q[3])*cos(q[0]) - 1.0/2.0*M_SQRT2*sin(q[3])*cos(q[0])*cos(q[2]);
   out_292068318486894592[3] = (1.0/2.0)*M_SQRT2*sin(q[0])*sin(q[1])*cos(q[2])*cos(q[3]) - 1.0/2.0*M_SQRT2*sin(q[0])*sin(q[2])*cos(q[3]) + (1.0/2.0)*M_SQRT2*sin(q[0])*sin(q[3])*cos(q[1]) - 1.0/2.0*M_SQRT2*sin(q[1])*cos(q[0])*cos(q[2])*cos(q[3]) - 1.0/2.0*M_SQRT2*sin(q[2])*cos(q[0])*cos(q[3]) - 1.0/2.0*M_SQRT2*sin(q[3])*cos(q[0])*cos(q[1]);
   out_292068318486894592[4] = 0;
   out_292068318486894592[5] = 0;
   out_292068318486894592[6] = 0;
   out_292068318486894592[7] = (1.0/2.0)*M_SQRT2*sin(q[0])*sin(q[1])*sin(q[3])*cos(q[2]) - 1.0/2.0*M_SQRT2*sin(q[0])*sin(q[2])*sin(q[3]) - 1.0/2.0*M_SQRT2*sin(q[0])*cos(q[1])*cos(q[3]) - 1.0/2.0*M_SQRT2*sin(q[1])*sin(q[3])*cos(q[0])*cos(q[2]) - 1.0/2.0*M_SQRT2*sin(q[2])*sin(q[3])*cos(q[0]) + (1.0/2.0)*M_SQRT2*cos(q[0])*cos(q[1])*cos(q[3]);
   out_292068318486894592[8] = -1.0/2.0*M_SQRT2*sin(q[0])*sin(q[1])*cos(q[3]) - 1.0/2.0*M_SQRT2*sin(q[0])*sin(q[3])*cos(q[1])*cos(q[2]) - 1.0/2.0*M_SQRT2*sin(q[1])*cos(q[0])*cos(q[3]) - 1.0/2.0*M_SQRT2*sin(q[3])*cos(q[0])*cos(q[1])*cos(q[2]);
   out_292068318486894592[9] = (1.0/2.0)*M_SQRT2*sin(q[0])*sin(q[1])*sin(q[2])*sin(q[3]) - 1.0/2.0*M_SQRT2*sin(q[0])*sin(q[3])*cos(q[2]) + (1.0/2.0)*M_SQRT2*sin(q[1])*sin(q[2])*sin(q[3])*cos(q[0]) + (1.0/2.0)*M_SQRT2*sin(q[3])*cos(q[0])*cos(q[2]);
   out_292068318486894592[10] = -1.0/2.0*M_SQRT2*sin(q[0])*sin(q[1])*cos(q[2])*cos(q[3]) - 1.0/2.0*M_SQRT2*sin(q[0])*sin(q[2])*cos(q[3]) - 1.0/2.0*M_SQRT2*sin(q[0])*sin(q[3])*cos(q[1]) - 1.0/2.0*M_SQRT2*sin(q[1])*cos(q[0])*cos(q[2])*cos(q[3]) + (1.0/2.0)*M_SQRT2*sin(q[2])*cos(q[0])*cos(q[3]) - 1.0/2.0*M_SQRT2*sin(q[3])*cos(q[0])*cos(q[1]);
   out_292068318486894592[11] = 0;
   out_292068318486894592[12] = 0;
   out_292068318486894592[13] = 0;
   out_292068318486894592[14] = 0;
   out_292068318486894592[15] = -sin(q[1])*sin(q[3])*cos(q[2]) + cos(q[1])*cos(q[3]);
   out_292068318486894592[16] = -sin(q[2])*sin(q[3])*cos(q[1]);
   out_292068318486894592[17] = -sin(q[1])*sin(q[3]) + cos(q[1])*cos(q[2])*cos(q[3]);
   out_292068318486894592[18] = 0;
   out_292068318486894592[19] = 0;
   out_292068318486894592[20] = 0;

}
