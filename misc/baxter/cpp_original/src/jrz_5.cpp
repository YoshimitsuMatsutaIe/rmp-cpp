/******************************************************************************
 *                       Code generated with sympy 1.9                        *
 *                                                                            *
 *              See http://www.sympy.org/ for more information.               *
 *                                                                            *
 *                   This file is part of 'jrz_5_BY_SYMPY_'                   *
 ******************************************************************************/
#include "jrz_5.h"
#include <math.h>

void jrz_5(double *q, double *out_2647045260824073923) {

   out_2647045260824073923[0] = (1.0/2.0)*M_SQRT2*sin(q[0])*sin(q[1])*sin(q[2])*cos(q[4]) + (1.0/2.0)*M_SQRT2*sin(q[0])*sin(q[1])*sin(q[4])*cos(q[2])*cos(q[3]) + (1.0/2.0)*M_SQRT2*sin(q[0])*sin(q[2])*sin(q[4])*cos(q[3]) + (1.0/2.0)*M_SQRT2*sin(q[0])*sin(q[3])*sin(q[4])*cos(q[1]) - 1.0/2.0*M_SQRT2*sin(q[0])*cos(q[2])*cos(q[4]) + (1.0/2.0)*M_SQRT2*sin(q[1])*sin(q[2])*cos(q[0])*cos(q[4]) + (1.0/2.0)*M_SQRT2*sin(q[1])*sin(q[4])*cos(q[0])*cos(q[2])*cos(q[3]) - 1.0/2.0*M_SQRT2*sin(q[2])*sin(q[4])*cos(q[0])*cos(q[3]) + (1.0/2.0)*M_SQRT2*sin(q[3])*sin(q[4])*cos(q[0])*cos(q[1]) + (1.0/2.0)*M_SQRT2*cos(q[0])*cos(q[2])*cos(q[4]);
   out_2647045260824073923[1] = -1.0/2.0*M_SQRT2*sin(q[0])*sin(q[1])*sin(q[3])*sin(q[4]) + (1.0/2.0)*M_SQRT2*sin(q[0])*sin(q[2])*cos(q[1])*cos(q[4]) + (1.0/2.0)*M_SQRT2*sin(q[0])*sin(q[4])*cos(q[1])*cos(q[2])*cos(q[3]) + (1.0/2.0)*M_SQRT2*sin(q[1])*sin(q[3])*sin(q[4])*cos(q[0]) - 1.0/2.0*M_SQRT2*sin(q[2])*cos(q[0])*cos(q[1])*cos(q[4]) - 1.0/2.0*M_SQRT2*sin(q[4])*cos(q[0])*cos(q[1])*cos(q[2])*cos(q[3]);
   out_2647045260824073923[2] = -1.0/2.0*M_SQRT2*sin(q[0])*sin(q[1])*sin(q[2])*sin(q[4])*cos(q[3]) + (1.0/2.0)*M_SQRT2*sin(q[0])*sin(q[1])*cos(q[2])*cos(q[4]) - 1.0/2.0*M_SQRT2*sin(q[0])*sin(q[2])*cos(q[4]) - 1.0/2.0*M_SQRT2*sin(q[0])*sin(q[4])*cos(q[2])*cos(q[3]) + (1.0/2.0)*M_SQRT2*sin(q[1])*sin(q[2])*sin(q[4])*cos(q[0])*cos(q[3]) - 1.0/2.0*M_SQRT2*sin(q[1])*cos(q[0])*cos(q[2])*cos(q[4]) - 1.0/2.0*M_SQRT2*sin(q[2])*cos(q[0])*cos(q[4]) - 1.0/2.0*M_SQRT2*sin(q[4])*cos(q[0])*cos(q[2])*cos(q[3]);
   out_2647045260824073923[3] = -1.0/2.0*M_SQRT2*sin(q[0])*sin(q[1])*sin(q[3])*sin(q[4])*cos(q[2]) + (1.0/2.0)*M_SQRT2*sin(q[0])*sin(q[2])*sin(q[3])*sin(q[4]) + (1.0/2.0)*M_SQRT2*sin(q[0])*sin(q[4])*cos(q[1])*cos(q[3]) + (1.0/2.0)*M_SQRT2*sin(q[1])*sin(q[3])*sin(q[4])*cos(q[0])*cos(q[2]) + (1.0/2.0)*M_SQRT2*sin(q[2])*sin(q[3])*sin(q[4])*cos(q[0]) - 1.0/2.0*M_SQRT2*sin(q[4])*cos(q[0])*cos(q[1])*cos(q[3]);
   out_2647045260824073923[4] = -1.0/2.0*M_SQRT2*sin(q[0])*sin(q[1])*sin(q[2])*sin(q[4]) + (1.0/2.0)*M_SQRT2*sin(q[0])*sin(q[1])*cos(q[2])*cos(q[3])*cos(q[4]) - 1.0/2.0*M_SQRT2*sin(q[0])*sin(q[2])*cos(q[3])*cos(q[4]) + (1.0/2.0)*M_SQRT2*sin(q[0])*sin(q[3])*cos(q[1])*cos(q[4]) - 1.0/2.0*M_SQRT2*sin(q[0])*sin(q[4])*cos(q[2]) + (1.0/2.0)*M_SQRT2*sin(q[1])*sin(q[2])*sin(q[4])*cos(q[0]) - 1.0/2.0*M_SQRT2*sin(q[1])*cos(q[0])*cos(q[2])*cos(q[3])*cos(q[4]) - 1.0/2.0*M_SQRT2*sin(q[2])*cos(q[0])*cos(q[3])*cos(q[4]) - 1.0/2.0*M_SQRT2*sin(q[3])*cos(q[0])*cos(q[1])*cos(q[4]) - 1.0/2.0*M_SQRT2*sin(q[4])*cos(q[0])*cos(q[2]);
   out_2647045260824073923[5] = 0;
   out_2647045260824073923[6] = 0;
   out_2647045260824073923[7] = (1.0/2.0)*M_SQRT2*sin(q[0])*sin(q[1])*sin(q[2])*cos(q[4]) + (1.0/2.0)*M_SQRT2*sin(q[0])*sin(q[1])*sin(q[4])*cos(q[2])*cos(q[3]) - 1.0/2.0*M_SQRT2*sin(q[0])*sin(q[2])*sin(q[4])*cos(q[3]) + (1.0/2.0)*M_SQRT2*sin(q[0])*sin(q[3])*sin(q[4])*cos(q[1]) + (1.0/2.0)*M_SQRT2*sin(q[0])*cos(q[2])*cos(q[4]) - 1.0/2.0*M_SQRT2*sin(q[1])*sin(q[2])*cos(q[0])*cos(q[4]) - 1.0/2.0*M_SQRT2*sin(q[1])*sin(q[4])*cos(q[0])*cos(q[2])*cos(q[3]) - 1.0/2.0*M_SQRT2*sin(q[2])*sin(q[4])*cos(q[0])*cos(q[3]) - 1.0/2.0*M_SQRT2*sin(q[3])*sin(q[4])*cos(q[0])*cos(q[1]) + (1.0/2.0)*M_SQRT2*cos(q[0])*cos(q[2])*cos(q[4]);
   out_2647045260824073923[8] = (1.0/2.0)*M_SQRT2*sin(q[0])*sin(q[1])*sin(q[3])*sin(q[4]) - 1.0/2.0*M_SQRT2*sin(q[0])*sin(q[2])*cos(q[1])*cos(q[4]) - 1.0/2.0*M_SQRT2*sin(q[0])*sin(q[4])*cos(q[1])*cos(q[2])*cos(q[3]) + (1.0/2.0)*M_SQRT2*sin(q[1])*sin(q[3])*sin(q[4])*cos(q[0]) - 1.0/2.0*M_SQRT2*sin(q[2])*cos(q[0])*cos(q[1])*cos(q[4]) - 1.0/2.0*M_SQRT2*sin(q[4])*cos(q[0])*cos(q[1])*cos(q[2])*cos(q[3]);
   out_2647045260824073923[9] = (1.0/2.0)*M_SQRT2*sin(q[0])*sin(q[1])*sin(q[2])*sin(q[4])*cos(q[3]) - 1.0/2.0*M_SQRT2*sin(q[0])*sin(q[1])*cos(q[2])*cos(q[4]) - 1.0/2.0*M_SQRT2*sin(q[0])*sin(q[2])*cos(q[4]) - 1.0/2.0*M_SQRT2*sin(q[0])*sin(q[4])*cos(q[2])*cos(q[3]) + (1.0/2.0)*M_SQRT2*sin(q[1])*sin(q[2])*sin(q[4])*cos(q[0])*cos(q[3]) - 1.0/2.0*M_SQRT2*sin(q[1])*cos(q[0])*cos(q[2])*cos(q[4]) + (1.0/2.0)*M_SQRT2*sin(q[2])*cos(q[0])*cos(q[4]) + (1.0/2.0)*M_SQRT2*sin(q[4])*cos(q[0])*cos(q[2])*cos(q[3]);
   out_2647045260824073923[10] = (1.0/2.0)*M_SQRT2*sin(q[0])*sin(q[1])*sin(q[3])*sin(q[4])*cos(q[2]) + (1.0/2.0)*M_SQRT2*sin(q[0])*sin(q[2])*sin(q[3])*sin(q[4]) - 1.0/2.0*M_SQRT2*sin(q[0])*sin(q[4])*cos(q[1])*cos(q[3]) + (1.0/2.0)*M_SQRT2*sin(q[1])*sin(q[3])*sin(q[4])*cos(q[0])*cos(q[2]) - 1.0/2.0*M_SQRT2*sin(q[2])*sin(q[3])*sin(q[4])*cos(q[0]) - 1.0/2.0*M_SQRT2*sin(q[4])*cos(q[0])*cos(q[1])*cos(q[3]);
   out_2647045260824073923[11] = (1.0/2.0)*M_SQRT2*sin(q[0])*sin(q[1])*sin(q[2])*sin(q[4]) - 1.0/2.0*M_SQRT2*sin(q[0])*sin(q[1])*cos(q[2])*cos(q[3])*cos(q[4]) - 1.0/2.0*M_SQRT2*sin(q[0])*sin(q[2])*cos(q[3])*cos(q[4]) - 1.0/2.0*M_SQRT2*sin(q[0])*sin(q[3])*cos(q[1])*cos(q[4]) - 1.0/2.0*M_SQRT2*sin(q[0])*sin(q[4])*cos(q[2]) + (1.0/2.0)*M_SQRT2*sin(q[1])*sin(q[2])*sin(q[4])*cos(q[0]) - 1.0/2.0*M_SQRT2*sin(q[1])*cos(q[0])*cos(q[2])*cos(q[3])*cos(q[4]) + (1.0/2.0)*M_SQRT2*sin(q[2])*cos(q[0])*cos(q[3])*cos(q[4]) - 1.0/2.0*M_SQRT2*sin(q[3])*cos(q[0])*cos(q[1])*cos(q[4]) + (1.0/2.0)*M_SQRT2*sin(q[4])*cos(q[0])*cos(q[2]);
   out_2647045260824073923[12] = 0;
   out_2647045260824073923[13] = 0;
   out_2647045260824073923[14] = 0;
   out_2647045260824073923[15] = -sin(q[1])*sin(q[2])*cos(q[4]) - sin(q[1])*sin(q[4])*cos(q[2])*cos(q[3]) - sin(q[3])*sin(q[4])*cos(q[1]);
   out_2647045260824073923[16] = -sin(q[2])*sin(q[4])*cos(q[1])*cos(q[3]) + cos(q[1])*cos(q[2])*cos(q[4]);
   out_2647045260824073923[17] = -sin(q[1])*sin(q[4])*cos(q[3]) - sin(q[3])*sin(q[4])*cos(q[1])*cos(q[2]);
   out_2647045260824073923[18] = -sin(q[1])*sin(q[3])*cos(q[4]) - sin(q[2])*sin(q[4])*cos(q[1]) + cos(q[1])*cos(q[2])*cos(q[3])*cos(q[4]);
   out_2647045260824073923[19] = 0;
   out_2647045260824073923[20] = 0;

}
