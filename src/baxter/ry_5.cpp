/******************************************************************************
 *                       Code generated with sympy 1.9                        *
 *                                                                            *
 *              See http://www.sympy.org/ for more information.               *
 *                                                                            *
 *                   This file is part of 'ry_5_BY_SYMPY_'                    *
 ******************************************************************************/
#include "../../include/baxter/ry_5.hpp"
#include <cmath>
using std::cos;
using std::sin;
using std::sqrt;


void ry_5(double *q, double *out_4180822565542033926) {

   out_4180822565542033926[0] = -1.0/2.0*M_SQRT2*sin(q[0])*sin(q[1])*sin(q[2])*sin(q[4])*sin(q[5]) + (1.0/2.0)*M_SQRT2*sin(q[0])*sin(q[1])*sin(q[3])*cos(q[2])*cos(q[5]) + (1.0/2.0)*M_SQRT2*sin(q[0])*sin(q[1])*sin(q[5])*cos(q[2])*cos(q[3])*cos(q[4]) - 1.0/2.0*M_SQRT2*sin(q[0])*sin(q[2])*sin(q[3])*cos(q[5]) - 1.0/2.0*M_SQRT2*sin(q[0])*sin(q[2])*sin(q[5])*cos(q[3])*cos(q[4]) + (1.0/2.0)*M_SQRT2*sin(q[0])*sin(q[3])*sin(q[5])*cos(q[1])*cos(q[4]) - 1.0/2.0*M_SQRT2*sin(q[0])*sin(q[4])*sin(q[5])*cos(q[2]) - 1.0/2.0*M_SQRT2*sin(q[0])*cos(q[1])*cos(q[3])*cos(q[5]) + (1.0/2.0)*M_SQRT2*sin(q[1])*sin(q[2])*sin(q[4])*sin(q[5])*cos(q[0]) - 1.0/2.0*M_SQRT2*sin(q[1])*sin(q[3])*cos(q[0])*cos(q[2])*cos(q[5]) - 1.0/2.0*M_SQRT2*sin(q[1])*sin(q[5])*cos(q[0])*cos(q[2])*cos(q[3])*cos(q[4]) - 1.0/2.0*M_SQRT2*sin(q[2])*sin(q[3])*cos(q[0])*cos(q[5]) - 1.0/2.0*M_SQRT2*sin(q[2])*sin(q[5])*cos(q[0])*cos(q[3])*cos(q[4]) - 1.0/2.0*M_SQRT2*sin(q[3])*sin(q[5])*cos(q[0])*cos(q[1])*cos(q[4]) - 1.0/2.0*M_SQRT2*sin(q[4])*sin(q[5])*cos(q[0])*cos(q[2]) + (1.0/2.0)*M_SQRT2*cos(q[0])*cos(q[1])*cos(q[3])*cos(q[5]);
   out_4180822565542033926[1] = (1.0/2.0)*M_SQRT2*sin(q[0])*sin(q[1])*sin(q[2])*sin(q[4])*sin(q[5]) - 1.0/2.0*M_SQRT2*sin(q[0])*sin(q[1])*sin(q[3])*cos(q[2])*cos(q[5]) - 1.0/2.0*M_SQRT2*sin(q[0])*sin(q[1])*sin(q[5])*cos(q[2])*cos(q[3])*cos(q[4]) - 1.0/2.0*M_SQRT2*sin(q[0])*sin(q[2])*sin(q[3])*cos(q[5]) - 1.0/2.0*M_SQRT2*sin(q[0])*sin(q[2])*sin(q[5])*cos(q[3])*cos(q[4]) - 1.0/2.0*M_SQRT2*sin(q[0])*sin(q[3])*sin(q[5])*cos(q[1])*cos(q[4]) - 1.0/2.0*M_SQRT2*sin(q[0])*sin(q[4])*sin(q[5])*cos(q[2]) + (1.0/2.0)*M_SQRT2*sin(q[0])*cos(q[1])*cos(q[3])*cos(q[5]) + (1.0/2.0)*M_SQRT2*sin(q[1])*sin(q[2])*sin(q[4])*sin(q[5])*cos(q[0]) - 1.0/2.0*M_SQRT2*sin(q[1])*sin(q[3])*cos(q[0])*cos(q[2])*cos(q[5]) - 1.0/2.0*M_SQRT2*sin(q[1])*sin(q[5])*cos(q[0])*cos(q[2])*cos(q[3])*cos(q[4]) + (1.0/2.0)*M_SQRT2*sin(q[2])*sin(q[3])*cos(q[0])*cos(q[5]) + (1.0/2.0)*M_SQRT2*sin(q[2])*sin(q[5])*cos(q[0])*cos(q[3])*cos(q[4]) - 1.0/2.0*M_SQRT2*sin(q[3])*sin(q[5])*cos(q[0])*cos(q[1])*cos(q[4]) + (1.0/2.0)*M_SQRT2*sin(q[4])*sin(q[5])*cos(q[0])*cos(q[2]) + (1.0/2.0)*M_SQRT2*cos(q[0])*cos(q[1])*cos(q[3])*cos(q[5]);
   out_4180822565542033926[2] = -sin(q[1])*sin(q[3])*sin(q[5])*cos(q[4]) + sin(q[1])*cos(q[3])*cos(q[5]) - sin(q[2])*sin(q[4])*sin(q[5])*cos(q[1]) + sin(q[3])*cos(q[1])*cos(q[2])*cos(q[5]) + sin(q[5])*cos(q[1])*cos(q[2])*cos(q[3])*cos(q[4]);

}
