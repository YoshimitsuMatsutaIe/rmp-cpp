/******************************************************************************
 *                      Code generated with SymPy 1.10.1                      *
 *                                                                            *
 *              See http://www.sympy.org/ for more information.               *
 *                                                                            *
 *                   This file is part of 'rx_1_BY_SYMPY_'                    *
 ******************************************************************************/
#include "../include/sice.hpp"

#include <cmath>
using std::cos;
using std::sin;
using std::sqrt;


void sice::rx_1::operator()(const VectorXd& q, VectorXd& out) {

   out(0) = -sin(q(0))*sin(q(1)) + cos(q(0))*cos(q(1));
   out(1) = sin(q(0))*cos(q(1)) + sin(q(1))*cos(q(0));

}
