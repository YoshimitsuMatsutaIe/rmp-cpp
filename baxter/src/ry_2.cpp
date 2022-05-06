/******************************************************************************
 *                       Code generated with sympy 1.9                        *
 *                                                                            *
 *              See http://www.sympy.org/ for more information.               *
 *                                                                            *
 *                   This file is part of 'ry_2_BY_SYMPY_'                    *
 ******************************************************************************/
#include "../include/baxter.hpp"

#include <cmath>
using std::cos;
using std::sin;
using std::sqrt;


void baxter::ry_2(const VectorXd& q, VectorXd& out) {

   out(0) = (1.0/2.0)*M_SQRT2*sin(q(0))*sin(q(1))*sin(q(2)) + (1.0/2.0)*M_SQRT2*sin(q(0))*cos(q(2)) - 1.0/2.0*M_SQRT2*sin(q(1))*sin(q(2))*cos(q(0)) + (1.0/2.0)*M_SQRT2*cos(q(0))*cos(q(2));
   out(1) = -1.0/2.0*M_SQRT2*sin(q(0))*sin(q(1))*sin(q(2)) + (1.0/2.0)*M_SQRT2*sin(q(0))*cos(q(2)) - 1.0/2.0*M_SQRT2*sin(q(1))*sin(q(2))*cos(q(0)) - 1.0/2.0*M_SQRT2*cos(q(0))*cos(q(2));
   out(2) = sin(q(2))*cos(q(1));

}
