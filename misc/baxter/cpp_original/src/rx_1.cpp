/******************************************************************************
 *                       Code generated with sympy 1.9                        *
 *                                                                            *
 *              See http://www.sympy.org/ for more information.               *
 *                                                                            *
 *                   This file is part of 'rx_1_BY_SYMPY_'                    *
 ******************************************************************************/
#include "rx_1.h"
#include <math.h>

void rx_1(double *q, double *out_5652337057248114643) {

   out_5652337057248114643[0] = -1.0/2.0*M_SQRT2*sin(q[0])*sin(q[1]) + (1.0/2.0)*M_SQRT2*sin(q[1])*cos(q[0]);
   out_5652337057248114643[1] = (1.0/2.0)*M_SQRT2*sin(q[0])*sin(q[1]) + (1.0/2.0)*M_SQRT2*sin(q[1])*cos(q[0]);
   out_5652337057248114643[2] = -cos(q[1]);

}
