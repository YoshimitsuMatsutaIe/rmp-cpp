/******************************************************************************
 *                       Code generated with sympy 1.9                        *
 *                                                                            *
 *              See http://www.sympy.org/ for more information.               *
 *                                                                            *
 *                   This file is part of 'ry_1_BY_SYMPY_'                    *
 ******************************************************************************/
#include "../../include/baxter/ry_1.hpp"
#include <cmath>
using std::cos;
using std::sin;
using std::sqrt;


void ry_1(double *q, double *out_5755664603262898288) {

   out_5755664603262898288[0] = -1.0/2.0*M_SQRT2*sin(q[0])*cos(q[1]) + (1.0/2.0)*M_SQRT2*cos(q[0])*cos(q[1]);
   out_5755664603262898288[1] = (1.0/2.0)*M_SQRT2*sin(q[0])*cos(q[1]) + (1.0/2.0)*M_SQRT2*cos(q[0])*cos(q[1]);
   out_5755664603262898288[2] = sin(q[1]);

}
