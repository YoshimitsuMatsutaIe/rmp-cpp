/******************************************************************************
 *                       Code generated with sympy 1.9                        *
 *                                                                            *
 *              See http://www.sympy.org/ for more information.               *
 *                                                                            *
 *                   This file is part of 'jrx_4_BY_SYMPY_'                   *
 ******************************************************************************/
#include "jrx_4.h"
#include <math.h>

void jrx_4(double *q, double *out_2779561576766290452) {

   out_2779561576766290452[0] = (1.0/2.0)*M_SQRT2*sin(q[0])*sin(q[1])*sin(q[2])*sin(q[4]) - 1.0/2.0*M_SQRT2*sin(q[0])*sin(q[1])*cos(q[2])*cos(q[3])*cos(q[4]) - 1.0/2.0*M_SQRT2*sin(q[0])*sin(q[2])*cos(q[3])*cos(q[4]) - 1.0/2.0*M_SQRT2*sin(q[0])*sin(q[3])*cos(q[1])*cos(q[4]) - 1.0/2.0*M_SQRT2*sin(q[0])*sin(q[4])*cos(q[2]) + (1.0/2.0)*M_SQRT2*sin(q[1])*sin(q[2])*sin(q[4])*cos(q[0]) - 1.0/2.0*M_SQRT2*sin(q[1])*cos(q[0])*cos(q[2])*cos(q[3])*cos(q[4]) + (1.0/2.0)*M_SQRT2*sin(q[2])*cos(q[0])*cos(q[3])*cos(q[4]) - 1.0/2.0*M_SQRT2*sin(q[3])*cos(q[0])*cos(q[1])*cos(q[4]) + (1.0/2.0)*M_SQRT2*sin(q[4])*cos(q[0])*cos(q[2]);
   out_2779561576766290452[1] = (1.0/2.0)*M_SQRT2*sin(q[0])*sin(q[1])*sin(q[3])*cos(q[4]) + (1.0/2.0)*M_SQRT2*sin(q[0])*sin(q[2])*sin(q[4])*cos(q[1]) - 1.0/2.0*M_SQRT2*sin(q[0])*cos(q[1])*cos(q[2])*cos(q[3])*cos(q[4]) - 1.0/2.0*M_SQRT2*sin(q[1])*sin(q[3])*cos(q[0])*cos(q[4]) - 1.0/2.0*M_SQRT2*sin(q[2])*sin(q[4])*cos(q[0])*cos(q[1]) + (1.0/2.0)*M_SQRT2*cos(q[0])*cos(q[1])*cos(q[2])*cos(q[3])*cos(q[4]);
   out_2779561576766290452[2] = (1.0/2.0)*M_SQRT2*sin(q[0])*sin(q[1])*sin(q[2])*cos(q[3])*cos(q[4]) + (1.0/2.0)*M_SQRT2*sin(q[0])*sin(q[1])*sin(q[4])*cos(q[2]) - 1.0/2.0*M_SQRT2*sin(q[0])*sin(q[2])*sin(q[4]) + (1.0/2.0)*M_SQRT2*sin(q[0])*cos(q[2])*cos(q[3])*cos(q[4]) - 1.0/2.0*M_SQRT2*sin(q[1])*sin(q[2])*cos(q[0])*cos(q[3])*cos(q[4]) - 1.0/2.0*M_SQRT2*sin(q[1])*sin(q[4])*cos(q[0])*cos(q[2]) - 1.0/2.0*M_SQRT2*sin(q[2])*sin(q[4])*cos(q[0]) + (1.0/2.0)*M_SQRT2*cos(q[0])*cos(q[2])*cos(q[3])*cos(q[4]);
   out_2779561576766290452[3] = (1.0/2.0)*M_SQRT2*sin(q[0])*sin(q[1])*sin(q[3])*cos(q[2])*cos(q[4]) - 1.0/2.0*M_SQRT2*sin(q[0])*sin(q[2])*sin(q[3])*cos(q[4]) - 1.0/2.0*M_SQRT2*sin(q[0])*cos(q[1])*cos(q[3])*cos(q[4]) - 1.0/2.0*M_SQRT2*sin(q[1])*sin(q[3])*cos(q[0])*cos(q[2])*cos(q[4]) - 1.0/2.0*M_SQRT2*sin(q[2])*sin(q[3])*cos(q[0])*cos(q[4]) + (1.0/2.0)*M_SQRT2*cos(q[0])*cos(q[1])*cos(q[3])*cos(q[4]);
   out_2779561576766290452[4] = (1.0/2.0)*M_SQRT2*sin(q[0])*sin(q[1])*sin(q[2])*cos(q[4]) + (1.0/2.0)*M_SQRT2*sin(q[0])*sin(q[1])*sin(q[4])*cos(q[2])*cos(q[3]) - 1.0/2.0*M_SQRT2*sin(q[0])*sin(q[2])*sin(q[4])*cos(q[3]) + (1.0/2.0)*M_SQRT2*sin(q[0])*sin(q[3])*sin(q[4])*cos(q[1]) + (1.0/2.0)*M_SQRT2*sin(q[0])*cos(q[2])*cos(q[4]) - 1.0/2.0*M_SQRT2*sin(q[1])*sin(q[2])*cos(q[0])*cos(q[4]) - 1.0/2.0*M_SQRT2*sin(q[1])*sin(q[4])*cos(q[0])*cos(q[2])*cos(q[3]) - 1.0/2.0*M_SQRT2*sin(q[2])*sin(q[4])*cos(q[0])*cos(q[3]) - 1.0/2.0*M_SQRT2*sin(q[3])*sin(q[4])*cos(q[0])*cos(q[1]) + (1.0/2.0)*M_SQRT2*cos(q[0])*cos(q[2])*cos(q[4]);
   out_2779561576766290452[5] = 0;
   out_2779561576766290452[6] = 0;
   out_2779561576766290452[7] = (1.0/2.0)*M_SQRT2*sin(q[0])*sin(q[1])*sin(q[2])*sin(q[4]) - 1.0/2.0*M_SQRT2*sin(q[0])*sin(q[1])*cos(q[2])*cos(q[3])*cos(q[4]) + (1.0/2.0)*M_SQRT2*sin(q[0])*sin(q[2])*cos(q[3])*cos(q[4]) - 1.0/2.0*M_SQRT2*sin(q[0])*sin(q[3])*cos(q[1])*cos(q[4]) + (1.0/2.0)*M_SQRT2*sin(q[0])*sin(q[4])*cos(q[2]) - 1.0/2.0*M_SQRT2*sin(q[1])*sin(q[2])*sin(q[4])*cos(q[0]) + (1.0/2.0)*M_SQRT2*sin(q[1])*cos(q[0])*cos(q[2])*cos(q[3])*cos(q[4]) + (1.0/2.0)*M_SQRT2*sin(q[2])*cos(q[0])*cos(q[3])*cos(q[4]) + (1.0/2.0)*M_SQRT2*sin(q[3])*cos(q[0])*cos(q[1])*cos(q[4]) + (1.0/2.0)*M_SQRT2*sin(q[4])*cos(q[0])*cos(q[2]);
   out_2779561576766290452[8] = -1.0/2.0*M_SQRT2*sin(q[0])*sin(q[1])*sin(q[3])*cos(q[4]) - 1.0/2.0*M_SQRT2*sin(q[0])*sin(q[2])*sin(q[4])*cos(q[1]) + (1.0/2.0)*M_SQRT2*sin(q[0])*cos(q[1])*cos(q[2])*cos(q[3])*cos(q[4]) - 1.0/2.0*M_SQRT2*sin(q[1])*sin(q[3])*cos(q[0])*cos(q[4]) - 1.0/2.0*M_SQRT2*sin(q[2])*sin(q[4])*cos(q[0])*cos(q[1]) + (1.0/2.0)*M_SQRT2*cos(q[0])*cos(q[1])*cos(q[2])*cos(q[3])*cos(q[4]);
   out_2779561576766290452[9] = -1.0/2.0*M_SQRT2*sin(q[0])*sin(q[1])*sin(q[2])*cos(q[3])*cos(q[4]) - 1.0/2.0*M_SQRT2*sin(q[0])*sin(q[1])*sin(q[4])*cos(q[2]) - 1.0/2.0*M_SQRT2*sin(q[0])*sin(q[2])*sin(q[4]) + (1.0/2.0)*M_SQRT2*sin(q[0])*cos(q[2])*cos(q[3])*cos(q[4]) - 1.0/2.0*M_SQRT2*sin(q[1])*sin(q[2])*cos(q[0])*cos(q[3])*cos(q[4]) - 1.0/2.0*M_SQRT2*sin(q[1])*sin(q[4])*cos(q[0])*cos(q[2]) + (1.0/2.0)*M_SQRT2*sin(q[2])*sin(q[4])*cos(q[0]) - 1.0/2.0*M_SQRT2*cos(q[0])*cos(q[2])*cos(q[3])*cos(q[4]);
   out_2779561576766290452[10] = -1.0/2.0*M_SQRT2*sin(q[0])*sin(q[1])*sin(q[3])*cos(q[2])*cos(q[4]) - 1.0/2.0*M_SQRT2*sin(q[0])*sin(q[2])*sin(q[3])*cos(q[4]) + (1.0/2.0)*M_SQRT2*sin(q[0])*cos(q[1])*cos(q[3])*cos(q[4]) - 1.0/2.0*M_SQRT2*sin(q[1])*sin(q[3])*cos(q[0])*cos(q[2])*cos(q[4]) + (1.0/2.0)*M_SQRT2*sin(q[2])*sin(q[3])*cos(q[0])*cos(q[4]) + (1.0/2.0)*M_SQRT2*cos(q[0])*cos(q[1])*cos(q[3])*cos(q[4]);
   out_2779561576766290452[11] = -1.0/2.0*M_SQRT2*sin(q[0])*sin(q[1])*sin(q[2])*cos(q[4]) - 1.0/2.0*M_SQRT2*sin(q[0])*sin(q[1])*sin(q[4])*cos(q[2])*cos(q[3]) - 1.0/2.0*M_SQRT2*sin(q[0])*sin(q[2])*sin(q[4])*cos(q[3]) - 1.0/2.0*M_SQRT2*sin(q[0])*sin(q[3])*sin(q[4])*cos(q[1]) + (1.0/2.0)*M_SQRT2*sin(q[0])*cos(q[2])*cos(q[4]) - 1.0/2.0*M_SQRT2*sin(q[1])*sin(q[2])*cos(q[0])*cos(q[4]) - 1.0/2.0*M_SQRT2*sin(q[1])*sin(q[4])*cos(q[0])*cos(q[2])*cos(q[3]) + (1.0/2.0)*M_SQRT2*sin(q[2])*sin(q[4])*cos(q[0])*cos(q[3]) - 1.0/2.0*M_SQRT2*sin(q[3])*sin(q[4])*cos(q[0])*cos(q[1]) - 1.0/2.0*M_SQRT2*cos(q[0])*cos(q[2])*cos(q[4]);
   out_2779561576766290452[12] = 0;
   out_2779561576766290452[13] = 0;
   out_2779561576766290452[14] = 0;
   out_2779561576766290452[15] = -sin(q[1])*sin(q[2])*sin(q[4]) + sin(q[1])*cos(q[2])*cos(q[3])*cos(q[4]) + sin(q[3])*cos(q[1])*cos(q[4]);
   out_2779561576766290452[16] = sin(q[2])*cos(q[1])*cos(q[3])*cos(q[4]) + sin(q[4])*cos(q[1])*cos(q[2]);
   out_2779561576766290452[17] = sin(q[1])*cos(q[3])*cos(q[4]) + sin(q[3])*cos(q[1])*cos(q[2])*cos(q[4]);
   out_2779561576766290452[18] = -sin(q[1])*sin(q[3])*sin(q[4]) + sin(q[2])*cos(q[1])*cos(q[4]) + sin(q[4])*cos(q[1])*cos(q[2])*cos(q[3]);
   out_2779561576766290452[19] = 0;
   out_2779561576766290452[20] = 0;

}
