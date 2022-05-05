/******************************************************************************
 *                       Code generated with sympy 1.9                        *
 *                                                                            *
 *              See http://www.sympy.org/ for more information.               *
 *                                                                            *
 *                   This file is part of 'rz_2_BY_SYMPY_'                    *
 ******************************************************************************/
#include "../../include/baxter/rz_2.hpp"
#include <cmath>
using std::cos;
using std::sin;
using std::sqrt;


void rz_2(double *q, double *out_7469720296316365702) {

   out_7469720296316365702[0] = (1.0/2.0)*M_SQRT2*sin(q[0])*cos(q[1]) - 1.0/2.0*M_SQRT2*cos(q[0])*cos(q[1]);
   out_7469720296316365702[1] = -1.0/2.0*M_SQRT2*sin(q[0])*cos(q[1]) - 1.0/2.0*M_SQRT2*cos(q[0])*cos(q[1]);
   out_7469720296316365702[2] = -sin(q[1]);

}
