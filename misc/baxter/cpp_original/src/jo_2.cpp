/******************************************************************************
 *                       Code generated with sympy 1.9                        *
 *                                                                            *
 *              See http://www.sympy.org/ for more information.               *
 *                                                                            *
 *                   This file is part of 'jo_2_BY_SYMPY_'                    *
 ******************************************************************************/
#include "jo_2.h"
#include <math.h>

void jo_2(double L1, double L2, double *q, double *out_8590638433349391525) {

   out_8590638433349391525[0] = (1.0/2.0)*M_SQRT2*L1*sin(q[0]) + (1.0/2.0)*M_SQRT2*L1*cos(q[0]) + (1.0/2.0)*M_SQRT2*L2*sin(q[0])*cos(q[1]) + (1.0/2.0)*M_SQRT2*L2*cos(q[0])*cos(q[1]);
   out_8590638433349391525[1] = -1.0/2.0*M_SQRT2*L2*sin(q[0])*sin(q[1]) + (1.0/2.0)*M_SQRT2*L2*sin(q[1])*cos(q[0]);
   out_8590638433349391525[2] = 0;
   out_8590638433349391525[3] = 0;
   out_8590638433349391525[4] = 0;
   out_8590638433349391525[5] = 0;
   out_8590638433349391525[6] = 0;
   out_8590638433349391525[7] = (1.0/2.0)*M_SQRT2*L1*sin(q[0]) - 1.0/2.0*M_SQRT2*L1*cos(q[0]) + (1.0/2.0)*M_SQRT2*L2*sin(q[0])*cos(q[1]) - 1.0/2.0*M_SQRT2*L2*cos(q[0])*cos(q[1]);
   out_8590638433349391525[8] = (1.0/2.0)*M_SQRT2*L2*sin(q[0])*sin(q[1]) + (1.0/2.0)*M_SQRT2*L2*sin(q[1])*cos(q[0]);
   out_8590638433349391525[9] = 0;
   out_8590638433349391525[10] = 0;
   out_8590638433349391525[11] = 0;
   out_8590638433349391525[12] = 0;
   out_8590638433349391525[13] = 0;
   out_8590638433349391525[14] = 0;
   out_8590638433349391525[15] = -L2*cos(q[1]);
   out_8590638433349391525[16] = 0;
   out_8590638433349391525[17] = 0;
   out_8590638433349391525[18] = 0;
   out_8590638433349391525[19] = 0;
   out_8590638433349391525[20] = 0;

}
