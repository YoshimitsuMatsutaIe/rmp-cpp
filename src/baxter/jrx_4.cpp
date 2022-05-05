/******************************************************************************
 *                       Code generated with sympy 1.9                        *
 *                                                                            *
 *              See http://www.sympy.org/ for more information.               *
 *                                                                            *
 *                   This file is part of 'jrx_4_BY_SYMPY_'                   *
 ******************************************************************************/
#include "../../include/baxter/jrx_4.hpp"
#include <cmath>
using std::cos;
using std::sin;
using std::sqrt;


void jrx_4(double *q, double *out_8205659823038982499) {

   out_8205659823038982499[0] = (1.0/2.0)*M_SQRT2*sin(q[0])*sin(q[1])*sin(q[2])*sin(q[4]) - 1.0/2.0*M_SQRT2*sin(q[0])*sin(q[1])*cos(q[2])*cos(q[3])*cos(q[4]) - 1.0/2.0*M_SQRT2*sin(q[0])*sin(q[2])*cos(q[3])*cos(q[4]) - 1.0/2.0*M_SQRT2*sin(q[0])*sin(q[3])*cos(q[1])*cos(q[4]) - 1.0/2.0*M_SQRT2*sin(q[0])*sin(q[4])*cos(q[2]) + (1.0/2.0)*M_SQRT2*sin(q[1])*sin(q[2])*sin(q[4])*cos(q[0]) - 1.0/2.0*M_SQRT2*sin(q[1])*cos(q[0])*cos(q[2])*cos(q[3])*cos(q[4]) + (1.0/2.0)*M_SQRT2*sin(q[2])*cos(q[0])*cos(q[3])*cos(q[4]) - 1.0/2.0*M_SQRT2*sin(q[3])*cos(q[0])*cos(q[1])*cos(q[4]) + (1.0/2.0)*M_SQRT2*sin(q[4])*cos(q[0])*cos(q[2]);
   out_8205659823038982499[1] = (1.0/2.0)*M_SQRT2*sin(q[0])*sin(q[1])*sin(q[3])*cos(q[4]) + (1.0/2.0)*M_SQRT2*sin(q[0])*sin(q[2])*sin(q[4])*cos(q[1]) - 1.0/2.0*M_SQRT2*sin(q[0])*cos(q[1])*cos(q[2])*cos(q[3])*cos(q[4]) - 1.0/2.0*M_SQRT2*sin(q[1])*sin(q[3])*cos(q[0])*cos(q[4]) - 1.0/2.0*M_SQRT2*sin(q[2])*sin(q[4])*cos(q[0])*cos(q[1]) + (1.0/2.0)*M_SQRT2*cos(q[0])*cos(q[1])*cos(q[2])*cos(q[3])*cos(q[4]);
   out_8205659823038982499[2] = (1.0/2.0)*M_SQRT2*sin(q[0])*sin(q[1])*sin(q[2])*cos(q[3])*cos(q[4]) + (1.0/2.0)*M_SQRT2*sin(q[0])*sin(q[1])*sin(q[4])*cos(q[2]) - 1.0/2.0*M_SQRT2*sin(q[0])*sin(q[2])*sin(q[4]) + (1.0/2.0)*M_SQRT2*sin(q[0])*cos(q[2])*cos(q[3])*cos(q[4]) - 1.0/2.0*M_SQRT2*sin(q[1])*sin(q[2])*cos(q[0])*cos(q[3])*cos(q[4]) - 1.0/2.0*M_SQRT2*sin(q[1])*sin(q[4])*cos(q[0])*cos(q[2]) - 1.0/2.0*M_SQRT2*sin(q[2])*sin(q[4])*cos(q[0]) + (1.0/2.0)*M_SQRT2*cos(q[0])*cos(q[2])*cos(q[3])*cos(q[4]);
   out_8205659823038982499[3] = (1.0/2.0)*M_SQRT2*sin(q[0])*sin(q[1])*sin(q[3])*cos(q[2])*cos(q[4]) - 1.0/2.0*M_SQRT2*sin(q[0])*sin(q[2])*sin(q[3])*cos(q[4]) - 1.0/2.0*M_SQRT2*sin(q[0])*cos(q[1])*cos(q[3])*cos(q[4]) - 1.0/2.0*M_SQRT2*sin(q[1])*sin(q[3])*cos(q[0])*cos(q[2])*cos(q[4]) - 1.0/2.0*M_SQRT2*sin(q[2])*sin(q[3])*cos(q[0])*cos(q[4]) + (1.0/2.0)*M_SQRT2*cos(q[0])*cos(q[1])*cos(q[3])*cos(q[4]);
   out_8205659823038982499[4] = (1.0/2.0)*M_SQRT2*sin(q[0])*sin(q[1])*sin(q[2])*cos(q[4]) + (1.0/2.0)*M_SQRT2*sin(q[0])*sin(q[1])*sin(q[4])*cos(q[2])*cos(q[3]) - 1.0/2.0*M_SQRT2*sin(q[0])*sin(q[2])*sin(q[4])*cos(q[3]) + (1.0/2.0)*M_SQRT2*sin(q[0])*sin(q[3])*sin(q[4])*cos(q[1]) + (1.0/2.0)*M_SQRT2*sin(q[0])*cos(q[2])*cos(q[4]) - 1.0/2.0*M_SQRT2*sin(q[1])*sin(q[2])*cos(q[0])*cos(q[4]) - 1.0/2.0*M_SQRT2*sin(q[1])*sin(q[4])*cos(q[0])*cos(q[2])*cos(q[3]) - 1.0/2.0*M_SQRT2*sin(q[2])*sin(q[4])*cos(q[0])*cos(q[3]) - 1.0/2.0*M_SQRT2*sin(q[3])*sin(q[4])*cos(q[0])*cos(q[1]) + (1.0/2.0)*M_SQRT2*cos(q[0])*cos(q[2])*cos(q[4]);
   out_8205659823038982499[5] = 0;
   out_8205659823038982499[6] = 0;
   out_8205659823038982499[7] = (1.0/2.0)*M_SQRT2*sin(q[0])*sin(q[1])*sin(q[2])*sin(q[4]) - 1.0/2.0*M_SQRT2*sin(q[0])*sin(q[1])*cos(q[2])*cos(q[3])*cos(q[4]) + (1.0/2.0)*M_SQRT2*sin(q[0])*sin(q[2])*cos(q[3])*cos(q[4]) - 1.0/2.0*M_SQRT2*sin(q[0])*sin(q[3])*cos(q[1])*cos(q[4]) + (1.0/2.0)*M_SQRT2*sin(q[0])*sin(q[4])*cos(q[2]) - 1.0/2.0*M_SQRT2*sin(q[1])*sin(q[2])*sin(q[4])*cos(q[0]) + (1.0/2.0)*M_SQRT2*sin(q[1])*cos(q[0])*cos(q[2])*cos(q[3])*cos(q[4]) + (1.0/2.0)*M_SQRT2*sin(q[2])*cos(q[0])*cos(q[3])*cos(q[4]) + (1.0/2.0)*M_SQRT2*sin(q[3])*cos(q[0])*cos(q[1])*cos(q[4]) + (1.0/2.0)*M_SQRT2*sin(q[4])*cos(q[0])*cos(q[2]);
   out_8205659823038982499[8] = -1.0/2.0*M_SQRT2*sin(q[0])*sin(q[1])*sin(q[3])*cos(q[4]) - 1.0/2.0*M_SQRT2*sin(q[0])*sin(q[2])*sin(q[4])*cos(q[1]) + (1.0/2.0)*M_SQRT2*sin(q[0])*cos(q[1])*cos(q[2])*cos(q[3])*cos(q[4]) - 1.0/2.0*M_SQRT2*sin(q[1])*sin(q[3])*cos(q[0])*cos(q[4]) - 1.0/2.0*M_SQRT2*sin(q[2])*sin(q[4])*cos(q[0])*cos(q[1]) + (1.0/2.0)*M_SQRT2*cos(q[0])*cos(q[1])*cos(q[2])*cos(q[3])*cos(q[4]);
   out_8205659823038982499[9] = -1.0/2.0*M_SQRT2*sin(q[0])*sin(q[1])*sin(q[2])*cos(q[3])*cos(q[4]) - 1.0/2.0*M_SQRT2*sin(q[0])*sin(q[1])*sin(q[4])*cos(q[2]) - 1.0/2.0*M_SQRT2*sin(q[0])*sin(q[2])*sin(q[4]) + (1.0/2.0)*M_SQRT2*sin(q[0])*cos(q[2])*cos(q[3])*cos(q[4]) - 1.0/2.0*M_SQRT2*sin(q[1])*sin(q[2])*cos(q[0])*cos(q[3])*cos(q[4]) - 1.0/2.0*M_SQRT2*sin(q[1])*sin(q[4])*cos(q[0])*cos(q[2]) + (1.0/2.0)*M_SQRT2*sin(q[2])*sin(q[4])*cos(q[0]) - 1.0/2.0*M_SQRT2*cos(q[0])*cos(q[2])*cos(q[3])*cos(q[4]);
   out_8205659823038982499[10] = -1.0/2.0*M_SQRT2*sin(q[0])*sin(q[1])*sin(q[3])*cos(q[2])*cos(q[4]) - 1.0/2.0*M_SQRT2*sin(q[0])*sin(q[2])*sin(q[3])*cos(q[4]) + (1.0/2.0)*M_SQRT2*sin(q[0])*cos(q[1])*cos(q[3])*cos(q[4]) - 1.0/2.0*M_SQRT2*sin(q[1])*sin(q[3])*cos(q[0])*cos(q[2])*cos(q[4]) + (1.0/2.0)*M_SQRT2*sin(q[2])*sin(q[3])*cos(q[0])*cos(q[4]) + (1.0/2.0)*M_SQRT2*cos(q[0])*cos(q[1])*cos(q[3])*cos(q[4]);
   out_8205659823038982499[11] = -1.0/2.0*M_SQRT2*sin(q[0])*sin(q[1])*sin(q[2])*cos(q[4]) - 1.0/2.0*M_SQRT2*sin(q[0])*sin(q[1])*sin(q[4])*cos(q[2])*cos(q[3]) - 1.0/2.0*M_SQRT2*sin(q[0])*sin(q[2])*sin(q[4])*cos(q[3]) - 1.0/2.0*M_SQRT2*sin(q[0])*sin(q[3])*sin(q[4])*cos(q[1]) + (1.0/2.0)*M_SQRT2*sin(q[0])*cos(q[2])*cos(q[4]) - 1.0/2.0*M_SQRT2*sin(q[1])*sin(q[2])*cos(q[0])*cos(q[4]) - 1.0/2.0*M_SQRT2*sin(q[1])*sin(q[4])*cos(q[0])*cos(q[2])*cos(q[3]) + (1.0/2.0)*M_SQRT2*sin(q[2])*sin(q[4])*cos(q[0])*cos(q[3]) - 1.0/2.0*M_SQRT2*sin(q[3])*sin(q[4])*cos(q[0])*cos(q[1]) - 1.0/2.0*M_SQRT2*cos(q[0])*cos(q[2])*cos(q[4]);
   out_8205659823038982499[12] = 0;
   out_8205659823038982499[13] = 0;
   out_8205659823038982499[14] = 0;
   out_8205659823038982499[15] = -sin(q[1])*sin(q[2])*sin(q[4]) + sin(q[1])*cos(q[2])*cos(q[3])*cos(q[4]) + sin(q[3])*cos(q[1])*cos(q[4]);
   out_8205659823038982499[16] = sin(q[2])*cos(q[1])*cos(q[3])*cos(q[4]) + sin(q[4])*cos(q[1])*cos(q[2]);
   out_8205659823038982499[17] = sin(q[1])*cos(q[3])*cos(q[4]) + sin(q[3])*cos(q[1])*cos(q[2])*cos(q[4]);
   out_8205659823038982499[18] = -sin(q[1])*sin(q[3])*sin(q[4]) + sin(q[2])*cos(q[1])*cos(q[4]) + sin(q[4])*cos(q[1])*cos(q[2])*cos(q[3]);
   out_8205659823038982499[19] = 0;
   out_8205659823038982499[20] = 0;

}
