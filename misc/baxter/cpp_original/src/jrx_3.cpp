/******************************************************************************
 *                       Code generated with sympy 1.9                        *
 *                                                                            *
 *              See http://www.sympy.org/ for more information.               *
 *                                                                            *
 *                   This file is part of 'jrx_3_BY_SYMPY_'                   *
 ******************************************************************************/
#include "jrx_3.h"
#include <math.h>

void jrx_3(double *q, double *out_4286375690577353327) {

   out_4286375690577353327[0] = -1.0/2.0*M_SQRT2*sin(q[0])*sin(q[1])*cos(q[2])*cos(q[3]) - 1.0/2.0*M_SQRT2*sin(q[0])*sin(q[2])*cos(q[3]) - 1.0/2.0*M_SQRT2*sin(q[0])*sin(q[3])*cos(q[1]) - 1.0/2.0*M_SQRT2*sin(q[1])*cos(q[0])*cos(q[2])*cos(q[3]) + (1.0/2.0)*M_SQRT2*sin(q[2])*cos(q[0])*cos(q[3]) - 1.0/2.0*M_SQRT2*sin(q[3])*cos(q[0])*cos(q[1]);
   out_4286375690577353327[1] = (1.0/2.0)*M_SQRT2*sin(q[0])*sin(q[1])*sin(q[3]) - 1.0/2.0*M_SQRT2*sin(q[0])*cos(q[1])*cos(q[2])*cos(q[3]) - 1.0/2.0*M_SQRT2*sin(q[1])*sin(q[3])*cos(q[0]) + (1.0/2.0)*M_SQRT2*cos(q[0])*cos(q[1])*cos(q[2])*cos(q[3]);
   out_4286375690577353327[2] = (1.0/2.0)*M_SQRT2*sin(q[0])*sin(q[1])*sin(q[2])*cos(q[3]) + (1.0/2.0)*M_SQRT2*sin(q[0])*cos(q[2])*cos(q[3]) - 1.0/2.0*M_SQRT2*sin(q[1])*sin(q[2])*cos(q[0])*cos(q[3]) + (1.0/2.0)*M_SQRT2*cos(q[0])*cos(q[2])*cos(q[3]);
   out_4286375690577353327[3] = (1.0/2.0)*M_SQRT2*sin(q[0])*sin(q[1])*sin(q[3])*cos(q[2]) - 1.0/2.0*M_SQRT2*sin(q[0])*sin(q[2])*sin(q[3]) - 1.0/2.0*M_SQRT2*sin(q[0])*cos(q[1])*cos(q[3]) - 1.0/2.0*M_SQRT2*sin(q[1])*sin(q[3])*cos(q[0])*cos(q[2]) - 1.0/2.0*M_SQRT2*sin(q[2])*sin(q[3])*cos(q[0]) + (1.0/2.0)*M_SQRT2*cos(q[0])*cos(q[1])*cos(q[3]);
   out_4286375690577353327[4] = 0;
   out_4286375690577353327[5] = 0;
   out_4286375690577353327[6] = 0;
   out_4286375690577353327[7] = -1.0/2.0*M_SQRT2*sin(q[0])*sin(q[1])*cos(q[2])*cos(q[3]) + (1.0/2.0)*M_SQRT2*sin(q[0])*sin(q[2])*cos(q[3]) - 1.0/2.0*M_SQRT2*sin(q[0])*sin(q[3])*cos(q[1]) + (1.0/2.0)*M_SQRT2*sin(q[1])*cos(q[0])*cos(q[2])*cos(q[3]) + (1.0/2.0)*M_SQRT2*sin(q[2])*cos(q[0])*cos(q[3]) + (1.0/2.0)*M_SQRT2*sin(q[3])*cos(q[0])*cos(q[1]);
   out_4286375690577353327[8] = -1.0/2.0*M_SQRT2*sin(q[0])*sin(q[1])*sin(q[3]) + (1.0/2.0)*M_SQRT2*sin(q[0])*cos(q[1])*cos(q[2])*cos(q[3]) - 1.0/2.0*M_SQRT2*sin(q[1])*sin(q[3])*cos(q[0]) + (1.0/2.0)*M_SQRT2*cos(q[0])*cos(q[1])*cos(q[2])*cos(q[3]);
   out_4286375690577353327[9] = -1.0/2.0*M_SQRT2*sin(q[0])*sin(q[1])*sin(q[2])*cos(q[3]) + (1.0/2.0)*M_SQRT2*sin(q[0])*cos(q[2])*cos(q[3]) - 1.0/2.0*M_SQRT2*sin(q[1])*sin(q[2])*cos(q[0])*cos(q[3]) - 1.0/2.0*M_SQRT2*cos(q[0])*cos(q[2])*cos(q[3]);
   out_4286375690577353327[10] = -1.0/2.0*M_SQRT2*sin(q[0])*sin(q[1])*sin(q[3])*cos(q[2]) - 1.0/2.0*M_SQRT2*sin(q[0])*sin(q[2])*sin(q[3]) + (1.0/2.0)*M_SQRT2*sin(q[0])*cos(q[1])*cos(q[3]) - 1.0/2.0*M_SQRT2*sin(q[1])*sin(q[3])*cos(q[0])*cos(q[2]) + (1.0/2.0)*M_SQRT2*sin(q[2])*sin(q[3])*cos(q[0]) + (1.0/2.0)*M_SQRT2*cos(q[0])*cos(q[1])*cos(q[3]);
   out_4286375690577353327[11] = 0;
   out_4286375690577353327[12] = 0;
   out_4286375690577353327[13] = 0;
   out_4286375690577353327[14] = 0;
   out_4286375690577353327[15] = sin(q[1])*cos(q[2])*cos(q[3]) + sin(q[3])*cos(q[1]);
   out_4286375690577353327[16] = sin(q[2])*cos(q[1])*cos(q[3]);
   out_4286375690577353327[17] = sin(q[1])*cos(q[3]) + sin(q[3])*cos(q[1])*cos(q[2]);
   out_4286375690577353327[18] = 0;
   out_4286375690577353327[19] = 0;
   out_4286375690577353327[20] = 0;

}
