/******************************************************************************
 *                       Code generated with sympy 1.9                        *
 *                                                                            *
 *              See http://www.sympy.org/ for more information.               *
 *                                                                            *
 *                   This file is part of 'jo_4_BY_SYMPY_'                    *
 ******************************************************************************/
#include "jo_4.h"
#include <math.h>

void jo_4(double L1, double L2, double L3, double L4, double *q, double *out_3194351001144367728) {

   out_3194351001144367728[0] = (1.0/2.0)*M_SQRT2*L1*sin(q[0]) + (1.0/2.0)*M_SQRT2*L1*cos(q[0]) + (1.0/2.0)*M_SQRT2*L2*sin(q[0])*cos(q[1]) + (1.0/2.0)*M_SQRT2*L2*cos(q[0])*cos(q[1]) - 1.0/2.0*M_SQRT2*L3*sin(q[0])*sin(q[1])*cos(q[2]) - 1.0/2.0*M_SQRT2*L3*sin(q[0])*sin(q[2]) - 1.0/2.0*M_SQRT2*L3*sin(q[1])*cos(q[0])*cos(q[2]) + (1.0/2.0)*M_SQRT2*L3*sin(q[2])*cos(q[0]) - 1.0/2.0*M_SQRT2*L4*sin(q[0])*sin(q[1])*sin(q[3])*cos(q[2]) - 1.0/2.0*M_SQRT2*L4*sin(q[0])*sin(q[2])*sin(q[3]) + (1.0/2.0)*M_SQRT2*L4*sin(q[0])*cos(q[1])*cos(q[3]) - 1.0/2.0*M_SQRT2*L4*sin(q[1])*sin(q[3])*cos(q[0])*cos(q[2]) + (1.0/2.0)*M_SQRT2*L4*sin(q[2])*sin(q[3])*cos(q[0]) + (1.0/2.0)*M_SQRT2*L4*cos(q[0])*cos(q[1])*cos(q[3]);
   out_3194351001144367728[1] = -1.0/2.0*M_SQRT2*L2*sin(q[0])*sin(q[1]) + (1.0/2.0)*M_SQRT2*L2*sin(q[1])*cos(q[0]) - 1.0/2.0*M_SQRT2*L3*sin(q[0])*cos(q[1])*cos(q[2]) + (1.0/2.0)*M_SQRT2*L3*cos(q[0])*cos(q[1])*cos(q[2]) - 1.0/2.0*M_SQRT2*L4*sin(q[0])*sin(q[1])*cos(q[3]) - 1.0/2.0*M_SQRT2*L4*sin(q[0])*sin(q[3])*cos(q[1])*cos(q[2]) + (1.0/2.0)*M_SQRT2*L4*sin(q[1])*cos(q[0])*cos(q[3]) + (1.0/2.0)*M_SQRT2*L4*sin(q[3])*cos(q[0])*cos(q[1])*cos(q[2]);
   out_3194351001144367728[2] = (1.0/2.0)*M_SQRT2*L3*sin(q[0])*sin(q[1])*sin(q[2]) + (1.0/2.0)*M_SQRT2*L3*sin(q[0])*cos(q[2]) - 1.0/2.0*M_SQRT2*L3*sin(q[1])*sin(q[2])*cos(q[0]) + (1.0/2.0)*M_SQRT2*L3*cos(q[0])*cos(q[2]) + (1.0/2.0)*M_SQRT2*L4*sin(q[0])*sin(q[1])*sin(q[2])*sin(q[3]) + (1.0/2.0)*M_SQRT2*L4*sin(q[0])*sin(q[3])*cos(q[2]) - 1.0/2.0*M_SQRT2*L4*sin(q[1])*sin(q[2])*sin(q[3])*cos(q[0]) + (1.0/2.0)*M_SQRT2*L4*sin(q[3])*cos(q[0])*cos(q[2]);
   out_3194351001144367728[3] = -1.0/2.0*M_SQRT2*L4*sin(q[0])*sin(q[1])*cos(q[2])*cos(q[3]) + (1.0/2.0)*M_SQRT2*L4*sin(q[0])*sin(q[2])*cos(q[3]) - 1.0/2.0*M_SQRT2*L4*sin(q[0])*sin(q[3])*cos(q[1]) + (1.0/2.0)*M_SQRT2*L4*sin(q[1])*cos(q[0])*cos(q[2])*cos(q[3]) + (1.0/2.0)*M_SQRT2*L4*sin(q[2])*cos(q[0])*cos(q[3]) + (1.0/2.0)*M_SQRT2*L4*sin(q[3])*cos(q[0])*cos(q[1]);
   out_3194351001144367728[4] = 0;
   out_3194351001144367728[5] = 0;
   out_3194351001144367728[6] = 0;
   out_3194351001144367728[7] = (1.0/2.0)*M_SQRT2*L1*sin(q[0]) - 1.0/2.0*M_SQRT2*L1*cos(q[0]) + (1.0/2.0)*M_SQRT2*L2*sin(q[0])*cos(q[1]) - 1.0/2.0*M_SQRT2*L2*cos(q[0])*cos(q[1]) - 1.0/2.0*M_SQRT2*L3*sin(q[0])*sin(q[1])*cos(q[2]) + (1.0/2.0)*M_SQRT2*L3*sin(q[0])*sin(q[2]) + (1.0/2.0)*M_SQRT2*L3*sin(q[1])*cos(q[0])*cos(q[2]) + (1.0/2.0)*M_SQRT2*L3*sin(q[2])*cos(q[0]) - 1.0/2.0*M_SQRT2*L4*sin(q[0])*sin(q[1])*sin(q[3])*cos(q[2]) + (1.0/2.0)*M_SQRT2*L4*sin(q[0])*sin(q[2])*sin(q[3]) + (1.0/2.0)*M_SQRT2*L4*sin(q[0])*cos(q[1])*cos(q[3]) + (1.0/2.0)*M_SQRT2*L4*sin(q[1])*sin(q[3])*cos(q[0])*cos(q[2]) + (1.0/2.0)*M_SQRT2*L4*sin(q[2])*sin(q[3])*cos(q[0]) - 1.0/2.0*M_SQRT2*L4*cos(q[0])*cos(q[1])*cos(q[3]);
   out_3194351001144367728[8] = (1.0/2.0)*M_SQRT2*L2*sin(q[0])*sin(q[1]) + (1.0/2.0)*M_SQRT2*L2*sin(q[1])*cos(q[0]) + (1.0/2.0)*M_SQRT2*L3*sin(q[0])*cos(q[1])*cos(q[2]) + (1.0/2.0)*M_SQRT2*L3*cos(q[0])*cos(q[1])*cos(q[2]) + (1.0/2.0)*M_SQRT2*L4*sin(q[0])*sin(q[1])*cos(q[3]) + (1.0/2.0)*M_SQRT2*L4*sin(q[0])*sin(q[3])*cos(q[1])*cos(q[2]) + (1.0/2.0)*M_SQRT2*L4*sin(q[1])*cos(q[0])*cos(q[3]) + (1.0/2.0)*M_SQRT2*L4*sin(q[3])*cos(q[0])*cos(q[1])*cos(q[2]);
   out_3194351001144367728[9] = -1.0/2.0*M_SQRT2*L3*sin(q[0])*sin(q[1])*sin(q[2]) + (1.0/2.0)*M_SQRT2*L3*sin(q[0])*cos(q[2]) - 1.0/2.0*M_SQRT2*L3*sin(q[1])*sin(q[2])*cos(q[0]) - 1.0/2.0*M_SQRT2*L3*cos(q[0])*cos(q[2]) - 1.0/2.0*M_SQRT2*L4*sin(q[0])*sin(q[1])*sin(q[2])*sin(q[3]) + (1.0/2.0)*M_SQRT2*L4*sin(q[0])*sin(q[3])*cos(q[2]) - 1.0/2.0*M_SQRT2*L4*sin(q[1])*sin(q[2])*sin(q[3])*cos(q[0]) - 1.0/2.0*M_SQRT2*L4*sin(q[3])*cos(q[0])*cos(q[2]);
   out_3194351001144367728[10] = (1.0/2.0)*M_SQRT2*L4*sin(q[0])*sin(q[1])*cos(q[2])*cos(q[3]) + (1.0/2.0)*M_SQRT2*L4*sin(q[0])*sin(q[2])*cos(q[3]) + (1.0/2.0)*M_SQRT2*L4*sin(q[0])*sin(q[3])*cos(q[1]) + (1.0/2.0)*M_SQRT2*L4*sin(q[1])*cos(q[0])*cos(q[2])*cos(q[3]) - 1.0/2.0*M_SQRT2*L4*sin(q[2])*cos(q[0])*cos(q[3]) + (1.0/2.0)*M_SQRT2*L4*sin(q[3])*cos(q[0])*cos(q[1]);
   out_3194351001144367728[11] = 0;
   out_3194351001144367728[12] = 0;
   out_3194351001144367728[13] = 0;
   out_3194351001144367728[14] = 0;
   out_3194351001144367728[15] = -L2*cos(q[1]) + L3*sin(q[1])*cos(q[2]) + L4*sin(q[1])*sin(q[3])*cos(q[2]) - L4*cos(q[1])*cos(q[3]);
   out_3194351001144367728[16] = L3*sin(q[2])*cos(q[1]) + L4*sin(q[2])*sin(q[3])*cos(q[1]);
   out_3194351001144367728[17] = L4*sin(q[1])*sin(q[3]) - L4*cos(q[1])*cos(q[2])*cos(q[3]);
   out_3194351001144367728[18] = 0;
   out_3194351001144367728[19] = 0;
   out_3194351001144367728[20] = 0;

}
