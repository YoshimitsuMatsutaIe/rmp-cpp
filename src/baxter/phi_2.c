/******************************************************************************
 *                       Code generated with sympy 1.9                        *
 *                                                                            *
 *              See http://www.sympy.org/ for more information.               *
 *                                                                            *
 *                    This file is part of 'phi_2project'                     *
 ******************************************************************************/
#include "phi_2.h"
#include <math.h>

void phi_2(double H, double L, double L0, double L1, double L2, double h, double *q, double *out_5781196598771436314) {

   out_5781196598771436314[0] = -L + L1*((1.0/2.0)*M_SQRT2*sin(q[0]) - 1.0/2.0*M_SQRT2*cos(q[0])) + L2*((1.0/2.0)*M_SQRT2*sin(q[0]) - 1.0/2.0*M_SQRT2*cos(q[0]))*cos(q[1]);
   out_5781196598771436314[1] = L1*(-1.0/2.0*M_SQRT2*sin(q[0]) - 1.0/2.0*M_SQRT2*cos(q[0])) + L2*(-1.0/2.0*M_SQRT2*sin(q[0]) - 1.0/2.0*M_SQRT2*cos(q[0]))*cos(q[1]) - h;
   out_5781196598771436314[2] = H + L0 - L2*sin(q[1]);

}
