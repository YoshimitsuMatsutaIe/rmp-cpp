/******************************************************************************
 *                       Code generated with sympy 1.9                        *
 *                                                                            *
 *              See http://www.sympy.org/ for more information.               *
 *                                                                            *
 *                    This file is part of 'o_3_BY_SYMPY_'                    *
 ******************************************************************************/
#include "../include/baxter.hpp"

#include <cmath>
using std::cos;
using std::sin;
using std::sqrt;


void baxter::o_3(const VectorXd& q, VectorXd& out) {

   out(0) = -L + (1.0/2.0)*M_SQRT2*L1*sin(q(0)) - 1.0/2.0*M_SQRT2*L1*cos(q(0)) + (1.0/2.0)*M_SQRT2*L2*sin(q(0))*cos(q(1)) - 1.0/2.0*M_SQRT2*L2*cos(q(0))*cos(q(1)) - 1.0/2.0*M_SQRT2*L3*sin(q(0))*sin(q(1))*cos(q(2)) + (1.0/2.0)*M_SQRT2*L3*sin(q(0))*sin(q(2)) + (1.0/2.0)*M_SQRT2*L3*sin(q(1))*cos(q(0))*cos(q(2)) + (1.0/2.0)*M_SQRT2*L3*sin(q(2))*cos(q(0));
   out(1) = -1.0/2.0*M_SQRT2*L1*sin(q(0)) - 1.0/2.0*M_SQRT2*L1*cos(q(0)) - 1.0/2.0*M_SQRT2*L2*sin(q(0))*cos(q(1)) - 1.0/2.0*M_SQRT2*L2*cos(q(0))*cos(q(1)) + (1.0/2.0)*M_SQRT2*L3*sin(q(0))*sin(q(1))*cos(q(2)) + (1.0/2.0)*M_SQRT2*L3*sin(q(0))*sin(q(2)) + (1.0/2.0)*M_SQRT2*L3*sin(q(1))*cos(q(0))*cos(q(2)) - 1.0/2.0*M_SQRT2*L3*sin(q(2))*cos(q(0)) - h;
   out(2) = H + L0 - L2*sin(q(1)) - L3*cos(q(1))*cos(q(2));

}
