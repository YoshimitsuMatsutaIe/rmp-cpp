/******************************************************************************
 *                       Code generated with sympy 1.9                        *
 *                                                                            *
 *              See http://www.sympy.org/ for more information.               *
 *                                                                            *
 *                   This file is part of 'rz_1_BY_SYMPY_'                    *
 ******************************************************************************/
#include "../../include/baxter/rz_1.hpp"
#include <cmath>
using std::cos;
using std::sin;
using std::sqrt;


void rz_1(double *q, double *out_8481397973851704906) {

   out_8481397973851704906[0] = (1.0/2.0)*M_SQRT2*sin(q[0]) + (1.0/2.0)*M_SQRT2*cos(q[0]);
   out_8481397973851704906[1] = (1.0/2.0)*M_SQRT2*sin(q[0]) - 1.0/2.0*M_SQRT2*cos(q[0]);
   out_8481397973851704906[2] = 0;

}
