/******************************************************************************
 *                       Code generated with sympy 1.9                        *
 *                                                                            *
 *              See http://www.sympy.org/ for more information.               *
 *                                                                            *
 *                    This file is part of 'o_1_BY_SYMPY_'                    *
 ******************************************************************************/
#include "../../include/baxter/o_1.hpp"
#include <cmath>
using std::cos;
using std::sin;
using std::sqrt;


void o_1(double H, double L, double L0, double L1, double h, double *q, double *out_554451379097283271) {

   out_554451379097283271[0] = -L + (1.0/2.0)*M_SQRT2*L1*sin(q[0]) - 1.0/2.0*M_SQRT2*L1*cos(q[0]);
   out_554451379097283271[1] = -1.0/2.0*M_SQRT2*L1*sin(q[0]) - 1.0/2.0*M_SQRT2*L1*cos(q[0]) - h;
   out_554451379097283271[2] = H + L0;

}
