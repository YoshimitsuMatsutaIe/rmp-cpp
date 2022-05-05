/******************************************************************************
 *                       Code generated with sympy 1.9                        *
 *                                                                            *
 *              See http://www.sympy.org/ for more information.               *
 *                                                                            *
 *                 This file is part of 'jrx_2_dot_BY_SYMPY_'                 *
 ******************************************************************************/
#include "../../include/baxter/jrx_2_dot.hpp"
#include <cmath>
using std::cos;
using std::sin;
using std::sqrt;


void jrx_2_dot(double *dq, double *q, double *out_8100661524270785253) {

   out_8100661524270785253[0] = (1.0/2.0)*M_SQRT2*sin(q[0])*sin(q[1])*sin(q[2])*dq[2] + (1.0/2.0)*M_SQRT2*sin(q[0])*sin(q[1])*cos(q[2])*dq[0] - 1.0/2.0*M_SQRT2*sin(q[0])*sin(q[2])*dq[0] - 1.0/2.0*M_SQRT2*sin(q[0])*cos(q[1])*cos(q[2])*dq[1] - 1.0/2.0*M_SQRT2*sin(q[0])*cos(q[2])*dq[2] + (1.0/2.0)*M_SQRT2*sin(q[1])*sin(q[2])*cos(q[0])*dq[2] - 1.0/2.0*M_SQRT2*sin(q[1])*cos(q[0])*cos(q[2])*dq[0] - 1.0/2.0*M_SQRT2*sin(q[2])*cos(q[0])*dq[0] - 1.0/2.0*M_SQRT2*cos(q[0])*cos(q[1])*cos(q[2])*dq[1] + (1.0/2.0)*M_SQRT2*cos(q[0])*cos(q[2])*dq[2];
   out_8100661524270785253[1] = (1.0/2.0)*M_SQRT2*sin(q[0])*sin(q[1])*cos(q[2])*dq[1] + (1.0/2.0)*M_SQRT2*sin(q[0])*sin(q[2])*cos(q[1])*dq[2] - 1.0/2.0*M_SQRT2*sin(q[0])*cos(q[1])*cos(q[2])*dq[0] - 1.0/2.0*M_SQRT2*sin(q[1])*cos(q[0])*cos(q[2])*dq[1] - 1.0/2.0*M_SQRT2*sin(q[2])*cos(q[0])*cos(q[1])*dq[2] - 1.0/2.0*M_SQRT2*cos(q[0])*cos(q[1])*cos(q[2])*dq[0];
   out_8100661524270785253[2] = (1.0/2.0)*M_SQRT2*sin(q[0])*sin(q[1])*sin(q[2])*dq[0] + (1.0/2.0)*M_SQRT2*sin(q[0])*sin(q[1])*cos(q[2])*dq[2] + (1.0/2.0)*M_SQRT2*sin(q[0])*sin(q[2])*cos(q[1])*dq[1] - 1.0/2.0*M_SQRT2*sin(q[0])*sin(q[2])*dq[2] - 1.0/2.0*M_SQRT2*sin(q[0])*cos(q[2])*dq[0] + (1.0/2.0)*M_SQRT2*sin(q[1])*sin(q[2])*cos(q[0])*dq[0] - 1.0/2.0*M_SQRT2*sin(q[1])*cos(q[0])*cos(q[2])*dq[2] - 1.0/2.0*M_SQRT2*sin(q[2])*cos(q[0])*cos(q[1])*dq[1] - 1.0/2.0*M_SQRT2*sin(q[2])*cos(q[0])*dq[2] + (1.0/2.0)*M_SQRT2*cos(q[0])*cos(q[2])*dq[0];
   out_8100661524270785253[3] = 0;
   out_8100661524270785253[4] = 0;
   out_8100661524270785253[5] = 0;
   out_8100661524270785253[6] = 0;
   out_8100661524270785253[7] = (1.0/2.0)*M_SQRT2*sin(q[0])*sin(q[1])*sin(q[2])*dq[2] - 1.0/2.0*M_SQRT2*sin(q[0])*sin(q[1])*cos(q[2])*dq[0] - 1.0/2.0*M_SQRT2*sin(q[0])*sin(q[2])*dq[0] - 1.0/2.0*M_SQRT2*sin(q[0])*cos(q[1])*cos(q[2])*dq[1] + (1.0/2.0)*M_SQRT2*sin(q[0])*cos(q[2])*dq[2] - 1.0/2.0*M_SQRT2*sin(q[1])*sin(q[2])*cos(q[0])*dq[2] - 1.0/2.0*M_SQRT2*sin(q[1])*cos(q[0])*cos(q[2])*dq[0] + (1.0/2.0)*M_SQRT2*sin(q[2])*cos(q[0])*dq[0] + (1.0/2.0)*M_SQRT2*cos(q[0])*cos(q[1])*cos(q[2])*dq[1] + (1.0/2.0)*M_SQRT2*cos(q[0])*cos(q[2])*dq[2];
   out_8100661524270785253[8] = -1.0/2.0*M_SQRT2*sin(q[0])*sin(q[1])*cos(q[2])*dq[1] - 1.0/2.0*M_SQRT2*sin(q[0])*sin(q[2])*cos(q[1])*dq[2] - 1.0/2.0*M_SQRT2*sin(q[0])*cos(q[1])*cos(q[2])*dq[0] - 1.0/2.0*M_SQRT2*sin(q[1])*cos(q[0])*cos(q[2])*dq[1] - 1.0/2.0*M_SQRT2*sin(q[2])*cos(q[0])*cos(q[1])*dq[2] + (1.0/2.0)*M_SQRT2*cos(q[0])*cos(q[1])*cos(q[2])*dq[0];
   out_8100661524270785253[9] = (1.0/2.0)*M_SQRT2*sin(q[0])*sin(q[1])*sin(q[2])*dq[0] - 1.0/2.0*M_SQRT2*sin(q[0])*sin(q[1])*cos(q[2])*dq[2] - 1.0/2.0*M_SQRT2*sin(q[0])*sin(q[2])*cos(q[1])*dq[1] - 1.0/2.0*M_SQRT2*sin(q[0])*sin(q[2])*dq[2] + (1.0/2.0)*M_SQRT2*sin(q[0])*cos(q[2])*dq[0] - 1.0/2.0*M_SQRT2*sin(q[1])*sin(q[2])*cos(q[0])*dq[0] - 1.0/2.0*M_SQRT2*sin(q[1])*cos(q[0])*cos(q[2])*dq[2] - 1.0/2.0*M_SQRT2*sin(q[2])*cos(q[0])*cos(q[1])*dq[1] + (1.0/2.0)*M_SQRT2*sin(q[2])*cos(q[0])*dq[2] + (1.0/2.0)*M_SQRT2*cos(q[0])*cos(q[2])*dq[0];
   out_8100661524270785253[10] = 0;
   out_8100661524270785253[11] = 0;
   out_8100661524270785253[12] = 0;
   out_8100661524270785253[13] = 0;
   out_8100661524270785253[14] = 0;
   out_8100661524270785253[15] = -sin(q[1])*sin(q[2])*dq[2] + cos(q[1])*cos(q[2])*dq[1];
   out_8100661524270785253[16] = -sin(q[1])*sin(q[2])*dq[1] + cos(q[1])*cos(q[2])*dq[2];
   out_8100661524270785253[17] = 0;
   out_8100661524270785253[18] = 0;
   out_8100661524270785253[19] = 0;
   out_8100661524270785253[20] = 0;

}
