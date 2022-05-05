/******************************************************************************
 *                       Code generated with sympy 1.9                        *
 *                                                                            *
 *              See http://www.sympy.org/ for more information.               *
 *                                                                            *
 *                   This file is part of 'jry_2_BY_SYMPY_'                   *
 ******************************************************************************/
#include "../../include/baxter/jry_2.hpp"
#include <cmath>
using std::cos;
using std::sin;
using std::sqrt;


void jry_2(double *q, double *out_8889169424910968533) {

   out_8889169424910968533[0] = (1.0/2.0)*M_SQRT2*sin(q[0])*sin(q[1])*sin(q[2]) - 1.0/2.0*M_SQRT2*sin(q[0])*cos(q[2]) + (1.0/2.0)*M_SQRT2*sin(q[1])*sin(q[2])*cos(q[0]) + (1.0/2.0)*M_SQRT2*cos(q[0])*cos(q[2]);
   out_8889169424910968533[1] = (1.0/2.0)*M_SQRT2*sin(q[0])*sin(q[2])*cos(q[1]) - 1.0/2.0*M_SQRT2*sin(q[2])*cos(q[0])*cos(q[1]);
   out_8889169424910968533[2] = (1.0/2.0)*M_SQRT2*sin(q[0])*sin(q[1])*cos(q[2]) - 1.0/2.0*M_SQRT2*sin(q[0])*sin(q[2]) - 1.0/2.0*M_SQRT2*sin(q[1])*cos(q[0])*cos(q[2]) - 1.0/2.0*M_SQRT2*sin(q[2])*cos(q[0]);
   out_8889169424910968533[3] = 0;
   out_8889169424910968533[4] = 0;
   out_8889169424910968533[5] = 0;
   out_8889169424910968533[6] = 0;
   out_8889169424910968533[7] = (1.0/2.0)*M_SQRT2*sin(q[0])*sin(q[1])*sin(q[2]) + (1.0/2.0)*M_SQRT2*sin(q[0])*cos(q[2]) - 1.0/2.0*M_SQRT2*sin(q[1])*sin(q[2])*cos(q[0]) + (1.0/2.0)*M_SQRT2*cos(q[0])*cos(q[2]);
   out_8889169424910968533[8] = -1.0/2.0*M_SQRT2*sin(q[0])*sin(q[2])*cos(q[1]) - 1.0/2.0*M_SQRT2*sin(q[2])*cos(q[0])*cos(q[1]);
   out_8889169424910968533[9] = -1.0/2.0*M_SQRT2*sin(q[0])*sin(q[1])*cos(q[2]) - 1.0/2.0*M_SQRT2*sin(q[0])*sin(q[2]) - 1.0/2.0*M_SQRT2*sin(q[1])*cos(q[0])*cos(q[2]) + (1.0/2.0)*M_SQRT2*sin(q[2])*cos(q[0]);
   out_8889169424910968533[10] = 0;
   out_8889169424910968533[11] = 0;
   out_8889169424910968533[12] = 0;
   out_8889169424910968533[13] = 0;
   out_8889169424910968533[14] = 0;
   out_8889169424910968533[15] = -sin(q[1])*sin(q[2]);
   out_8889169424910968533[16] = cos(q[1])*cos(q[2]);
   out_8889169424910968533[17] = 0;
   out_8889169424910968533[18] = 0;
   out_8889169424910968533[19] = 0;
   out_8889169424910968533[20] = 0;

}
