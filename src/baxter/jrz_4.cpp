/******************************************************************************
 *                       Code generated with sympy 1.9                        *
 *                                                                            *
 *              See http://www.sympy.org/ for more information.               *
 *                                                                            *
 *                   This file is part of 'jrz_4_BY_SYMPY_'                   *
 ******************************************************************************/
#include "../../include/baxter/jrz_4.hpp"
#include <cmath>
using std::cos;
using std::sin;
using std::sqrt;


void jrz_4(double *q, double *out_4472440793002957626) {

   out_4472440793002957626[0] = -1.0/2.0*M_SQRT2*sin(q[0])*sin(q[1])*sin(q[3])*cos(q[2]) - 1.0/2.0*M_SQRT2*sin(q[0])*sin(q[2])*sin(q[3]) + (1.0/2.0)*M_SQRT2*sin(q[0])*cos(q[1])*cos(q[3]) - 1.0/2.0*M_SQRT2*sin(q[1])*sin(q[3])*cos(q[0])*cos(q[2]) + (1.0/2.0)*M_SQRT2*sin(q[2])*sin(q[3])*cos(q[0]) + (1.0/2.0)*M_SQRT2*cos(q[0])*cos(q[1])*cos(q[3]);
   out_4472440793002957626[1] = -1.0/2.0*M_SQRT2*sin(q[0])*sin(q[1])*cos(q[3]) - 1.0/2.0*M_SQRT2*sin(q[0])*sin(q[3])*cos(q[1])*cos(q[2]) + (1.0/2.0)*M_SQRT2*sin(q[1])*cos(q[0])*cos(q[3]) + (1.0/2.0)*M_SQRT2*sin(q[3])*cos(q[0])*cos(q[1])*cos(q[2]);
   out_4472440793002957626[2] = (1.0/2.0)*M_SQRT2*sin(q[0])*sin(q[1])*sin(q[2])*sin(q[3]) + (1.0/2.0)*M_SQRT2*sin(q[0])*sin(q[3])*cos(q[2]) - 1.0/2.0*M_SQRT2*sin(q[1])*sin(q[2])*sin(q[3])*cos(q[0]) + (1.0/2.0)*M_SQRT2*sin(q[3])*cos(q[0])*cos(q[2]);
   out_4472440793002957626[3] = -1.0/2.0*M_SQRT2*sin(q[0])*sin(q[1])*cos(q[2])*cos(q[3]) + (1.0/2.0)*M_SQRT2*sin(q[0])*sin(q[2])*cos(q[3]) - 1.0/2.0*M_SQRT2*sin(q[0])*sin(q[3])*cos(q[1]) + (1.0/2.0)*M_SQRT2*sin(q[1])*cos(q[0])*cos(q[2])*cos(q[3]) + (1.0/2.0)*M_SQRT2*sin(q[2])*cos(q[0])*cos(q[3]) + (1.0/2.0)*M_SQRT2*sin(q[3])*cos(q[0])*cos(q[1]);
   out_4472440793002957626[4] = 0;
   out_4472440793002957626[5] = 0;
   out_4472440793002957626[6] = 0;
   out_4472440793002957626[7] = -1.0/2.0*M_SQRT2*sin(q[0])*sin(q[1])*sin(q[3])*cos(q[2]) + (1.0/2.0)*M_SQRT2*sin(q[0])*sin(q[2])*sin(q[3]) + (1.0/2.0)*M_SQRT2*sin(q[0])*cos(q[1])*cos(q[3]) + (1.0/2.0)*M_SQRT2*sin(q[1])*sin(q[3])*cos(q[0])*cos(q[2]) + (1.0/2.0)*M_SQRT2*sin(q[2])*sin(q[3])*cos(q[0]) - 1.0/2.0*M_SQRT2*cos(q[0])*cos(q[1])*cos(q[3]);
   out_4472440793002957626[8] = (1.0/2.0)*M_SQRT2*sin(q[0])*sin(q[1])*cos(q[3]) + (1.0/2.0)*M_SQRT2*sin(q[0])*sin(q[3])*cos(q[1])*cos(q[2]) + (1.0/2.0)*M_SQRT2*sin(q[1])*cos(q[0])*cos(q[3]) + (1.0/2.0)*M_SQRT2*sin(q[3])*cos(q[0])*cos(q[1])*cos(q[2]);
   out_4472440793002957626[9] = -1.0/2.0*M_SQRT2*sin(q[0])*sin(q[1])*sin(q[2])*sin(q[3]) + (1.0/2.0)*M_SQRT2*sin(q[0])*sin(q[3])*cos(q[2]) - 1.0/2.0*M_SQRT2*sin(q[1])*sin(q[2])*sin(q[3])*cos(q[0]) - 1.0/2.0*M_SQRT2*sin(q[3])*cos(q[0])*cos(q[2]);
   out_4472440793002957626[10] = (1.0/2.0)*M_SQRT2*sin(q[0])*sin(q[1])*cos(q[2])*cos(q[3]) + (1.0/2.0)*M_SQRT2*sin(q[0])*sin(q[2])*cos(q[3]) + (1.0/2.0)*M_SQRT2*sin(q[0])*sin(q[3])*cos(q[1]) + (1.0/2.0)*M_SQRT2*sin(q[1])*cos(q[0])*cos(q[2])*cos(q[3]) - 1.0/2.0*M_SQRT2*sin(q[2])*cos(q[0])*cos(q[3]) + (1.0/2.0)*M_SQRT2*sin(q[3])*cos(q[0])*cos(q[1]);
   out_4472440793002957626[11] = 0;
   out_4472440793002957626[12] = 0;
   out_4472440793002957626[13] = 0;
   out_4472440793002957626[14] = 0;
   out_4472440793002957626[15] = sin(q[1])*sin(q[3])*cos(q[2]) - cos(q[1])*cos(q[3]);
   out_4472440793002957626[16] = sin(q[2])*sin(q[3])*cos(q[1]);
   out_4472440793002957626[17] = sin(q[1])*sin(q[3]) - cos(q[1])*cos(q[2])*cos(q[3]);
   out_4472440793002957626[18] = 0;
   out_4472440793002957626[19] = 0;
   out_4472440793002957626[20] = 0;

}
