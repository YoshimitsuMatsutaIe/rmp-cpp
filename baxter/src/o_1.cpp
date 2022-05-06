/******************************************************************************
 *                       Code generated with sympy 1.9                        *
 *                                                                            *
 *              See http://www.sympy.org/ for more information.               *
 *                                                                            *
 *                    This file is part of 'o_1_BY_SYMPY_'                    *
 ******************************************************************************/
#include "../include/baxter.hpp"

#include <cmath>
using std::cos;
using std::sin;
using std::sqrt;


void baxter::o_1(const VectorXd& q, VectorXd& out) {

   out(0) = -L + (1.0/2.0)*M_SQRT2*L1*sin(q(0)) - 1.0/2.0*M_SQRT2*L1*cos(q(0));
   out(1) = -1.0/2.0*M_SQRT2*L1*sin(q(0)) - 1.0/2.0*M_SQRT2*L1*cos(q(0)) - h;
   out(2) = H + L0;

}
