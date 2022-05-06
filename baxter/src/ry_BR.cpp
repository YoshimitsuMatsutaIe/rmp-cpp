/******************************************************************************
 *                       Code generated with sympy 1.9                        *
 *                                                                            *
 *              See http://www.sympy.org/ for more information.               *
 *                                                                            *
 *                   This file is part of 'ry_BR_BY_SYMPY_'                   *
 ******************************************************************************/
#include "../include/baxter.hpp"

#include <cmath>
using std::cos;
using std::sin;
using std::sqrt;


void baxter::ry_BR(const VectorXd& q, VectorXd& out) {

   out(0) = M_SQRT1_2;
   out(1) = -1.0/2.0*M_SQRT2;
   out(2) = 0;

}
