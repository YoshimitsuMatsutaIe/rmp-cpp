/******************************************************************************
 *                       Code generated with sympy 1.9                        *
 *                                                                            *
 *              See http://www.sympy.org/ for more information.               *
 *                                                                            *
 *                   This file is part of 'jrz_5_BY_SYMPY_'                   *
 ******************************************************************************/
#include "../../include/baxter/jrz_5.hpp"
#include <cmath>
using std::cos;
using std::sin;
using std::sqrt;


void jrz_5(double *q, double *out_8856325690132112723) {

   out_8856325690132112723[0] = (1.0/2.0)*M_SQRT2*sin(q[0])*sin(q[1])*sin(q[2])*cos(q[4]) + (1.0/2.0)*M_SQRT2*sin(q[0])*sin(q[1])*sin(q[4])*cos(q[2])*cos(q[3]) + (1.0/2.0)*M_SQRT2*sin(q[0])*sin(q[2])*sin(q[4])*cos(q[3]) + (1.0/2.0)*M_SQRT2*sin(q[0])*sin(q[3])*sin(q[4])*cos(q[1]) - 1.0/2.0*M_SQRT2*sin(q[0])*cos(q[2])*cos(q[4]) + (1.0/2.0)*M_SQRT2*sin(q[1])*sin(q[2])*cos(q[0])*cos(q[4]) + (1.0/2.0)*M_SQRT2*sin(q[1])*sin(q[4])*cos(q[0])*cos(q[2])*cos(q[3]) - 1.0/2.0*M_SQRT2*sin(q[2])*sin(q[4])*cos(q[0])*cos(q[3]) + (1.0/2.0)*M_SQRT2*sin(q[3])*sin(q[4])*cos(q[0])*cos(q[1]) + (1.0/2.0)*M_SQRT2*cos(q[0])*cos(q[2])*cos(q[4]);
   out_8856325690132112723[1] = -1.0/2.0*M_SQRT2*sin(q[0])*sin(q[1])*sin(q[3])*sin(q[4]) + (1.0/2.0)*M_SQRT2*sin(q[0])*sin(q[2])*cos(q[1])*cos(q[4]) + (1.0/2.0)*M_SQRT2*sin(q[0])*sin(q[4])*cos(q[1])*cos(q[2])*cos(q[3]) + (1.0/2.0)*M_SQRT2*sin(q[1])*sin(q[3])*sin(q[4])*cos(q[0]) - 1.0/2.0*M_SQRT2*sin(q[2])*cos(q[0])*cos(q[1])*cos(q[4]) - 1.0/2.0*M_SQRT2*sin(q[4])*cos(q[0])*cos(q[1])*cos(q[2])*cos(q[3]);
   out_8856325690132112723[2] = -1.0/2.0*M_SQRT2*sin(q[0])*sin(q[1])*sin(q[2])*sin(q[4])*cos(q[3]) + (1.0/2.0)*M_SQRT2*sin(q[0])*sin(q[1])*cos(q[2])*cos(q[4]) - 1.0/2.0*M_SQRT2*sin(q[0])*sin(q[2])*cos(q[4]) - 1.0/2.0*M_SQRT2*sin(q[0])*sin(q[4])*cos(q[2])*cos(q[3]) + (1.0/2.0)*M_SQRT2*sin(q[1])*sin(q[2])*sin(q[4])*cos(q[0])*cos(q[3]) - 1.0/2.0*M_SQRT2*sin(q[1])*cos(q[0])*cos(q[2])*cos(q[4]) - 1.0/2.0*M_SQRT2*sin(q[2])*cos(q[0])*cos(q[4]) - 1.0/2.0*M_SQRT2*sin(q[4])*cos(q[0])*cos(q[2])*cos(q[3]);
   out_8856325690132112723[3] = -1.0/2.0*M_SQRT2*sin(q[0])*sin(q[1])*sin(q[3])*sin(q[4])*cos(q[2]) + (1.0/2.0)*M_SQRT2*sin(q[0])*sin(q[2])*sin(q[3])*sin(q[4]) + (1.0/2.0)*M_SQRT2*sin(q[0])*sin(q[4])*cos(q[1])*cos(q[3]) + (1.0/2.0)*M_SQRT2*sin(q[1])*sin(q[3])*sin(q[4])*cos(q[0])*cos(q[2]) + (1.0/2.0)*M_SQRT2*sin(q[2])*sin(q[3])*sin(q[4])*cos(q[0]) - 1.0/2.0*M_SQRT2*sin(q[4])*cos(q[0])*cos(q[1])*cos(q[3]);
   out_8856325690132112723[4] = -1.0/2.0*M_SQRT2*sin(q[0])*sin(q[1])*sin(q[2])*sin(q[4]) + (1.0/2.0)*M_SQRT2*sin(q[0])*sin(q[1])*cos(q[2])*cos(q[3])*cos(q[4]) - 1.0/2.0*M_SQRT2*sin(q[0])*sin(q[2])*cos(q[3])*cos(q[4]) + (1.0/2.0)*M_SQRT2*sin(q[0])*sin(q[3])*cos(q[1])*cos(q[4]) - 1.0/2.0*M_SQRT2*sin(q[0])*sin(q[4])*cos(q[2]) + (1.0/2.0)*M_SQRT2*sin(q[1])*sin(q[2])*sin(q[4])*cos(q[0]) - 1.0/2.0*M_SQRT2*sin(q[1])*cos(q[0])*cos(q[2])*cos(q[3])*cos(q[4]) - 1.0/2.0*M_SQRT2*sin(q[2])*cos(q[0])*cos(q[3])*cos(q[4]) - 1.0/2.0*M_SQRT2*sin(q[3])*cos(q[0])*cos(q[1])*cos(q[4]) - 1.0/2.0*M_SQRT2*sin(q[4])*cos(q[0])*cos(q[2]);
   out_8856325690132112723[5] = 0;
   out_8856325690132112723[6] = 0;
   out_8856325690132112723[7] = (1.0/2.0)*M_SQRT2*sin(q[0])*sin(q[1])*sin(q[2])*cos(q[4]) + (1.0/2.0)*M_SQRT2*sin(q[0])*sin(q[1])*sin(q[4])*cos(q[2])*cos(q[3]) - 1.0/2.0*M_SQRT2*sin(q[0])*sin(q[2])*sin(q[4])*cos(q[3]) + (1.0/2.0)*M_SQRT2*sin(q[0])*sin(q[3])*sin(q[4])*cos(q[1]) + (1.0/2.0)*M_SQRT2*sin(q[0])*cos(q[2])*cos(q[4]) - 1.0/2.0*M_SQRT2*sin(q[1])*sin(q[2])*cos(q[0])*cos(q[4]) - 1.0/2.0*M_SQRT2*sin(q[1])*sin(q[4])*cos(q[0])*cos(q[2])*cos(q[3]) - 1.0/2.0*M_SQRT2*sin(q[2])*sin(q[4])*cos(q[0])*cos(q[3]) - 1.0/2.0*M_SQRT2*sin(q[3])*sin(q[4])*cos(q[0])*cos(q[1]) + (1.0/2.0)*M_SQRT2*cos(q[0])*cos(q[2])*cos(q[4]);
   out_8856325690132112723[8] = (1.0/2.0)*M_SQRT2*sin(q[0])*sin(q[1])*sin(q[3])*sin(q[4]) - 1.0/2.0*M_SQRT2*sin(q[0])*sin(q[2])*cos(q[1])*cos(q[4]) - 1.0/2.0*M_SQRT2*sin(q[0])*sin(q[4])*cos(q[1])*cos(q[2])*cos(q[3]) + (1.0/2.0)*M_SQRT2*sin(q[1])*sin(q[3])*sin(q[4])*cos(q[0]) - 1.0/2.0*M_SQRT2*sin(q[2])*cos(q[0])*cos(q[1])*cos(q[4]) - 1.0/2.0*M_SQRT2*sin(q[4])*cos(q[0])*cos(q[1])*cos(q[2])*cos(q[3]);
   out_8856325690132112723[9] = (1.0/2.0)*M_SQRT2*sin(q[0])*sin(q[1])*sin(q[2])*sin(q[4])*cos(q[3]) - 1.0/2.0*M_SQRT2*sin(q[0])*sin(q[1])*cos(q[2])*cos(q[4]) - 1.0/2.0*M_SQRT2*sin(q[0])*sin(q[2])*cos(q[4]) - 1.0/2.0*M_SQRT2*sin(q[0])*sin(q[4])*cos(q[2])*cos(q[3]) + (1.0/2.0)*M_SQRT2*sin(q[1])*sin(q[2])*sin(q[4])*cos(q[0])*cos(q[3]) - 1.0/2.0*M_SQRT2*sin(q[1])*cos(q[0])*cos(q[2])*cos(q[4]) + (1.0/2.0)*M_SQRT2*sin(q[2])*cos(q[0])*cos(q[4]) + (1.0/2.0)*M_SQRT2*sin(q[4])*cos(q[0])*cos(q[2])*cos(q[3]);
   out_8856325690132112723[10] = (1.0/2.0)*M_SQRT2*sin(q[0])*sin(q[1])*sin(q[3])*sin(q[4])*cos(q[2]) + (1.0/2.0)*M_SQRT2*sin(q[0])*sin(q[2])*sin(q[3])*sin(q[4]) - 1.0/2.0*M_SQRT2*sin(q[0])*sin(q[4])*cos(q[1])*cos(q[3]) + (1.0/2.0)*M_SQRT2*sin(q[1])*sin(q[3])*sin(q[4])*cos(q[0])*cos(q[2]) - 1.0/2.0*M_SQRT2*sin(q[2])*sin(q[3])*sin(q[4])*cos(q[0]) - 1.0/2.0*M_SQRT2*sin(q[4])*cos(q[0])*cos(q[1])*cos(q[3]);
   out_8856325690132112723[11] = (1.0/2.0)*M_SQRT2*sin(q[0])*sin(q[1])*sin(q[2])*sin(q[4]) - 1.0/2.0*M_SQRT2*sin(q[0])*sin(q[1])*cos(q[2])*cos(q[3])*cos(q[4]) - 1.0/2.0*M_SQRT2*sin(q[0])*sin(q[2])*cos(q[3])*cos(q[4]) - 1.0/2.0*M_SQRT2*sin(q[0])*sin(q[3])*cos(q[1])*cos(q[4]) - 1.0/2.0*M_SQRT2*sin(q[0])*sin(q[4])*cos(q[2]) + (1.0/2.0)*M_SQRT2*sin(q[1])*sin(q[2])*sin(q[4])*cos(q[0]) - 1.0/2.0*M_SQRT2*sin(q[1])*cos(q[0])*cos(q[2])*cos(q[3])*cos(q[4]) + (1.0/2.0)*M_SQRT2*sin(q[2])*cos(q[0])*cos(q[3])*cos(q[4]) - 1.0/2.0*M_SQRT2*sin(q[3])*cos(q[0])*cos(q[1])*cos(q[4]) + (1.0/2.0)*M_SQRT2*sin(q[4])*cos(q[0])*cos(q[2]);
   out_8856325690132112723[12] = 0;
   out_8856325690132112723[13] = 0;
   out_8856325690132112723[14] = 0;
   out_8856325690132112723[15] = -sin(q[1])*sin(q[2])*cos(q[4]) - sin(q[1])*sin(q[4])*cos(q[2])*cos(q[3]) - sin(q[3])*sin(q[4])*cos(q[1]);
   out_8856325690132112723[16] = -sin(q[2])*sin(q[4])*cos(q[1])*cos(q[3]) + cos(q[1])*cos(q[2])*cos(q[4]);
   out_8856325690132112723[17] = -sin(q[1])*sin(q[4])*cos(q[3]) - sin(q[3])*sin(q[4])*cos(q[1])*cos(q[2]);
   out_8856325690132112723[18] = -sin(q[1])*sin(q[3])*cos(q[4]) - sin(q[2])*sin(q[4])*cos(q[1]) + cos(q[1])*cos(q[2])*cos(q[3])*cos(q[4]);
   out_8856325690132112723[19] = 0;
   out_8856325690132112723[20] = 0;

}
