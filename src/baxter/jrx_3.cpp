/******************************************************************************
 *                       Code generated with sympy 1.9                        *
 *                                                                            *
 *              See http://www.sympy.org/ for more information.               *
 *                                                                            *
 *                   This file is part of 'jrx_3_BY_SYMPY_'                   *
 ******************************************************************************/
#include "../../include/baxter/jrx_3.hpp"
#include <cmath>
using std::cos;
using std::sin;
using std::sqrt;


void jrx_3(double *q, double *out_3604029474616504797) {

   out_3604029474616504797[0] = -1.0/2.0*M_SQRT2*sin(q[0])*sin(q[1])*cos(q[2])*cos(q[3]) - 1.0/2.0*M_SQRT2*sin(q[0])*sin(q[2])*cos(q[3]) - 1.0/2.0*M_SQRT2*sin(q[0])*sin(q[3])*cos(q[1]) - 1.0/2.0*M_SQRT2*sin(q[1])*cos(q[0])*cos(q[2])*cos(q[3]) + (1.0/2.0)*M_SQRT2*sin(q[2])*cos(q[0])*cos(q[3]) - 1.0/2.0*M_SQRT2*sin(q[3])*cos(q[0])*cos(q[1]);
   out_3604029474616504797[1] = (1.0/2.0)*M_SQRT2*sin(q[0])*sin(q[1])*sin(q[3]) - 1.0/2.0*M_SQRT2*sin(q[0])*cos(q[1])*cos(q[2])*cos(q[3]) - 1.0/2.0*M_SQRT2*sin(q[1])*sin(q[3])*cos(q[0]) + (1.0/2.0)*M_SQRT2*cos(q[0])*cos(q[1])*cos(q[2])*cos(q[3]);
   out_3604029474616504797[2] = (1.0/2.0)*M_SQRT2*sin(q[0])*sin(q[1])*sin(q[2])*cos(q[3]) + (1.0/2.0)*M_SQRT2*sin(q[0])*cos(q[2])*cos(q[3]) - 1.0/2.0*M_SQRT2*sin(q[1])*sin(q[2])*cos(q[0])*cos(q[3]) + (1.0/2.0)*M_SQRT2*cos(q[0])*cos(q[2])*cos(q[3]);
   out_3604029474616504797[3] = (1.0/2.0)*M_SQRT2*sin(q[0])*sin(q[1])*sin(q[3])*cos(q[2]) - 1.0/2.0*M_SQRT2*sin(q[0])*sin(q[2])*sin(q[3]) - 1.0/2.0*M_SQRT2*sin(q[0])*cos(q[1])*cos(q[3]) - 1.0/2.0*M_SQRT2*sin(q[1])*sin(q[3])*cos(q[0])*cos(q[2]) - 1.0/2.0*M_SQRT2*sin(q[2])*sin(q[3])*cos(q[0]) + (1.0/2.0)*M_SQRT2*cos(q[0])*cos(q[1])*cos(q[3]);
   out_3604029474616504797[4] = 0;
   out_3604029474616504797[5] = 0;
   out_3604029474616504797[6] = 0;
   out_3604029474616504797[7] = -1.0/2.0*M_SQRT2*sin(q[0])*sin(q[1])*cos(q[2])*cos(q[3]) + (1.0/2.0)*M_SQRT2*sin(q[0])*sin(q[2])*cos(q[3]) - 1.0/2.0*M_SQRT2*sin(q[0])*sin(q[3])*cos(q[1]) + (1.0/2.0)*M_SQRT2*sin(q[1])*cos(q[0])*cos(q[2])*cos(q[3]) + (1.0/2.0)*M_SQRT2*sin(q[2])*cos(q[0])*cos(q[3]) + (1.0/2.0)*M_SQRT2*sin(q[3])*cos(q[0])*cos(q[1]);
   out_3604029474616504797[8] = -1.0/2.0*M_SQRT2*sin(q[0])*sin(q[1])*sin(q[3]) + (1.0/2.0)*M_SQRT2*sin(q[0])*cos(q[1])*cos(q[2])*cos(q[3]) - 1.0/2.0*M_SQRT2*sin(q[1])*sin(q[3])*cos(q[0]) + (1.0/2.0)*M_SQRT2*cos(q[0])*cos(q[1])*cos(q[2])*cos(q[3]);
   out_3604029474616504797[9] = -1.0/2.0*M_SQRT2*sin(q[0])*sin(q[1])*sin(q[2])*cos(q[3]) + (1.0/2.0)*M_SQRT2*sin(q[0])*cos(q[2])*cos(q[3]) - 1.0/2.0*M_SQRT2*sin(q[1])*sin(q[2])*cos(q[0])*cos(q[3]) - 1.0/2.0*M_SQRT2*cos(q[0])*cos(q[2])*cos(q[3]);
   out_3604029474616504797[10] = -1.0/2.0*M_SQRT2*sin(q[0])*sin(q[1])*sin(q[3])*cos(q[2]) - 1.0/2.0*M_SQRT2*sin(q[0])*sin(q[2])*sin(q[3]) + (1.0/2.0)*M_SQRT2*sin(q[0])*cos(q[1])*cos(q[3]) - 1.0/2.0*M_SQRT2*sin(q[1])*sin(q[3])*cos(q[0])*cos(q[2]) + (1.0/2.0)*M_SQRT2*sin(q[2])*sin(q[3])*cos(q[0]) + (1.0/2.0)*M_SQRT2*cos(q[0])*cos(q[1])*cos(q[3]);
   out_3604029474616504797[11] = 0;
   out_3604029474616504797[12] = 0;
   out_3604029474616504797[13] = 0;
   out_3604029474616504797[14] = 0;
   out_3604029474616504797[15] = sin(q[1])*cos(q[2])*cos(q[3]) + sin(q[3])*cos(q[1]);
   out_3604029474616504797[16] = sin(q[2])*cos(q[1])*cos(q[3]);
   out_3604029474616504797[17] = sin(q[1])*cos(q[3]) + sin(q[3])*cos(q[1])*cos(q[2]);
   out_3604029474616504797[18] = 0;
   out_3604029474616504797[19] = 0;
   out_3604029474616504797[20] = 0;

}
