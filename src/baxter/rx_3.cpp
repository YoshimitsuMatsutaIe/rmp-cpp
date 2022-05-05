/******************************************************************************
 *                       Code generated with sympy 1.9                        *
 *                                                                            *
 *              See http://www.sympy.org/ for more information.               *
 *                                                                            *
 *                   This file is part of 'rx_3_BY_SYMPY_'                    *
 ******************************************************************************/
#include "../../include/baxter/rx_3.hpp"
#include <cmath>
using std::cos;
using std::sin;
using std::sqrt;


void rx_3(double *q, double *out_7594386258002628089) {

   out_7594386258002628089[0] = -1.0/2.0*M_SQRT2*sin(q[0])*sin(q[1])*cos(q[2])*cos(q[3]) + (1.0/2.0)*M_SQRT2*sin(q[0])*sin(q[2])*cos(q[3]) - 1.0/2.0*M_SQRT2*sin(q[0])*sin(q[3])*cos(q[1]) + (1.0/2.0)*M_SQRT2*sin(q[1])*cos(q[0])*cos(q[2])*cos(q[3]) + (1.0/2.0)*M_SQRT2*sin(q[2])*cos(q[0])*cos(q[3]) + (1.0/2.0)*M_SQRT2*sin(q[3])*cos(q[0])*cos(q[1]);
   out_7594386258002628089[1] = (1.0/2.0)*M_SQRT2*sin(q[0])*sin(q[1])*cos(q[2])*cos(q[3]) + (1.0/2.0)*M_SQRT2*sin(q[0])*sin(q[2])*cos(q[3]) + (1.0/2.0)*M_SQRT2*sin(q[0])*sin(q[3])*cos(q[1]) + (1.0/2.0)*M_SQRT2*sin(q[1])*cos(q[0])*cos(q[2])*cos(q[3]) - 1.0/2.0*M_SQRT2*sin(q[2])*cos(q[0])*cos(q[3]) + (1.0/2.0)*M_SQRT2*sin(q[3])*cos(q[0])*cos(q[1]);
   out_7594386258002628089[2] = sin(q[1])*sin(q[3]) - cos(q[1])*cos(q[2])*cos(q[3]);

}
