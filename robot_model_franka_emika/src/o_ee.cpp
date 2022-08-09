/******************************************************************************
 *                      Code generated with SymPy 1.10.1                      *
 *                                                                            *
 *              See http://www.sympy.org/ for more information.               *
 *                                                                            *
 *                   This file is part of 'o_ee_BY_SYMPY_'                    *
 ******************************************************************************/
#include "../include/franka_emika.hpp"

#include <cmath>
using std::cos;
using std::sin;
using std::sqrt;


void franka_emika::Kinematics::o_ee(const VectorXd& q, VectorXd& out) {

   out(0) = -a4*sin(q(0))*sin(q(2)) + a4*cos(q(0))*cos(q(1))*cos(q(2)) - a5*sin(q(0))*sin(q(2))*cos(q(3)) + a5*sin(q(1))*sin(q(3))*cos(q(0)) + a5*cos(q(0))*cos(q(1))*cos(q(2))*cos(q(3)) + a7*sin(q(0))*sin(q(2))*sin(q(3))*sin(q(5)) - a7*sin(q(0))*sin(q(2))*cos(q(3))*cos(q(4))*cos(q(5)) - a7*sin(q(0))*sin(q(4))*cos(q(2))*cos(q(5)) + a7*sin(q(1))*sin(q(3))*cos(q(0))*cos(q(4))*cos(q(5)) + a7*sin(q(1))*sin(q(5))*cos(q(0))*cos(q(3)) - a7*sin(q(2))*sin(q(4))*cos(q(0))*cos(q(1))*cos(q(5)) - a7*sin(q(3))*sin(q(5))*cos(q(0))*cos(q(1))*cos(q(2)) + a7*cos(q(0))*cos(q(1))*cos(q(2))*cos(q(3))*cos(q(4))*cos(q(5)) + d3*sin(q(1))*cos(q(0)) + d5*sin(q(0))*sin(q(2))*sin(q(3)) + d5*sin(q(1))*cos(q(0))*cos(q(3)) - d5*sin(q(3))*cos(q(0))*cos(q(1))*cos(q(2)) - df*sin(q(0))*sin(q(2))*sin(q(3))*cos(q(5)) - df*sin(q(0))*sin(q(2))*sin(q(5))*cos(q(3))*cos(q(4)) - df*sin(q(0))*sin(q(4))*sin(q(5))*cos(q(2)) + df*sin(q(1))*sin(q(3))*sin(q(5))*cos(q(0))*cos(q(4)) - df*sin(q(1))*cos(q(0))*cos(q(3))*cos(q(5)) - df*sin(q(2))*sin(q(4))*sin(q(5))*cos(q(0))*cos(q(1)) + df*sin(q(3))*cos(q(0))*cos(q(1))*cos(q(2))*cos(q(5)) + df*sin(q(5))*cos(q(0))*cos(q(1))*cos(q(2))*cos(q(3))*cos(q(4));
   out(1) = a4*sin(q(0))*cos(q(1))*cos(q(2)) + a4*sin(q(2))*cos(q(0)) + a5*sin(q(0))*sin(q(1))*sin(q(3)) + a5*sin(q(0))*cos(q(1))*cos(q(2))*cos(q(3)) + a5*sin(q(2))*cos(q(0))*cos(q(3)) + a7*sin(q(0))*sin(q(1))*sin(q(3))*cos(q(4))*cos(q(5)) + a7*sin(q(0))*sin(q(1))*sin(q(5))*cos(q(3)) - a7*sin(q(0))*sin(q(2))*sin(q(4))*cos(q(1))*cos(q(5)) - a7*sin(q(0))*sin(q(3))*sin(q(5))*cos(q(1))*cos(q(2)) + a7*sin(q(0))*cos(q(1))*cos(q(2))*cos(q(3))*cos(q(4))*cos(q(5)) - a7*sin(q(2))*sin(q(3))*sin(q(5))*cos(q(0)) + a7*sin(q(2))*cos(q(0))*cos(q(3))*cos(q(4))*cos(q(5)) + a7*sin(q(4))*cos(q(0))*cos(q(2))*cos(q(5)) + d3*sin(q(0))*sin(q(1)) + d5*sin(q(0))*sin(q(1))*cos(q(3)) - d5*sin(q(0))*sin(q(3))*cos(q(1))*cos(q(2)) - d5*sin(q(2))*sin(q(3))*cos(q(0)) + df*sin(q(0))*sin(q(1))*sin(q(3))*sin(q(5))*cos(q(4)) - df*sin(q(0))*sin(q(1))*cos(q(3))*cos(q(5)) - df*sin(q(0))*sin(q(2))*sin(q(4))*sin(q(5))*cos(q(1)) + df*sin(q(0))*sin(q(3))*cos(q(1))*cos(q(2))*cos(q(5)) + df*sin(q(0))*sin(q(5))*cos(q(1))*cos(q(2))*cos(q(3))*cos(q(4)) + df*sin(q(2))*sin(q(3))*cos(q(0))*cos(q(5)) + df*sin(q(2))*sin(q(5))*cos(q(0))*cos(q(3))*cos(q(4)) + df*sin(q(4))*sin(q(5))*cos(q(0))*cos(q(2));
   out(2) = -a4*sin(q(1))*cos(q(2)) - a5*sin(q(1))*cos(q(2))*cos(q(3)) + a5*sin(q(3))*cos(q(1)) + a7*sin(q(1))*sin(q(2))*sin(q(4))*cos(q(5)) + a7*sin(q(1))*sin(q(3))*sin(q(5))*cos(q(2)) - a7*sin(q(1))*cos(q(2))*cos(q(3))*cos(q(4))*cos(q(5)) + a7*sin(q(3))*cos(q(1))*cos(q(4))*cos(q(5)) + a7*sin(q(5))*cos(q(1))*cos(q(3)) + d1 + d3*cos(q(1)) + d5*sin(q(1))*sin(q(3))*cos(q(2)) + d5*cos(q(1))*cos(q(3)) + df*sin(q(1))*sin(q(2))*sin(q(4))*sin(q(5)) - df*sin(q(1))*sin(q(3))*cos(q(2))*cos(q(5)) - df*sin(q(1))*sin(q(5))*cos(q(2))*cos(q(3))*cos(q(4)) + df*sin(q(3))*sin(q(5))*cos(q(1))*cos(q(4)) - df*cos(q(1))*cos(q(3))*cos(q(5));

}
