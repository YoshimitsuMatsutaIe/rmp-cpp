/******************************************************************************
 *                       Code generated with sympy 1.9                        *
 *                                                                            *
 *              See http://www.sympy.org/ for more information.               *
 *                                                                            *
 *                  This file is part of 'jrz_ee_BY_SYMPY_'                   *
 ******************************************************************************/
#include "jrz_ee.h"
#include <math.h>

void jrz_ee(double *q, double *out_7981151013213679122) {

   out_7981151013213679122[0] = (1.0/2.0)*M_SQRT2*sin(q[0])*sin(q[1])*sin(q[2])*sin(q[4])*sin(q[5]) - 1.0/2.0*M_SQRT2*sin(q[0])*sin(q[1])*sin(q[3])*cos(q[2])*cos(q[5]) - 1.0/2.0*M_SQRT2*sin(q[0])*sin(q[1])*sin(q[5])*cos(q[2])*cos(q[3])*cos(q[4]) - 1.0/2.0*M_SQRT2*sin(q[0])*sin(q[2])*sin(q[3])*cos(q[5]) - 1.0/2.0*M_SQRT2*sin(q[0])*sin(q[2])*sin(q[5])*cos(q[3])*cos(q[4]) - 1.0/2.0*M_SQRT2*sin(q[0])*sin(q[3])*sin(q[5])*cos(q[1])*cos(q[4]) - 1.0/2.0*M_SQRT2*sin(q[0])*sin(q[4])*sin(q[5])*cos(q[2]) + (1.0/2.0)*M_SQRT2*sin(q[0])*cos(q[1])*cos(q[3])*cos(q[5]) + (1.0/2.0)*M_SQRT2*sin(q[1])*sin(q[2])*sin(q[4])*sin(q[5])*cos(q[0]) - 1.0/2.0*M_SQRT2*sin(q[1])*sin(q[3])*cos(q[0])*cos(q[2])*cos(q[5]) - 1.0/2.0*M_SQRT2*sin(q[1])*sin(q[5])*cos(q[0])*cos(q[2])*cos(q[3])*cos(q[4]) + (1.0/2.0)*M_SQRT2*sin(q[2])*sin(q[3])*cos(q[0])*cos(q[5]) + (1.0/2.0)*M_SQRT2*sin(q[2])*sin(q[5])*cos(q[0])*cos(q[3])*cos(q[4]) - 1.0/2.0*M_SQRT2*sin(q[3])*sin(q[5])*cos(q[0])*cos(q[1])*cos(q[4]) + (1.0/2.0)*M_SQRT2*sin(q[4])*sin(q[5])*cos(q[0])*cos(q[2]) + (1.0/2.0)*M_SQRT2*cos(q[0])*cos(q[1])*cos(q[3])*cos(q[5]);
   out_7981151013213679122[1] = (1.0/2.0)*M_SQRT2*sin(q[0])*sin(q[1])*sin(q[3])*sin(q[5])*cos(q[4]) - 1.0/2.0*M_SQRT2*sin(q[0])*sin(q[1])*cos(q[3])*cos(q[5]) + (1.0/2.0)*M_SQRT2*sin(q[0])*sin(q[2])*sin(q[4])*sin(q[5])*cos(q[1]) - 1.0/2.0*M_SQRT2*sin(q[0])*sin(q[3])*cos(q[1])*cos(q[2])*cos(q[5]) - 1.0/2.0*M_SQRT2*sin(q[0])*sin(q[5])*cos(q[1])*cos(q[2])*cos(q[3])*cos(q[4]) - 1.0/2.0*M_SQRT2*sin(q[1])*sin(q[3])*sin(q[5])*cos(q[0])*cos(q[4]) + (1.0/2.0)*M_SQRT2*sin(q[1])*cos(q[0])*cos(q[3])*cos(q[5]) - 1.0/2.0*M_SQRT2*sin(q[2])*sin(q[4])*sin(q[5])*cos(q[0])*cos(q[1]) + (1.0/2.0)*M_SQRT2*sin(q[3])*cos(q[0])*cos(q[1])*cos(q[2])*cos(q[5]) + (1.0/2.0)*M_SQRT2*sin(q[5])*cos(q[0])*cos(q[1])*cos(q[2])*cos(q[3])*cos(q[4]);
   out_7981151013213679122[2] = (1.0/2.0)*M_SQRT2*sin(q[0])*sin(q[1])*sin(q[2])*sin(q[3])*cos(q[5]) + (1.0/2.0)*M_SQRT2*sin(q[0])*sin(q[1])*sin(q[2])*sin(q[5])*cos(q[3])*cos(q[4]) + (1.0/2.0)*M_SQRT2*sin(q[0])*sin(q[1])*sin(q[4])*sin(q[5])*cos(q[2]) - 1.0/2.0*M_SQRT2*sin(q[0])*sin(q[2])*sin(q[4])*sin(q[5]) + (1.0/2.0)*M_SQRT2*sin(q[0])*sin(q[3])*cos(q[2])*cos(q[5]) + (1.0/2.0)*M_SQRT2*sin(q[0])*sin(q[5])*cos(q[2])*cos(q[3])*cos(q[4]) - 1.0/2.0*M_SQRT2*sin(q[1])*sin(q[2])*sin(q[3])*cos(q[0])*cos(q[5]) - 1.0/2.0*M_SQRT2*sin(q[1])*sin(q[2])*sin(q[5])*cos(q[0])*cos(q[3])*cos(q[4]) - 1.0/2.0*M_SQRT2*sin(q[1])*sin(q[4])*sin(q[5])*cos(q[0])*cos(q[2]) - 1.0/2.0*M_SQRT2*sin(q[2])*sin(q[4])*sin(q[5])*cos(q[0]) + (1.0/2.0)*M_SQRT2*sin(q[3])*cos(q[0])*cos(q[2])*cos(q[5]) + (1.0/2.0)*M_SQRT2*sin(q[5])*cos(q[0])*cos(q[2])*cos(q[3])*cos(q[4]);
   out_7981151013213679122[3] = (1.0/2.0)*M_SQRT2*sin(q[0])*sin(q[1])*sin(q[3])*sin(q[5])*cos(q[2])*cos(q[4]) - 1.0/2.0*M_SQRT2*sin(q[0])*sin(q[1])*cos(q[2])*cos(q[3])*cos(q[5]) - 1.0/2.0*M_SQRT2*sin(q[0])*sin(q[2])*sin(q[3])*sin(q[5])*cos(q[4]) + (1.0/2.0)*M_SQRT2*sin(q[0])*sin(q[2])*cos(q[3])*cos(q[5]) - 1.0/2.0*M_SQRT2*sin(q[0])*sin(q[3])*cos(q[1])*cos(q[5]) - 1.0/2.0*M_SQRT2*sin(q[0])*sin(q[5])*cos(q[1])*cos(q[3])*cos(q[4]) - 1.0/2.0*M_SQRT2*sin(q[1])*sin(q[3])*sin(q[5])*cos(q[0])*cos(q[2])*cos(q[4]) + (1.0/2.0)*M_SQRT2*sin(q[1])*cos(q[0])*cos(q[2])*cos(q[3])*cos(q[5]) - 1.0/2.0*M_SQRT2*sin(q[2])*sin(q[3])*sin(q[5])*cos(q[0])*cos(q[4]) + (1.0/2.0)*M_SQRT2*sin(q[2])*cos(q[0])*cos(q[3])*cos(q[5]) + (1.0/2.0)*M_SQRT2*sin(q[3])*cos(q[0])*cos(q[1])*cos(q[5]) + (1.0/2.0)*M_SQRT2*sin(q[5])*cos(q[0])*cos(q[1])*cos(q[3])*cos(q[4]);
   out_7981151013213679122[4] = (1.0/2.0)*M_SQRT2*sin(q[0])*sin(q[1])*sin(q[2])*sin(q[5])*cos(q[4]) + (1.0/2.0)*M_SQRT2*sin(q[0])*sin(q[1])*sin(q[4])*sin(q[5])*cos(q[2])*cos(q[3]) - 1.0/2.0*M_SQRT2*sin(q[0])*sin(q[2])*sin(q[4])*sin(q[5])*cos(q[3]) + (1.0/2.0)*M_SQRT2*sin(q[0])*sin(q[3])*sin(q[4])*sin(q[5])*cos(q[1]) + (1.0/2.0)*M_SQRT2*sin(q[0])*sin(q[5])*cos(q[2])*cos(q[4]) - 1.0/2.0*M_SQRT2*sin(q[1])*sin(q[2])*sin(q[5])*cos(q[0])*cos(q[4]) - 1.0/2.0*M_SQRT2*sin(q[1])*sin(q[4])*sin(q[5])*cos(q[0])*cos(q[2])*cos(q[3]) - 1.0/2.0*M_SQRT2*sin(q[2])*sin(q[4])*sin(q[5])*cos(q[0])*cos(q[3]) - 1.0/2.0*M_SQRT2*sin(q[3])*sin(q[4])*sin(q[5])*cos(q[0])*cos(q[1]) + (1.0/2.0)*M_SQRT2*sin(q[5])*cos(q[0])*cos(q[2])*cos(q[4]);
   out_7981151013213679122[5] = (1.0/2.0)*M_SQRT2*sin(q[0])*sin(q[1])*sin(q[2])*sin(q[4])*cos(q[5]) + (1.0/2.0)*M_SQRT2*sin(q[0])*sin(q[1])*sin(q[3])*sin(q[5])*cos(q[2]) - 1.0/2.0*M_SQRT2*sin(q[0])*sin(q[1])*cos(q[2])*cos(q[3])*cos(q[4])*cos(q[5]) - 1.0/2.0*M_SQRT2*sin(q[0])*sin(q[2])*sin(q[3])*sin(q[5]) + (1.0/2.0)*M_SQRT2*sin(q[0])*sin(q[2])*cos(q[3])*cos(q[4])*cos(q[5]) - 1.0/2.0*M_SQRT2*sin(q[0])*sin(q[3])*cos(q[1])*cos(q[4])*cos(q[5]) + (1.0/2.0)*M_SQRT2*sin(q[0])*sin(q[4])*cos(q[2])*cos(q[5]) - 1.0/2.0*M_SQRT2*sin(q[0])*sin(q[5])*cos(q[1])*cos(q[3]) - 1.0/2.0*M_SQRT2*sin(q[1])*sin(q[2])*sin(q[4])*cos(q[0])*cos(q[5]) - 1.0/2.0*M_SQRT2*sin(q[1])*sin(q[3])*sin(q[5])*cos(q[0])*cos(q[2]) + (1.0/2.0)*M_SQRT2*sin(q[1])*cos(q[0])*cos(q[2])*cos(q[3])*cos(q[4])*cos(q[5]) - 1.0/2.0*M_SQRT2*sin(q[2])*sin(q[3])*sin(q[5])*cos(q[0]) + (1.0/2.0)*M_SQRT2*sin(q[2])*cos(q[0])*cos(q[3])*cos(q[4])*cos(q[5]) + (1.0/2.0)*M_SQRT2*sin(q[3])*cos(q[0])*cos(q[1])*cos(q[4])*cos(q[5]) + (1.0/2.0)*M_SQRT2*sin(q[4])*cos(q[0])*cos(q[2])*cos(q[5]) + (1.0/2.0)*M_SQRT2*sin(q[5])*cos(q[0])*cos(q[1])*cos(q[3]);
   out_7981151013213679122[6] = 0;
   out_7981151013213679122[7] = (1.0/2.0)*M_SQRT2*sin(q[0])*sin(q[1])*sin(q[2])*sin(q[4])*sin(q[5]) - 1.0/2.0*M_SQRT2*sin(q[0])*sin(q[1])*sin(q[3])*cos(q[2])*cos(q[5]) - 1.0/2.0*M_SQRT2*sin(q[0])*sin(q[1])*sin(q[5])*cos(q[2])*cos(q[3])*cos(q[4]) + (1.0/2.0)*M_SQRT2*sin(q[0])*sin(q[2])*sin(q[3])*cos(q[5]) + (1.0/2.0)*M_SQRT2*sin(q[0])*sin(q[2])*sin(q[5])*cos(q[3])*cos(q[4]) - 1.0/2.0*M_SQRT2*sin(q[0])*sin(q[3])*sin(q[5])*cos(q[1])*cos(q[4]) + (1.0/2.0)*M_SQRT2*sin(q[0])*sin(q[4])*sin(q[5])*cos(q[2]) + (1.0/2.0)*M_SQRT2*sin(q[0])*cos(q[1])*cos(q[3])*cos(q[5]) - 1.0/2.0*M_SQRT2*sin(q[1])*sin(q[2])*sin(q[4])*sin(q[5])*cos(q[0]) + (1.0/2.0)*M_SQRT2*sin(q[1])*sin(q[3])*cos(q[0])*cos(q[2])*cos(q[5]) + (1.0/2.0)*M_SQRT2*sin(q[1])*sin(q[5])*cos(q[0])*cos(q[2])*cos(q[3])*cos(q[4]) + (1.0/2.0)*M_SQRT2*sin(q[2])*sin(q[3])*cos(q[0])*cos(q[5]) + (1.0/2.0)*M_SQRT2*sin(q[2])*sin(q[5])*cos(q[0])*cos(q[3])*cos(q[4]) + (1.0/2.0)*M_SQRT2*sin(q[3])*sin(q[5])*cos(q[0])*cos(q[1])*cos(q[4]) + (1.0/2.0)*M_SQRT2*sin(q[4])*sin(q[5])*cos(q[0])*cos(q[2]) - 1.0/2.0*M_SQRT2*cos(q[0])*cos(q[1])*cos(q[3])*cos(q[5]);
   out_7981151013213679122[8] = -1.0/2.0*M_SQRT2*sin(q[0])*sin(q[1])*sin(q[3])*sin(q[5])*cos(q[4]) + (1.0/2.0)*M_SQRT2*sin(q[0])*sin(q[1])*cos(q[3])*cos(q[5]) - 1.0/2.0*M_SQRT2*sin(q[0])*sin(q[2])*sin(q[4])*sin(q[5])*cos(q[1]) + (1.0/2.0)*M_SQRT2*sin(q[0])*sin(q[3])*cos(q[1])*cos(q[2])*cos(q[5]) + (1.0/2.0)*M_SQRT2*sin(q[0])*sin(q[5])*cos(q[1])*cos(q[2])*cos(q[3])*cos(q[4]) - 1.0/2.0*M_SQRT2*sin(q[1])*sin(q[3])*sin(q[5])*cos(q[0])*cos(q[4]) + (1.0/2.0)*M_SQRT2*sin(q[1])*cos(q[0])*cos(q[3])*cos(q[5]) - 1.0/2.0*M_SQRT2*sin(q[2])*sin(q[4])*sin(q[5])*cos(q[0])*cos(q[1]) + (1.0/2.0)*M_SQRT2*sin(q[3])*cos(q[0])*cos(q[1])*cos(q[2])*cos(q[5]) + (1.0/2.0)*M_SQRT2*sin(q[5])*cos(q[0])*cos(q[1])*cos(q[2])*cos(q[3])*cos(q[4]);
   out_7981151013213679122[9] = -1.0/2.0*M_SQRT2*sin(q[0])*sin(q[1])*sin(q[2])*sin(q[3])*cos(q[5]) - 1.0/2.0*M_SQRT2*sin(q[0])*sin(q[1])*sin(q[2])*sin(q[5])*cos(q[3])*cos(q[4]) - 1.0/2.0*M_SQRT2*sin(q[0])*sin(q[1])*sin(q[4])*sin(q[5])*cos(q[2]) - 1.0/2.0*M_SQRT2*sin(q[0])*sin(q[2])*sin(q[4])*sin(q[5]) + (1.0/2.0)*M_SQRT2*sin(q[0])*sin(q[3])*cos(q[2])*cos(q[5]) + (1.0/2.0)*M_SQRT2*sin(q[0])*sin(q[5])*cos(q[2])*cos(q[3])*cos(q[4]) - 1.0/2.0*M_SQRT2*sin(q[1])*sin(q[2])*sin(q[3])*cos(q[0])*cos(q[5]) - 1.0/2.0*M_SQRT2*sin(q[1])*sin(q[2])*sin(q[5])*cos(q[0])*cos(q[3])*cos(q[4]) - 1.0/2.0*M_SQRT2*sin(q[1])*sin(q[4])*sin(q[5])*cos(q[0])*cos(q[2]) + (1.0/2.0)*M_SQRT2*sin(q[2])*sin(q[4])*sin(q[5])*cos(q[0]) - 1.0/2.0*M_SQRT2*sin(q[3])*cos(q[0])*cos(q[2])*cos(q[5]) - 1.0/2.0*M_SQRT2*sin(q[5])*cos(q[0])*cos(q[2])*cos(q[3])*cos(q[4]);
   out_7981151013213679122[10] = -1.0/2.0*M_SQRT2*sin(q[0])*sin(q[1])*sin(q[3])*sin(q[5])*cos(q[2])*cos(q[4]) + (1.0/2.0)*M_SQRT2*sin(q[0])*sin(q[1])*cos(q[2])*cos(q[3])*cos(q[5]) - 1.0/2.0*M_SQRT2*sin(q[0])*sin(q[2])*sin(q[3])*sin(q[5])*cos(q[4]) + (1.0/2.0)*M_SQRT2*sin(q[0])*sin(q[2])*cos(q[3])*cos(q[5]) + (1.0/2.0)*M_SQRT2*sin(q[0])*sin(q[3])*cos(q[1])*cos(q[5]) + (1.0/2.0)*M_SQRT2*sin(q[0])*sin(q[5])*cos(q[1])*cos(q[3])*cos(q[4]) - 1.0/2.0*M_SQRT2*sin(q[1])*sin(q[3])*sin(q[5])*cos(q[0])*cos(q[2])*cos(q[4]) + (1.0/2.0)*M_SQRT2*sin(q[1])*cos(q[0])*cos(q[2])*cos(q[3])*cos(q[5]) + (1.0/2.0)*M_SQRT2*sin(q[2])*sin(q[3])*sin(q[5])*cos(q[0])*cos(q[4]) - 1.0/2.0*M_SQRT2*sin(q[2])*cos(q[0])*cos(q[3])*cos(q[5]) + (1.0/2.0)*M_SQRT2*sin(q[3])*cos(q[0])*cos(q[1])*cos(q[5]) + (1.0/2.0)*M_SQRT2*sin(q[5])*cos(q[0])*cos(q[1])*cos(q[3])*cos(q[4]);
   out_7981151013213679122[11] = -1.0/2.0*M_SQRT2*sin(q[0])*sin(q[1])*sin(q[2])*sin(q[5])*cos(q[4]) - 1.0/2.0*M_SQRT2*sin(q[0])*sin(q[1])*sin(q[4])*sin(q[5])*cos(q[2])*cos(q[3]) - 1.0/2.0*M_SQRT2*sin(q[0])*sin(q[2])*sin(q[4])*sin(q[5])*cos(q[3]) - 1.0/2.0*M_SQRT2*sin(q[0])*sin(q[3])*sin(q[4])*sin(q[5])*cos(q[1]) + (1.0/2.0)*M_SQRT2*sin(q[0])*sin(q[5])*cos(q[2])*cos(q[4]) - 1.0/2.0*M_SQRT2*sin(q[1])*sin(q[2])*sin(q[5])*cos(q[0])*cos(q[4]) - 1.0/2.0*M_SQRT2*sin(q[1])*sin(q[4])*sin(q[5])*cos(q[0])*cos(q[2])*cos(q[3]) + (1.0/2.0)*M_SQRT2*sin(q[2])*sin(q[4])*sin(q[5])*cos(q[0])*cos(q[3]) - 1.0/2.0*M_SQRT2*sin(q[3])*sin(q[4])*sin(q[5])*cos(q[0])*cos(q[1]) - 1.0/2.0*M_SQRT2*sin(q[5])*cos(q[0])*cos(q[2])*cos(q[4]);
   out_7981151013213679122[12] = -1.0/2.0*M_SQRT2*sin(q[0])*sin(q[1])*sin(q[2])*sin(q[4])*cos(q[5]) - 1.0/2.0*M_SQRT2*sin(q[0])*sin(q[1])*sin(q[3])*sin(q[5])*cos(q[2]) + (1.0/2.0)*M_SQRT2*sin(q[0])*sin(q[1])*cos(q[2])*cos(q[3])*cos(q[4])*cos(q[5]) - 1.0/2.0*M_SQRT2*sin(q[0])*sin(q[2])*sin(q[3])*sin(q[5]) + (1.0/2.0)*M_SQRT2*sin(q[0])*sin(q[2])*cos(q[3])*cos(q[4])*cos(q[5]) + (1.0/2.0)*M_SQRT2*sin(q[0])*sin(q[3])*cos(q[1])*cos(q[4])*cos(q[5]) + (1.0/2.0)*M_SQRT2*sin(q[0])*sin(q[4])*cos(q[2])*cos(q[5]) + (1.0/2.0)*M_SQRT2*sin(q[0])*sin(q[5])*cos(q[1])*cos(q[3]) - 1.0/2.0*M_SQRT2*sin(q[1])*sin(q[2])*sin(q[4])*cos(q[0])*cos(q[5]) - 1.0/2.0*M_SQRT2*sin(q[1])*sin(q[3])*sin(q[5])*cos(q[0])*cos(q[2]) + (1.0/2.0)*M_SQRT2*sin(q[1])*cos(q[0])*cos(q[2])*cos(q[3])*cos(q[4])*cos(q[5]) + (1.0/2.0)*M_SQRT2*sin(q[2])*sin(q[3])*sin(q[5])*cos(q[0]) - 1.0/2.0*M_SQRT2*sin(q[2])*cos(q[0])*cos(q[3])*cos(q[4])*cos(q[5]) + (1.0/2.0)*M_SQRT2*sin(q[3])*cos(q[0])*cos(q[1])*cos(q[4])*cos(q[5]) - 1.0/2.0*M_SQRT2*sin(q[4])*cos(q[0])*cos(q[2])*cos(q[5]) + (1.0/2.0)*M_SQRT2*sin(q[5])*cos(q[0])*cos(q[1])*cos(q[3]);
   out_7981151013213679122[13] = 0;
   out_7981151013213679122[14] = 0;
   out_7981151013213679122[15] = -sin(q[1])*sin(q[2])*sin(q[4])*sin(q[5]) + sin(q[1])*sin(q[3])*cos(q[2])*cos(q[5]) + sin(q[1])*sin(q[5])*cos(q[2])*cos(q[3])*cos(q[4]) + sin(q[3])*sin(q[5])*cos(q[1])*cos(q[4]) - cos(q[1])*cos(q[3])*cos(q[5]);
   out_7981151013213679122[16] = sin(q[2])*sin(q[3])*cos(q[1])*cos(q[5]) + sin(q[2])*sin(q[5])*cos(q[1])*cos(q[3])*cos(q[4]) + sin(q[4])*sin(q[5])*cos(q[1])*cos(q[2]);
   out_7981151013213679122[17] = sin(q[1])*sin(q[3])*cos(q[5]) + sin(q[1])*sin(q[5])*cos(q[3])*cos(q[4]) + sin(q[3])*sin(q[5])*cos(q[1])*cos(q[2])*cos(q[4]) - cos(q[1])*cos(q[2])*cos(q[3])*cos(q[5]);
   out_7981151013213679122[18] = -sin(q[1])*sin(q[3])*sin(q[4])*sin(q[5]) + sin(q[2])*sin(q[5])*cos(q[1])*cos(q[4]) + sin(q[4])*sin(q[5])*cos(q[1])*cos(q[2])*cos(q[3]);
   out_7981151013213679122[19] = sin(q[1])*sin(q[3])*cos(q[4])*cos(q[5]) + sin(q[1])*sin(q[5])*cos(q[3]) + sin(q[2])*sin(q[4])*cos(q[1])*cos(q[5]) + sin(q[3])*sin(q[5])*cos(q[1])*cos(q[2]) - cos(q[1])*cos(q[2])*cos(q[3])*cos(q[4])*cos(q[5]);
   out_7981151013213679122[20] = 0;

}
