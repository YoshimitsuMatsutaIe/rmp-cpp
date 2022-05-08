/******************************************************************************
 *                       Code generated with sympy 1.9                        *
 *                                                                            *
 *              See http://www.sympy.org/ for more information.               *
 *                                                                            *
 *                   This file is part of 'ry_W0_BY_SYMPY_'                   *
 ******************************************************************************/
#include "../include/baxter.hpp"

#include <cmath>
using std::cos;
using std::sin;
using std::sqrt;


void baxter::ry_W0(const VectorXd& q, double L, double h, double H, double L0, double L1, double L2, double L3, double L4, double L5, double L6, VectorXd& out) {

   out(0) = M_SQRT1_2;
   out(1) = -1.0/2.0*M_SQRT2;
   out(2) = 0;

}
