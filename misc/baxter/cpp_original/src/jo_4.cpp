/******************************************************************************
 *                       Code generated with sympy 1.9                        *
 *                                                                            *
 *              See http://www.sympy.org/ for more information.               *
 *                                                                            *
 *                   This file is part of 'jo_4_BY_SYMPY_'                    *
 ******************************************************************************/
#include "jo_4.h"
#include <math.h>

void jo_4(double L1, double L2, double L3, double L4, double *q, double *out_4292485851003140526) {

   out_4292485851003140526[0] = (1.0/2.0)*M_SQRT2*L1*sin(q[0]) + (1.0/2.0)*M_SQRT2*L1*cos(q[0]) + (1.0/2.0)*M_SQRT2*L2*sin(q[0])*cos(q[1]) + (1.0/2.0)*M_SQRT2*L2*cos(q[0])*cos(q[1]) - 1.0/2.0*M_SQRT2*L3*sin(q[0])*sin(q[1])*cos(q[2]) - 1.0/2.0*M_SQRT2*L3*sin(q[0])*sin(q[2]) - 1.0/2.0*M_SQRT2*L3*sin(q[1])*cos(q[0])*cos(q[2]) + (1.0/2.0)*M_SQRT2*L3*sin(q[2])*cos(q[0]) - 1.0/2.0*M_SQRT2*L4*sin(q[0])*sin(q[1])*sin(q[3])*cos(q[2]) - 1.0/2.0*M_SQRT2*L4*sin(q[0])*sin(q[2])*sin(q[3]) + (1.0/2.0)*M_SQRT2*L4*sin(q[0])*cos(q[1])*cos(q[3]) - 1.0/2.0*M_SQRT2*L4*sin(q[1])*sin(q[3])*cos(q[0])*cos(q[2]) + (1.0/2.0)*M_SQRT2*L4*sin(q[2])*sin(q[3])*cos(q[0]) + (1.0/2.0)*M_SQRT2*L4*cos(q[0])*cos(q[1])*cos(q[3]);
   out_4292485851003140526[1] = -1.0/2.0*M_SQRT2*L2*sin(q[0])*sin(q[1]) + (1.0/2.0)*M_SQRT2*L2*sin(q[1])*cos(q[0]) - 1.0/2.0*M_SQRT2*L3*sin(q[0])*cos(q[1])*cos(q[2]) + (1.0/2.0)*M_SQRT2*L3*cos(q[0])*cos(q[1])*cos(q[2]) - 1.0/2.0*M_SQRT2*L4*sin(q[0])*sin(q[1])*cos(q[3]) - 1.0/2.0*M_SQRT2*L4*sin(q[0])*sin(q[3])*cos(q[1])*cos(q[2]) + (1.0/2.0)*M_SQRT2*L4*sin(q[1])*cos(q[0])*cos(q[3]) + (1.0/2.0)*M_SQRT2*L4*sin(q[3])*cos(q[0])*cos(q[1])*cos(q[2]);
   out_4292485851003140526[2] = (1.0/2.0)*M_SQRT2*L3*sin(q[0])*sin(q[1])*sin(q[2]) + (1.0/2.0)*M_SQRT2*L3*sin(q[0])*cos(q[2]) - 1.0/2.0*M_SQRT2*L3*sin(q[1])*sin(q[2])*cos(q[0]) + (1.0/2.0)*M_SQRT2*L3*cos(q[0])*cos(q[2]) + (1.0/2.0)*M_SQRT2*L4*sin(q[0])*sin(q[1])*sin(q[2])*sin(q[3]) + (1.0/2.0)*M_SQRT2*L4*sin(q[0])*sin(q[3])*cos(q[2]) - 1.0/2.0*M_SQRT2*L4*sin(q[1])*sin(q[2])*sin(q[3])*cos(q[0]) + (1.0/2.0)*M_SQRT2*L4*sin(q[3])*cos(q[0])*cos(q[2]);
   out_4292485851003140526[3] = -1.0/2.0*M_SQRT2*L4*sin(q[0])*sin(q[1])*cos(q[2])*cos(q[3]) + (1.0/2.0)*M_SQRT2*L4*sin(q[0])*sin(q[2])*cos(q[3]) - 1.0/2.0*M_SQRT2*L4*sin(q[0])*sin(q[3])*cos(q[1]) + (1.0/2.0)*M_SQRT2*L4*sin(q[1])*cos(q[0])*cos(q[2])*cos(q[3]) + (1.0/2.0)*M_SQRT2*L4*sin(q[2])*cos(q[0])*cos(q[3]) + (1.0/2.0)*M_SQRT2*L4*sin(q[3])*cos(q[0])*cos(q[1]);
   out_4292485851003140526[4] = 0;
   out_4292485851003140526[5] = 0;
   out_4292485851003140526[6] = 0;
   out_4292485851003140526[7] = (1.0/2.0)*M_SQRT2*L1*sin(q[0]) - 1.0/2.0*M_SQRT2*L1*cos(q[0]) + (1.0/2.0)*M_SQRT2*L2*sin(q[0])*cos(q[1]) - 1.0/2.0*M_SQRT2*L2*cos(q[0])*cos(q[1]) - 1.0/2.0*M_SQRT2*L3*sin(q[0])*sin(q[1])*cos(q[2]) + (1.0/2.0)*M_SQRT2*L3*sin(q[0])*sin(q[2]) + (1.0/2.0)*M_SQRT2*L3*sin(q[1])*cos(q[0])*cos(q[2]) + (1.0/2.0)*M_SQRT2*L3*sin(q[2])*cos(q[0]) - 1.0/2.0*M_SQRT2*L4*sin(q[0])*sin(q[1])*sin(q[3])*cos(q[2]) + (1.0/2.0)*M_SQRT2*L4*sin(q[0])*sin(q[2])*sin(q[3]) + (1.0/2.0)*M_SQRT2*L4*sin(q[0])*cos(q[1])*cos(q[3]) + (1.0/2.0)*M_SQRT2*L4*sin(q[1])*sin(q[3])*cos(q[0])*cos(q[2]) + (1.0/2.0)*M_SQRT2*L4*sin(q[2])*sin(q[3])*cos(q[0]) - 1.0/2.0*M_SQRT2*L4*cos(q[0])*cos(q[1])*cos(q[3]);
   out_4292485851003140526[8] = (1.0/2.0)*M_SQRT2*L2*sin(q[0])*sin(q[1]) + (1.0/2.0)*M_SQRT2*L2*sin(q[1])*cos(q[0]) + (1.0/2.0)*M_SQRT2*L3*sin(q[0])*cos(q[1])*cos(q[2]) + (1.0/2.0)*M_SQRT2*L3*cos(q[0])*cos(q[1])*cos(q[2]) + (1.0/2.0)*M_SQRT2*L4*sin(q[0])*sin(q[1])*cos(q[3]) + (1.0/2.0)*M_SQRT2*L4*sin(q[0])*sin(q[3])*cos(q[1])*cos(q[2]) + (1.0/2.0)*M_SQRT2*L4*sin(q[1])*cos(q[0])*cos(q[3]) + (1.0/2.0)*M_SQRT2*L4*sin(q[3])*cos(q[0])*cos(q[1])*cos(q[2]);
   out_4292485851003140526[9] = -1.0/2.0*M_SQRT2*L3*sin(q[0])*sin(q[1])*sin(q[2]) + (1.0/2.0)*M_SQRT2*L3*sin(q[0])*cos(q[2]) - 1.0/2.0*M_SQRT2*L3*sin(q[1])*sin(q[2])*cos(q[0]) - 1.0/2.0*M_SQRT2*L3*cos(q[0])*cos(q[2]) - 1.0/2.0*M_SQRT2*L4*sin(q[0])*sin(q[1])*sin(q[2])*sin(q[3]) + (1.0/2.0)*M_SQRT2*L4*sin(q[0])*sin(q[3])*cos(q[2]) - 1.0/2.0*M_SQRT2*L4*sin(q[1])*sin(q[2])*sin(q[3])*cos(q[0]) - 1.0/2.0*M_SQRT2*L4*sin(q[3])*cos(q[0])*cos(q[2]);
   out_4292485851003140526[10] = (1.0/2.0)*M_SQRT2*L4*sin(q[0])*sin(q[1])*cos(q[2])*cos(q[3]) + (1.0/2.0)*M_SQRT2*L4*sin(q[0])*sin(q[2])*cos(q[3]) + (1.0/2.0)*M_SQRT2*L4*sin(q[0])*sin(q[3])*cos(q[1]) + (1.0/2.0)*M_SQRT2*L4*sin(q[1])*cos(q[0])*cos(q[2])*cos(q[3]) - 1.0/2.0*M_SQRT2*L4*sin(q[2])*cos(q[0])*cos(q[3]) + (1.0/2.0)*M_SQRT2*L4*sin(q[3])*cos(q[0])*cos(q[1]);
   out_4292485851003140526[11] = 0;
   out_4292485851003140526[12] = 0;
   out_4292485851003140526[13] = 0;
   out_4292485851003140526[14] = 0;
   out_4292485851003140526[15] = -L2*cos(q[1]) + L3*sin(q[1])*cos(q[2]) + L4*sin(q[1])*sin(q[3])*cos(q[2]) - L4*cos(q[1])*cos(q[3]);
   out_4292485851003140526[16] = L3*sin(q[2])*cos(q[1]) + L4*sin(q[2])*sin(q[3])*cos(q[1]);
   out_4292485851003140526[17] = L4*sin(q[1])*sin(q[3]) - L4*cos(q[1])*cos(q[2])*cos(q[3]);
   out_4292485851003140526[18] = 0;
   out_4292485851003140526[19] = 0;
   out_4292485851003140526[20] = 0;

}
