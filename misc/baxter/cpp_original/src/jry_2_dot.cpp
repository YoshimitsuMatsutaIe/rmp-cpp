/******************************************************************************
 *                       Code generated with sympy 1.9                        *
 *                                                                            *
 *              See http://www.sympy.org/ for more information.               *
 *                                                                            *
 *                 This file is part of 'jry_2_dot_BY_SYMPY_'                 *
 ******************************************************************************/
#include "jry_2_dot.h"
#include <math.h>

void jry_2_dot(double *dq, double *q, double *out_4191203732993869573) {

   out_4191203732993869573[0] = -1.0/2.0*M_SQRT2*sin(q[0])*sin(q[1])*sin(q[2])*dq[0] + (1.0/2.0)*M_SQRT2*sin(q[0])*sin(q[1])*cos(q[2])*dq[2] + (1.0/2.0)*M_SQRT2*sin(q[0])*sin(q[2])*cos(q[1])*dq[1] + (1.0/2.0)*M_SQRT2*sin(q[0])*sin(q[2])*dq[2] - 1.0/2.0*M_SQRT2*sin(q[0])*cos(q[2])*dq[0] + (1.0/2.0)*M_SQRT2*sin(q[1])*sin(q[2])*cos(q[0])*dq[0] + (1.0/2.0)*M_SQRT2*sin(q[1])*cos(q[0])*cos(q[2])*dq[2] + (1.0/2.0)*M_SQRT2*sin(q[2])*cos(q[0])*cos(q[1])*dq[1] - 1.0/2.0*M_SQRT2*sin(q[2])*cos(q[0])*dq[2] - 1.0/2.0*M_SQRT2*cos(q[0])*cos(q[2])*dq[0];
   out_4191203732993869573[1] = -1.0/2.0*M_SQRT2*sin(q[0])*sin(q[1])*sin(q[2])*dq[1] + (1.0/2.0)*M_SQRT2*sin(q[0])*sin(q[2])*cos(q[1])*dq[0] + (1.0/2.0)*M_SQRT2*sin(q[0])*cos(q[1])*cos(q[2])*dq[2] + (1.0/2.0)*M_SQRT2*sin(q[1])*sin(q[2])*cos(q[0])*dq[1] + (1.0/2.0)*M_SQRT2*sin(q[2])*cos(q[0])*cos(q[1])*dq[0] - 1.0/2.0*M_SQRT2*cos(q[0])*cos(q[1])*cos(q[2])*dq[2];
   out_4191203732993869573[2] = -1.0/2.0*M_SQRT2*sin(q[0])*sin(q[1])*sin(q[2])*dq[2] + (1.0/2.0)*M_SQRT2*sin(q[0])*sin(q[1])*cos(q[2])*dq[0] + (1.0/2.0)*M_SQRT2*sin(q[0])*sin(q[2])*dq[0] + (1.0/2.0)*M_SQRT2*sin(q[0])*cos(q[1])*cos(q[2])*dq[1] - 1.0/2.0*M_SQRT2*sin(q[0])*cos(q[2])*dq[2] + (1.0/2.0)*M_SQRT2*sin(q[1])*sin(q[2])*cos(q[0])*dq[2] + (1.0/2.0)*M_SQRT2*sin(q[1])*cos(q[0])*cos(q[2])*dq[0] - 1.0/2.0*M_SQRT2*sin(q[2])*cos(q[0])*dq[0] - 1.0/2.0*M_SQRT2*cos(q[0])*cos(q[1])*cos(q[2])*dq[1] - 1.0/2.0*M_SQRT2*cos(q[0])*cos(q[2])*dq[2];
   out_4191203732993869573[3] = 0;
   out_4191203732993869573[4] = 0;
   out_4191203732993869573[5] = 0;
   out_4191203732993869573[6] = 0;
   out_4191203732993869573[7] = (1.0/2.0)*M_SQRT2*sin(q[0])*sin(q[1])*sin(q[2])*dq[0] + (1.0/2.0)*M_SQRT2*sin(q[0])*sin(q[1])*cos(q[2])*dq[2] + (1.0/2.0)*M_SQRT2*sin(q[0])*sin(q[2])*cos(q[1])*dq[1] - 1.0/2.0*M_SQRT2*sin(q[0])*sin(q[2])*dq[2] - 1.0/2.0*M_SQRT2*sin(q[0])*cos(q[2])*dq[0] + (1.0/2.0)*M_SQRT2*sin(q[1])*sin(q[2])*cos(q[0])*dq[0] - 1.0/2.0*M_SQRT2*sin(q[1])*cos(q[0])*cos(q[2])*dq[2] - 1.0/2.0*M_SQRT2*sin(q[2])*cos(q[0])*cos(q[1])*dq[1] - 1.0/2.0*M_SQRT2*sin(q[2])*cos(q[0])*dq[2] + (1.0/2.0)*M_SQRT2*cos(q[0])*cos(q[2])*dq[0];
   out_4191203732993869573[8] = (1.0/2.0)*M_SQRT2*sin(q[0])*sin(q[1])*sin(q[2])*dq[1] + (1.0/2.0)*M_SQRT2*sin(q[0])*sin(q[2])*cos(q[1])*dq[0] - 1.0/2.0*M_SQRT2*sin(q[0])*cos(q[1])*cos(q[2])*dq[2] + (1.0/2.0)*M_SQRT2*sin(q[1])*sin(q[2])*cos(q[0])*dq[1] - 1.0/2.0*M_SQRT2*sin(q[2])*cos(q[0])*cos(q[1])*dq[0] - 1.0/2.0*M_SQRT2*cos(q[0])*cos(q[1])*cos(q[2])*dq[2];
   out_4191203732993869573[9] = (1.0/2.0)*M_SQRT2*sin(q[0])*sin(q[1])*sin(q[2])*dq[2] + (1.0/2.0)*M_SQRT2*sin(q[0])*sin(q[1])*cos(q[2])*dq[0] - 1.0/2.0*M_SQRT2*sin(q[0])*sin(q[2])*dq[0] - 1.0/2.0*M_SQRT2*sin(q[0])*cos(q[1])*cos(q[2])*dq[1] - 1.0/2.0*M_SQRT2*sin(q[0])*cos(q[2])*dq[2] + (1.0/2.0)*M_SQRT2*sin(q[1])*sin(q[2])*cos(q[0])*dq[2] - 1.0/2.0*M_SQRT2*sin(q[1])*cos(q[0])*cos(q[2])*dq[0] - 1.0/2.0*M_SQRT2*sin(q[2])*cos(q[0])*dq[0] - 1.0/2.0*M_SQRT2*cos(q[0])*cos(q[1])*cos(q[2])*dq[1] + (1.0/2.0)*M_SQRT2*cos(q[0])*cos(q[2])*dq[2];
   out_4191203732993869573[10] = 0;
   out_4191203732993869573[11] = 0;
   out_4191203732993869573[12] = 0;
   out_4191203732993869573[13] = 0;
   out_4191203732993869573[14] = 0;
   out_4191203732993869573[15] = -sin(q[1])*cos(q[2])*dq[2] - sin(q[2])*cos(q[1])*dq[1];
   out_4191203732993869573[16] = -sin(q[1])*cos(q[2])*dq[1] - sin(q[2])*cos(q[1])*dq[2];
   out_4191203732993869573[17] = 0;
   out_4191203732993869573[18] = 0;
   out_4191203732993869573[19] = 0;
   out_4191203732993869573[20] = 0;

}
