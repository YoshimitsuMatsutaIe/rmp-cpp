/******************************************************************************
 *                       Code generated with sympy 1.9                        *
 *                                                                            *
 *              See http://www.sympy.org/ for more information.               *
 *                                                                            *
 *                   This file is part of 'jo_4_BY_SYMPY_'                    *
 ******************************************************************************/
#include "jo_4.h"
#include <math.h>

void jo_4(double L1, double L2, double L3, double L4, double *q, double *out_5026318497183183035) {

   out_5026318497183183035[0] = (1.0/2.0)*M_SQRT2*L1*sin(q[0]) + (1.0/2.0)*M_SQRT2*L1*cos(q[0]) + (1.0/2.0)*M_SQRT2*L2*sin(q[0])*cos(q[1]) + (1.0/2.0)*M_SQRT2*L2*cos(q[0])*cos(q[1]) - 1.0/2.0*M_SQRT2*L3*sin(q[0])*sin(q[1])*cos(q[2]) - 1.0/2.0*M_SQRT2*L3*sin(q[0])*sin(q[2]) - 1.0/2.0*M_SQRT2*L3*sin(q[1])*cos(q[0])*cos(q[2]) + (1.0/2.0)*M_SQRT2*L3*sin(q[2])*cos(q[0]) - 1.0/2.0*M_SQRT2*L4*sin(q[0])*sin(q[1])*sin(q[3])*cos(q[2]) - 1.0/2.0*M_SQRT2*L4*sin(q[0])*sin(q[2])*sin(q[3]) + (1.0/2.0)*M_SQRT2*L4*sin(q[0])*cos(q[1])*cos(q[3]) - 1.0/2.0*M_SQRT2*L4*sin(q[1])*sin(q[3])*cos(q[0])*cos(q[2]) + (1.0/2.0)*M_SQRT2*L4*sin(q[2])*sin(q[3])*cos(q[0]) + (1.0/2.0)*M_SQRT2*L4*cos(q[0])*cos(q[1])*cos(q[3]);
   out_5026318497183183035[1] = -1.0/2.0*M_SQRT2*L2*sin(q[0])*sin(q[1]) + (1.0/2.0)*M_SQRT2*L2*sin(q[1])*cos(q[0]) - 1.0/2.0*M_SQRT2*L3*sin(q[0])*cos(q[1])*cos(q[2]) + (1.0/2.0)*M_SQRT2*L3*cos(q[0])*cos(q[1])*cos(q[2]) - 1.0/2.0*M_SQRT2*L4*sin(q[0])*sin(q[1])*cos(q[3]) - 1.0/2.0*M_SQRT2*L4*sin(q[0])*sin(q[3])*cos(q[1])*cos(q[2]) + (1.0/2.0)*M_SQRT2*L4*sin(q[1])*cos(q[0])*cos(q[3]) + (1.0/2.0)*M_SQRT2*L4*sin(q[3])*cos(q[0])*cos(q[1])*cos(q[2]);
   out_5026318497183183035[2] = (1.0/2.0)*M_SQRT2*L3*sin(q[0])*sin(q[1])*sin(q[2]) + (1.0/2.0)*M_SQRT2*L3*sin(q[0])*cos(q[2]) - 1.0/2.0*M_SQRT2*L3*sin(q[1])*sin(q[2])*cos(q[0]) + (1.0/2.0)*M_SQRT2*L3*cos(q[0])*cos(q[2]) + (1.0/2.0)*M_SQRT2*L4*sin(q[0])*sin(q[1])*sin(q[2])*sin(q[3]) + (1.0/2.0)*M_SQRT2*L4*sin(q[0])*sin(q[3])*cos(q[2]) - 1.0/2.0*M_SQRT2*L4*sin(q[1])*sin(q[2])*sin(q[3])*cos(q[0]) + (1.0/2.0)*M_SQRT2*L4*sin(q[3])*cos(q[0])*cos(q[2]);
   out_5026318497183183035[3] = -1.0/2.0*M_SQRT2*L4*sin(q[0])*sin(q[1])*cos(q[2])*cos(q[3]) + (1.0/2.0)*M_SQRT2*L4*sin(q[0])*sin(q[2])*cos(q[3]) - 1.0/2.0*M_SQRT2*L4*sin(q[0])*sin(q[3])*cos(q[1]) + (1.0/2.0)*M_SQRT2*L4*sin(q[1])*cos(q[0])*cos(q[2])*cos(q[3]) + (1.0/2.0)*M_SQRT2*L4*sin(q[2])*cos(q[0])*cos(q[3]) + (1.0/2.0)*M_SQRT2*L4*sin(q[3])*cos(q[0])*cos(q[1]);
   out_5026318497183183035[4] = 0;
   out_5026318497183183035[5] = 0;
   out_5026318497183183035[6] = 0;
   out_5026318497183183035[7] = (1.0/2.0)*M_SQRT2*L1*sin(q[0]) - 1.0/2.0*M_SQRT2*L1*cos(q[0]) + (1.0/2.0)*M_SQRT2*L2*sin(q[0])*cos(q[1]) - 1.0/2.0*M_SQRT2*L2*cos(q[0])*cos(q[1]) - 1.0/2.0*M_SQRT2*L3*sin(q[0])*sin(q[1])*cos(q[2]) + (1.0/2.0)*M_SQRT2*L3*sin(q[0])*sin(q[2]) + (1.0/2.0)*M_SQRT2*L3*sin(q[1])*cos(q[0])*cos(q[2]) + (1.0/2.0)*M_SQRT2*L3*sin(q[2])*cos(q[0]) - 1.0/2.0*M_SQRT2*L4*sin(q[0])*sin(q[1])*sin(q[3])*cos(q[2]) + (1.0/2.0)*M_SQRT2*L4*sin(q[0])*sin(q[2])*sin(q[3]) + (1.0/2.0)*M_SQRT2*L4*sin(q[0])*cos(q[1])*cos(q[3]) + (1.0/2.0)*M_SQRT2*L4*sin(q[1])*sin(q[3])*cos(q[0])*cos(q[2]) + (1.0/2.0)*M_SQRT2*L4*sin(q[2])*sin(q[3])*cos(q[0]) - 1.0/2.0*M_SQRT2*L4*cos(q[0])*cos(q[1])*cos(q[3]);
   out_5026318497183183035[8] = (1.0/2.0)*M_SQRT2*L2*sin(q[0])*sin(q[1]) + (1.0/2.0)*M_SQRT2*L2*sin(q[1])*cos(q[0]) + (1.0/2.0)*M_SQRT2*L3*sin(q[0])*cos(q[1])*cos(q[2]) + (1.0/2.0)*M_SQRT2*L3*cos(q[0])*cos(q[1])*cos(q[2]) + (1.0/2.0)*M_SQRT2*L4*sin(q[0])*sin(q[1])*cos(q[3]) + (1.0/2.0)*M_SQRT2*L4*sin(q[0])*sin(q[3])*cos(q[1])*cos(q[2]) + (1.0/2.0)*M_SQRT2*L4*sin(q[1])*cos(q[0])*cos(q[3]) + (1.0/2.0)*M_SQRT2*L4*sin(q[3])*cos(q[0])*cos(q[1])*cos(q[2]);
   out_5026318497183183035[9] = -1.0/2.0*M_SQRT2*L3*sin(q[0])*sin(q[1])*sin(q[2]) + (1.0/2.0)*M_SQRT2*L3*sin(q[0])*cos(q[2]) - 1.0/2.0*M_SQRT2*L3*sin(q[1])*sin(q[2])*cos(q[0]) - 1.0/2.0*M_SQRT2*L3*cos(q[0])*cos(q[2]) - 1.0/2.0*M_SQRT2*L4*sin(q[0])*sin(q[1])*sin(q[2])*sin(q[3]) + (1.0/2.0)*M_SQRT2*L4*sin(q[0])*sin(q[3])*cos(q[2]) - 1.0/2.0*M_SQRT2*L4*sin(q[1])*sin(q[2])*sin(q[3])*cos(q[0]) - 1.0/2.0*M_SQRT2*L4*sin(q[3])*cos(q[0])*cos(q[2]);
   out_5026318497183183035[10] = (1.0/2.0)*M_SQRT2*L4*sin(q[0])*sin(q[1])*cos(q[2])*cos(q[3]) + (1.0/2.0)*M_SQRT2*L4*sin(q[0])*sin(q[2])*cos(q[3]) + (1.0/2.0)*M_SQRT2*L4*sin(q[0])*sin(q[3])*cos(q[1]) + (1.0/2.0)*M_SQRT2*L4*sin(q[1])*cos(q[0])*cos(q[2])*cos(q[3]) - 1.0/2.0*M_SQRT2*L4*sin(q[2])*cos(q[0])*cos(q[3]) + (1.0/2.0)*M_SQRT2*L4*sin(q[3])*cos(q[0])*cos(q[1]);
   out_5026318497183183035[11] = 0;
   out_5026318497183183035[12] = 0;
   out_5026318497183183035[13] = 0;
   out_5026318497183183035[14] = 0;
   out_5026318497183183035[15] = -L2*cos(q[1]) + L3*sin(q[1])*cos(q[2]) + L4*sin(q[1])*sin(q[3])*cos(q[2]) - L4*cos(q[1])*cos(q[3]);
   out_5026318497183183035[16] = L3*sin(q[2])*cos(q[1]) + L4*sin(q[2])*sin(q[3])*cos(q[1]);
   out_5026318497183183035[17] = L4*sin(q[1])*sin(q[3]) - L4*cos(q[1])*cos(q[2])*cos(q[3]);
   out_5026318497183183035[18] = 0;
   out_5026318497183183035[19] = 0;
   out_5026318497183183035[20] = 0;

}
