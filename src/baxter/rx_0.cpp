/******************************************************************************
 *                       Code generated with sympy 1.9                        *
 *                                                                            *
 *              See http://www.sympy.org/ for more information.               *
 *                                                                            *
 *                   This file is part of 'rx_0_BY_SYMPY_'                    *
 ******************************************************************************/
#include "../../include/baxter/rx_0.hpp"
#include <cmath>
using std::cos;
using std::sin;
using std::sqrt;


void rx_0(double *q, double *out_2459037773170955845) {

   out_2459037773170955845[0] = (1.0/2.0)*M_SQRT2*sin(q[0]) - 1.0/2.0*M_SQRT2*cos(q[0]);
   out_2459037773170955845[1] = -1.0/2.0*M_SQRT2*sin(q[0]) - 1.0/2.0*M_SQRT2*cos(q[0]);
   out_2459037773170955845[2] = 0;

}
