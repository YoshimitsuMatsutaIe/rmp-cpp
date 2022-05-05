/******************************************************************************
 *                       Code generated with sympy 1.9                        *
 *                                                                            *
 *              See http://www.sympy.org/ for more information.               *
 *                                                                            *
 *                   This file is part of 'rx_1_BY_SYMPY_'                    *
 ******************************************************************************/
#include "../../include/baxter/rx_1.hpp"
#include <cmath>
using std::cos;
using std::sin;
using std::sqrt;


void rx_1(double *q, double *out_3256012462887519049) {

   out_3256012462887519049[0] = -1.0/2.0*M_SQRT2*sin(q[0])*sin(q[1]) + (1.0/2.0)*M_SQRT2*sin(q[1])*cos(q[0]);
   out_3256012462887519049[1] = (1.0/2.0)*M_SQRT2*sin(q[0])*sin(q[1]) + (1.0/2.0)*M_SQRT2*sin(q[1])*cos(q[0]);
   out_3256012462887519049[2] = -cos(q[1]);

}
