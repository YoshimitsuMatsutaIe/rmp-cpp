/******************************************************************************
 *                      Code generated with SymPy 1.10.1                      *
 *                                                                            *
 *              See http://www.sympy.org/ for more information.               *
 *                                                                            *
 *                   This file is part of 'rx_ee_BY_SYMPY_'                   *
 ******************************************************************************/
#include "../include/sice.hpp"

#include <cmath>
using std::cos;
using std::sin;
using std::sqrt;


void sice::Kinematics::rx_ee(const VectorXd& q, VectorXd& out) {

   out(0) = sin(q(0))*sin(q(1))*sin(q(2))*sin(q(3)) - sin(q(0))*sin(q(1))*cos(q(2))*cos(q(3)) - sin(q(0))*sin(q(2))*cos(q(1))*cos(q(3)) - sin(q(0))*sin(q(3))*cos(q(1))*cos(q(2)) - sin(q(1))*sin(q(2))*cos(q(0))*cos(q(3)) - sin(q(1))*sin(q(3))*cos(q(0))*cos(q(2)) - sin(q(2))*sin(q(3))*cos(q(0))*cos(q(1)) + cos(q(0))*cos(q(1))*cos(q(2))*cos(q(3));
   out(1) = -sin(q(0))*sin(q(1))*sin(q(2))*cos(q(3)) - sin(q(0))*sin(q(1))*sin(q(3))*cos(q(2)) - sin(q(0))*sin(q(2))*sin(q(3))*cos(q(1)) + sin(q(0))*cos(q(1))*cos(q(2))*cos(q(3)) - sin(q(1))*sin(q(2))*sin(q(3))*cos(q(0)) + sin(q(1))*cos(q(0))*cos(q(2))*cos(q(3)) + sin(q(2))*cos(q(0))*cos(q(1))*cos(q(3)) + sin(q(3))*cos(q(0))*cos(q(1))*cos(q(2));

}
