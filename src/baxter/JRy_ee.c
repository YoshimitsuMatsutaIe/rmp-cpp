/******************************************************************************
 *                       Code generated with sympy 1.9                        *
 *                                                                            *
 *              See http://www.sympy.org/ for more information.               *
 *                                                                            *
 *                    This file is part of 'JRy_eeproject'                    *
 ******************************************************************************/
#include "JRy_ee.h"
#include <math.h>

void JRy_ee(double *q, double *out_28631704854928182) {

   out_28631704854928182[0] = (((-1.0/2.0*M_SQRT2*sin(q[0]) + (1.0/2.0)*M_SQRT2*cos(q[0]))*cos(q[2]) + ((1.0/2.0)*M_SQRT2*sin(q[0]) + (1.0/2.0)*M_SQRT2*cos(q[0]))*sin(q[1])*sin(q[2]))*cos(q[4]) + (-(-1.0/2.0*M_SQRT2*sin(q[0]) - 1.0/2.0*M_SQRT2*cos(q[0]))*sin(q[3])*cos(q[1]) - ((-1.0/2.0*M_SQRT2*sin(q[0]) - 1.0/2.0*M_SQRT2*cos(q[0]))*sin(q[1])*cos(q[2]) + (-1.0/2.0*M_SQRT2*sin(q[0]) + (1.0/2.0)*M_SQRT2*cos(q[0]))*sin(q[2]))*cos(q[3]))*sin(q[4]))*cos(q[6]) + (-(((-1.0/2.0*M_SQRT2*sin(q[0]) + (1.0/2.0)*M_SQRT2*cos(q[0]))*cos(q[2]) + ((1.0/2.0)*M_SQRT2*sin(q[0]) + (1.0/2.0)*M_SQRT2*cos(q[0]))*sin(q[1])*sin(q[2]))*sin(q[4]) + ((-1.0/2.0*M_SQRT2*sin(q[0]) - 1.0/2.0*M_SQRT2*cos(q[0]))*sin(q[3])*cos(q[1]) + ((-1.0/2.0*M_SQRT2*sin(q[0]) - 1.0/2.0*M_SQRT2*cos(q[0]))*sin(q[1])*cos(q[2]) + (-1.0/2.0*M_SQRT2*sin(q[0]) + (1.0/2.0)*M_SQRT2*cos(q[0]))*sin(q[2]))*cos(q[3]))*cos(q[4]))*cos(q[5]) - (-((1.0/2.0)*M_SQRT2*sin(q[0]) + (1.0/2.0)*M_SQRT2*cos(q[0]))*cos(q[1])*cos(q[3]) - ((-1.0/2.0*M_SQRT2*sin(q[0]) - 1.0/2.0*M_SQRT2*cos(q[0]))*sin(q[1])*cos(q[2]) + (-1.0/2.0*M_SQRT2*sin(q[0]) + (1.0/2.0)*M_SQRT2*cos(q[0]))*sin(q[2]))*sin(q[3]))*sin(q[5]))*sin(q[6]);
   out_28631704854928182[1] = (-(-(-1.0/2.0*M_SQRT2*sin(q[0]) + (1.0/2.0)*M_SQRT2*cos(q[0]))*sin(q[3])*cos(q[1])*cos(q[2]) + ((1.0/2.0)*M_SQRT2*sin(q[0]) - 1.0/2.0*M_SQRT2*cos(q[0]))*sin(q[1])*cos(q[3]))*sin(q[5]) - (((1.0/2.0)*M_SQRT2*sin(q[0]) - 1.0/2.0*M_SQRT2*cos(q[0]))*sin(q[2])*sin(q[4])*cos(q[1]) + (-(-1.0/2.0*M_SQRT2*sin(q[0]) + (1.0/2.0)*M_SQRT2*cos(q[0]))*sin(q[1])*sin(q[3]) + (-1.0/2.0*M_SQRT2*sin(q[0]) + (1.0/2.0)*M_SQRT2*cos(q[0]))*cos(q[1])*cos(q[2])*cos(q[3]))*cos(q[4]))*cos(q[5]))*sin(q[6]) + (((1.0/2.0)*M_SQRT2*sin(q[0]) - 1.0/2.0*M_SQRT2*cos(q[0]))*sin(q[2])*cos(q[1])*cos(q[4]) + ((-1.0/2.0*M_SQRT2*sin(q[0]) + (1.0/2.0)*M_SQRT2*cos(q[0]))*sin(q[1])*sin(q[3]) - (-1.0/2.0*M_SQRT2*sin(q[0]) + (1.0/2.0)*M_SQRT2*cos(q[0]))*cos(q[1])*cos(q[2])*cos(q[3]))*sin(q[4]))*cos(q[6]);
   out_28631704854928182[2] = ((-(-1.0/2.0*M_SQRT2*sin(q[0]) + (1.0/2.0)*M_SQRT2*cos(q[0]))*sin(q[1])*sin(q[2]) + ((1.0/2.0)*M_SQRT2*sin(q[0]) + (1.0/2.0)*M_SQRT2*cos(q[0]))*cos(q[2]))*sin(q[3])*sin(q[5]) - ((-(-1.0/2.0*M_SQRT2*sin(q[0]) + (1.0/2.0)*M_SQRT2*cos(q[0]))*sin(q[1])*sin(q[2]) + ((1.0/2.0)*M_SQRT2*sin(q[0]) + (1.0/2.0)*M_SQRT2*cos(q[0]))*cos(q[2]))*cos(q[3])*cos(q[4]) + (((1.0/2.0)*M_SQRT2*sin(q[0]) - 1.0/2.0*M_SQRT2*cos(q[0]))*sin(q[1])*cos(q[2]) - ((1.0/2.0)*M_SQRT2*sin(q[0]) + (1.0/2.0)*M_SQRT2*cos(q[0]))*sin(q[2]))*sin(q[4]))*cos(q[5]))*sin(q[6]) + (-(-(-1.0/2.0*M_SQRT2*sin(q[0]) + (1.0/2.0)*M_SQRT2*cos(q[0]))*sin(q[1])*sin(q[2]) + ((1.0/2.0)*M_SQRT2*sin(q[0]) + (1.0/2.0)*M_SQRT2*cos(q[0]))*cos(q[2]))*sin(q[4])*cos(q[3]) + (((1.0/2.0)*M_SQRT2*sin(q[0]) - 1.0/2.0*M_SQRT2*cos(q[0]))*sin(q[1])*cos(q[2]) - ((1.0/2.0)*M_SQRT2*sin(q[0]) + (1.0/2.0)*M_SQRT2*cos(q[0]))*sin(q[2]))*cos(q[4]))*cos(q[6]);
   out_28631704854928182[3] = (-(-1.0/2.0*M_SQRT2*sin(q[0]) + (1.0/2.0)*M_SQRT2*cos(q[0]))*cos(q[1])*cos(q[3]) + (-((1.0/2.0)*M_SQRT2*sin(q[0]) - 1.0/2.0*M_SQRT2*cos(q[0]))*sin(q[1])*cos(q[2]) + ((1.0/2.0)*M_SQRT2*sin(q[0]) + (1.0/2.0)*M_SQRT2*cos(q[0]))*sin(q[2]))*sin(q[3]))*sin(q[4])*cos(q[6]) + (-((-1.0/2.0*M_SQRT2*sin(q[0]) + (1.0/2.0)*M_SQRT2*cos(q[0]))*cos(q[1])*cos(q[3]) - (-((1.0/2.0)*M_SQRT2*sin(q[0]) - 1.0/2.0*M_SQRT2*cos(q[0]))*sin(q[1])*cos(q[2]) + ((1.0/2.0)*M_SQRT2*sin(q[0]) + (1.0/2.0)*M_SQRT2*cos(q[0]))*sin(q[2]))*sin(q[3]))*cos(q[4])*cos(q[5]) - (((1.0/2.0)*M_SQRT2*sin(q[0]) - 1.0/2.0*M_SQRT2*cos(q[0]))*sin(q[3])*cos(q[1]) - (-((1.0/2.0)*M_SQRT2*sin(q[0]) - 1.0/2.0*M_SQRT2*cos(q[0]))*sin(q[1])*cos(q[2]) + ((1.0/2.0)*M_SQRT2*sin(q[0]) + (1.0/2.0)*M_SQRT2*cos(q[0]))*sin(q[2]))*cos(q[3]))*sin(q[5]))*sin(q[6]);
   out_28631704854928182[4] = (-(((1.0/2.0)*M_SQRT2*sin(q[0]) - 1.0/2.0*M_SQRT2*cos(q[0]))*sin(q[1])*sin(q[2]) + ((1.0/2.0)*M_SQRT2*sin(q[0]) + (1.0/2.0)*M_SQRT2*cos(q[0]))*cos(q[2]))*sin(q[4]) + (((1.0/2.0)*M_SQRT2*sin(q[0]) - 1.0/2.0*M_SQRT2*cos(q[0]))*sin(q[3])*cos(q[1]) - (-((1.0/2.0)*M_SQRT2*sin(q[0]) - 1.0/2.0*M_SQRT2*cos(q[0]))*sin(q[1])*cos(q[2]) + ((1.0/2.0)*M_SQRT2*sin(q[0]) + (1.0/2.0)*M_SQRT2*cos(q[0]))*sin(q[2]))*cos(q[3]))*cos(q[4]))*cos(q[6]) - ((((1.0/2.0)*M_SQRT2*sin(q[0]) - 1.0/2.0*M_SQRT2*cos(q[0]))*sin(q[1])*sin(q[2]) + ((1.0/2.0)*M_SQRT2*sin(q[0]) + (1.0/2.0)*M_SQRT2*cos(q[0]))*cos(q[2]))*cos(q[4]) - (-((1.0/2.0)*M_SQRT2*sin(q[0]) - 1.0/2.0*M_SQRT2*cos(q[0]))*sin(q[3])*cos(q[1]) + (-((1.0/2.0)*M_SQRT2*sin(q[0]) - 1.0/2.0*M_SQRT2*cos(q[0]))*sin(q[1])*cos(q[2]) + ((1.0/2.0)*M_SQRT2*sin(q[0]) + (1.0/2.0)*M_SQRT2*cos(q[0]))*sin(q[2]))*cos(q[3]))*sin(q[4]))*sin(q[6])*cos(q[5]);
   out_28631704854928182[5] = (((((1.0/2.0)*M_SQRT2*sin(q[0]) - 1.0/2.0*M_SQRT2*cos(q[0]))*sin(q[1])*sin(q[2]) + ((1.0/2.0)*M_SQRT2*sin(q[0]) + (1.0/2.0)*M_SQRT2*cos(q[0]))*cos(q[2]))*sin(q[4]) + (-((1.0/2.0)*M_SQRT2*sin(q[0]) - 1.0/2.0*M_SQRT2*cos(q[0]))*sin(q[3])*cos(q[1]) + (-((1.0/2.0)*M_SQRT2*sin(q[0]) - 1.0/2.0*M_SQRT2*cos(q[0]))*sin(q[1])*cos(q[2]) + ((1.0/2.0)*M_SQRT2*sin(q[0]) + (1.0/2.0)*M_SQRT2*cos(q[0]))*sin(q[2]))*cos(q[3]))*cos(q[4]))*sin(q[5]) - (-((1.0/2.0)*M_SQRT2*sin(q[0]) - 1.0/2.0*M_SQRT2*cos(q[0]))*cos(q[1])*cos(q[3]) - (-((1.0/2.0)*M_SQRT2*sin(q[0]) - 1.0/2.0*M_SQRT2*cos(q[0]))*sin(q[1])*cos(q[2]) + ((1.0/2.0)*M_SQRT2*sin(q[0]) + (1.0/2.0)*M_SQRT2*cos(q[0]))*sin(q[2]))*sin(q[3]))*cos(q[5]))*sin(q[6]);
   out_28631704854928182[6] = (-((((1.0/2.0)*M_SQRT2*sin(q[0]) - 1.0/2.0*M_SQRT2*cos(q[0]))*sin(q[1])*sin(q[2]) + ((1.0/2.0)*M_SQRT2*sin(q[0]) + (1.0/2.0)*M_SQRT2*cos(q[0]))*cos(q[2]))*sin(q[4]) + (-((1.0/2.0)*M_SQRT2*sin(q[0]) - 1.0/2.0*M_SQRT2*cos(q[0]))*sin(q[3])*cos(q[1]) + (-((1.0/2.0)*M_SQRT2*sin(q[0]) - 1.0/2.0*M_SQRT2*cos(q[0]))*sin(q[1])*cos(q[2]) + ((1.0/2.0)*M_SQRT2*sin(q[0]) + (1.0/2.0)*M_SQRT2*cos(q[0]))*sin(q[2]))*cos(q[3]))*cos(q[4]))*cos(q[5]) + (((1.0/2.0)*M_SQRT2*sin(q[0]) - 1.0/2.0*M_SQRT2*cos(q[0]))*cos(q[1])*cos(q[3]) + (-((1.0/2.0)*M_SQRT2*sin(q[0]) - 1.0/2.0*M_SQRT2*cos(q[0]))*sin(q[1])*cos(q[2]) + ((1.0/2.0)*M_SQRT2*sin(q[0]) + (1.0/2.0)*M_SQRT2*cos(q[0]))*sin(q[2]))*sin(q[3]))*sin(q[5]))*cos(q[6]) - ((((1.0/2.0)*M_SQRT2*sin(q[0]) - 1.0/2.0*M_SQRT2*cos(q[0]))*sin(q[1])*sin(q[2]) + ((1.0/2.0)*M_SQRT2*sin(q[0]) + (1.0/2.0)*M_SQRT2*cos(q[0]))*cos(q[2]))*cos(q[4]) - (-((1.0/2.0)*M_SQRT2*sin(q[0]) - 1.0/2.0*M_SQRT2*cos(q[0]))*sin(q[3])*cos(q[1]) + (-((1.0/2.0)*M_SQRT2*sin(q[0]) - 1.0/2.0*M_SQRT2*cos(q[0]))*sin(q[1])*cos(q[2]) + ((1.0/2.0)*M_SQRT2*sin(q[0]) + (1.0/2.0)*M_SQRT2*cos(q[0]))*sin(q[2]))*cos(q[3]))*sin(q[4]))*sin(q[6]);
   out_28631704854928182[7] = (-(((-1.0/2.0*M_SQRT2*sin(q[0]) + (1.0/2.0)*M_SQRT2*cos(q[0]))*sin(q[3])*cos(q[1]) + ((-1.0/2.0*M_SQRT2*sin(q[0]) + (1.0/2.0)*M_SQRT2*cos(q[0]))*sin(q[1])*cos(q[2]) + ((1.0/2.0)*M_SQRT2*sin(q[0]) + (1.0/2.0)*M_SQRT2*cos(q[0]))*sin(q[2]))*cos(q[3]))*cos(q[4]) + (((1.0/2.0)*M_SQRT2*sin(q[0]) - 1.0/2.0*M_SQRT2*cos(q[0]))*sin(q[1])*sin(q[2]) + ((1.0/2.0)*M_SQRT2*sin(q[0]) + (1.0/2.0)*M_SQRT2*cos(q[0]))*cos(q[2]))*sin(q[4]))*cos(q[5]) - (-((1.0/2.0)*M_SQRT2*sin(q[0]) - 1.0/2.0*M_SQRT2*cos(q[0]))*cos(q[1])*cos(q[3]) - ((-1.0/2.0*M_SQRT2*sin(q[0]) + (1.0/2.0)*M_SQRT2*cos(q[0]))*sin(q[1])*cos(q[2]) + ((1.0/2.0)*M_SQRT2*sin(q[0]) + (1.0/2.0)*M_SQRT2*cos(q[0]))*sin(q[2]))*sin(q[3]))*sin(q[5]))*sin(q[6]) + ((-(-1.0/2.0*M_SQRT2*sin(q[0]) + (1.0/2.0)*M_SQRT2*cos(q[0]))*sin(q[3])*cos(q[1]) - ((-1.0/2.0*M_SQRT2*sin(q[0]) + (1.0/2.0)*M_SQRT2*cos(q[0]))*sin(q[1])*cos(q[2]) + ((1.0/2.0)*M_SQRT2*sin(q[0]) + (1.0/2.0)*M_SQRT2*cos(q[0]))*sin(q[2]))*cos(q[3]))*sin(q[4]) + (((1.0/2.0)*M_SQRT2*sin(q[0]) - 1.0/2.0*M_SQRT2*cos(q[0]))*sin(q[1])*sin(q[2]) + ((1.0/2.0)*M_SQRT2*sin(q[0]) + (1.0/2.0)*M_SQRT2*cos(q[0]))*cos(q[2]))*cos(q[4]))*cos(q[6]);
   out_28631704854928182[8] = (-((-1.0/2.0*M_SQRT2*sin(q[0]) - 1.0/2.0*M_SQRT2*cos(q[0]))*sin(q[1])*cos(q[3]) - ((1.0/2.0)*M_SQRT2*sin(q[0]) + (1.0/2.0)*M_SQRT2*cos(q[0]))*sin(q[3])*cos(q[1])*cos(q[2]))*sin(q[5]) - ((-1.0/2.0*M_SQRT2*sin(q[0]) - 1.0/2.0*M_SQRT2*cos(q[0]))*sin(q[2])*sin(q[4])*cos(q[1]) + (-((1.0/2.0)*M_SQRT2*sin(q[0]) + (1.0/2.0)*M_SQRT2*cos(q[0]))*sin(q[1])*sin(q[3]) + ((1.0/2.0)*M_SQRT2*sin(q[0]) + (1.0/2.0)*M_SQRT2*cos(q[0]))*cos(q[1])*cos(q[2])*cos(q[3]))*cos(q[4]))*cos(q[5]))*sin(q[6]) + ((-1.0/2.0*M_SQRT2*sin(q[0]) - 1.0/2.0*M_SQRT2*cos(q[0]))*sin(q[2])*cos(q[1])*cos(q[4]) + (((1.0/2.0)*M_SQRT2*sin(q[0]) + (1.0/2.0)*M_SQRT2*cos(q[0]))*sin(q[1])*sin(q[3]) - ((1.0/2.0)*M_SQRT2*sin(q[0]) + (1.0/2.0)*M_SQRT2*cos(q[0]))*cos(q[1])*cos(q[2])*cos(q[3]))*sin(q[4]))*cos(q[6]);
   out_28631704854928182[9] = ((((1.0/2.0)*M_SQRT2*sin(q[0]) - 1.0/2.0*M_SQRT2*cos(q[0]))*cos(q[2]) - ((1.0/2.0)*M_SQRT2*sin(q[0]) + (1.0/2.0)*M_SQRT2*cos(q[0]))*sin(q[1])*sin(q[2]))*sin(q[3])*sin(q[5]) - ((((1.0/2.0)*M_SQRT2*sin(q[0]) - 1.0/2.0*M_SQRT2*cos(q[0]))*cos(q[2]) - ((1.0/2.0)*M_SQRT2*sin(q[0]) + (1.0/2.0)*M_SQRT2*cos(q[0]))*sin(q[1])*sin(q[2]))*cos(q[3])*cos(q[4]) + ((-1.0/2.0*M_SQRT2*sin(q[0]) - 1.0/2.0*M_SQRT2*cos(q[0]))*sin(q[1])*cos(q[2]) - ((1.0/2.0)*M_SQRT2*sin(q[0]) - 1.0/2.0*M_SQRT2*cos(q[0]))*sin(q[2]))*sin(q[4]))*cos(q[5]))*sin(q[6]) + (-(((1.0/2.0)*M_SQRT2*sin(q[0]) - 1.0/2.0*M_SQRT2*cos(q[0]))*cos(q[2]) - ((1.0/2.0)*M_SQRT2*sin(q[0]) + (1.0/2.0)*M_SQRT2*cos(q[0]))*sin(q[1])*sin(q[2]))*sin(q[4])*cos(q[3]) + ((-1.0/2.0*M_SQRT2*sin(q[0]) - 1.0/2.0*M_SQRT2*cos(q[0]))*sin(q[1])*cos(q[2]) - ((1.0/2.0)*M_SQRT2*sin(q[0]) - 1.0/2.0*M_SQRT2*cos(q[0]))*sin(q[2]))*cos(q[4]))*cos(q[6]);
   out_28631704854928182[10] = (-((-1.0/2.0*M_SQRT2*sin(q[0]) - 1.0/2.0*M_SQRT2*cos(q[0]))*sin(q[3])*cos(q[1]) - (-(-1.0/2.0*M_SQRT2*sin(q[0]) - 1.0/2.0*M_SQRT2*cos(q[0]))*sin(q[1])*cos(q[2]) + ((1.0/2.0)*M_SQRT2*sin(q[0]) - 1.0/2.0*M_SQRT2*cos(q[0]))*sin(q[2]))*cos(q[3]))*sin(q[5]) - (((1.0/2.0)*M_SQRT2*sin(q[0]) + (1.0/2.0)*M_SQRT2*cos(q[0]))*cos(q[1])*cos(q[3]) - (-(-1.0/2.0*M_SQRT2*sin(q[0]) - 1.0/2.0*M_SQRT2*cos(q[0]))*sin(q[1])*cos(q[2]) + ((1.0/2.0)*M_SQRT2*sin(q[0]) - 1.0/2.0*M_SQRT2*cos(q[0]))*sin(q[2]))*sin(q[3]))*cos(q[4])*cos(q[5]))*sin(q[6]) + (-((1.0/2.0)*M_SQRT2*sin(q[0]) + (1.0/2.0)*M_SQRT2*cos(q[0]))*cos(q[1])*cos(q[3]) + (-(-1.0/2.0*M_SQRT2*sin(q[0]) - 1.0/2.0*M_SQRT2*cos(q[0]))*sin(q[1])*cos(q[2]) + ((1.0/2.0)*M_SQRT2*sin(q[0]) - 1.0/2.0*M_SQRT2*cos(q[0]))*sin(q[2]))*sin(q[3]))*sin(q[4])*cos(q[6]);
   out_28631704854928182[11] = (-((-1.0/2.0*M_SQRT2*sin(q[0]) - 1.0/2.0*M_SQRT2*cos(q[0]))*sin(q[1])*sin(q[2]) + ((1.0/2.0)*M_SQRT2*sin(q[0]) - 1.0/2.0*M_SQRT2*cos(q[0]))*cos(q[2]))*sin(q[4]) + ((-1.0/2.0*M_SQRT2*sin(q[0]) - 1.0/2.0*M_SQRT2*cos(q[0]))*sin(q[3])*cos(q[1]) - (-(-1.0/2.0*M_SQRT2*sin(q[0]) - 1.0/2.0*M_SQRT2*cos(q[0]))*sin(q[1])*cos(q[2]) + ((1.0/2.0)*M_SQRT2*sin(q[0]) - 1.0/2.0*M_SQRT2*cos(q[0]))*sin(q[2]))*cos(q[3]))*cos(q[4]))*cos(q[6]) - (((-1.0/2.0*M_SQRT2*sin(q[0]) - 1.0/2.0*M_SQRT2*cos(q[0]))*sin(q[1])*sin(q[2]) + ((1.0/2.0)*M_SQRT2*sin(q[0]) - 1.0/2.0*M_SQRT2*cos(q[0]))*cos(q[2]))*cos(q[4]) - (-(-1.0/2.0*M_SQRT2*sin(q[0]) - 1.0/2.0*M_SQRT2*cos(q[0]))*sin(q[3])*cos(q[1]) + (-(-1.0/2.0*M_SQRT2*sin(q[0]) - 1.0/2.0*M_SQRT2*cos(q[0]))*sin(q[1])*cos(q[2]) + ((1.0/2.0)*M_SQRT2*sin(q[0]) - 1.0/2.0*M_SQRT2*cos(q[0]))*sin(q[2]))*cos(q[3]))*sin(q[4]))*sin(q[6])*cos(q[5]);
   out_28631704854928182[12] = ((((-1.0/2.0*M_SQRT2*sin(q[0]) - 1.0/2.0*M_SQRT2*cos(q[0]))*sin(q[1])*sin(q[2]) + ((1.0/2.0)*M_SQRT2*sin(q[0]) - 1.0/2.0*M_SQRT2*cos(q[0]))*cos(q[2]))*sin(q[4]) + (-(-1.0/2.0*M_SQRT2*sin(q[0]) - 1.0/2.0*M_SQRT2*cos(q[0]))*sin(q[3])*cos(q[1]) + (-(-1.0/2.0*M_SQRT2*sin(q[0]) - 1.0/2.0*M_SQRT2*cos(q[0]))*sin(q[1])*cos(q[2]) + ((1.0/2.0)*M_SQRT2*sin(q[0]) - 1.0/2.0*M_SQRT2*cos(q[0]))*sin(q[2]))*cos(q[3]))*cos(q[4]))*sin(q[5]) - (-(-1.0/2.0*M_SQRT2*sin(q[0]) - 1.0/2.0*M_SQRT2*cos(q[0]))*cos(q[1])*cos(q[3]) - (-(-1.0/2.0*M_SQRT2*sin(q[0]) - 1.0/2.0*M_SQRT2*cos(q[0]))*sin(q[1])*cos(q[2]) + ((1.0/2.0)*M_SQRT2*sin(q[0]) - 1.0/2.0*M_SQRT2*cos(q[0]))*sin(q[2]))*sin(q[3]))*cos(q[5]))*sin(q[6]);
   out_28631704854928182[13] = (-(((-1.0/2.0*M_SQRT2*sin(q[0]) - 1.0/2.0*M_SQRT2*cos(q[0]))*sin(q[1])*sin(q[2]) + ((1.0/2.0)*M_SQRT2*sin(q[0]) - 1.0/2.0*M_SQRT2*cos(q[0]))*cos(q[2]))*sin(q[4]) + (-(-1.0/2.0*M_SQRT2*sin(q[0]) - 1.0/2.0*M_SQRT2*cos(q[0]))*sin(q[3])*cos(q[1]) + (-(-1.0/2.0*M_SQRT2*sin(q[0]) - 1.0/2.0*M_SQRT2*cos(q[0]))*sin(q[1])*cos(q[2]) + ((1.0/2.0)*M_SQRT2*sin(q[0]) - 1.0/2.0*M_SQRT2*cos(q[0]))*sin(q[2]))*cos(q[3]))*cos(q[4]))*cos(q[5]) + ((-1.0/2.0*M_SQRT2*sin(q[0]) - 1.0/2.0*M_SQRT2*cos(q[0]))*cos(q[1])*cos(q[3]) + (-(-1.0/2.0*M_SQRT2*sin(q[0]) - 1.0/2.0*M_SQRT2*cos(q[0]))*sin(q[1])*cos(q[2]) + ((1.0/2.0)*M_SQRT2*sin(q[0]) - 1.0/2.0*M_SQRT2*cos(q[0]))*sin(q[2]))*sin(q[3]))*sin(q[5]))*cos(q[6]) - (((-1.0/2.0*M_SQRT2*sin(q[0]) - 1.0/2.0*M_SQRT2*cos(q[0]))*sin(q[1])*sin(q[2]) + ((1.0/2.0)*M_SQRT2*sin(q[0]) - 1.0/2.0*M_SQRT2*cos(q[0]))*cos(q[2]))*cos(q[4]) - (-(-1.0/2.0*M_SQRT2*sin(q[0]) - 1.0/2.0*M_SQRT2*cos(q[0]))*sin(q[3])*cos(q[1]) + (-(-1.0/2.0*M_SQRT2*sin(q[0]) - 1.0/2.0*M_SQRT2*cos(q[0]))*sin(q[1])*cos(q[2]) + ((1.0/2.0)*M_SQRT2*sin(q[0]) - 1.0/2.0*M_SQRT2*cos(q[0]))*sin(q[2]))*cos(q[3]))*sin(q[4]))*sin(q[6]);
   out_28631704854928182[14] = 0;
   out_28631704854928182[15] = (-((sin(q[1])*cos(q[2])*cos(q[3]) + sin(q[3])*cos(q[1]))*cos(q[4]) - sin(q[1])*sin(q[2])*sin(q[4]))*cos(q[5]) - (-sin(q[1])*sin(q[3])*cos(q[2]) + cos(q[1])*cos(q[3]))*sin(q[5]))*sin(q[6]) + ((-sin(q[1])*cos(q[2])*cos(q[3]) - sin(q[3])*cos(q[1]))*sin(q[4]) - sin(q[1])*sin(q[2])*cos(q[4]))*cos(q[6]);
   out_28631704854928182[16] = (-(sin(q[2])*cos(q[1])*cos(q[3])*cos(q[4]) + sin(q[4])*cos(q[1])*cos(q[2]))*cos(q[5]) + sin(q[2])*sin(q[3])*sin(q[5])*cos(q[1]))*sin(q[6]) + (-sin(q[2])*sin(q[4])*cos(q[1])*cos(q[3]) + cos(q[1])*cos(q[2])*cos(q[4]))*cos(q[6]);
   out_28631704854928182[17] = (-(-sin(q[1])*sin(q[3]) + cos(q[1])*cos(q[2])*cos(q[3]))*sin(q[5]) - (sin(q[1])*cos(q[3]) + sin(q[3])*cos(q[1])*cos(q[2]))*cos(q[4])*cos(q[5]))*sin(q[6]) + (-sin(q[1])*cos(q[3]) - sin(q[3])*cos(q[1])*cos(q[2]))*sin(q[4])*cos(q[6]);
   out_28631704854928182[18] = ((-sin(q[1])*sin(q[3]) + cos(q[1])*cos(q[2])*cos(q[3]))*cos(q[4]) - sin(q[2])*sin(q[4])*cos(q[1]))*cos(q[6]) - (-(sin(q[1])*sin(q[3]) - cos(q[1])*cos(q[2])*cos(q[3]))*sin(q[4]) + sin(q[2])*cos(q[1])*cos(q[4]))*sin(q[6])*cos(q[5]);
   out_28631704854928182[19] = (((sin(q[1])*sin(q[3]) - cos(q[1])*cos(q[2])*cos(q[3]))*cos(q[4]) + sin(q[2])*sin(q[4])*cos(q[1]))*sin(q[5]) - (sin(q[1])*cos(q[3]) + sin(q[3])*cos(q[1])*cos(q[2]))*cos(q[5]))*sin(q[6]);
   out_28631704854928182[20] = (-((sin(q[1])*sin(q[3]) - cos(q[1])*cos(q[2])*cos(q[3]))*cos(q[4]) + sin(q[2])*sin(q[4])*cos(q[1]))*cos(q[5]) + (-sin(q[1])*cos(q[3]) - sin(q[3])*cos(q[1])*cos(q[2]))*sin(q[5]))*cos(q[6]) - (-(sin(q[1])*sin(q[3]) - cos(q[1])*cos(q[2])*cos(q[3]))*sin(q[4]) + sin(q[2])*cos(q[1])*cos(q[4]))*sin(q[6]);

}
