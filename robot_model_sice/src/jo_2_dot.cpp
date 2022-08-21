/******************************************************************************
 *                      Code generated with SymPy 1.10.1                      *
 *                                                                            *
 *              See http://www.sympy.org/ for more information.               *
 *                                                                            *
 *                 This file is part of 'jo_2_dot_BY_SYMPY_'                  *
 ******************************************************************************/
#include "../include/sice.hpp"

#include <cmath>
using std::cos;
using std::sin;
using std::sqrt;


void sice::Kinematics::jo_2_dot(const VectorXd& q, const VectorXd& dq, MatrixXd& out) {

   out(0,0) = -l1*cos(q(0))*dq(0) + l2*sin(q(0))*sin(q(1))*dq(0) + l2*sin(q(0))*sin(q(1))*dq(1) - l2*cos(q(0))*cos(q(1))*dq(0) - l2*cos(q(0))*cos(q(1))*dq(1);
   out(0,1) = l2*sin(q(0))*sin(q(1))*dq(0) + l2*sin(q(0))*sin(q(1))*dq(1) - l2*cos(q(0))*cos(q(1))*dq(0) - l2*cos(q(0))*cos(q(1))*dq(1);
   out(0,2) = 0;
   out(0,3) = 0;
   out(1,0) = -l1*sin(q(0))*dq(0) - l2*sin(q(0))*cos(q(1))*dq(0) - l2*sin(q(0))*cos(q(1))*dq(1) - l2*sin(q(1))*cos(q(0))*dq(0) - l2*sin(q(1))*cos(q(0))*dq(1);
   out(1,1) = -l2*sin(q(0))*cos(q(1))*dq(0) - l2*sin(q(0))*cos(q(1))*dq(1) - l2*sin(q(1))*cos(q(0))*dq(0) - l2*sin(q(1))*cos(q(0))*dq(1);
   out(1,2) = 0;
   out(1,3) = 0;

}
