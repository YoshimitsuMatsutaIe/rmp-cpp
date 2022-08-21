/******************************************************************************
 *                      Code generated with SymPy 1.10.1                      *
 *                                                                            *
 *              See http://www.sympy.org/ for more information.               *
 *                                                                            *
 *                  This file is part of 'jry_ee_BY_SYMPY_'                   *
 ******************************************************************************/
#include "../include/sice.hpp"

#include <cmath>
using std::cos;
using std::sin;
using std::sqrt;


void sice::Kinematics::jry_ee(const VectorXd& q, MatrixXd& out) {

   out(0,0) = -sin(q(0))*sin(q(1))*sin(q(2))*sin(q(3)) + sin(q(0))*sin(q(1))*cos(q(2))*cos(q(3)) + sin(q(0))*sin(q(2))*cos(q(1))*cos(q(3)) + sin(q(0))*sin(q(3))*cos(q(1))*cos(q(2)) + sin(q(1))*sin(q(2))*cos(q(0))*cos(q(3)) + sin(q(1))*sin(q(3))*cos(q(0))*cos(q(2)) + sin(q(2))*sin(q(3))*cos(q(0))*cos(q(1)) - cos(q(0))*cos(q(1))*cos(q(2))*cos(q(3));
   out(0,1) = -sin(q(0))*sin(q(1))*sin(q(2))*sin(q(3)) + sin(q(0))*sin(q(1))*cos(q(2))*cos(q(3)) + sin(q(0))*sin(q(2))*cos(q(1))*cos(q(3)) + sin(q(0))*sin(q(3))*cos(q(1))*cos(q(2)) + sin(q(1))*sin(q(2))*cos(q(0))*cos(q(3)) + sin(q(1))*sin(q(3))*cos(q(0))*cos(q(2)) + sin(q(2))*sin(q(3))*cos(q(0))*cos(q(1)) - cos(q(0))*cos(q(1))*cos(q(2))*cos(q(3));
   out(0,2) = -sin(q(0))*sin(q(1))*sin(q(2))*sin(q(3)) + sin(q(0))*sin(q(1))*cos(q(2))*cos(q(3)) + sin(q(0))*sin(q(2))*cos(q(1))*cos(q(3)) + sin(q(0))*sin(q(3))*cos(q(1))*cos(q(2)) + sin(q(1))*sin(q(2))*cos(q(0))*cos(q(3)) + sin(q(1))*sin(q(3))*cos(q(0))*cos(q(2)) + sin(q(2))*sin(q(3))*cos(q(0))*cos(q(1)) - cos(q(0))*cos(q(1))*cos(q(2))*cos(q(3));
   out(0,3) = -sin(q(0))*sin(q(1))*sin(q(2))*sin(q(3)) + sin(q(0))*sin(q(1))*cos(q(2))*cos(q(3)) + sin(q(0))*sin(q(2))*cos(q(1))*cos(q(3)) + sin(q(0))*sin(q(3))*cos(q(1))*cos(q(2)) + sin(q(1))*sin(q(2))*cos(q(0))*cos(q(3)) + sin(q(1))*sin(q(3))*cos(q(0))*cos(q(2)) + sin(q(2))*sin(q(3))*cos(q(0))*cos(q(1)) - cos(q(0))*cos(q(1))*cos(q(2))*cos(q(3));
   out(1,0) = sin(q(0))*sin(q(1))*sin(q(2))*cos(q(3)) + sin(q(0))*sin(q(1))*sin(q(3))*cos(q(2)) + sin(q(0))*sin(q(2))*sin(q(3))*cos(q(1)) - sin(q(0))*cos(q(1))*cos(q(2))*cos(q(3)) + sin(q(1))*sin(q(2))*sin(q(3))*cos(q(0)) - sin(q(1))*cos(q(0))*cos(q(2))*cos(q(3)) - sin(q(2))*cos(q(0))*cos(q(1))*cos(q(3)) - sin(q(3))*cos(q(0))*cos(q(1))*cos(q(2));
   out(1,1) = sin(q(0))*sin(q(1))*sin(q(2))*cos(q(3)) + sin(q(0))*sin(q(1))*sin(q(3))*cos(q(2)) + sin(q(0))*sin(q(2))*sin(q(3))*cos(q(1)) - sin(q(0))*cos(q(1))*cos(q(2))*cos(q(3)) + sin(q(1))*sin(q(2))*sin(q(3))*cos(q(0)) - sin(q(1))*cos(q(0))*cos(q(2))*cos(q(3)) - sin(q(2))*cos(q(0))*cos(q(1))*cos(q(3)) - sin(q(3))*cos(q(0))*cos(q(1))*cos(q(2));
   out(1,2) = sin(q(0))*sin(q(1))*sin(q(2))*cos(q(3)) + sin(q(0))*sin(q(1))*sin(q(3))*cos(q(2)) + sin(q(0))*sin(q(2))*sin(q(3))*cos(q(1)) - sin(q(0))*cos(q(1))*cos(q(2))*cos(q(3)) + sin(q(1))*sin(q(2))*sin(q(3))*cos(q(0)) - sin(q(1))*cos(q(0))*cos(q(2))*cos(q(3)) - sin(q(2))*cos(q(0))*cos(q(1))*cos(q(3)) - sin(q(3))*cos(q(0))*cos(q(1))*cos(q(2));
   out(1,3) = sin(q(0))*sin(q(1))*sin(q(2))*cos(q(3)) + sin(q(0))*sin(q(1))*sin(q(3))*cos(q(2)) + sin(q(0))*sin(q(2))*sin(q(3))*cos(q(1)) - sin(q(0))*cos(q(1))*cos(q(2))*cos(q(3)) + sin(q(1))*sin(q(2))*sin(q(3))*cos(q(0)) - sin(q(1))*cos(q(0))*cos(q(2))*cos(q(3)) - sin(q(2))*cos(q(0))*cos(q(1))*cos(q(3)) - sin(q(3))*cos(q(0))*cos(q(1))*cos(q(2));

}
