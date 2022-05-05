/******************************************************************************
 *                       Code generated with sympy 1.9                        *
 *                                                                            *
 *              See http://www.sympy.org/ for more information.               *
 *                                                                            *
 *                    This file is part of 'o_2_BY_SYMPY_'                    *
 ******************************************************************************/
#include "../../include/baxter/o_2.hpp"
#include <cmath>
using std::cos;
using std::sin;
using std::sqrt;


void o_2(double H, double L, double L0, double L1, double L2, double h, double *q, double *out_3751353443012980540) {

   out_3751353443012980540[0] = -L + (1.0/2.0)*M_SQRT2*L1*sin(q[0]) - 1.0/2.0*M_SQRT2*L1*cos(q[0]) + (1.0/2.0)*M_SQRT2*L2*sin(q[0])*cos(q[1]) - 1.0/2.0*M_SQRT2*L2*cos(q[0])*cos(q[1]);
   out_3751353443012980540[1] = -1.0/2.0*M_SQRT2*L1*sin(q[0]) - 1.0/2.0*M_SQRT2*L1*cos(q[0]) - 1.0/2.0*M_SQRT2*L2*sin(q[0])*cos(q[1]) - 1.0/2.0*M_SQRT2*L2*cos(q[0])*cos(q[1]) - h;
   out_3751353443012980540[2] = H + L0 - L2*sin(q[1]);

}
