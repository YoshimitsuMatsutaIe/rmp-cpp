/******************************************************************************
 *                       Code generated with sympy 1.9                        *
 *                                                                            *
 *              See http://www.sympy.org/ for more information.               *
 *                                                                            *
 *                    This file is part of 'o_4_BY_SYMPY_'                    *
 ******************************************************************************/
#include "../../include/baxter/o_4.hpp"
#include <cmath>
using std::cos;
using std::sin;
using std::sqrt;


void o_4(double H, double L, double L0, double L1, double L2, double L3, double L4, double h, double *q, double *out_4985272988055813909) {

   out_4985272988055813909[0] = -L + (1.0/2.0)*M_SQRT2*L1*sin(q[0]) - 1.0/2.0*M_SQRT2*L1*cos(q[0]) + (1.0/2.0)*M_SQRT2*L2*sin(q[0])*cos(q[1]) - 1.0/2.0*M_SQRT2*L2*cos(q[0])*cos(q[1]) - 1.0/2.0*M_SQRT2*L3*sin(q[0])*sin(q[1])*cos(q[2]) + (1.0/2.0)*M_SQRT2*L3*sin(q[0])*sin(q[2]) + (1.0/2.0)*M_SQRT2*L3*sin(q[1])*cos(q[0])*cos(q[2]) + (1.0/2.0)*M_SQRT2*L3*sin(q[2])*cos(q[0]) - 1.0/2.0*M_SQRT2*L4*sin(q[0])*sin(q[1])*sin(q[3])*cos(q[2]) + (1.0/2.0)*M_SQRT2*L4*sin(q[0])*sin(q[2])*sin(q[3]) + (1.0/2.0)*M_SQRT2*L4*sin(q[0])*cos(q[1])*cos(q[3]) + (1.0/2.0)*M_SQRT2*L4*sin(q[1])*sin(q[3])*cos(q[0])*cos(q[2]) + (1.0/2.0)*M_SQRT2*L4*sin(q[2])*sin(q[3])*cos(q[0]) - 1.0/2.0*M_SQRT2*L4*cos(q[0])*cos(q[1])*cos(q[3]);
   out_4985272988055813909[1] = -1.0/2.0*M_SQRT2*L1*sin(q[0]) - 1.0/2.0*M_SQRT2*L1*cos(q[0]) - 1.0/2.0*M_SQRT2*L2*sin(q[0])*cos(q[1]) - 1.0/2.0*M_SQRT2*L2*cos(q[0])*cos(q[1]) + (1.0/2.0)*M_SQRT2*L3*sin(q[0])*sin(q[1])*cos(q[2]) + (1.0/2.0)*M_SQRT2*L3*sin(q[0])*sin(q[2]) + (1.0/2.0)*M_SQRT2*L3*sin(q[1])*cos(q[0])*cos(q[2]) - 1.0/2.0*M_SQRT2*L3*sin(q[2])*cos(q[0]) + (1.0/2.0)*M_SQRT2*L4*sin(q[0])*sin(q[1])*sin(q[3])*cos(q[2]) + (1.0/2.0)*M_SQRT2*L4*sin(q[0])*sin(q[2])*sin(q[3]) - 1.0/2.0*M_SQRT2*L4*sin(q[0])*cos(q[1])*cos(q[3]) + (1.0/2.0)*M_SQRT2*L4*sin(q[1])*sin(q[3])*cos(q[0])*cos(q[2]) - 1.0/2.0*M_SQRT2*L4*sin(q[2])*sin(q[3])*cos(q[0]) - 1.0/2.0*M_SQRT2*L4*cos(q[0])*cos(q[1])*cos(q[3]) - h;
   out_4985272988055813909[2] = H + L0 - L2*sin(q[1]) - L3*cos(q[1])*cos(q[2]) - L4*sin(q[1])*cos(q[3]) - L4*sin(q[3])*cos(q[1])*cos(q[2]);

}
