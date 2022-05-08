/******************************************************************************
 *                       Code generated with sympy 1.9                        *
 *                                                                            *
 *              See http://www.sympy.org/ for more information.               *
 *                                                                            *
 *                   This file is part of 'jo_2_BY_SYMPY_'                    *
 ******************************************************************************/
#include "../include/baxter.hpp"

#include <cmath>
using std::cos;
using std::sin;
using std::sqrt;


void baxter::jo_2(const VectorXd& q, double L, double h, double H, double L0, double L1, double L2, double L3, double L4, double L5, double L6, MatrixXd& out) {

   out(0,0) = (1.0/2.0)*M_SQRT2*L1*sin(q(0)) + (1.0/2.0)*M_SQRT2*L1*cos(q(0)) + (1.0/2.0)*M_SQRT2*L2*sin(q(0))*cos(q(1)) + (1.0/2.0)*M_SQRT2*L2*cos(q(0))*cos(q(1));
   out(0,1) = -1.0/2.0*M_SQRT2*L2*sin(q(0))*sin(q(1)) + (1.0/2.0)*M_SQRT2*L2*sin(q(1))*cos(q(0));
   out(0,2) = 0;
   out(0,3) = 0;
   out(0,4) = 0;
   out(0,5) = 0;
   out(0,6) = 0;
   out(1,0) = (1.0/2.0)*M_SQRT2*L1*sin(q(0)) - 1.0/2.0*M_SQRT2*L1*cos(q(0)) + (1.0/2.0)*M_SQRT2*L2*sin(q(0))*cos(q(1)) - 1.0/2.0*M_SQRT2*L2*cos(q(0))*cos(q(1));
   out(1,1) = (1.0/2.0)*M_SQRT2*L2*sin(q(0))*sin(q(1)) + (1.0/2.0)*M_SQRT2*L2*sin(q(1))*cos(q(0));
   out(1,2) = 0;
   out(1,3) = 0;
   out(1,4) = 0;
   out(1,5) = 0;
   out(1,6) = 0;
   out(2,0) = 0;
   out(2,1) = -L2*cos(q(1));
   out(2,2) = 0;
   out(2,3) = 0;
   out(2,4) = 0;
   out(2,5) = 0;
   out(2,6) = 0;

}
