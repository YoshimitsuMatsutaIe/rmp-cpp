/******************************************************************************
 *                       Code generated with sympy 1.9                        *
 *                                                                            *
 *              See http://www.sympy.org/ for more information.               *
 *                                                                            *
 *                   This file is part of 'rz_6_BY_SYMPY_'                    *
 ******************************************************************************/
#include "../../include/baxter/rz_6.hpp"
#include <cmath>
using std::cos;
using std::sin;
using std::sqrt;


void rz_6(double *q, double *out_6537192887944239938) {

   out_6537192887944239938[0] = (1.0/2.0)*M_SQRT2*sin(q[0])*sin(q[1])*sin(q[2])*sin(q[4])*sin(q[5]) - 1.0/2.0*M_SQRT2*sin(q[0])*sin(q[1])*sin(q[3])*cos(q[2])*cos(q[5]) - 1.0/2.0*M_SQRT2*sin(q[0])*sin(q[1])*sin(q[5])*cos(q[2])*cos(q[3])*cos(q[4]) + (1.0/2.0)*M_SQRT2*sin(q[0])*sin(q[2])*sin(q[3])*cos(q[5]) + (1.0/2.0)*M_SQRT2*sin(q[0])*sin(q[2])*sin(q[5])*cos(q[3])*cos(q[4]) - 1.0/2.0*M_SQRT2*sin(q[0])*sin(q[3])*sin(q[5])*cos(q[1])*cos(q[4]) + (1.0/2.0)*M_SQRT2*sin(q[0])*sin(q[4])*sin(q[5])*cos(q[2]) + (1.0/2.0)*M_SQRT2*sin(q[0])*cos(q[1])*cos(q[3])*cos(q[5]) - 1.0/2.0*M_SQRT2*sin(q[1])*sin(q[2])*sin(q[4])*sin(q[5])*cos(q[0]) + (1.0/2.0)*M_SQRT2*sin(q[1])*sin(q[3])*cos(q[0])*cos(q[2])*cos(q[5]) + (1.0/2.0)*M_SQRT2*sin(q[1])*sin(q[5])*cos(q[0])*cos(q[2])*cos(q[3])*cos(q[4]) + (1.0/2.0)*M_SQRT2*sin(q[2])*sin(q[3])*cos(q[0])*cos(q[5]) + (1.0/2.0)*M_SQRT2*sin(q[2])*sin(q[5])*cos(q[0])*cos(q[3])*cos(q[4]) + (1.0/2.0)*M_SQRT2*sin(q[3])*sin(q[5])*cos(q[0])*cos(q[1])*cos(q[4]) + (1.0/2.0)*M_SQRT2*sin(q[4])*sin(q[5])*cos(q[0])*cos(q[2]) - 1.0/2.0*M_SQRT2*cos(q[0])*cos(q[1])*cos(q[3])*cos(q[5]);
   out_6537192887944239938[1] = -1.0/2.0*M_SQRT2*sin(q[0])*sin(q[1])*sin(q[2])*sin(q[4])*sin(q[5]) + (1.0/2.0)*M_SQRT2*sin(q[0])*sin(q[1])*sin(q[3])*cos(q[2])*cos(q[5]) + (1.0/2.0)*M_SQRT2*sin(q[0])*sin(q[1])*sin(q[5])*cos(q[2])*cos(q[3])*cos(q[4]) + (1.0/2.0)*M_SQRT2*sin(q[0])*sin(q[2])*sin(q[3])*cos(q[5]) + (1.0/2.0)*M_SQRT2*sin(q[0])*sin(q[2])*sin(q[5])*cos(q[3])*cos(q[4]) + (1.0/2.0)*M_SQRT2*sin(q[0])*sin(q[3])*sin(q[5])*cos(q[1])*cos(q[4]) + (1.0/2.0)*M_SQRT2*sin(q[0])*sin(q[4])*sin(q[5])*cos(q[2]) - 1.0/2.0*M_SQRT2*sin(q[0])*cos(q[1])*cos(q[3])*cos(q[5]) - 1.0/2.0*M_SQRT2*sin(q[1])*sin(q[2])*sin(q[4])*sin(q[5])*cos(q[0]) + (1.0/2.0)*M_SQRT2*sin(q[1])*sin(q[3])*cos(q[0])*cos(q[2])*cos(q[5]) + (1.0/2.0)*M_SQRT2*sin(q[1])*sin(q[5])*cos(q[0])*cos(q[2])*cos(q[3])*cos(q[4]) - 1.0/2.0*M_SQRT2*sin(q[2])*sin(q[3])*cos(q[0])*cos(q[5]) - 1.0/2.0*M_SQRT2*sin(q[2])*sin(q[5])*cos(q[0])*cos(q[3])*cos(q[4]) + (1.0/2.0)*M_SQRT2*sin(q[3])*sin(q[5])*cos(q[0])*cos(q[1])*cos(q[4]) - 1.0/2.0*M_SQRT2*sin(q[4])*sin(q[5])*cos(q[0])*cos(q[2]) - 1.0/2.0*M_SQRT2*cos(q[0])*cos(q[1])*cos(q[3])*cos(q[5]);
   out_6537192887944239938[2] = sin(q[1])*sin(q[3])*sin(q[5])*cos(q[4]) - sin(q[1])*cos(q[3])*cos(q[5]) + sin(q[2])*sin(q[4])*sin(q[5])*cos(q[1]) - sin(q[3])*cos(q[1])*cos(q[2])*cos(q[5]) - sin(q[5])*cos(q[1])*cos(q[2])*cos(q[3])*cos(q[4]);

}
