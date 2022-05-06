/******************************************************************************
 *                       Code generated with sympy 1.9                        *
 *                                                                            *
 *              See http://www.sympy.org/ for more information.               *
 *                                                                            *
 *                   This file is part of 'rx_2_BY_SYMPY_'                    *
 ******************************************************************************/
#include "../include/baxter.hpp"

#include <cmath>
using std::cos;
using std::sin;
using std::sqrt;


void baxter::rx_2(const VectorXd& q, VectorXd& out) {

   out(0) = -1.0/2.0*M_SQRT2*sin(q(0))*sin(q(1))*cos(q(2)) + (1.0/2.0)*M_SQRT2*sin(q(0))*sin(q(2)) + (1.0/2.0)*M_SQRT2*sin(q(1))*cos(q(0))*cos(q(2)) + (1.0/2.0)*M_SQRT2*sin(q(2))*cos(q(0));
   out(1) = (1.0/2.0)*M_SQRT2*sin(q(0))*sin(q(1))*cos(q(2)) + (1.0/2.0)*M_SQRT2*sin(q(0))*sin(q(2)) + (1.0/2.0)*M_SQRT2*sin(q(1))*cos(q(0))*cos(q(2)) - 1.0/2.0*M_SQRT2*sin(q(2))*cos(q(0));
   out(2) = -cos(q(1))*cos(q(2));

}
