/******************************************************************************
 *                       Code generated with sympy 1.9                        *
 *                                                                            *
 *              See http://www.sympy.org/ for more information.               *
 *                                                                            *
 *                 This file is part of 'jo_3_dot_BY_SYMPY_'                  *
 ******************************************************************************/
#include "../include/baxter.hpp"

#include <cmath>
using std::cos;
using std::sin;
using std::sqrt;


void baxter::jo_3_dot(const VectorXd& q, const VectorXd& dq, MatrixXd& out) {

   out(0,0) = -1.0/2.0*M_SQRT2*L1*sin(q(0))*dq(0) + (1.0/2.0)*M_SQRT2*L1*cos(q(0))*dq(0) - 1.0/2.0*M_SQRT2*L2*sin(q(0))*sin(q(1))*dq(1) - 1.0/2.0*M_SQRT2*L2*sin(q(0))*cos(q(1))*dq(0) - 1.0/2.0*M_SQRT2*L2*sin(q(1))*cos(q(0))*dq(1) + (1.0/2.0)*M_SQRT2*L2*cos(q(0))*cos(q(1))*dq(0) + (1.0/2.0)*M_SQRT2*L3*sin(q(0))*sin(q(1))*sin(q(2))*dq(2) + (1.0/2.0)*M_SQRT2*L3*sin(q(0))*sin(q(1))*cos(q(2))*dq(0) - 1.0/2.0*M_SQRT2*L3*sin(q(0))*sin(q(2))*dq(0) - 1.0/2.0*M_SQRT2*L3*sin(q(0))*cos(q(1))*cos(q(2))*dq(1) - 1.0/2.0*M_SQRT2*L3*sin(q(0))*cos(q(2))*dq(2) + (1.0/2.0)*M_SQRT2*L3*sin(q(1))*sin(q(2))*cos(q(0))*dq(2) - 1.0/2.0*M_SQRT2*L3*sin(q(1))*cos(q(0))*cos(q(2))*dq(0) - 1.0/2.0*M_SQRT2*L3*sin(q(2))*cos(q(0))*dq(0) - 1.0/2.0*M_SQRT2*L3*cos(q(0))*cos(q(1))*cos(q(2))*dq(1) + (1.0/2.0)*M_SQRT2*L3*cos(q(0))*cos(q(2))*dq(2);
   out(0,1) = -1.0/2.0*M_SQRT2*L2*sin(q(0))*sin(q(1))*dq(0) - 1.0/2.0*M_SQRT2*L2*sin(q(0))*cos(q(1))*dq(1) - 1.0/2.0*M_SQRT2*L2*sin(q(1))*cos(q(0))*dq(0) + (1.0/2.0)*M_SQRT2*L2*cos(q(0))*cos(q(1))*dq(1) + (1.0/2.0)*M_SQRT2*L3*sin(q(0))*sin(q(1))*cos(q(2))*dq(1) + (1.0/2.0)*M_SQRT2*L3*sin(q(0))*sin(q(2))*cos(q(1))*dq(2) - 1.0/2.0*M_SQRT2*L3*sin(q(0))*cos(q(1))*cos(q(2))*dq(0) - 1.0/2.0*M_SQRT2*L3*sin(q(1))*cos(q(0))*cos(q(2))*dq(1) - 1.0/2.0*M_SQRT2*L3*sin(q(2))*cos(q(0))*cos(q(1))*dq(2) - 1.0/2.0*M_SQRT2*L3*cos(q(0))*cos(q(1))*cos(q(2))*dq(0);
   out(0,2) = (1.0/2.0)*M_SQRT2*L3*sin(q(0))*sin(q(1))*sin(q(2))*dq(0) + (1.0/2.0)*M_SQRT2*L3*sin(q(0))*sin(q(1))*cos(q(2))*dq(2) + (1.0/2.0)*M_SQRT2*L3*sin(q(0))*sin(q(2))*cos(q(1))*dq(1) - 1.0/2.0*M_SQRT2*L3*sin(q(0))*sin(q(2))*dq(2) - 1.0/2.0*M_SQRT2*L3*sin(q(0))*cos(q(2))*dq(0) + (1.0/2.0)*M_SQRT2*L3*sin(q(1))*sin(q(2))*cos(q(0))*dq(0) - 1.0/2.0*M_SQRT2*L3*sin(q(1))*cos(q(0))*cos(q(2))*dq(2) - 1.0/2.0*M_SQRT2*L3*sin(q(2))*cos(q(0))*cos(q(1))*dq(1) - 1.0/2.0*M_SQRT2*L3*sin(q(2))*cos(q(0))*dq(2) + (1.0/2.0)*M_SQRT2*L3*cos(q(0))*cos(q(2))*dq(0);
   out(0,3) = 0;
   out(0,4) = 0;
   out(0,5) = 0;
   out(0,6) = 0;
   out(1,0) = (1.0/2.0)*M_SQRT2*L1*sin(q(0))*dq(0) + (1.0/2.0)*M_SQRT2*L1*cos(q(0))*dq(0) - 1.0/2.0*M_SQRT2*L2*sin(q(0))*sin(q(1))*dq(1) + (1.0/2.0)*M_SQRT2*L2*sin(q(0))*cos(q(1))*dq(0) + (1.0/2.0)*M_SQRT2*L2*sin(q(1))*cos(q(0))*dq(1) + (1.0/2.0)*M_SQRT2*L2*cos(q(0))*cos(q(1))*dq(0) + (1.0/2.0)*M_SQRT2*L3*sin(q(0))*sin(q(1))*sin(q(2))*dq(2) - 1.0/2.0*M_SQRT2*L3*sin(q(0))*sin(q(1))*cos(q(2))*dq(0) - 1.0/2.0*M_SQRT2*L3*sin(q(0))*sin(q(2))*dq(0) - 1.0/2.0*M_SQRT2*L3*sin(q(0))*cos(q(1))*cos(q(2))*dq(1) + (1.0/2.0)*M_SQRT2*L3*sin(q(0))*cos(q(2))*dq(2) - 1.0/2.0*M_SQRT2*L3*sin(q(1))*sin(q(2))*cos(q(0))*dq(2) - 1.0/2.0*M_SQRT2*L3*sin(q(1))*cos(q(0))*cos(q(2))*dq(0) + (1.0/2.0)*M_SQRT2*L3*sin(q(2))*cos(q(0))*dq(0) + (1.0/2.0)*M_SQRT2*L3*cos(q(0))*cos(q(1))*cos(q(2))*dq(1) + (1.0/2.0)*M_SQRT2*L3*cos(q(0))*cos(q(2))*dq(2);
   out(1,1) = -1.0/2.0*M_SQRT2*L2*sin(q(0))*sin(q(1))*dq(0) + (1.0/2.0)*M_SQRT2*L2*sin(q(0))*cos(q(1))*dq(1) + (1.0/2.0)*M_SQRT2*L2*sin(q(1))*cos(q(0))*dq(0) + (1.0/2.0)*M_SQRT2*L2*cos(q(0))*cos(q(1))*dq(1) - 1.0/2.0*M_SQRT2*L3*sin(q(0))*sin(q(1))*cos(q(2))*dq(1) - 1.0/2.0*M_SQRT2*L3*sin(q(0))*sin(q(2))*cos(q(1))*dq(2) - 1.0/2.0*M_SQRT2*L3*sin(q(0))*cos(q(1))*cos(q(2))*dq(0) - 1.0/2.0*M_SQRT2*L3*sin(q(1))*cos(q(0))*cos(q(2))*dq(1) - 1.0/2.0*M_SQRT2*L3*sin(q(2))*cos(q(0))*cos(q(1))*dq(2) + (1.0/2.0)*M_SQRT2*L3*cos(q(0))*cos(q(1))*cos(q(2))*dq(0);
   out(1,2) = (1.0/2.0)*M_SQRT2*L3*sin(q(0))*sin(q(1))*sin(q(2))*dq(0) - 1.0/2.0*M_SQRT2*L3*sin(q(0))*sin(q(1))*cos(q(2))*dq(2) - 1.0/2.0*M_SQRT2*L3*sin(q(0))*sin(q(2))*cos(q(1))*dq(1) - 1.0/2.0*M_SQRT2*L3*sin(q(0))*sin(q(2))*dq(2) + (1.0/2.0)*M_SQRT2*L3*sin(q(0))*cos(q(2))*dq(0) - 1.0/2.0*M_SQRT2*L3*sin(q(1))*sin(q(2))*cos(q(0))*dq(0) - 1.0/2.0*M_SQRT2*L3*sin(q(1))*cos(q(0))*cos(q(2))*dq(2) - 1.0/2.0*M_SQRT2*L3*sin(q(2))*cos(q(0))*cos(q(1))*dq(1) + (1.0/2.0)*M_SQRT2*L3*sin(q(2))*cos(q(0))*dq(2) + (1.0/2.0)*M_SQRT2*L3*cos(q(0))*cos(q(2))*dq(0);
   out(1,3) = 0;
   out(1,4) = 0;
   out(1,5) = 0;
   out(1,6) = 0;
   out(2,0) = 0;
   out(2,1) = L2*sin(q(1))*dq(1) - L3*sin(q(1))*sin(q(2))*dq(2) + L3*cos(q(1))*cos(q(2))*dq(1);
   out(2,2) = -L3*sin(q(1))*sin(q(2))*dq(1) + L3*cos(q(1))*cos(q(2))*dq(2);
   out(2,3) = 0;
   out(2,4) = 0;
   out(2,5) = 0;
   out(2,6) = 0;

}
