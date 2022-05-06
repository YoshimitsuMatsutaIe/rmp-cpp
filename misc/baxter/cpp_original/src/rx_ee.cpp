/******************************************************************************
 *                       Code generated with sympy 1.9                        *
 *                                                                            *
 *              See http://www.sympy.org/ for more information.               *
 *                                                                            *
 *                   This file is part of 'rx_ee_BY_SYMPY_'                   *
 ******************************************************************************/
#include "rx_ee.h"
#include <math.h>

void rx_ee(double *q, double *out_4812808362129871804) {

   out_4812808362129871804[0] = (1.0/2.0)*M_SQRT2*sin(q[0])*sin(q[1])*sin(q[2])*sin(q[4])*cos(q[5])*cos(q[6]) + (1.0/2.0)*M_SQRT2*sin(q[0])*sin(q[1])*sin(q[2])*sin(q[6])*cos(q[4]) + (1.0/2.0)*M_SQRT2*sin(q[0])*sin(q[1])*sin(q[3])*sin(q[5])*cos(q[2])*cos(q[6]) + (1.0/2.0)*M_SQRT2*sin(q[0])*sin(q[1])*sin(q[4])*sin(q[6])*cos(q[2])*cos(q[3]) - 1.0/2.0*M_SQRT2*sin(q[0])*sin(q[1])*cos(q[2])*cos(q[3])*cos(q[4])*cos(q[5])*cos(q[6]) - 1.0/2.0*M_SQRT2*sin(q[0])*sin(q[2])*sin(q[3])*sin(q[5])*cos(q[6]) - 1.0/2.0*M_SQRT2*sin(q[0])*sin(q[2])*sin(q[4])*sin(q[6])*cos(q[3]) + (1.0/2.0)*M_SQRT2*sin(q[0])*sin(q[2])*cos(q[3])*cos(q[4])*cos(q[5])*cos(q[6]) + (1.0/2.0)*M_SQRT2*sin(q[0])*sin(q[3])*sin(q[4])*sin(q[6])*cos(q[1]) - 1.0/2.0*M_SQRT2*sin(q[0])*sin(q[3])*cos(q[1])*cos(q[4])*cos(q[5])*cos(q[6]) + (1.0/2.0)*M_SQRT2*sin(q[0])*sin(q[4])*cos(q[2])*cos(q[5])*cos(q[6]) - 1.0/2.0*M_SQRT2*sin(q[0])*sin(q[5])*cos(q[1])*cos(q[3])*cos(q[6]) + (1.0/2.0)*M_SQRT2*sin(q[0])*sin(q[6])*cos(q[2])*cos(q[4]) - 1.0/2.0*M_SQRT2*sin(q[1])*sin(q[2])*sin(q[4])*cos(q[0])*cos(q[5])*cos(q[6]) - 1.0/2.0*M_SQRT2*sin(q[1])*sin(q[2])*sin(q[6])*cos(q[0])*cos(q[4]) - 1.0/2.0*M_SQRT2*sin(q[1])*sin(q[3])*sin(q[5])*cos(q[0])*cos(q[2])*cos(q[6]) - 1.0/2.0*M_SQRT2*sin(q[1])*sin(q[4])*sin(q[6])*cos(q[0])*cos(q[2])*cos(q[3]) + (1.0/2.0)*M_SQRT2*sin(q[1])*cos(q[0])*cos(q[2])*cos(q[3])*cos(q[4])*cos(q[5])*cos(q[6]) - 1.0/2.0*M_SQRT2*sin(q[2])*sin(q[3])*sin(q[5])*cos(q[0])*cos(q[6]) - 1.0/2.0*M_SQRT2*sin(q[2])*sin(q[4])*sin(q[6])*cos(q[0])*cos(q[3]) + (1.0/2.0)*M_SQRT2*sin(q[2])*cos(q[0])*cos(q[3])*cos(q[4])*cos(q[5])*cos(q[6]) - 1.0/2.0*M_SQRT2*sin(q[3])*sin(q[4])*sin(q[6])*cos(q[0])*cos(q[1]) + (1.0/2.0)*M_SQRT2*sin(q[3])*cos(q[0])*cos(q[1])*cos(q[4])*cos(q[5])*cos(q[6]) + (1.0/2.0)*M_SQRT2*sin(q[4])*cos(q[0])*cos(q[2])*cos(q[5])*cos(q[6]) + (1.0/2.0)*M_SQRT2*sin(q[5])*cos(q[0])*cos(q[1])*cos(q[3])*cos(q[6]) + (1.0/2.0)*M_SQRT2*sin(q[6])*cos(q[0])*cos(q[2])*cos(q[4]);
   out_4812808362129871804[1] = -1.0/2.0*M_SQRT2*sin(q[0])*sin(q[1])*sin(q[2])*sin(q[4])*cos(q[5])*cos(q[6]) - 1.0/2.0*M_SQRT2*sin(q[0])*sin(q[1])*sin(q[2])*sin(q[6])*cos(q[4]) - 1.0/2.0*M_SQRT2*sin(q[0])*sin(q[1])*sin(q[3])*sin(q[5])*cos(q[2])*cos(q[6]) - 1.0/2.0*M_SQRT2*sin(q[0])*sin(q[1])*sin(q[4])*sin(q[6])*cos(q[2])*cos(q[3]) + (1.0/2.0)*M_SQRT2*sin(q[0])*sin(q[1])*cos(q[2])*cos(q[3])*cos(q[4])*cos(q[5])*cos(q[6]) - 1.0/2.0*M_SQRT2*sin(q[0])*sin(q[2])*sin(q[3])*sin(q[5])*cos(q[6]) - 1.0/2.0*M_SQRT2*sin(q[0])*sin(q[2])*sin(q[4])*sin(q[6])*cos(q[3]) + (1.0/2.0)*M_SQRT2*sin(q[0])*sin(q[2])*cos(q[3])*cos(q[4])*cos(q[5])*cos(q[6]) - 1.0/2.0*M_SQRT2*sin(q[0])*sin(q[3])*sin(q[4])*sin(q[6])*cos(q[1]) + (1.0/2.0)*M_SQRT2*sin(q[0])*sin(q[3])*cos(q[1])*cos(q[4])*cos(q[5])*cos(q[6]) + (1.0/2.0)*M_SQRT2*sin(q[0])*sin(q[4])*cos(q[2])*cos(q[5])*cos(q[6]) + (1.0/2.0)*M_SQRT2*sin(q[0])*sin(q[5])*cos(q[1])*cos(q[3])*cos(q[6]) + (1.0/2.0)*M_SQRT2*sin(q[0])*sin(q[6])*cos(q[2])*cos(q[4]) - 1.0/2.0*M_SQRT2*sin(q[1])*sin(q[2])*sin(q[4])*cos(q[0])*cos(q[5])*cos(q[6]) - 1.0/2.0*M_SQRT2*sin(q[1])*sin(q[2])*sin(q[6])*cos(q[0])*cos(q[4]) - 1.0/2.0*M_SQRT2*sin(q[1])*sin(q[3])*sin(q[5])*cos(q[0])*cos(q[2])*cos(q[6]) - 1.0/2.0*M_SQRT2*sin(q[1])*sin(q[4])*sin(q[6])*cos(q[0])*cos(q[2])*cos(q[3]) + (1.0/2.0)*M_SQRT2*sin(q[1])*cos(q[0])*cos(q[2])*cos(q[3])*cos(q[4])*cos(q[5])*cos(q[6]) + (1.0/2.0)*M_SQRT2*sin(q[2])*sin(q[3])*sin(q[5])*cos(q[0])*cos(q[6]) + (1.0/2.0)*M_SQRT2*sin(q[2])*sin(q[4])*sin(q[6])*cos(q[0])*cos(q[3]) - 1.0/2.0*M_SQRT2*sin(q[2])*cos(q[0])*cos(q[3])*cos(q[4])*cos(q[5])*cos(q[6]) - 1.0/2.0*M_SQRT2*sin(q[3])*sin(q[4])*sin(q[6])*cos(q[0])*cos(q[1]) + (1.0/2.0)*M_SQRT2*sin(q[3])*cos(q[0])*cos(q[1])*cos(q[4])*cos(q[5])*cos(q[6]) - 1.0/2.0*M_SQRT2*sin(q[4])*cos(q[0])*cos(q[2])*cos(q[5])*cos(q[6]) + (1.0/2.0)*M_SQRT2*sin(q[5])*cos(q[0])*cos(q[1])*cos(q[3])*cos(q[6]) - 1.0/2.0*M_SQRT2*sin(q[6])*cos(q[0])*cos(q[2])*cos(q[4]);
   out_4812808362129871804[2] = -sin(q[1])*sin(q[3])*sin(q[4])*sin(q[6]) + sin(q[1])*sin(q[3])*cos(q[4])*cos(q[5])*cos(q[6]) + sin(q[1])*sin(q[5])*cos(q[3])*cos(q[6]) + sin(q[2])*sin(q[4])*cos(q[1])*cos(q[5])*cos(q[6]) + sin(q[2])*sin(q[6])*cos(q[1])*cos(q[4]) + sin(q[3])*sin(q[5])*cos(q[1])*cos(q[2])*cos(q[6]) + sin(q[4])*sin(q[6])*cos(q[1])*cos(q[2])*cos(q[3]) - cos(q[1])*cos(q[2])*cos(q[3])*cos(q[4])*cos(q[5])*cos(q[6]);

}
