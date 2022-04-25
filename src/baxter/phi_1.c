/******************************************************************************
 *                       Code generated with sympy 1.9                        *
 *                                                                            *
 *              See http://www.sympy.org/ for more information.               *
 *                                                                            *
 *                    This file is part of 'phi_1project'                     *
 ******************************************************************************/
#include "phi_1.h"
#include <math.h>

void phi_1(double H, double L, double L0, double L1, double h, double *q, double *out_294880551211407714) {

   out_294880551211407714[0] = -L + L1*((1.0/2.0)*M_SQRT2*sin(q[0]) - 1.0/2.0*M_SQRT2*cos(q[0]));
   out_294880551211407714[1] = L1*(-1.0/2.0*M_SQRT2*sin(q[0]) - 1.0/2.0*M_SQRT2*cos(q[0])) - h;
   out_294880551211407714[2] = H + L0;

}
