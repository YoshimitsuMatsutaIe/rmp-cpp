/******************************************************************************
 *                       Code generated with sympy 1.9                        *
 *                                                                            *
 *              See http://www.sympy.org/ for more information.               *
 *                                                                            *
 *                   This file is part of 'jo_4_BY_SYMPY_'                    *
 ******************************************************************************/
#include "../../include/baxter/jo_4.hpp"
#include <cmath>
using std::cos;
using std::sin;
using std::sqrt;


void jo_4(double L1, double L2, double L3, double L4, double *q, double *out_4376035191937221977) {

   out_4376035191937221977[0] = (1.0/2.0)*M_SQRT2*L1*sin(q[0]) + (1.0/2.0)*M_SQRT2*L1*cos(q[0]) + (1.0/2.0)*M_SQRT2*L2*sin(q[0])*cos(q[1]) + (1.0/2.0)*M_SQRT2*L2*cos(q[0])*cos(q[1]) - 1.0/2.0*M_SQRT2*L3*sin(q[0])*sin(q[1])*cos(q[2]) - 1.0/2.0*M_SQRT2*L3*sin(q[0])*sin(q[2]) - 1.0/2.0*M_SQRT2*L3*sin(q[1])*cos(q[0])*cos(q[2]) + (1.0/2.0)*M_SQRT2*L3*sin(q[2])*cos(q[0]) - 1.0/2.0*M_SQRT2*L4*sin(q[0])*sin(q[1])*sin(q[3])*cos(q[2]) - 1.0/2.0*M_SQRT2*L4*sin(q[0])*sin(q[2])*sin(q[3]) + (1.0/2.0)*M_SQRT2*L4*sin(q[0])*cos(q[1])*cos(q[3]) - 1.0/2.0*M_SQRT2*L4*sin(q[1])*sin(q[3])*cos(q[0])*cos(q[2]) + (1.0/2.0)*M_SQRT2*L4*sin(q[2])*sin(q[3])*cos(q[0]) + (1.0/2.0)*M_SQRT2*L4*cos(q[0])*cos(q[1])*cos(q[3]);
   out_4376035191937221977[1] = -1.0/2.0*M_SQRT2*L2*sin(q[0])*sin(q[1]) + (1.0/2.0)*M_SQRT2*L2*sin(q[1])*cos(q[0]) - 1.0/2.0*M_SQRT2*L3*sin(q[0])*cos(q[1])*cos(q[2]) + (1.0/2.0)*M_SQRT2*L3*cos(q[0])*cos(q[1])*cos(q[2]) - 1.0/2.0*M_SQRT2*L4*sin(q[0])*sin(q[1])*cos(q[3]) - 1.0/2.0*M_SQRT2*L4*sin(q[0])*sin(q[3])*cos(q[1])*cos(q[2]) + (1.0/2.0)*M_SQRT2*L4*sin(q[1])*cos(q[0])*cos(q[3]) + (1.0/2.0)*M_SQRT2*L4*sin(q[3])*cos(q[0])*cos(q[1])*cos(q[2]);
   out_4376035191937221977[2] = (1.0/2.0)*M_SQRT2*L3*sin(q[0])*sin(q[1])*sin(q[2]) + (1.0/2.0)*M_SQRT2*L3*sin(q[0])*cos(q[2]) - 1.0/2.0*M_SQRT2*L3*sin(q[1])*sin(q[2])*cos(q[0]) + (1.0/2.0)*M_SQRT2*L3*cos(q[0])*cos(q[2]) + (1.0/2.0)*M_SQRT2*L4*sin(q[0])*sin(q[1])*sin(q[2])*sin(q[3]) + (1.0/2.0)*M_SQRT2*L4*sin(q[0])*sin(q[3])*cos(q[2]) - 1.0/2.0*M_SQRT2*L4*sin(q[1])*sin(q[2])*sin(q[3])*cos(q[0]) + (1.0/2.0)*M_SQRT2*L4*sin(q[3])*cos(q[0])*cos(q[2]);
   out_4376035191937221977[3] = -1.0/2.0*M_SQRT2*L4*sin(q[0])*sin(q[1])*cos(q[2])*cos(q[3]) + (1.0/2.0)*M_SQRT2*L4*sin(q[0])*sin(q[2])*cos(q[3]) - 1.0/2.0*M_SQRT2*L4*sin(q[0])*sin(q[3])*cos(q[1]) + (1.0/2.0)*M_SQRT2*L4*sin(q[1])*cos(q[0])*cos(q[2])*cos(q[3]) + (1.0/2.0)*M_SQRT2*L4*sin(q[2])*cos(q[0])*cos(q[3]) + (1.0/2.0)*M_SQRT2*L4*sin(q[3])*cos(q[0])*cos(q[1]);
   out_4376035191937221977[4] = 0;
   out_4376035191937221977[5] = 0;
   out_4376035191937221977[6] = 0;
   out_4376035191937221977[7] = (1.0/2.0)*M_SQRT2*L1*sin(q[0]) - 1.0/2.0*M_SQRT2*L1*cos(q[0]) + (1.0/2.0)*M_SQRT2*L2*sin(q[0])*cos(q[1]) - 1.0/2.0*M_SQRT2*L2*cos(q[0])*cos(q[1]) - 1.0/2.0*M_SQRT2*L3*sin(q[0])*sin(q[1])*cos(q[2]) + (1.0/2.0)*M_SQRT2*L3*sin(q[0])*sin(q[2]) + (1.0/2.0)*M_SQRT2*L3*sin(q[1])*cos(q[0])*cos(q[2]) + (1.0/2.0)*M_SQRT2*L3*sin(q[2])*cos(q[0]) - 1.0/2.0*M_SQRT2*L4*sin(q[0])*sin(q[1])*sin(q[3])*cos(q[2]) + (1.0/2.0)*M_SQRT2*L4*sin(q[0])*sin(q[2])*sin(q[3]) + (1.0/2.0)*M_SQRT2*L4*sin(q[0])*cos(q[1])*cos(q[3]) + (1.0/2.0)*M_SQRT2*L4*sin(q[1])*sin(q[3])*cos(q[0])*cos(q[2]) + (1.0/2.0)*M_SQRT2*L4*sin(q[2])*sin(q[3])*cos(q[0]) - 1.0/2.0*M_SQRT2*L4*cos(q[0])*cos(q[1])*cos(q[3]);
   out_4376035191937221977[8] = (1.0/2.0)*M_SQRT2*L2*sin(q[0])*sin(q[1]) + (1.0/2.0)*M_SQRT2*L2*sin(q[1])*cos(q[0]) + (1.0/2.0)*M_SQRT2*L3*sin(q[0])*cos(q[1])*cos(q[2]) + (1.0/2.0)*M_SQRT2*L3*cos(q[0])*cos(q[1])*cos(q[2]) + (1.0/2.0)*M_SQRT2*L4*sin(q[0])*sin(q[1])*cos(q[3]) + (1.0/2.0)*M_SQRT2*L4*sin(q[0])*sin(q[3])*cos(q[1])*cos(q[2]) + (1.0/2.0)*M_SQRT2*L4*sin(q[1])*cos(q[0])*cos(q[3]) + (1.0/2.0)*M_SQRT2*L4*sin(q[3])*cos(q[0])*cos(q[1])*cos(q[2]);
   out_4376035191937221977[9] = -1.0/2.0*M_SQRT2*L3*sin(q[0])*sin(q[1])*sin(q[2]) + (1.0/2.0)*M_SQRT2*L3*sin(q[0])*cos(q[2]) - 1.0/2.0*M_SQRT2*L3*sin(q[1])*sin(q[2])*cos(q[0]) - 1.0/2.0*M_SQRT2*L3*cos(q[0])*cos(q[2]) - 1.0/2.0*M_SQRT2*L4*sin(q[0])*sin(q[1])*sin(q[2])*sin(q[3]) + (1.0/2.0)*M_SQRT2*L4*sin(q[0])*sin(q[3])*cos(q[2]) - 1.0/2.0*M_SQRT2*L4*sin(q[1])*sin(q[2])*sin(q[3])*cos(q[0]) - 1.0/2.0*M_SQRT2*L4*sin(q[3])*cos(q[0])*cos(q[2]);
   out_4376035191937221977[10] = (1.0/2.0)*M_SQRT2*L4*sin(q[0])*sin(q[1])*cos(q[2])*cos(q[3]) + (1.0/2.0)*M_SQRT2*L4*sin(q[0])*sin(q[2])*cos(q[3]) + (1.0/2.0)*M_SQRT2*L4*sin(q[0])*sin(q[3])*cos(q[1]) + (1.0/2.0)*M_SQRT2*L4*sin(q[1])*cos(q[0])*cos(q[2])*cos(q[3]) - 1.0/2.0*M_SQRT2*L4*sin(q[2])*cos(q[0])*cos(q[3]) + (1.0/2.0)*M_SQRT2*L4*sin(q[3])*cos(q[0])*cos(q[1]);
   out_4376035191937221977[11] = 0;
   out_4376035191937221977[12] = 0;
   out_4376035191937221977[13] = 0;
   out_4376035191937221977[14] = 0;
   out_4376035191937221977[15] = -L2*cos(q[1]) + L3*sin(q[1])*cos(q[2]) + L4*sin(q[1])*sin(q[3])*cos(q[2]) - L4*cos(q[1])*cos(q[3]);
   out_4376035191937221977[16] = L3*sin(q[2])*cos(q[1]) + L4*sin(q[2])*sin(q[3])*cos(q[1]);
   out_4376035191937221977[17] = L4*sin(q[1])*sin(q[3]) - L4*cos(q[1])*cos(q[2])*cos(q[3]);
   out_4376035191937221977[18] = 0;
   out_4376035191937221977[19] = 0;
   out_4376035191937221977[20] = 0;

}
