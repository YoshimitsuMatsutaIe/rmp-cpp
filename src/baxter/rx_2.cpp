/******************************************************************************
 *                       Code generated with sympy 1.9                        *
 *                                                                            *
 *              See http://www.sympy.org/ for more information.               *
 *                                                                            *
 *                   This file is part of 'rx_2_BY_SYMPY_'                    *
 ******************************************************************************/
#include "../../include/baxter/rx_2.hpp"
#include <cmath>
using std::cos;
using std::sin;
using std::sqrt;


void rx_2(double *q, double *out_3321758890460044039) {

   out_3321758890460044039[0] = -1.0/2.0*M_SQRT2*sin(q[0])*sin(q[1])*cos(q[2]) + (1.0/2.0)*M_SQRT2*sin(q[0])*sin(q[2]) + (1.0/2.0)*M_SQRT2*sin(q[1])*cos(q[0])*cos(q[2]) + (1.0/2.0)*M_SQRT2*sin(q[2])*cos(q[0]);
   out_3321758890460044039[1] = (1.0/2.0)*M_SQRT2*sin(q[0])*sin(q[1])*cos(q[2]) + (1.0/2.0)*M_SQRT2*sin(q[0])*sin(q[2]) + (1.0/2.0)*M_SQRT2*sin(q[1])*cos(q[0])*cos(q[2]) - 1.0/2.0*M_SQRT2*sin(q[2])*cos(q[0]);
   out_3321758890460044039[2] = -cos(q[1])*cos(q[2]);

}
