/******************************************************************************
 *                       Code generated with sympy 1.9                        *
 *                                                                            *
 *              See http://www.sympy.org/ for more information.               *
 *                                                                            *
 *                   This file is part of 'rx_5_BY_SYMPY_'                    *
 ******************************************************************************/
#include "../../include/baxter/rx_5.hpp"
#include <cmath>
using std::cos;
using std::sin;
using std::sqrt;


void rx_5(double *q, double *out_2172197126569984377) {

   out_2172197126569984377[0] = (1.0/2.0)*M_SQRT2*sin(q[0])*sin(q[1])*sin(q[2])*sin(q[4])*cos(q[5]) + (1.0/2.0)*M_SQRT2*sin(q[0])*sin(q[1])*sin(q[3])*sin(q[5])*cos(q[2]) - 1.0/2.0*M_SQRT2*sin(q[0])*sin(q[1])*cos(q[2])*cos(q[3])*cos(q[4])*cos(q[5]) - 1.0/2.0*M_SQRT2*sin(q[0])*sin(q[2])*sin(q[3])*sin(q[5]) + (1.0/2.0)*M_SQRT2*sin(q[0])*sin(q[2])*cos(q[3])*cos(q[4])*cos(q[5]) - 1.0/2.0*M_SQRT2*sin(q[0])*sin(q[3])*cos(q[1])*cos(q[4])*cos(q[5]) + (1.0/2.0)*M_SQRT2*sin(q[0])*sin(q[4])*cos(q[2])*cos(q[5]) - 1.0/2.0*M_SQRT2*sin(q[0])*sin(q[5])*cos(q[1])*cos(q[3]) - 1.0/2.0*M_SQRT2*sin(q[1])*sin(q[2])*sin(q[4])*cos(q[0])*cos(q[5]) - 1.0/2.0*M_SQRT2*sin(q[1])*sin(q[3])*sin(q[5])*cos(q[0])*cos(q[2]) + (1.0/2.0)*M_SQRT2*sin(q[1])*cos(q[0])*cos(q[2])*cos(q[3])*cos(q[4])*cos(q[5]) - 1.0/2.0*M_SQRT2*sin(q[2])*sin(q[3])*sin(q[5])*cos(q[0]) + (1.0/2.0)*M_SQRT2*sin(q[2])*cos(q[0])*cos(q[3])*cos(q[4])*cos(q[5]) + (1.0/2.0)*M_SQRT2*sin(q[3])*cos(q[0])*cos(q[1])*cos(q[4])*cos(q[5]) + (1.0/2.0)*M_SQRT2*sin(q[4])*cos(q[0])*cos(q[2])*cos(q[5]) + (1.0/2.0)*M_SQRT2*sin(q[5])*cos(q[0])*cos(q[1])*cos(q[3]);
   out_2172197126569984377[1] = -1.0/2.0*M_SQRT2*sin(q[0])*sin(q[1])*sin(q[2])*sin(q[4])*cos(q[5]) - 1.0/2.0*M_SQRT2*sin(q[0])*sin(q[1])*sin(q[3])*sin(q[5])*cos(q[2]) + (1.0/2.0)*M_SQRT2*sin(q[0])*sin(q[1])*cos(q[2])*cos(q[3])*cos(q[4])*cos(q[5]) - 1.0/2.0*M_SQRT2*sin(q[0])*sin(q[2])*sin(q[3])*sin(q[5]) + (1.0/2.0)*M_SQRT2*sin(q[0])*sin(q[2])*cos(q[3])*cos(q[4])*cos(q[5]) + (1.0/2.0)*M_SQRT2*sin(q[0])*sin(q[3])*cos(q[1])*cos(q[4])*cos(q[5]) + (1.0/2.0)*M_SQRT2*sin(q[0])*sin(q[4])*cos(q[2])*cos(q[5]) + (1.0/2.0)*M_SQRT2*sin(q[0])*sin(q[5])*cos(q[1])*cos(q[3]) - 1.0/2.0*M_SQRT2*sin(q[1])*sin(q[2])*sin(q[4])*cos(q[0])*cos(q[5]) - 1.0/2.0*M_SQRT2*sin(q[1])*sin(q[3])*sin(q[5])*cos(q[0])*cos(q[2]) + (1.0/2.0)*M_SQRT2*sin(q[1])*cos(q[0])*cos(q[2])*cos(q[3])*cos(q[4])*cos(q[5]) + (1.0/2.0)*M_SQRT2*sin(q[2])*sin(q[3])*sin(q[5])*cos(q[0]) - 1.0/2.0*M_SQRT2*sin(q[2])*cos(q[0])*cos(q[3])*cos(q[4])*cos(q[5]) + (1.0/2.0)*M_SQRT2*sin(q[3])*cos(q[0])*cos(q[1])*cos(q[4])*cos(q[5]) - 1.0/2.0*M_SQRT2*sin(q[4])*cos(q[0])*cos(q[2])*cos(q[5]) + (1.0/2.0)*M_SQRT2*sin(q[5])*cos(q[0])*cos(q[1])*cos(q[3]);
   out_2172197126569984377[2] = sin(q[1])*sin(q[3])*cos(q[4])*cos(q[5]) + sin(q[1])*sin(q[5])*cos(q[3]) + sin(q[2])*sin(q[4])*cos(q[1])*cos(q[5]) + sin(q[3])*sin(q[5])*cos(q[1])*cos(q[2]) - cos(q[1])*cos(q[2])*cos(q[3])*cos(q[4])*cos(q[5]);

}
