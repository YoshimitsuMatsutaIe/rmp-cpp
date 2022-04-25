/******************************************************************************
 *                       Code generated with sympy 1.9                        *
 *                                                                            *
 *              See http://www.sympy.org/ for more information.               *
 *                                                                            *
 *                    This file is part of 'JRx_4project'                     *
 ******************************************************************************/
#include "include/baxter/JRx_4.h"
#include <math.h>

void JRx_4(double *q, double *out_4244032190940959686) {

   out_4244032190940959686[0] = ((-1.0/2.0*M_SQRT2*sin(q[0]) + (1.0/2.0)*M_SQRT2*cos(q[0]))*cos(q[2]) + ((1.0/2.0)*M_SQRT2*sin(q[0]) + (1.0/2.0)*M_SQRT2*cos(q[0]))*sin(q[1])*sin(q[2]))*sin(q[4]) + ((-1.0/2.0*M_SQRT2*sin(q[0]) - 1.0/2.0*M_SQRT2*cos(q[0]))*sin(q[3])*cos(q[1]) + ((-1.0/2.0*M_SQRT2*sin(q[0]) - 1.0/2.0*M_SQRT2*cos(q[0]))*sin(q[1])*cos(q[2]) + (-1.0/2.0*M_SQRT2*sin(q[0]) + (1.0/2.0)*M_SQRT2*cos(q[0]))*sin(q[2]))*cos(q[3]))*cos(q[4]);
   out_4244032190940959686[1] = ((1.0/2.0)*M_SQRT2*sin(q[0]) - 1.0/2.0*M_SQRT2*cos(q[0]))*sin(q[2])*sin(q[4])*cos(q[1]) + (-(-1.0/2.0*M_SQRT2*sin(q[0]) + (1.0/2.0)*M_SQRT2*cos(q[0]))*sin(q[1])*sin(q[3]) + (-1.0/2.0*M_SQRT2*sin(q[0]) + (1.0/2.0)*M_SQRT2*cos(q[0]))*cos(q[1])*cos(q[2])*cos(q[3]))*cos(q[4]);
   out_4244032190940959686[2] = (-(-1.0/2.0*M_SQRT2*sin(q[0]) + (1.0/2.0)*M_SQRT2*cos(q[0]))*sin(q[1])*sin(q[2]) + ((1.0/2.0)*M_SQRT2*sin(q[0]) + (1.0/2.0)*M_SQRT2*cos(q[0]))*cos(q[2]))*cos(q[3])*cos(q[4]) + (((1.0/2.0)*M_SQRT2*sin(q[0]) - 1.0/2.0*M_SQRT2*cos(q[0]))*sin(q[1])*cos(q[2]) - ((1.0/2.0)*M_SQRT2*sin(q[0]) + (1.0/2.0)*M_SQRT2*cos(q[0]))*sin(q[2]))*sin(q[4]);
   out_4244032190940959686[3] = ((-1.0/2.0*M_SQRT2*sin(q[0]) + (1.0/2.0)*M_SQRT2*cos(q[0]))*cos(q[1])*cos(q[3]) - (-((1.0/2.0)*M_SQRT2*sin(q[0]) - 1.0/2.0*M_SQRT2*cos(q[0]))*sin(q[1])*cos(q[2]) + ((1.0/2.0)*M_SQRT2*sin(q[0]) + (1.0/2.0)*M_SQRT2*cos(q[0]))*sin(q[2]))*sin(q[3]))*cos(q[4]);
   out_4244032190940959686[4] = (((1.0/2.0)*M_SQRT2*sin(q[0]) - 1.0/2.0*M_SQRT2*cos(q[0]))*sin(q[1])*sin(q[2]) + ((1.0/2.0)*M_SQRT2*sin(q[0]) + (1.0/2.0)*M_SQRT2*cos(q[0]))*cos(q[2]))*cos(q[4]) - (-((1.0/2.0)*M_SQRT2*sin(q[0]) - 1.0/2.0*M_SQRT2*cos(q[0]))*sin(q[3])*cos(q[1]) + (-((1.0/2.0)*M_SQRT2*sin(q[0]) - 1.0/2.0*M_SQRT2*cos(q[0]))*sin(q[1])*cos(q[2]) + ((1.0/2.0)*M_SQRT2*sin(q[0]) + (1.0/2.0)*M_SQRT2*cos(q[0]))*sin(q[2]))*cos(q[3]))*sin(q[4]);
   out_4244032190940959686[5] = 0;
   out_4244032190940959686[6] = 0;
   out_4244032190940959686[7] = ((-1.0/2.0*M_SQRT2*sin(q[0]) + (1.0/2.0)*M_SQRT2*cos(q[0]))*sin(q[3])*cos(q[1]) + ((-1.0/2.0*M_SQRT2*sin(q[0]) + (1.0/2.0)*M_SQRT2*cos(q[0]))*sin(q[1])*cos(q[2]) + ((1.0/2.0)*M_SQRT2*sin(q[0]) + (1.0/2.0)*M_SQRT2*cos(q[0]))*sin(q[2]))*cos(q[3]))*cos(q[4]) + (((1.0/2.0)*M_SQRT2*sin(q[0]) - 1.0/2.0*M_SQRT2*cos(q[0]))*sin(q[1])*sin(q[2]) + ((1.0/2.0)*M_SQRT2*sin(q[0]) + (1.0/2.0)*M_SQRT2*cos(q[0]))*cos(q[2]))*sin(q[4]);
   out_4244032190940959686[8] = (-1.0/2.0*M_SQRT2*sin(q[0]) - 1.0/2.0*M_SQRT2*cos(q[0]))*sin(q[2])*sin(q[4])*cos(q[1]) + (-((1.0/2.0)*M_SQRT2*sin(q[0]) + (1.0/2.0)*M_SQRT2*cos(q[0]))*sin(q[1])*sin(q[3]) + ((1.0/2.0)*M_SQRT2*sin(q[0]) + (1.0/2.0)*M_SQRT2*cos(q[0]))*cos(q[1])*cos(q[2])*cos(q[3]))*cos(q[4]);
   out_4244032190940959686[9] = (((1.0/2.0)*M_SQRT2*sin(q[0]) - 1.0/2.0*M_SQRT2*cos(q[0]))*cos(q[2]) - ((1.0/2.0)*M_SQRT2*sin(q[0]) + (1.0/2.0)*M_SQRT2*cos(q[0]))*sin(q[1])*sin(q[2]))*cos(q[3])*cos(q[4]) + ((-1.0/2.0*M_SQRT2*sin(q[0]) - 1.0/2.0*M_SQRT2*cos(q[0]))*sin(q[1])*cos(q[2]) - ((1.0/2.0)*M_SQRT2*sin(q[0]) - 1.0/2.0*M_SQRT2*cos(q[0]))*sin(q[2]))*sin(q[4]);
   out_4244032190940959686[10] = (((1.0/2.0)*M_SQRT2*sin(q[0]) + (1.0/2.0)*M_SQRT2*cos(q[0]))*cos(q[1])*cos(q[3]) - (-(-1.0/2.0*M_SQRT2*sin(q[0]) - 1.0/2.0*M_SQRT2*cos(q[0]))*sin(q[1])*cos(q[2]) + ((1.0/2.0)*M_SQRT2*sin(q[0]) - 1.0/2.0*M_SQRT2*cos(q[0]))*sin(q[2]))*sin(q[3]))*cos(q[4]);
   out_4244032190940959686[11] = ((-1.0/2.0*M_SQRT2*sin(q[0]) - 1.0/2.0*M_SQRT2*cos(q[0]))*sin(q[1])*sin(q[2]) + ((1.0/2.0)*M_SQRT2*sin(q[0]) - 1.0/2.0*M_SQRT2*cos(q[0]))*cos(q[2]))*cos(q[4]) - (-(-1.0/2.0*M_SQRT2*sin(q[0]) - 1.0/2.0*M_SQRT2*cos(q[0]))*sin(q[3])*cos(q[1]) + (-(-1.0/2.0*M_SQRT2*sin(q[0]) - 1.0/2.0*M_SQRT2*cos(q[0]))*sin(q[1])*cos(q[2]) + ((1.0/2.0)*M_SQRT2*sin(q[0]) - 1.0/2.0*M_SQRT2*cos(q[0]))*sin(q[2]))*cos(q[3]))*sin(q[4]);
   out_4244032190940959686[12] = 0;
   out_4244032190940959686[13] = 0;
   out_4244032190940959686[14] = 0;
   out_4244032190940959686[15] = (sin(q[1])*cos(q[2])*cos(q[3]) + sin(q[3])*cos(q[1]))*cos(q[4]) - sin(q[1])*sin(q[2])*sin(q[4]);
   out_4244032190940959686[16] = sin(q[2])*cos(q[1])*cos(q[3])*cos(q[4]) + sin(q[4])*cos(q[1])*cos(q[2]);
   out_4244032190940959686[17] = (sin(q[1])*cos(q[3]) + sin(q[3])*cos(q[1])*cos(q[2]))*cos(q[4]);
   out_4244032190940959686[18] = -(sin(q[1])*sin(q[3]) - cos(q[1])*cos(q[2])*cos(q[3]))*sin(q[4]) + sin(q[2])*cos(q[1])*cos(q[4]);
   out_4244032190940959686[19] = 0;
   out_4244032190940959686[20] = 0;

}
