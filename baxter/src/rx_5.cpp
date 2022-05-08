/******************************************************************************
 *                       Code generated with sympy 1.9                        *
 *                                                                            *
 *              See http://www.sympy.org/ for more information.               *
 *                                                                            *
 *                   This file is part of 'rx_5_BY_SYMPY_'                    *
 ******************************************************************************/
#include "../include/baxter.hpp"

#include <cmath>
using std::cos;
using std::sin;
using std::sqrt;


void baxter::rx_5(const VectorXd& q, double L, double h, double H, double L0, double L1, double L2, double L3, double L4, double L5, double L6, VectorXd& out) {

   out(0) = (1.0/2.0)*M_SQRT2*sin(q(0))*sin(q(1))*sin(q(2))*sin(q(4))*cos(q(5)) + (1.0/2.0)*M_SQRT2*sin(q(0))*sin(q(1))*sin(q(3))*sin(q(5))*cos(q(2)) - 1.0/2.0*M_SQRT2*sin(q(0))*sin(q(1))*cos(q(2))*cos(q(3))*cos(q(4))*cos(q(5)) - 1.0/2.0*M_SQRT2*sin(q(0))*sin(q(2))*sin(q(3))*sin(q(5)) + (1.0/2.0)*M_SQRT2*sin(q(0))*sin(q(2))*cos(q(3))*cos(q(4))*cos(q(5)) - 1.0/2.0*M_SQRT2*sin(q(0))*sin(q(3))*cos(q(1))*cos(q(4))*cos(q(5)) + (1.0/2.0)*M_SQRT2*sin(q(0))*sin(q(4))*cos(q(2))*cos(q(5)) - 1.0/2.0*M_SQRT2*sin(q(0))*sin(q(5))*cos(q(1))*cos(q(3)) - 1.0/2.0*M_SQRT2*sin(q(1))*sin(q(2))*sin(q(4))*cos(q(0))*cos(q(5)) - 1.0/2.0*M_SQRT2*sin(q(1))*sin(q(3))*sin(q(5))*cos(q(0))*cos(q(2)) + (1.0/2.0)*M_SQRT2*sin(q(1))*cos(q(0))*cos(q(2))*cos(q(3))*cos(q(4))*cos(q(5)) - 1.0/2.0*M_SQRT2*sin(q(2))*sin(q(3))*sin(q(5))*cos(q(0)) + (1.0/2.0)*M_SQRT2*sin(q(2))*cos(q(0))*cos(q(3))*cos(q(4))*cos(q(5)) + (1.0/2.0)*M_SQRT2*sin(q(3))*cos(q(0))*cos(q(1))*cos(q(4))*cos(q(5)) + (1.0/2.0)*M_SQRT2*sin(q(4))*cos(q(0))*cos(q(2))*cos(q(5)) + (1.0/2.0)*M_SQRT2*sin(q(5))*cos(q(0))*cos(q(1))*cos(q(3));
   out(1) = -1.0/2.0*M_SQRT2*sin(q(0))*sin(q(1))*sin(q(2))*sin(q(4))*cos(q(5)) - 1.0/2.0*M_SQRT2*sin(q(0))*sin(q(1))*sin(q(3))*sin(q(5))*cos(q(2)) + (1.0/2.0)*M_SQRT2*sin(q(0))*sin(q(1))*cos(q(2))*cos(q(3))*cos(q(4))*cos(q(5)) - 1.0/2.0*M_SQRT2*sin(q(0))*sin(q(2))*sin(q(3))*sin(q(5)) + (1.0/2.0)*M_SQRT2*sin(q(0))*sin(q(2))*cos(q(3))*cos(q(4))*cos(q(5)) + (1.0/2.0)*M_SQRT2*sin(q(0))*sin(q(3))*cos(q(1))*cos(q(4))*cos(q(5)) + (1.0/2.0)*M_SQRT2*sin(q(0))*sin(q(4))*cos(q(2))*cos(q(5)) + (1.0/2.0)*M_SQRT2*sin(q(0))*sin(q(5))*cos(q(1))*cos(q(3)) - 1.0/2.0*M_SQRT2*sin(q(1))*sin(q(2))*sin(q(4))*cos(q(0))*cos(q(5)) - 1.0/2.0*M_SQRT2*sin(q(1))*sin(q(3))*sin(q(5))*cos(q(0))*cos(q(2)) + (1.0/2.0)*M_SQRT2*sin(q(1))*cos(q(0))*cos(q(2))*cos(q(3))*cos(q(4))*cos(q(5)) + (1.0/2.0)*M_SQRT2*sin(q(2))*sin(q(3))*sin(q(5))*cos(q(0)) - 1.0/2.0*M_SQRT2*sin(q(2))*cos(q(0))*cos(q(3))*cos(q(4))*cos(q(5)) + (1.0/2.0)*M_SQRT2*sin(q(3))*cos(q(0))*cos(q(1))*cos(q(4))*cos(q(5)) - 1.0/2.0*M_SQRT2*sin(q(4))*cos(q(0))*cos(q(2))*cos(q(5)) + (1.0/2.0)*M_SQRT2*sin(q(5))*cos(q(0))*cos(q(1))*cos(q(3));
   out(2) = sin(q(1))*sin(q(3))*cos(q(4))*cos(q(5)) + sin(q(1))*sin(q(5))*cos(q(3)) + sin(q(2))*sin(q(4))*cos(q(1))*cos(q(5)) + sin(q(3))*sin(q(5))*cos(q(1))*cos(q(2)) - cos(q(1))*cos(q(2))*cos(q(3))*cos(q(4))*cos(q(5));

}
