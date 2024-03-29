/******************************************************************************
 *                      Code generated with SymPy 1.10.1                      *
 *                                                                            *
 *              See http://www.sympy.org/ for more information.               *
 *                                                                            *
 *                   This file is part of 'o_ee_BY_SYMPY_'                    *
 ******************************************************************************/
#include "../include/sice.hpp"

#include <cmath>
using std::cos;
using std::sin;
using std::sqrt;


void sice::o_ee::operator()(const VectorXd& q, VectorXd& out) {

   out(0) = l1*cos(q(0)) - l2*sin(q(0))*sin(q(1)) + l2*cos(q(0))*cos(q(1)) - l3*sin(q(0))*sin(q(1))*cos(q(2)) - l3*sin(q(0))*sin(q(2))*cos(q(1)) - l3*sin(q(1))*sin(q(2))*cos(q(0)) + l3*cos(q(0))*cos(q(1))*cos(q(2)) + l4*sin(q(0))*sin(q(1))*sin(q(2))*sin(q(3)) - l4*sin(q(0))*sin(q(1))*cos(q(2))*cos(q(3)) - l4*sin(q(0))*sin(q(2))*cos(q(1))*cos(q(3)) - l4*sin(q(0))*sin(q(3))*cos(q(1))*cos(q(2)) - l4*sin(q(1))*sin(q(2))*cos(q(0))*cos(q(3)) - l4*sin(q(1))*sin(q(3))*cos(q(0))*cos(q(2)) - l4*sin(q(2))*sin(q(3))*cos(q(0))*cos(q(1)) + l4*cos(q(0))*cos(q(1))*cos(q(2))*cos(q(3));
   out(1) = l1*sin(q(0)) + l2*sin(q(0))*cos(q(1)) + l2*sin(q(1))*cos(q(0)) - l3*sin(q(0))*sin(q(1))*sin(q(2)) + l3*sin(q(0))*cos(q(1))*cos(q(2)) + l3*sin(q(1))*cos(q(0))*cos(q(2)) + l3*sin(q(2))*cos(q(0))*cos(q(1)) - l4*sin(q(0))*sin(q(1))*sin(q(2))*cos(q(3)) - l4*sin(q(0))*sin(q(1))*sin(q(3))*cos(q(2)) - l4*sin(q(0))*sin(q(2))*sin(q(3))*cos(q(1)) + l4*sin(q(0))*cos(q(1))*cos(q(2))*cos(q(3)) - l4*sin(q(1))*sin(q(2))*sin(q(3))*cos(q(0)) + l4*sin(q(1))*cos(q(0))*cos(q(2))*cos(q(3)) + l4*sin(q(2))*cos(q(0))*cos(q(1))*cos(q(3)) + l4*sin(q(3))*cos(q(0))*cos(q(1))*cos(q(2));

}
