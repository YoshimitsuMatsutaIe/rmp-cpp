/******************************************************************************
 *                       Code generated with sympy 1.9                        *
 *                                                                            *
 *              See http://www.sympy.org/ for more information.               *
 *                                                                            *
 *                   This file is part of 'jo_2_BY_SYMPY_'                    *
 ******************************************************************************/
#include "jo_2.h"
#include <math.h>

void jo_2(double L1, double L2, double *q, double *out_2528124071881438256) {

   out_2528124071881438256[0] = (1.0/2.0)*M_SQRT2*L1*sin(q[0]) + (1.0/2.0)*M_SQRT2*L1*cos(q[0]) + (1.0/2.0)*M_SQRT2*L2*sin(q[0])*cos(q[1]) + (1.0/2.0)*M_SQRT2*L2*cos(q[0])*cos(q[1]);
   out_2528124071881438256[1] = -1.0/2.0*M_SQRT2*L2*sin(q[0])*sin(q[1]) + (1.0/2.0)*M_SQRT2*L2*sin(q[1])*cos(q[0]);
   out_2528124071881438256[2] = 0;
   out_2528124071881438256[3] = 0;
   out_2528124071881438256[4] = 0;
   out_2528124071881438256[5] = 0;
   out_2528124071881438256[6] = 0;
   out_2528124071881438256[7] = (1.0/2.0)*M_SQRT2*L1*sin(q[0]) - 1.0/2.0*M_SQRT2*L1*cos(q[0]) + (1.0/2.0)*M_SQRT2*L2*sin(q[0])*cos(q[1]) - 1.0/2.0*M_SQRT2*L2*cos(q[0])*cos(q[1]);
   out_2528124071881438256[8] = (1.0/2.0)*M_SQRT2*L2*sin(q[0])*sin(q[1]) + (1.0/2.0)*M_SQRT2*L2*sin(q[1])*cos(q[0]);
   out_2528124071881438256[9] = 0;
   out_2528124071881438256[10] = 0;
   out_2528124071881438256[11] = 0;
   out_2528124071881438256[12] = 0;
   out_2528124071881438256[13] = 0;
   out_2528124071881438256[14] = 0;
   out_2528124071881438256[15] = -L2*cos(q[1]);
   out_2528124071881438256[16] = 0;
   out_2528124071881438256[17] = 0;
   out_2528124071881438256[18] = 0;
   out_2528124071881438256[19] = 0;
   out_2528124071881438256[20] = 0;

}
