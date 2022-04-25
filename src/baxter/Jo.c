/******************************************************************************
 *                       Code generated with sympy 1.9                        *
 *                                                                            *
 *              See http://www.sympy.org/ for more information.               *
 *                                                                            *
 *                    This file is part of 'Jo_W0project'                     *
 ******************************************************************************/
#include "include/baxter/Jo.h"
#include <math.h>

void Jo_W0(double *out_394126202056194292) {

   out_394126202056194292[0] = 0;
   out_394126202056194292[1] = 0;
   out_394126202056194292[2] = 0;
   out_394126202056194292[3] = 0;
   out_394126202056194292[4] = 0;
   out_394126202056194292[5] = 0;
   out_394126202056194292[6] = 0;
   out_394126202056194292[7] = 0;
   out_394126202056194292[8] = 0;
   out_394126202056194292[9] = 0;
   out_394126202056194292[10] = 0;
   out_394126202056194292[11] = 0;
   out_394126202056194292[12] = 0;
   out_394126202056194292[13] = 0;
   out_394126202056194292[14] = 0;
   out_394126202056194292[15] = 0;
   out_394126202056194292[16] = 0;
   out_394126202056194292[17] = 0;
   out_394126202056194292[18] = 0;
   out_394126202056194292[19] = 0;
   out_394126202056194292[20] = 0;

}

void Jo_BR(double *out_394126202056194292) {

   out_394126202056194292[0] = 0;
   out_394126202056194292[1] = 0;
   out_394126202056194292[2] = 0;
   out_394126202056194292[3] = 0;
   out_394126202056194292[4] = 0;
   out_394126202056194292[5] = 0;
   out_394126202056194292[6] = 0;
   out_394126202056194292[7] = 0;
   out_394126202056194292[8] = 0;
   out_394126202056194292[9] = 0;
   out_394126202056194292[10] = 0;
   out_394126202056194292[11] = 0;
   out_394126202056194292[12] = 0;
   out_394126202056194292[13] = 0;
   out_394126202056194292[14] = 0;
   out_394126202056194292[15] = 0;
   out_394126202056194292[16] = 0;
   out_394126202056194292[17] = 0;
   out_394126202056194292[18] = 0;
   out_394126202056194292[19] = 0;
   out_394126202056194292[20] = 0;

}

void Jo_0(double *out_394126202056194292) {

   out_394126202056194292[0] = 0;
   out_394126202056194292[1] = 0;
   out_394126202056194292[2] = 0;
   out_394126202056194292[3] = 0;
   out_394126202056194292[4] = 0;
   out_394126202056194292[5] = 0;
   out_394126202056194292[6] = 0;
   out_394126202056194292[7] = 0;
   out_394126202056194292[8] = 0;
   out_394126202056194292[9] = 0;
   out_394126202056194292[10] = 0;
   out_394126202056194292[11] = 0;
   out_394126202056194292[12] = 0;
   out_394126202056194292[13] = 0;
   out_394126202056194292[14] = 0;
   out_394126202056194292[15] = 0;
   out_394126202056194292[16] = 0;
   out_394126202056194292[17] = 0;
   out_394126202056194292[18] = 0;
   out_394126202056194292[19] = 0;
   out_394126202056194292[20] = 0;

}

void Jo_1(double L1, double *q, double *out_1320776834828809369) {

   out_1320776834828809369[0] = L1*((1.0/2.0)*M_SQRT2*sin(q[0]) + (1.0/2.0)*M_SQRT2*cos(q[0]));
   out_1320776834828809369[1] = 0;
   out_1320776834828809369[2] = 0;
   out_1320776834828809369[3] = 0;
   out_1320776834828809369[4] = 0;
   out_1320776834828809369[5] = 0;
   out_1320776834828809369[6] = 0;
   out_1320776834828809369[7] = L1*((1.0/2.0)*M_SQRT2*sin(q[0]) - 1.0/2.0*M_SQRT2*cos(q[0]));
   out_1320776834828809369[8] = 0;
   out_1320776834828809369[9] = 0;
   out_1320776834828809369[10] = 0;
   out_1320776834828809369[11] = 0;
   out_1320776834828809369[12] = 0;
   out_1320776834828809369[13] = 0;
   out_1320776834828809369[14] = 0;
   out_1320776834828809369[15] = 0;
   out_1320776834828809369[16] = 0;
   out_1320776834828809369[17] = 0;
   out_1320776834828809369[18] = 0;
   out_1320776834828809369[19] = 0;
   out_1320776834828809369[20] = 0;

}



void Jo_2(double L1, double L2, double *q, double *out_9172016387374046643) {

   out_9172016387374046643[0] = L1*((1.0/2.0)*M_SQRT2*sin(q[0]) + (1.0/2.0)*M_SQRT2*cos(q[0])) + L2*((1.0/2.0)*M_SQRT2*sin(q[0]) + (1.0/2.0)*M_SQRT2*cos(q[0]))*cos(q[1]);
   out_9172016387374046643[1] = -L2*((1.0/2.0)*M_SQRT2*sin(q[0]) - 1.0/2.0*M_SQRT2*cos(q[0]))*sin(q[1]);
   out_9172016387374046643[2] = 0;
   out_9172016387374046643[3] = 0;
   out_9172016387374046643[4] = 0;
   out_9172016387374046643[5] = 0;
   out_9172016387374046643[6] = 0;
   out_9172016387374046643[7] = L1*((1.0/2.0)*M_SQRT2*sin(q[0]) - 1.0/2.0*M_SQRT2*cos(q[0])) + L2*((1.0/2.0)*M_SQRT2*sin(q[0]) - 1.0/2.0*M_SQRT2*cos(q[0]))*cos(q[1]);
   out_9172016387374046643[8] = -L2*(-1.0/2.0*M_SQRT2*sin(q[0]) - 1.0/2.0*M_SQRT2*cos(q[0]))*sin(q[1]);
   out_9172016387374046643[9] = 0;
   out_9172016387374046643[10] = 0;
   out_9172016387374046643[11] = 0;
   out_9172016387374046643[12] = 0;
   out_9172016387374046643[13] = 0;
   out_9172016387374046643[14] = 0;
   out_9172016387374046643[15] = -L2*cos(q[1]);
   out_9172016387374046643[16] = 0;
   out_9172016387374046643[17] = 0;
   out_9172016387374046643[18] = 0;
   out_9172016387374046643[19] = 0;
   out_9172016387374046643[20] = 0;

}

void Jo_3(double L1, double L2, double L3, double *q, double *out_1717051972807094754) {

   out_1717051972807094754[0] = L1*((1.0/2.0)*M_SQRT2*sin(q[0]) + (1.0/2.0)*M_SQRT2*cos(q[0])) + L2*((1.0/2.0)*M_SQRT2*sin(q[0]) + (1.0/2.0)*M_SQRT2*cos(q[0]))*cos(q[1]) + L3*((-1.0/2.0*M_SQRT2*sin(q[0]) - 1.0/2.0*M_SQRT2*cos(q[0]))*sin(q[1])*cos(q[2]) + (-1.0/2.0*M_SQRT2*sin(q[0]) + (1.0/2.0)*M_SQRT2*cos(q[0]))*sin(q[2]));
   out_1717051972807094754[1] = -L2*((1.0/2.0)*M_SQRT2*sin(q[0]) - 1.0/2.0*M_SQRT2*cos(q[0]))*sin(q[1]) + L3*(-1.0/2.0*M_SQRT2*sin(q[0]) + (1.0/2.0)*M_SQRT2*cos(q[0]))*cos(q[1])*cos(q[2]);
   out_1717051972807094754[2] = L3*(-(-1.0/2.0*M_SQRT2*sin(q[0]) + (1.0/2.0)*M_SQRT2*cos(q[0]))*sin(q[1])*sin(q[2]) + ((1.0/2.0)*M_SQRT2*sin(q[0]) + (1.0/2.0)*M_SQRT2*cos(q[0]))*cos(q[2]));
   out_1717051972807094754[3] = 0;
   out_1717051972807094754[4] = 0;
   out_1717051972807094754[5] = 0;
   out_1717051972807094754[6] = 0;
   out_1717051972807094754[7] = L1*((1.0/2.0)*M_SQRT2*sin(q[0]) - 1.0/2.0*M_SQRT2*cos(q[0])) + L2*((1.0/2.0)*M_SQRT2*sin(q[0]) - 1.0/2.0*M_SQRT2*cos(q[0]))*cos(q[1]) + L3*((-1.0/2.0*M_SQRT2*sin(q[0]) + (1.0/2.0)*M_SQRT2*cos(q[0]))*sin(q[1])*cos(q[2]) + ((1.0/2.0)*M_SQRT2*sin(q[0]) + (1.0/2.0)*M_SQRT2*cos(q[0]))*sin(q[2]));
   out_1717051972807094754[8] = -L2*(-1.0/2.0*M_SQRT2*sin(q[0]) - 1.0/2.0*M_SQRT2*cos(q[0]))*sin(q[1]) + L3*((1.0/2.0)*M_SQRT2*sin(q[0]) + (1.0/2.0)*M_SQRT2*cos(q[0]))*cos(q[1])*cos(q[2]);
   out_1717051972807094754[9] = L3*(((1.0/2.0)*M_SQRT2*sin(q[0]) - 1.0/2.0*M_SQRT2*cos(q[0]))*cos(q[2]) - ((1.0/2.0)*M_SQRT2*sin(q[0]) + (1.0/2.0)*M_SQRT2*cos(q[0]))*sin(q[1])*sin(q[2]));
   out_1717051972807094754[10] = 0;
   out_1717051972807094754[11] = 0;
   out_1717051972807094754[12] = 0;
   out_1717051972807094754[13] = 0;
   out_1717051972807094754[14] = 0;
   out_1717051972807094754[15] = -L2*cos(q[1]) + L3*sin(q[1])*cos(q[2]);
   out_1717051972807094754[16] = L3*sin(q[2])*cos(q[1]);
   out_1717051972807094754[17] = 0;
   out_1717051972807094754[18] = 0;
   out_1717051972807094754[19] = 0;
   out_1717051972807094754[20] = 0;

}


void Jo_4(double L1, double L2, double L3, double L4, double *q, double *out_2323389054714775258) {

   out_2323389054714775258[0] = L1*((1.0/2.0)*M_SQRT2*sin(q[0]) + (1.0/2.0)*M_SQRT2*cos(q[0])) + L2*((1.0/2.0)*M_SQRT2*sin(q[0]) + (1.0/2.0)*M_SQRT2*cos(q[0]))*cos(q[1]) + L3*((-1.0/2.0*M_SQRT2*sin(q[0]) - 1.0/2.0*M_SQRT2*cos(q[0]))*sin(q[1])*cos(q[2]) + (-1.0/2.0*M_SQRT2*sin(q[0]) + (1.0/2.0)*M_SQRT2*cos(q[0]))*sin(q[2])) - L4*((-1.0/2.0*M_SQRT2*sin(q[0]) - 1.0/2.0*M_SQRT2*cos(q[0]))*cos(q[1])*cos(q[3]) + (-(-1.0/2.0*M_SQRT2*sin(q[0]) - 1.0/2.0*M_SQRT2*cos(q[0]))*sin(q[1])*cos(q[2]) - (-1.0/2.0*M_SQRT2*sin(q[0]) + (1.0/2.0)*M_SQRT2*cos(q[0]))*sin(q[2]))*sin(q[3]));
   out_2323389054714775258[1] = -L2*((1.0/2.0)*M_SQRT2*sin(q[0]) - 1.0/2.0*M_SQRT2*cos(q[0]))*sin(q[1]) + L3*(-1.0/2.0*M_SQRT2*sin(q[0]) + (1.0/2.0)*M_SQRT2*cos(q[0]))*cos(q[1])*cos(q[2]) - L4*(-(-1.0/2.0*M_SQRT2*sin(q[0]) + (1.0/2.0)*M_SQRT2*cos(q[0]))*sin(q[1])*cos(q[3]) - (-1.0/2.0*M_SQRT2*sin(q[0]) + (1.0/2.0)*M_SQRT2*cos(q[0]))*sin(q[3])*cos(q[1])*cos(q[2]));
   out_2323389054714775258[2] = L3*(-(-1.0/2.0*M_SQRT2*sin(q[0]) + (1.0/2.0)*M_SQRT2*cos(q[0]))*sin(q[1])*sin(q[2]) + ((1.0/2.0)*M_SQRT2*sin(q[0]) + (1.0/2.0)*M_SQRT2*cos(q[0]))*cos(q[2])) - L4*((-1.0/2.0*M_SQRT2*sin(q[0]) + (1.0/2.0)*M_SQRT2*cos(q[0]))*sin(q[1])*sin(q[2]) - ((1.0/2.0)*M_SQRT2*sin(q[0]) + (1.0/2.0)*M_SQRT2*cos(q[0]))*cos(q[2]))*sin(q[3]);
   out_2323389054714775258[3] = -L4*(-(-1.0/2.0*M_SQRT2*sin(q[0]) + (1.0/2.0)*M_SQRT2*cos(q[0]))*sin(q[3])*cos(q[1]) + (((1.0/2.0)*M_SQRT2*sin(q[0]) - 1.0/2.0*M_SQRT2*cos(q[0]))*sin(q[1])*cos(q[2]) - ((1.0/2.0)*M_SQRT2*sin(q[0]) + (1.0/2.0)*M_SQRT2*cos(q[0]))*sin(q[2]))*cos(q[3]));
   out_2323389054714775258[4] = 0;
   out_2323389054714775258[5] = 0;
   out_2323389054714775258[6] = 0;
   out_2323389054714775258[7] = L1*((1.0/2.0)*M_SQRT2*sin(q[0]) - 1.0/2.0*M_SQRT2*cos(q[0])) + L2*((1.0/2.0)*M_SQRT2*sin(q[0]) - 1.0/2.0*M_SQRT2*cos(q[0]))*cos(q[1]) + L3*((-1.0/2.0*M_SQRT2*sin(q[0]) + (1.0/2.0)*M_SQRT2*cos(q[0]))*sin(q[1])*cos(q[2]) + ((1.0/2.0)*M_SQRT2*sin(q[0]) + (1.0/2.0)*M_SQRT2*cos(q[0]))*sin(q[2])) - L4*((-1.0/2.0*M_SQRT2*sin(q[0]) + (1.0/2.0)*M_SQRT2*cos(q[0]))*cos(q[1])*cos(q[3]) + (-(-1.0/2.0*M_SQRT2*sin(q[0]) + (1.0/2.0)*M_SQRT2*cos(q[0]))*sin(q[1])*cos(q[2]) - ((1.0/2.0)*M_SQRT2*sin(q[0]) + (1.0/2.0)*M_SQRT2*cos(q[0]))*sin(q[2]))*sin(q[3]));
   out_2323389054714775258[8] = -L2*(-1.0/2.0*M_SQRT2*sin(q[0]) - 1.0/2.0*M_SQRT2*cos(q[0]))*sin(q[1]) + L3*((1.0/2.0)*M_SQRT2*sin(q[0]) + (1.0/2.0)*M_SQRT2*cos(q[0]))*cos(q[1])*cos(q[2]) - L4*(-((1.0/2.0)*M_SQRT2*sin(q[0]) + (1.0/2.0)*M_SQRT2*cos(q[0]))*sin(q[1])*cos(q[3]) - ((1.0/2.0)*M_SQRT2*sin(q[0]) + (1.0/2.0)*M_SQRT2*cos(q[0]))*sin(q[3])*cos(q[1])*cos(q[2]));
   out_2323389054714775258[9] = L3*(((1.0/2.0)*M_SQRT2*sin(q[0]) - 1.0/2.0*M_SQRT2*cos(q[0]))*cos(q[2]) - ((1.0/2.0)*M_SQRT2*sin(q[0]) + (1.0/2.0)*M_SQRT2*cos(q[0]))*sin(q[1])*sin(q[2])) - L4*(-((1.0/2.0)*M_SQRT2*sin(q[0]) - 1.0/2.0*M_SQRT2*cos(q[0]))*cos(q[2]) + ((1.0/2.0)*M_SQRT2*sin(q[0]) + (1.0/2.0)*M_SQRT2*cos(q[0]))*sin(q[1])*sin(q[2]))*sin(q[3]);
   out_2323389054714775258[10] = -L4*(-((1.0/2.0)*M_SQRT2*sin(q[0]) + (1.0/2.0)*M_SQRT2*cos(q[0]))*sin(q[3])*cos(q[1]) + ((-1.0/2.0*M_SQRT2*sin(q[0]) - 1.0/2.0*M_SQRT2*cos(q[0]))*sin(q[1])*cos(q[2]) - ((1.0/2.0)*M_SQRT2*sin(q[0]) - 1.0/2.0*M_SQRT2*cos(q[0]))*sin(q[2]))*cos(q[3]));
   out_2323389054714775258[11] = 0;
   out_2323389054714775258[12] = 0;
   out_2323389054714775258[13] = 0;
   out_2323389054714775258[14] = 0;
   out_2323389054714775258[15] = -L2*cos(q[1]) + L3*sin(q[1])*cos(q[2]) - L4*(-sin(q[1])*sin(q[3])*cos(q[2]) + cos(q[1])*cos(q[3]));
   out_2323389054714775258[16] = L3*sin(q[2])*cos(q[1]) + L4*sin(q[2])*sin(q[3])*cos(q[1]);
   out_2323389054714775258[17] = -L4*(-sin(q[1])*sin(q[3]) + cos(q[1])*cos(q[2])*cos(q[3]));
   out_2323389054714775258[18] = 0;
   out_2323389054714775258[19] = 0;
   out_2323389054714775258[20] = 0;

}


void Jo_5(double L1, double L2, double L3, double L4, double L5, double *q, double *out_7406736178574535206) {

   out_7406736178574535206[0] = L1*((1.0/2.0)*M_SQRT2*sin(q[0]) + (1.0/2.0)*M_SQRT2*cos(q[0])) + L2*((1.0/2.0)*M_SQRT2*sin(q[0]) + (1.0/2.0)*M_SQRT2*cos(q[0]))*cos(q[1]) + L3*((-1.0/2.0*M_SQRT2*sin(q[0]) - 1.0/2.0*M_SQRT2*cos(q[0]))*sin(q[1])*cos(q[2]) + (-1.0/2.0*M_SQRT2*sin(q[0]) + (1.0/2.0)*M_SQRT2*cos(q[0]))*sin(q[2])) - L4*((-1.0/2.0*M_SQRT2*sin(q[0]) - 1.0/2.0*M_SQRT2*cos(q[0]))*cos(q[1])*cos(q[3]) + (-(-1.0/2.0*M_SQRT2*sin(q[0]) - 1.0/2.0*M_SQRT2*cos(q[0]))*sin(q[1])*cos(q[2]) - (-1.0/2.0*M_SQRT2*sin(q[0]) + (1.0/2.0)*M_SQRT2*cos(q[0]))*sin(q[2]))*sin(q[3])) + L5*(((-1.0/2.0*M_SQRT2*sin(q[0]) + (1.0/2.0)*M_SQRT2*cos(q[0]))*cos(q[2]) + ((1.0/2.0)*M_SQRT2*sin(q[0]) + (1.0/2.0)*M_SQRT2*cos(q[0]))*sin(q[1])*sin(q[2]))*sin(q[4]) + ((-1.0/2.0*M_SQRT2*sin(q[0]) - 1.0/2.0*M_SQRT2*cos(q[0]))*sin(q[3])*cos(q[1]) + ((-1.0/2.0*M_SQRT2*sin(q[0]) - 1.0/2.0*M_SQRT2*cos(q[0]))*sin(q[1])*cos(q[2]) + (-1.0/2.0*M_SQRT2*sin(q[0]) + (1.0/2.0)*M_SQRT2*cos(q[0]))*sin(q[2]))*cos(q[3]))*cos(q[4]));
   out_7406736178574535206[1] = -L2*((1.0/2.0)*M_SQRT2*sin(q[0]) - 1.0/2.0*M_SQRT2*cos(q[0]))*sin(q[1]) + L3*(-1.0/2.0*M_SQRT2*sin(q[0]) + (1.0/2.0)*M_SQRT2*cos(q[0]))*cos(q[1])*cos(q[2]) - L4*(-(-1.0/2.0*M_SQRT2*sin(q[0]) + (1.0/2.0)*M_SQRT2*cos(q[0]))*sin(q[1])*cos(q[3]) - (-1.0/2.0*M_SQRT2*sin(q[0]) + (1.0/2.0)*M_SQRT2*cos(q[0]))*sin(q[3])*cos(q[1])*cos(q[2])) + L5*(((1.0/2.0)*M_SQRT2*sin(q[0]) - 1.0/2.0*M_SQRT2*cos(q[0]))*sin(q[2])*sin(q[4])*cos(q[1]) + (-(-1.0/2.0*M_SQRT2*sin(q[0]) + (1.0/2.0)*M_SQRT2*cos(q[0]))*sin(q[1])*sin(q[3]) + (-1.0/2.0*M_SQRT2*sin(q[0]) + (1.0/2.0)*M_SQRT2*cos(q[0]))*cos(q[1])*cos(q[2])*cos(q[3]))*cos(q[4]));
   out_7406736178574535206[2] = L3*(-(-1.0/2.0*M_SQRT2*sin(q[0]) + (1.0/2.0)*M_SQRT2*cos(q[0]))*sin(q[1])*sin(q[2]) + ((1.0/2.0)*M_SQRT2*sin(q[0]) + (1.0/2.0)*M_SQRT2*cos(q[0]))*cos(q[2])) - L4*((-1.0/2.0*M_SQRT2*sin(q[0]) + (1.0/2.0)*M_SQRT2*cos(q[0]))*sin(q[1])*sin(q[2]) - ((1.0/2.0)*M_SQRT2*sin(q[0]) + (1.0/2.0)*M_SQRT2*cos(q[0]))*cos(q[2]))*sin(q[3]) + L5*((-(-1.0/2.0*M_SQRT2*sin(q[0]) + (1.0/2.0)*M_SQRT2*cos(q[0]))*sin(q[1])*sin(q[2]) + ((1.0/2.0)*M_SQRT2*sin(q[0]) + (1.0/2.0)*M_SQRT2*cos(q[0]))*cos(q[2]))*cos(q[3])*cos(q[4]) + (((1.0/2.0)*M_SQRT2*sin(q[0]) - 1.0/2.0*M_SQRT2*cos(q[0]))*sin(q[1])*cos(q[2]) - ((1.0/2.0)*M_SQRT2*sin(q[0]) + (1.0/2.0)*M_SQRT2*cos(q[0]))*sin(q[2]))*sin(q[4]));
   out_7406736178574535206[3] = -L4*(-(-1.0/2.0*M_SQRT2*sin(q[0]) + (1.0/2.0)*M_SQRT2*cos(q[0]))*sin(q[3])*cos(q[1]) + (((1.0/2.0)*M_SQRT2*sin(q[0]) - 1.0/2.0*M_SQRT2*cos(q[0]))*sin(q[1])*cos(q[2]) - ((1.0/2.0)*M_SQRT2*sin(q[0]) + (1.0/2.0)*M_SQRT2*cos(q[0]))*sin(q[2]))*cos(q[3])) + L5*((-1.0/2.0*M_SQRT2*sin(q[0]) + (1.0/2.0)*M_SQRT2*cos(q[0]))*cos(q[1])*cos(q[3]) - (-((1.0/2.0)*M_SQRT2*sin(q[0]) - 1.0/2.0*M_SQRT2*cos(q[0]))*sin(q[1])*cos(q[2]) + ((1.0/2.0)*M_SQRT2*sin(q[0]) + (1.0/2.0)*M_SQRT2*cos(q[0]))*sin(q[2]))*sin(q[3]))*cos(q[4]);
   out_7406736178574535206[4] = L5*((((1.0/2.0)*M_SQRT2*sin(q[0]) - 1.0/2.0*M_SQRT2*cos(q[0]))*sin(q[1])*sin(q[2]) + ((1.0/2.0)*M_SQRT2*sin(q[0]) + (1.0/2.0)*M_SQRT2*cos(q[0]))*cos(q[2]))*cos(q[4]) - (-((1.0/2.0)*M_SQRT2*sin(q[0]) - 1.0/2.0*M_SQRT2*cos(q[0]))*sin(q[3])*cos(q[1]) + (-((1.0/2.0)*M_SQRT2*sin(q[0]) - 1.0/2.0*M_SQRT2*cos(q[0]))*sin(q[1])*cos(q[2]) + ((1.0/2.0)*M_SQRT2*sin(q[0]) + (1.0/2.0)*M_SQRT2*cos(q[0]))*sin(q[2]))*cos(q[3]))*sin(q[4]));
   out_7406736178574535206[5] = 0;
   out_7406736178574535206[6] = 0;
   out_7406736178574535206[7] = L1*((1.0/2.0)*M_SQRT2*sin(q[0]) - 1.0/2.0*M_SQRT2*cos(q[0])) + L2*((1.0/2.0)*M_SQRT2*sin(q[0]) - 1.0/2.0*M_SQRT2*cos(q[0]))*cos(q[1]) + L3*((-1.0/2.0*M_SQRT2*sin(q[0]) + (1.0/2.0)*M_SQRT2*cos(q[0]))*sin(q[1])*cos(q[2]) + ((1.0/2.0)*M_SQRT2*sin(q[0]) + (1.0/2.0)*M_SQRT2*cos(q[0]))*sin(q[2])) - L4*((-1.0/2.0*M_SQRT2*sin(q[0]) + (1.0/2.0)*M_SQRT2*cos(q[0]))*cos(q[1])*cos(q[3]) + (-(-1.0/2.0*M_SQRT2*sin(q[0]) + (1.0/2.0)*M_SQRT2*cos(q[0]))*sin(q[1])*cos(q[2]) - ((1.0/2.0)*M_SQRT2*sin(q[0]) + (1.0/2.0)*M_SQRT2*cos(q[0]))*sin(q[2]))*sin(q[3])) + L5*(((-1.0/2.0*M_SQRT2*sin(q[0]) + (1.0/2.0)*M_SQRT2*cos(q[0]))*sin(q[3])*cos(q[1]) + ((-1.0/2.0*M_SQRT2*sin(q[0]) + (1.0/2.0)*M_SQRT2*cos(q[0]))*sin(q[1])*cos(q[2]) + ((1.0/2.0)*M_SQRT2*sin(q[0]) + (1.0/2.0)*M_SQRT2*cos(q[0]))*sin(q[2]))*cos(q[3]))*cos(q[4]) + (((1.0/2.0)*M_SQRT2*sin(q[0]) - 1.0/2.0*M_SQRT2*cos(q[0]))*sin(q[1])*sin(q[2]) + ((1.0/2.0)*M_SQRT2*sin(q[0]) + (1.0/2.0)*M_SQRT2*cos(q[0]))*cos(q[2]))*sin(q[4]));
   out_7406736178574535206[8] = -L2*(-1.0/2.0*M_SQRT2*sin(q[0]) - 1.0/2.0*M_SQRT2*cos(q[0]))*sin(q[1]) + L3*((1.0/2.0)*M_SQRT2*sin(q[0]) + (1.0/2.0)*M_SQRT2*cos(q[0]))*cos(q[1])*cos(q[2]) - L4*(-((1.0/2.0)*M_SQRT2*sin(q[0]) + (1.0/2.0)*M_SQRT2*cos(q[0]))*sin(q[1])*cos(q[3]) - ((1.0/2.0)*M_SQRT2*sin(q[0]) + (1.0/2.0)*M_SQRT2*cos(q[0]))*sin(q[3])*cos(q[1])*cos(q[2])) + L5*((-1.0/2.0*M_SQRT2*sin(q[0]) - 1.0/2.0*M_SQRT2*cos(q[0]))*sin(q[2])*sin(q[4])*cos(q[1]) + (-((1.0/2.0)*M_SQRT2*sin(q[0]) + (1.0/2.0)*M_SQRT2*cos(q[0]))*sin(q[1])*sin(q[3]) + ((1.0/2.0)*M_SQRT2*sin(q[0]) + (1.0/2.0)*M_SQRT2*cos(q[0]))*cos(q[1])*cos(q[2])*cos(q[3]))*cos(q[4]));
   out_7406736178574535206[9] = L3*(((1.0/2.0)*M_SQRT2*sin(q[0]) - 1.0/2.0*M_SQRT2*cos(q[0]))*cos(q[2]) - ((1.0/2.0)*M_SQRT2*sin(q[0]) + (1.0/2.0)*M_SQRT2*cos(q[0]))*sin(q[1])*sin(q[2])) - L4*(-((1.0/2.0)*M_SQRT2*sin(q[0]) - 1.0/2.0*M_SQRT2*cos(q[0]))*cos(q[2]) + ((1.0/2.0)*M_SQRT2*sin(q[0]) + (1.0/2.0)*M_SQRT2*cos(q[0]))*sin(q[1])*sin(q[2]))*sin(q[3]) + L5*((((1.0/2.0)*M_SQRT2*sin(q[0]) - 1.0/2.0*M_SQRT2*cos(q[0]))*cos(q[2]) - ((1.0/2.0)*M_SQRT2*sin(q[0]) + (1.0/2.0)*M_SQRT2*cos(q[0]))*sin(q[1])*sin(q[2]))*cos(q[3])*cos(q[4]) + ((-1.0/2.0*M_SQRT2*sin(q[0]) - 1.0/2.0*M_SQRT2*cos(q[0]))*sin(q[1])*cos(q[2]) - ((1.0/2.0)*M_SQRT2*sin(q[0]) - 1.0/2.0*M_SQRT2*cos(q[0]))*sin(q[2]))*sin(q[4]));
   out_7406736178574535206[10] = -L4*(-((1.0/2.0)*M_SQRT2*sin(q[0]) + (1.0/2.0)*M_SQRT2*cos(q[0]))*sin(q[3])*cos(q[1]) + ((-1.0/2.0*M_SQRT2*sin(q[0]) - 1.0/2.0*M_SQRT2*cos(q[0]))*sin(q[1])*cos(q[2]) - ((1.0/2.0)*M_SQRT2*sin(q[0]) - 1.0/2.0*M_SQRT2*cos(q[0]))*sin(q[2]))*cos(q[3])) + L5*(((1.0/2.0)*M_SQRT2*sin(q[0]) + (1.0/2.0)*M_SQRT2*cos(q[0]))*cos(q[1])*cos(q[3]) - (-(-1.0/2.0*M_SQRT2*sin(q[0]) - 1.0/2.0*M_SQRT2*cos(q[0]))*sin(q[1])*cos(q[2]) + ((1.0/2.0)*M_SQRT2*sin(q[0]) - 1.0/2.0*M_SQRT2*cos(q[0]))*sin(q[2]))*sin(q[3]))*cos(q[4]);
   out_7406736178574535206[11] = L5*(((-1.0/2.0*M_SQRT2*sin(q[0]) - 1.0/2.0*M_SQRT2*cos(q[0]))*sin(q[1])*sin(q[2]) + ((1.0/2.0)*M_SQRT2*sin(q[0]) - 1.0/2.0*M_SQRT2*cos(q[0]))*cos(q[2]))*cos(q[4]) - (-(-1.0/2.0*M_SQRT2*sin(q[0]) - 1.0/2.0*M_SQRT2*cos(q[0]))*sin(q[3])*cos(q[1]) + (-(-1.0/2.0*M_SQRT2*sin(q[0]) - 1.0/2.0*M_SQRT2*cos(q[0]))*sin(q[1])*cos(q[2]) + ((1.0/2.0)*M_SQRT2*sin(q[0]) - 1.0/2.0*M_SQRT2*cos(q[0]))*sin(q[2]))*cos(q[3]))*sin(q[4]));
   out_7406736178574535206[12] = 0;
   out_7406736178574535206[13] = 0;
   out_7406736178574535206[14] = 0;
   out_7406736178574535206[15] = -L2*cos(q[1]) + L3*sin(q[1])*cos(q[2]) - L4*(-sin(q[1])*sin(q[3])*cos(q[2]) + cos(q[1])*cos(q[3])) + L5*((sin(q[1])*cos(q[2])*cos(q[3]) + sin(q[3])*cos(q[1]))*cos(q[4]) - sin(q[1])*sin(q[2])*sin(q[4]));
   out_7406736178574535206[16] = L3*sin(q[2])*cos(q[1]) + L4*sin(q[2])*sin(q[3])*cos(q[1]) + L5*(sin(q[2])*cos(q[1])*cos(q[3])*cos(q[4]) + sin(q[4])*cos(q[1])*cos(q[2]));
   out_7406736178574535206[17] = -L4*(-sin(q[1])*sin(q[3]) + cos(q[1])*cos(q[2])*cos(q[3])) + L5*(sin(q[1])*cos(q[3]) + sin(q[3])*cos(q[1])*cos(q[2]))*cos(q[4]);
   out_7406736178574535206[18] = L5*(-(sin(q[1])*sin(q[3]) - cos(q[1])*cos(q[2])*cos(q[3]))*sin(q[4]) + sin(q[2])*cos(q[1])*cos(q[4]));
   out_7406736178574535206[19] = 0;
   out_7406736178574535206[20] = 0;

}


void Jo_6(double L1, double L2, double L3, double L4, double L5, double *q, double *out_7406736178574535206) {

   out_7406736178574535206[0] = L1*((1.0/2.0)*M_SQRT2*sin(q[0]) + (1.0/2.0)*M_SQRT2*cos(q[0])) + L2*((1.0/2.0)*M_SQRT2*sin(q[0]) + (1.0/2.0)*M_SQRT2*cos(q[0]))*cos(q[1]) + L3*((-1.0/2.0*M_SQRT2*sin(q[0]) - 1.0/2.0*M_SQRT2*cos(q[0]))*sin(q[1])*cos(q[2]) + (-1.0/2.0*M_SQRT2*sin(q[0]) + (1.0/2.0)*M_SQRT2*cos(q[0]))*sin(q[2])) - L4*((-1.0/2.0*M_SQRT2*sin(q[0]) - 1.0/2.0*M_SQRT2*cos(q[0]))*cos(q[1])*cos(q[3]) + (-(-1.0/2.0*M_SQRT2*sin(q[0]) - 1.0/2.0*M_SQRT2*cos(q[0]))*sin(q[1])*cos(q[2]) - (-1.0/2.0*M_SQRT2*sin(q[0]) + (1.0/2.0)*M_SQRT2*cos(q[0]))*sin(q[2]))*sin(q[3])) + L5*(((-1.0/2.0*M_SQRT2*sin(q[0]) + (1.0/2.0)*M_SQRT2*cos(q[0]))*cos(q[2]) + ((1.0/2.0)*M_SQRT2*sin(q[0]) + (1.0/2.0)*M_SQRT2*cos(q[0]))*sin(q[1])*sin(q[2]))*sin(q[4]) + ((-1.0/2.0*M_SQRT2*sin(q[0]) - 1.0/2.0*M_SQRT2*cos(q[0]))*sin(q[3])*cos(q[1]) + ((-1.0/2.0*M_SQRT2*sin(q[0]) - 1.0/2.0*M_SQRT2*cos(q[0]))*sin(q[1])*cos(q[2]) + (-1.0/2.0*M_SQRT2*sin(q[0]) + (1.0/2.0)*M_SQRT2*cos(q[0]))*sin(q[2]))*cos(q[3]))*cos(q[4]));
   out_7406736178574535206[1] = -L2*((1.0/2.0)*M_SQRT2*sin(q[0]) - 1.0/2.0*M_SQRT2*cos(q[0]))*sin(q[1]) + L3*(-1.0/2.0*M_SQRT2*sin(q[0]) + (1.0/2.0)*M_SQRT2*cos(q[0]))*cos(q[1])*cos(q[2]) - L4*(-(-1.0/2.0*M_SQRT2*sin(q[0]) + (1.0/2.0)*M_SQRT2*cos(q[0]))*sin(q[1])*cos(q[3]) - (-1.0/2.0*M_SQRT2*sin(q[0]) + (1.0/2.0)*M_SQRT2*cos(q[0]))*sin(q[3])*cos(q[1])*cos(q[2])) + L5*(((1.0/2.0)*M_SQRT2*sin(q[0]) - 1.0/2.0*M_SQRT2*cos(q[0]))*sin(q[2])*sin(q[4])*cos(q[1]) + (-(-1.0/2.0*M_SQRT2*sin(q[0]) + (1.0/2.0)*M_SQRT2*cos(q[0]))*sin(q[1])*sin(q[3]) + (-1.0/2.0*M_SQRT2*sin(q[0]) + (1.0/2.0)*M_SQRT2*cos(q[0]))*cos(q[1])*cos(q[2])*cos(q[3]))*cos(q[4]));
   out_7406736178574535206[2] = L3*(-(-1.0/2.0*M_SQRT2*sin(q[0]) + (1.0/2.0)*M_SQRT2*cos(q[0]))*sin(q[1])*sin(q[2]) + ((1.0/2.0)*M_SQRT2*sin(q[0]) + (1.0/2.0)*M_SQRT2*cos(q[0]))*cos(q[2])) - L4*((-1.0/2.0*M_SQRT2*sin(q[0]) + (1.0/2.0)*M_SQRT2*cos(q[0]))*sin(q[1])*sin(q[2]) - ((1.0/2.0)*M_SQRT2*sin(q[0]) + (1.0/2.0)*M_SQRT2*cos(q[0]))*cos(q[2]))*sin(q[3]) + L5*((-(-1.0/2.0*M_SQRT2*sin(q[0]) + (1.0/2.0)*M_SQRT2*cos(q[0]))*sin(q[1])*sin(q[2]) + ((1.0/2.0)*M_SQRT2*sin(q[0]) + (1.0/2.0)*M_SQRT2*cos(q[0]))*cos(q[2]))*cos(q[3])*cos(q[4]) + (((1.0/2.0)*M_SQRT2*sin(q[0]) - 1.0/2.0*M_SQRT2*cos(q[0]))*sin(q[1])*cos(q[2]) - ((1.0/2.0)*M_SQRT2*sin(q[0]) + (1.0/2.0)*M_SQRT2*cos(q[0]))*sin(q[2]))*sin(q[4]));
   out_7406736178574535206[3] = -L4*(-(-1.0/2.0*M_SQRT2*sin(q[0]) + (1.0/2.0)*M_SQRT2*cos(q[0]))*sin(q[3])*cos(q[1]) + (((1.0/2.0)*M_SQRT2*sin(q[0]) - 1.0/2.0*M_SQRT2*cos(q[0]))*sin(q[1])*cos(q[2]) - ((1.0/2.0)*M_SQRT2*sin(q[0]) + (1.0/2.0)*M_SQRT2*cos(q[0]))*sin(q[2]))*cos(q[3])) + L5*((-1.0/2.0*M_SQRT2*sin(q[0]) + (1.0/2.0)*M_SQRT2*cos(q[0]))*cos(q[1])*cos(q[3]) - (-((1.0/2.0)*M_SQRT2*sin(q[0]) - 1.0/2.0*M_SQRT2*cos(q[0]))*sin(q[1])*cos(q[2]) + ((1.0/2.0)*M_SQRT2*sin(q[0]) + (1.0/2.0)*M_SQRT2*cos(q[0]))*sin(q[2]))*sin(q[3]))*cos(q[4]);
   out_7406736178574535206[4] = L5*((((1.0/2.0)*M_SQRT2*sin(q[0]) - 1.0/2.0*M_SQRT2*cos(q[0]))*sin(q[1])*sin(q[2]) + ((1.0/2.0)*M_SQRT2*sin(q[0]) + (1.0/2.0)*M_SQRT2*cos(q[0]))*cos(q[2]))*cos(q[4]) - (-((1.0/2.0)*M_SQRT2*sin(q[0]) - 1.0/2.0*M_SQRT2*cos(q[0]))*sin(q[3])*cos(q[1]) + (-((1.0/2.0)*M_SQRT2*sin(q[0]) - 1.0/2.0*M_SQRT2*cos(q[0]))*sin(q[1])*cos(q[2]) + ((1.0/2.0)*M_SQRT2*sin(q[0]) + (1.0/2.0)*M_SQRT2*cos(q[0]))*sin(q[2]))*cos(q[3]))*sin(q[4]));
   out_7406736178574535206[5] = 0;
   out_7406736178574535206[6] = 0;
   out_7406736178574535206[7] = L1*((1.0/2.0)*M_SQRT2*sin(q[0]) - 1.0/2.0*M_SQRT2*cos(q[0])) + L2*((1.0/2.0)*M_SQRT2*sin(q[0]) - 1.0/2.0*M_SQRT2*cos(q[0]))*cos(q[1]) + L3*((-1.0/2.0*M_SQRT2*sin(q[0]) + (1.0/2.0)*M_SQRT2*cos(q[0]))*sin(q[1])*cos(q[2]) + ((1.0/2.0)*M_SQRT2*sin(q[0]) + (1.0/2.0)*M_SQRT2*cos(q[0]))*sin(q[2])) - L4*((-1.0/2.0*M_SQRT2*sin(q[0]) + (1.0/2.0)*M_SQRT2*cos(q[0]))*cos(q[1])*cos(q[3]) + (-(-1.0/2.0*M_SQRT2*sin(q[0]) + (1.0/2.0)*M_SQRT2*cos(q[0]))*sin(q[1])*cos(q[2]) - ((1.0/2.0)*M_SQRT2*sin(q[0]) + (1.0/2.0)*M_SQRT2*cos(q[0]))*sin(q[2]))*sin(q[3])) + L5*(((-1.0/2.0*M_SQRT2*sin(q[0]) + (1.0/2.0)*M_SQRT2*cos(q[0]))*sin(q[3])*cos(q[1]) + ((-1.0/2.0*M_SQRT2*sin(q[0]) + (1.0/2.0)*M_SQRT2*cos(q[0]))*sin(q[1])*cos(q[2]) + ((1.0/2.0)*M_SQRT2*sin(q[0]) + (1.0/2.0)*M_SQRT2*cos(q[0]))*sin(q[2]))*cos(q[3]))*cos(q[4]) + (((1.0/2.0)*M_SQRT2*sin(q[0]) - 1.0/2.0*M_SQRT2*cos(q[0]))*sin(q[1])*sin(q[2]) + ((1.0/2.0)*M_SQRT2*sin(q[0]) + (1.0/2.0)*M_SQRT2*cos(q[0]))*cos(q[2]))*sin(q[4]));
   out_7406736178574535206[8] = -L2*(-1.0/2.0*M_SQRT2*sin(q[0]) - 1.0/2.0*M_SQRT2*cos(q[0]))*sin(q[1]) + L3*((1.0/2.0)*M_SQRT2*sin(q[0]) + (1.0/2.0)*M_SQRT2*cos(q[0]))*cos(q[1])*cos(q[2]) - L4*(-((1.0/2.0)*M_SQRT2*sin(q[0]) + (1.0/2.0)*M_SQRT2*cos(q[0]))*sin(q[1])*cos(q[3]) - ((1.0/2.0)*M_SQRT2*sin(q[0]) + (1.0/2.0)*M_SQRT2*cos(q[0]))*sin(q[3])*cos(q[1])*cos(q[2])) + L5*((-1.0/2.0*M_SQRT2*sin(q[0]) - 1.0/2.0*M_SQRT2*cos(q[0]))*sin(q[2])*sin(q[4])*cos(q[1]) + (-((1.0/2.0)*M_SQRT2*sin(q[0]) + (1.0/2.0)*M_SQRT2*cos(q[0]))*sin(q[1])*sin(q[3]) + ((1.0/2.0)*M_SQRT2*sin(q[0]) + (1.0/2.0)*M_SQRT2*cos(q[0]))*cos(q[1])*cos(q[2])*cos(q[3]))*cos(q[4]));
   out_7406736178574535206[9] = L3*(((1.0/2.0)*M_SQRT2*sin(q[0]) - 1.0/2.0*M_SQRT2*cos(q[0]))*cos(q[2]) - ((1.0/2.0)*M_SQRT2*sin(q[0]) + (1.0/2.0)*M_SQRT2*cos(q[0]))*sin(q[1])*sin(q[2])) - L4*(-((1.0/2.0)*M_SQRT2*sin(q[0]) - 1.0/2.0*M_SQRT2*cos(q[0]))*cos(q[2]) + ((1.0/2.0)*M_SQRT2*sin(q[0]) + (1.0/2.0)*M_SQRT2*cos(q[0]))*sin(q[1])*sin(q[2]))*sin(q[3]) + L5*((((1.0/2.0)*M_SQRT2*sin(q[0]) - 1.0/2.0*M_SQRT2*cos(q[0]))*cos(q[2]) - ((1.0/2.0)*M_SQRT2*sin(q[0]) + (1.0/2.0)*M_SQRT2*cos(q[0]))*sin(q[1])*sin(q[2]))*cos(q[3])*cos(q[4]) + ((-1.0/2.0*M_SQRT2*sin(q[0]) - 1.0/2.0*M_SQRT2*cos(q[0]))*sin(q[1])*cos(q[2]) - ((1.0/2.0)*M_SQRT2*sin(q[0]) - 1.0/2.0*M_SQRT2*cos(q[0]))*sin(q[2]))*sin(q[4]));
   out_7406736178574535206[10] = -L4*(-((1.0/2.0)*M_SQRT2*sin(q[0]) + (1.0/2.0)*M_SQRT2*cos(q[0]))*sin(q[3])*cos(q[1]) + ((-1.0/2.0*M_SQRT2*sin(q[0]) - 1.0/2.0*M_SQRT2*cos(q[0]))*sin(q[1])*cos(q[2]) - ((1.0/2.0)*M_SQRT2*sin(q[0]) - 1.0/2.0*M_SQRT2*cos(q[0]))*sin(q[2]))*cos(q[3])) + L5*(((1.0/2.0)*M_SQRT2*sin(q[0]) + (1.0/2.0)*M_SQRT2*cos(q[0]))*cos(q[1])*cos(q[3]) - (-(-1.0/2.0*M_SQRT2*sin(q[0]) - 1.0/2.0*M_SQRT2*cos(q[0]))*sin(q[1])*cos(q[2]) + ((1.0/2.0)*M_SQRT2*sin(q[0]) - 1.0/2.0*M_SQRT2*cos(q[0]))*sin(q[2]))*sin(q[3]))*cos(q[4]);
   out_7406736178574535206[11] = L5*(((-1.0/2.0*M_SQRT2*sin(q[0]) - 1.0/2.0*M_SQRT2*cos(q[0]))*sin(q[1])*sin(q[2]) + ((1.0/2.0)*M_SQRT2*sin(q[0]) - 1.0/2.0*M_SQRT2*cos(q[0]))*cos(q[2]))*cos(q[4]) - (-(-1.0/2.0*M_SQRT2*sin(q[0]) - 1.0/2.0*M_SQRT2*cos(q[0]))*sin(q[3])*cos(q[1]) + (-(-1.0/2.0*M_SQRT2*sin(q[0]) - 1.0/2.0*M_SQRT2*cos(q[0]))*sin(q[1])*cos(q[2]) + ((1.0/2.0)*M_SQRT2*sin(q[0]) - 1.0/2.0*M_SQRT2*cos(q[0]))*sin(q[2]))*cos(q[3]))*sin(q[4]));
   out_7406736178574535206[12] = 0;
   out_7406736178574535206[13] = 0;
   out_7406736178574535206[14] = 0;
   out_7406736178574535206[15] = -L2*cos(q[1]) + L3*sin(q[1])*cos(q[2]) - L4*(-sin(q[1])*sin(q[3])*cos(q[2]) + cos(q[1])*cos(q[3])) + L5*((sin(q[1])*cos(q[2])*cos(q[3]) + sin(q[3])*cos(q[1]))*cos(q[4]) - sin(q[1])*sin(q[2])*sin(q[4]));
   out_7406736178574535206[16] = L3*sin(q[2])*cos(q[1]) + L4*sin(q[2])*sin(q[3])*cos(q[1]) + L5*(sin(q[2])*cos(q[1])*cos(q[3])*cos(q[4]) + sin(q[4])*cos(q[1])*cos(q[2]));
   out_7406736178574535206[17] = -L4*(-sin(q[1])*sin(q[3]) + cos(q[1])*cos(q[2])*cos(q[3])) + L5*(sin(q[1])*cos(q[3]) + sin(q[3])*cos(q[1])*cos(q[2]))*cos(q[4]);
   out_7406736178574535206[18] = L5*(-(sin(q[1])*sin(q[3]) - cos(q[1])*cos(q[2])*cos(q[3]))*sin(q[4]) + sin(q[2])*cos(q[1])*cos(q[4]));
   out_7406736178574535206[19] = 0;
   out_7406736178574535206[20] = 0;

}


void Jo_ee(double L1, double L2, double L3, double L4, double L5, double L6, double *q, double *out_161451432710629729) {

   out_161451432710629729[0] = L1*((1.0/2.0)*M_SQRT2*sin(q[0]) + (1.0/2.0)*M_SQRT2*cos(q[0])) + L2*((1.0/2.0)*M_SQRT2*sin(q[0]) + (1.0/2.0)*M_SQRT2*cos(q[0]))*cos(q[1]) + L3*((-1.0/2.0*M_SQRT2*sin(q[0]) - 1.0/2.0*M_SQRT2*cos(q[0]))*sin(q[1])*cos(q[2]) + (-1.0/2.0*M_SQRT2*sin(q[0]) + (1.0/2.0)*M_SQRT2*cos(q[0]))*sin(q[2])) - L4*((-1.0/2.0*M_SQRT2*sin(q[0]) - 1.0/2.0*M_SQRT2*cos(q[0]))*cos(q[1])*cos(q[3]) + (-(-1.0/2.0*M_SQRT2*sin(q[0]) - 1.0/2.0*M_SQRT2*cos(q[0]))*sin(q[1])*cos(q[2]) - (-1.0/2.0*M_SQRT2*sin(q[0]) + (1.0/2.0)*M_SQRT2*cos(q[0]))*sin(q[2]))*sin(q[3])) + L5*(((-1.0/2.0*M_SQRT2*sin(q[0]) + (1.0/2.0)*M_SQRT2*cos(q[0]))*cos(q[2]) + ((1.0/2.0)*M_SQRT2*sin(q[0]) + (1.0/2.0)*M_SQRT2*cos(q[0]))*sin(q[1])*sin(q[2]))*sin(q[4]) + ((-1.0/2.0*M_SQRT2*sin(q[0]) - 1.0/2.0*M_SQRT2*cos(q[0]))*sin(q[3])*cos(q[1]) + ((-1.0/2.0*M_SQRT2*sin(q[0]) - 1.0/2.0*M_SQRT2*cos(q[0]))*sin(q[1])*cos(q[2]) + (-1.0/2.0*M_SQRT2*sin(q[0]) + (1.0/2.0)*M_SQRT2*cos(q[0]))*sin(q[2]))*cos(q[3]))*cos(q[4])) + L6*((((-1.0/2.0*M_SQRT2*sin(q[0]) + (1.0/2.0)*M_SQRT2*cos(q[0]))*cos(q[2]) + ((1.0/2.0)*M_SQRT2*sin(q[0]) + (1.0/2.0)*M_SQRT2*cos(q[0]))*sin(q[1])*sin(q[2]))*sin(q[4]) + ((-1.0/2.0*M_SQRT2*sin(q[0]) - 1.0/2.0*M_SQRT2*cos(q[0]))*sin(q[3])*cos(q[1]) + ((-1.0/2.0*M_SQRT2*sin(q[0]) - 1.0/2.0*M_SQRT2*cos(q[0]))*sin(q[1])*cos(q[2]) + (-1.0/2.0*M_SQRT2*sin(q[0]) + (1.0/2.0)*M_SQRT2*cos(q[0]))*sin(q[2]))*cos(q[3]))*cos(q[4]))*sin(q[5]) + (((1.0/2.0)*M_SQRT2*sin(q[0]) + (1.0/2.0)*M_SQRT2*cos(q[0]))*cos(q[1])*cos(q[3]) + ((-1.0/2.0*M_SQRT2*sin(q[0]) - 1.0/2.0*M_SQRT2*cos(q[0]))*sin(q[1])*cos(q[2]) + (-1.0/2.0*M_SQRT2*sin(q[0]) + (1.0/2.0)*M_SQRT2*cos(q[0]))*sin(q[2]))*sin(q[3]))*cos(q[5]));
   out_161451432710629729[1] = -L2*((1.0/2.0)*M_SQRT2*sin(q[0]) - 1.0/2.0*M_SQRT2*cos(q[0]))*sin(q[1]) + L3*(-1.0/2.0*M_SQRT2*sin(q[0]) + (1.0/2.0)*M_SQRT2*cos(q[0]))*cos(q[1])*cos(q[2]) - L4*(-(-1.0/2.0*M_SQRT2*sin(q[0]) + (1.0/2.0)*M_SQRT2*cos(q[0]))*sin(q[1])*cos(q[3]) - (-1.0/2.0*M_SQRT2*sin(q[0]) + (1.0/2.0)*M_SQRT2*cos(q[0]))*sin(q[3])*cos(q[1])*cos(q[2])) + L5*(((1.0/2.0)*M_SQRT2*sin(q[0]) - 1.0/2.0*M_SQRT2*cos(q[0]))*sin(q[2])*sin(q[4])*cos(q[1]) + (-(-1.0/2.0*M_SQRT2*sin(q[0]) + (1.0/2.0)*M_SQRT2*cos(q[0]))*sin(q[1])*sin(q[3]) + (-1.0/2.0*M_SQRT2*sin(q[0]) + (1.0/2.0)*M_SQRT2*cos(q[0]))*cos(q[1])*cos(q[2])*cos(q[3]))*cos(q[4])) + L6*(((-1.0/2.0*M_SQRT2*sin(q[0]) + (1.0/2.0)*M_SQRT2*cos(q[0]))*sin(q[3])*cos(q[1])*cos(q[2]) - ((1.0/2.0)*M_SQRT2*sin(q[0]) - 1.0/2.0*M_SQRT2*cos(q[0]))*sin(q[1])*cos(q[3]))*cos(q[5]) + (((1.0/2.0)*M_SQRT2*sin(q[0]) - 1.0/2.0*M_SQRT2*cos(q[0]))*sin(q[2])*sin(q[4])*cos(q[1]) + (-(-1.0/2.0*M_SQRT2*sin(q[0]) + (1.0/2.0)*M_SQRT2*cos(q[0]))*sin(q[1])*sin(q[3]) + (-1.0/2.0*M_SQRT2*sin(q[0]) + (1.0/2.0)*M_SQRT2*cos(q[0]))*cos(q[1])*cos(q[2])*cos(q[3]))*cos(q[4]))*sin(q[5]));
   out_161451432710629729[2] = L3*(-(-1.0/2.0*M_SQRT2*sin(q[0]) + (1.0/2.0)*M_SQRT2*cos(q[0]))*sin(q[1])*sin(q[2]) + ((1.0/2.0)*M_SQRT2*sin(q[0]) + (1.0/2.0)*M_SQRT2*cos(q[0]))*cos(q[2])) - L4*((-1.0/2.0*M_SQRT2*sin(q[0]) + (1.0/2.0)*M_SQRT2*cos(q[0]))*sin(q[1])*sin(q[2]) - ((1.0/2.0)*M_SQRT2*sin(q[0]) + (1.0/2.0)*M_SQRT2*cos(q[0]))*cos(q[2]))*sin(q[3]) + L5*((-(-1.0/2.0*M_SQRT2*sin(q[0]) + (1.0/2.0)*M_SQRT2*cos(q[0]))*sin(q[1])*sin(q[2]) + ((1.0/2.0)*M_SQRT2*sin(q[0]) + (1.0/2.0)*M_SQRT2*cos(q[0]))*cos(q[2]))*cos(q[3])*cos(q[4]) + (((1.0/2.0)*M_SQRT2*sin(q[0]) - 1.0/2.0*M_SQRT2*cos(q[0]))*sin(q[1])*cos(q[2]) - ((1.0/2.0)*M_SQRT2*sin(q[0]) + (1.0/2.0)*M_SQRT2*cos(q[0]))*sin(q[2]))*sin(q[4])) + L6*((-(-1.0/2.0*M_SQRT2*sin(q[0]) + (1.0/2.0)*M_SQRT2*cos(q[0]))*sin(q[1])*sin(q[2]) + ((1.0/2.0)*M_SQRT2*sin(q[0]) + (1.0/2.0)*M_SQRT2*cos(q[0]))*cos(q[2]))*sin(q[3])*cos(q[5]) + ((-(-1.0/2.0*M_SQRT2*sin(q[0]) + (1.0/2.0)*M_SQRT2*cos(q[0]))*sin(q[1])*sin(q[2]) + ((1.0/2.0)*M_SQRT2*sin(q[0]) + (1.0/2.0)*M_SQRT2*cos(q[0]))*cos(q[2]))*cos(q[3])*cos(q[4]) + (((1.0/2.0)*M_SQRT2*sin(q[0]) - 1.0/2.0*M_SQRT2*cos(q[0]))*sin(q[1])*cos(q[2]) - ((1.0/2.0)*M_SQRT2*sin(q[0]) + (1.0/2.0)*M_SQRT2*cos(q[0]))*sin(q[2]))*sin(q[4]))*sin(q[5]));
   out_161451432710629729[3] = -L4*(-(-1.0/2.0*M_SQRT2*sin(q[0]) + (1.0/2.0)*M_SQRT2*cos(q[0]))*sin(q[3])*cos(q[1]) + (((1.0/2.0)*M_SQRT2*sin(q[0]) - 1.0/2.0*M_SQRT2*cos(q[0]))*sin(q[1])*cos(q[2]) - ((1.0/2.0)*M_SQRT2*sin(q[0]) + (1.0/2.0)*M_SQRT2*cos(q[0]))*sin(q[2]))*cos(q[3])) + L5*((-1.0/2.0*M_SQRT2*sin(q[0]) + (1.0/2.0)*M_SQRT2*cos(q[0]))*cos(q[1])*cos(q[3]) - (-((1.0/2.0)*M_SQRT2*sin(q[0]) - 1.0/2.0*M_SQRT2*cos(q[0]))*sin(q[1])*cos(q[2]) + ((1.0/2.0)*M_SQRT2*sin(q[0]) + (1.0/2.0)*M_SQRT2*cos(q[0]))*sin(q[2]))*sin(q[3]))*cos(q[4]) + L6*(((-1.0/2.0*M_SQRT2*sin(q[0]) + (1.0/2.0)*M_SQRT2*cos(q[0]))*cos(q[1])*cos(q[3]) - (-((1.0/2.0)*M_SQRT2*sin(q[0]) - 1.0/2.0*M_SQRT2*cos(q[0]))*sin(q[1])*cos(q[2]) + ((1.0/2.0)*M_SQRT2*sin(q[0]) + (1.0/2.0)*M_SQRT2*cos(q[0]))*sin(q[2]))*sin(q[3]))*sin(q[5])*cos(q[4]) + (-((1.0/2.0)*M_SQRT2*sin(q[0]) - 1.0/2.0*M_SQRT2*cos(q[0]))*sin(q[3])*cos(q[1]) + (-((1.0/2.0)*M_SQRT2*sin(q[0]) - 1.0/2.0*M_SQRT2*cos(q[0]))*sin(q[1])*cos(q[2]) + ((1.0/2.0)*M_SQRT2*sin(q[0]) + (1.0/2.0)*M_SQRT2*cos(q[0]))*sin(q[2]))*cos(q[3]))*cos(q[5]));
   out_161451432710629729[4] = L5*((((1.0/2.0)*M_SQRT2*sin(q[0]) - 1.0/2.0*M_SQRT2*cos(q[0]))*sin(q[1])*sin(q[2]) + ((1.0/2.0)*M_SQRT2*sin(q[0]) + (1.0/2.0)*M_SQRT2*cos(q[0]))*cos(q[2]))*cos(q[4]) - (-((1.0/2.0)*M_SQRT2*sin(q[0]) - 1.0/2.0*M_SQRT2*cos(q[0]))*sin(q[3])*cos(q[1]) + (-((1.0/2.0)*M_SQRT2*sin(q[0]) - 1.0/2.0*M_SQRT2*cos(q[0]))*sin(q[1])*cos(q[2]) + ((1.0/2.0)*M_SQRT2*sin(q[0]) + (1.0/2.0)*M_SQRT2*cos(q[0]))*sin(q[2]))*cos(q[3]))*sin(q[4])) + L6*((((1.0/2.0)*M_SQRT2*sin(q[0]) - 1.0/2.0*M_SQRT2*cos(q[0]))*sin(q[1])*sin(q[2]) + ((1.0/2.0)*M_SQRT2*sin(q[0]) + (1.0/2.0)*M_SQRT2*cos(q[0]))*cos(q[2]))*cos(q[4]) - (-((1.0/2.0)*M_SQRT2*sin(q[0]) - 1.0/2.0*M_SQRT2*cos(q[0]))*sin(q[3])*cos(q[1]) + (-((1.0/2.0)*M_SQRT2*sin(q[0]) - 1.0/2.0*M_SQRT2*cos(q[0]))*sin(q[1])*cos(q[2]) + ((1.0/2.0)*M_SQRT2*sin(q[0]) + (1.0/2.0)*M_SQRT2*cos(q[0]))*sin(q[2]))*cos(q[3]))*sin(q[4]))*sin(q[5]);
   out_161451432710629729[5] = L6*(((((1.0/2.0)*M_SQRT2*sin(q[0]) - 1.0/2.0*M_SQRT2*cos(q[0]))*sin(q[1])*sin(q[2]) + ((1.0/2.0)*M_SQRT2*sin(q[0]) + (1.0/2.0)*M_SQRT2*cos(q[0]))*cos(q[2]))*sin(q[4]) + (-((1.0/2.0)*M_SQRT2*sin(q[0]) - 1.0/2.0*M_SQRT2*cos(q[0]))*sin(q[3])*cos(q[1]) + (-((1.0/2.0)*M_SQRT2*sin(q[0]) - 1.0/2.0*M_SQRT2*cos(q[0]))*sin(q[1])*cos(q[2]) + ((1.0/2.0)*M_SQRT2*sin(q[0]) + (1.0/2.0)*M_SQRT2*cos(q[0]))*sin(q[2]))*cos(q[3]))*cos(q[4]))*cos(q[5]) - (((1.0/2.0)*M_SQRT2*sin(q[0]) - 1.0/2.0*M_SQRT2*cos(q[0]))*cos(q[1])*cos(q[3]) + (-((1.0/2.0)*M_SQRT2*sin(q[0]) - 1.0/2.0*M_SQRT2*cos(q[0]))*sin(q[1])*cos(q[2]) + ((1.0/2.0)*M_SQRT2*sin(q[0]) + (1.0/2.0)*M_SQRT2*cos(q[0]))*sin(q[2]))*sin(q[3]))*sin(q[5]));
   out_161451432710629729[6] = 0;
   out_161451432710629729[7] = L1*((1.0/2.0)*M_SQRT2*sin(q[0]) - 1.0/2.0*M_SQRT2*cos(q[0])) + L2*((1.0/2.0)*M_SQRT2*sin(q[0]) - 1.0/2.0*M_SQRT2*cos(q[0]))*cos(q[1]) + L3*((-1.0/2.0*M_SQRT2*sin(q[0]) + (1.0/2.0)*M_SQRT2*cos(q[0]))*sin(q[1])*cos(q[2]) + ((1.0/2.0)*M_SQRT2*sin(q[0]) + (1.0/2.0)*M_SQRT2*cos(q[0]))*sin(q[2])) - L4*((-1.0/2.0*M_SQRT2*sin(q[0]) + (1.0/2.0)*M_SQRT2*cos(q[0]))*cos(q[1])*cos(q[3]) + (-(-1.0/2.0*M_SQRT2*sin(q[0]) + (1.0/2.0)*M_SQRT2*cos(q[0]))*sin(q[1])*cos(q[2]) - ((1.0/2.0)*M_SQRT2*sin(q[0]) + (1.0/2.0)*M_SQRT2*cos(q[0]))*sin(q[2]))*sin(q[3])) + L5*(((-1.0/2.0*M_SQRT2*sin(q[0]) + (1.0/2.0)*M_SQRT2*cos(q[0]))*sin(q[3])*cos(q[1]) + ((-1.0/2.0*M_SQRT2*sin(q[0]) + (1.0/2.0)*M_SQRT2*cos(q[0]))*sin(q[1])*cos(q[2]) + ((1.0/2.0)*M_SQRT2*sin(q[0]) + (1.0/2.0)*M_SQRT2*cos(q[0]))*sin(q[2]))*cos(q[3]))*cos(q[4]) + (((1.0/2.0)*M_SQRT2*sin(q[0]) - 1.0/2.0*M_SQRT2*cos(q[0]))*sin(q[1])*sin(q[2]) + ((1.0/2.0)*M_SQRT2*sin(q[0]) + (1.0/2.0)*M_SQRT2*cos(q[0]))*cos(q[2]))*sin(q[4])) + L6*((((-1.0/2.0*M_SQRT2*sin(q[0]) + (1.0/2.0)*M_SQRT2*cos(q[0]))*sin(q[3])*cos(q[1]) + ((-1.0/2.0*M_SQRT2*sin(q[0]) + (1.0/2.0)*M_SQRT2*cos(q[0]))*sin(q[1])*cos(q[2]) + ((1.0/2.0)*M_SQRT2*sin(q[0]) + (1.0/2.0)*M_SQRT2*cos(q[0]))*sin(q[2]))*cos(q[3]))*cos(q[4]) + (((1.0/2.0)*M_SQRT2*sin(q[0]) - 1.0/2.0*M_SQRT2*cos(q[0]))*sin(q[1])*sin(q[2]) + ((1.0/2.0)*M_SQRT2*sin(q[0]) + (1.0/2.0)*M_SQRT2*cos(q[0]))*cos(q[2]))*sin(q[4]))*sin(q[5]) + (((1.0/2.0)*M_SQRT2*sin(q[0]) - 1.0/2.0*M_SQRT2*cos(q[0]))*cos(q[1])*cos(q[3]) + ((-1.0/2.0*M_SQRT2*sin(q[0]) + (1.0/2.0)*M_SQRT2*cos(q[0]))*sin(q[1])*cos(q[2]) + ((1.0/2.0)*M_SQRT2*sin(q[0]) + (1.0/2.0)*M_SQRT2*cos(q[0]))*sin(q[2]))*sin(q[3]))*cos(q[5]));
   out_161451432710629729[8] = -L2*(-1.0/2.0*M_SQRT2*sin(q[0]) - 1.0/2.0*M_SQRT2*cos(q[0]))*sin(q[1]) + L3*((1.0/2.0)*M_SQRT2*sin(q[0]) + (1.0/2.0)*M_SQRT2*cos(q[0]))*cos(q[1])*cos(q[2]) - L4*(-((1.0/2.0)*M_SQRT2*sin(q[0]) + (1.0/2.0)*M_SQRT2*cos(q[0]))*sin(q[1])*cos(q[3]) - ((1.0/2.0)*M_SQRT2*sin(q[0]) + (1.0/2.0)*M_SQRT2*cos(q[0]))*sin(q[3])*cos(q[1])*cos(q[2])) + L5*((-1.0/2.0*M_SQRT2*sin(q[0]) - 1.0/2.0*M_SQRT2*cos(q[0]))*sin(q[2])*sin(q[4])*cos(q[1]) + (-((1.0/2.0)*M_SQRT2*sin(q[0]) + (1.0/2.0)*M_SQRT2*cos(q[0]))*sin(q[1])*sin(q[3]) + ((1.0/2.0)*M_SQRT2*sin(q[0]) + (1.0/2.0)*M_SQRT2*cos(q[0]))*cos(q[1])*cos(q[2])*cos(q[3]))*cos(q[4])) + L6*((-(-1.0/2.0*M_SQRT2*sin(q[0]) - 1.0/2.0*M_SQRT2*cos(q[0]))*sin(q[1])*cos(q[3]) + ((1.0/2.0)*M_SQRT2*sin(q[0]) + (1.0/2.0)*M_SQRT2*cos(q[0]))*sin(q[3])*cos(q[1])*cos(q[2]))*cos(q[5]) + ((-1.0/2.0*M_SQRT2*sin(q[0]) - 1.0/2.0*M_SQRT2*cos(q[0]))*sin(q[2])*sin(q[4])*cos(q[1]) + (-((1.0/2.0)*M_SQRT2*sin(q[0]) + (1.0/2.0)*M_SQRT2*cos(q[0]))*sin(q[1])*sin(q[3]) + ((1.0/2.0)*M_SQRT2*sin(q[0]) + (1.0/2.0)*M_SQRT2*cos(q[0]))*cos(q[1])*cos(q[2])*cos(q[3]))*cos(q[4]))*sin(q[5]));
   out_161451432710629729[9] = L3*(((1.0/2.0)*M_SQRT2*sin(q[0]) - 1.0/2.0*M_SQRT2*cos(q[0]))*cos(q[2]) - ((1.0/2.0)*M_SQRT2*sin(q[0]) + (1.0/2.0)*M_SQRT2*cos(q[0]))*sin(q[1])*sin(q[2])) - L4*(-((1.0/2.0)*M_SQRT2*sin(q[0]) - 1.0/2.0*M_SQRT2*cos(q[0]))*cos(q[2]) + ((1.0/2.0)*M_SQRT2*sin(q[0]) + (1.0/2.0)*M_SQRT2*cos(q[0]))*sin(q[1])*sin(q[2]))*sin(q[3]) + L5*((((1.0/2.0)*M_SQRT2*sin(q[0]) - 1.0/2.0*M_SQRT2*cos(q[0]))*cos(q[2]) - ((1.0/2.0)*M_SQRT2*sin(q[0]) + (1.0/2.0)*M_SQRT2*cos(q[0]))*sin(q[1])*sin(q[2]))*cos(q[3])*cos(q[4]) + ((-1.0/2.0*M_SQRT2*sin(q[0]) - 1.0/2.0*M_SQRT2*cos(q[0]))*sin(q[1])*cos(q[2]) - ((1.0/2.0)*M_SQRT2*sin(q[0]) - 1.0/2.0*M_SQRT2*cos(q[0]))*sin(q[2]))*sin(q[4])) + L6*((((1.0/2.0)*M_SQRT2*sin(q[0]) - 1.0/2.0*M_SQRT2*cos(q[0]))*cos(q[2]) - ((1.0/2.0)*M_SQRT2*sin(q[0]) + (1.0/2.0)*M_SQRT2*cos(q[0]))*sin(q[1])*sin(q[2]))*sin(q[3])*cos(q[5]) + ((((1.0/2.0)*M_SQRT2*sin(q[0]) - 1.0/2.0*M_SQRT2*cos(q[0]))*cos(q[2]) - ((1.0/2.0)*M_SQRT2*sin(q[0]) + (1.0/2.0)*M_SQRT2*cos(q[0]))*sin(q[1])*sin(q[2]))*cos(q[3])*cos(q[4]) + ((-1.0/2.0*M_SQRT2*sin(q[0]) - 1.0/2.0*M_SQRT2*cos(q[0]))*sin(q[1])*cos(q[2]) - ((1.0/2.0)*M_SQRT2*sin(q[0]) - 1.0/2.0*M_SQRT2*cos(q[0]))*sin(q[2]))*sin(q[4]))*sin(q[5]));
   out_161451432710629729[10] = -L4*(-((1.0/2.0)*M_SQRT2*sin(q[0]) + (1.0/2.0)*M_SQRT2*cos(q[0]))*sin(q[3])*cos(q[1]) + ((-1.0/2.0*M_SQRT2*sin(q[0]) - 1.0/2.0*M_SQRT2*cos(q[0]))*sin(q[1])*cos(q[2]) - ((1.0/2.0)*M_SQRT2*sin(q[0]) - 1.0/2.0*M_SQRT2*cos(q[0]))*sin(q[2]))*cos(q[3])) + L5*(((1.0/2.0)*M_SQRT2*sin(q[0]) + (1.0/2.0)*M_SQRT2*cos(q[0]))*cos(q[1])*cos(q[3]) - (-(-1.0/2.0*M_SQRT2*sin(q[0]) - 1.0/2.0*M_SQRT2*cos(q[0]))*sin(q[1])*cos(q[2]) + ((1.0/2.0)*M_SQRT2*sin(q[0]) - 1.0/2.0*M_SQRT2*cos(q[0]))*sin(q[2]))*sin(q[3]))*cos(q[4]) + L6*((-(-1.0/2.0*M_SQRT2*sin(q[0]) - 1.0/2.0*M_SQRT2*cos(q[0]))*sin(q[3])*cos(q[1]) + (-(-1.0/2.0*M_SQRT2*sin(q[0]) - 1.0/2.0*M_SQRT2*cos(q[0]))*sin(q[1])*cos(q[2]) + ((1.0/2.0)*M_SQRT2*sin(q[0]) - 1.0/2.0*M_SQRT2*cos(q[0]))*sin(q[2]))*cos(q[3]))*cos(q[5]) + (((1.0/2.0)*M_SQRT2*sin(q[0]) + (1.0/2.0)*M_SQRT2*cos(q[0]))*cos(q[1])*cos(q[3]) - (-(-1.0/2.0*M_SQRT2*sin(q[0]) - 1.0/2.0*M_SQRT2*cos(q[0]))*sin(q[1])*cos(q[2]) + ((1.0/2.0)*M_SQRT2*sin(q[0]) - 1.0/2.0*M_SQRT2*cos(q[0]))*sin(q[2]))*sin(q[3]))*sin(q[5])*cos(q[4]));
   out_161451432710629729[11] = L5*(((-1.0/2.0*M_SQRT2*sin(q[0]) - 1.0/2.0*M_SQRT2*cos(q[0]))*sin(q[1])*sin(q[2]) + ((1.0/2.0)*M_SQRT2*sin(q[0]) - 1.0/2.0*M_SQRT2*cos(q[0]))*cos(q[2]))*cos(q[4]) - (-(-1.0/2.0*M_SQRT2*sin(q[0]) - 1.0/2.0*M_SQRT2*cos(q[0]))*sin(q[3])*cos(q[1]) + (-(-1.0/2.0*M_SQRT2*sin(q[0]) - 1.0/2.0*M_SQRT2*cos(q[0]))*sin(q[1])*cos(q[2]) + ((1.0/2.0)*M_SQRT2*sin(q[0]) - 1.0/2.0*M_SQRT2*cos(q[0]))*sin(q[2]))*cos(q[3]))*sin(q[4])) + L6*(((-1.0/2.0*M_SQRT2*sin(q[0]) - 1.0/2.0*M_SQRT2*cos(q[0]))*sin(q[1])*sin(q[2]) + ((1.0/2.0)*M_SQRT2*sin(q[0]) - 1.0/2.0*M_SQRT2*cos(q[0]))*cos(q[2]))*cos(q[4]) - (-(-1.0/2.0*M_SQRT2*sin(q[0]) - 1.0/2.0*M_SQRT2*cos(q[0]))*sin(q[3])*cos(q[1]) + (-(-1.0/2.0*M_SQRT2*sin(q[0]) - 1.0/2.0*M_SQRT2*cos(q[0]))*sin(q[1])*cos(q[2]) + ((1.0/2.0)*M_SQRT2*sin(q[0]) - 1.0/2.0*M_SQRT2*cos(q[0]))*sin(q[2]))*cos(q[3]))*sin(q[4]))*sin(q[5]);
   out_161451432710629729[12] = L6*((((-1.0/2.0*M_SQRT2*sin(q[0]) - 1.0/2.0*M_SQRT2*cos(q[0]))*sin(q[1])*sin(q[2]) + ((1.0/2.0)*M_SQRT2*sin(q[0]) - 1.0/2.0*M_SQRT2*cos(q[0]))*cos(q[2]))*sin(q[4]) + (-(-1.0/2.0*M_SQRT2*sin(q[0]) - 1.0/2.0*M_SQRT2*cos(q[0]))*sin(q[3])*cos(q[1]) + (-(-1.0/2.0*M_SQRT2*sin(q[0]) - 1.0/2.0*M_SQRT2*cos(q[0]))*sin(q[1])*cos(q[2]) + ((1.0/2.0)*M_SQRT2*sin(q[0]) - 1.0/2.0*M_SQRT2*cos(q[0]))*sin(q[2]))*cos(q[3]))*cos(q[4]))*cos(q[5]) - ((-1.0/2.0*M_SQRT2*sin(q[0]) - 1.0/2.0*M_SQRT2*cos(q[0]))*cos(q[1])*cos(q[3]) + (-(-1.0/2.0*M_SQRT2*sin(q[0]) - 1.0/2.0*M_SQRT2*cos(q[0]))*sin(q[1])*cos(q[2]) + ((1.0/2.0)*M_SQRT2*sin(q[0]) - 1.0/2.0*M_SQRT2*cos(q[0]))*sin(q[2]))*sin(q[3]))*sin(q[5]));
   out_161451432710629729[13] = 0;
   out_161451432710629729[14] = 0;
   out_161451432710629729[15] = -L2*cos(q[1]) + L3*sin(q[1])*cos(q[2]) - L4*(-sin(q[1])*sin(q[3])*cos(q[2]) + cos(q[1])*cos(q[3])) + L5*((sin(q[1])*cos(q[2])*cos(q[3]) + sin(q[3])*cos(q[1]))*cos(q[4]) - sin(q[1])*sin(q[2])*sin(q[4])) + L6*(((sin(q[1])*cos(q[2])*cos(q[3]) + sin(q[3])*cos(q[1]))*cos(q[4]) - sin(q[1])*sin(q[2])*sin(q[4]))*sin(q[5]) + (sin(q[1])*sin(q[3])*cos(q[2]) - cos(q[1])*cos(q[3]))*cos(q[5]));
   out_161451432710629729[16] = L3*sin(q[2])*cos(q[1]) + L4*sin(q[2])*sin(q[3])*cos(q[1]) + L5*(sin(q[2])*cos(q[1])*cos(q[3])*cos(q[4]) + sin(q[4])*cos(q[1])*cos(q[2])) + L6*((sin(q[2])*cos(q[1])*cos(q[3])*cos(q[4]) + sin(q[4])*cos(q[1])*cos(q[2]))*sin(q[5]) + sin(q[2])*sin(q[3])*cos(q[1])*cos(q[5]));
   out_161451432710629729[17] = -L4*(-sin(q[1])*sin(q[3]) + cos(q[1])*cos(q[2])*cos(q[3])) + L5*(sin(q[1])*cos(q[3]) + sin(q[3])*cos(q[1])*cos(q[2]))*cos(q[4]) + L6*((sin(q[1])*sin(q[3]) - cos(q[1])*cos(q[2])*cos(q[3]))*cos(q[5]) + (sin(q[1])*cos(q[3]) + sin(q[3])*cos(q[1])*cos(q[2]))*sin(q[5])*cos(q[4]));
   out_161451432710629729[18] = L5*(-(sin(q[1])*sin(q[3]) - cos(q[1])*cos(q[2])*cos(q[3]))*sin(q[4]) + sin(q[2])*cos(q[1])*cos(q[4])) + L6*(-(sin(q[1])*sin(q[3]) - cos(q[1])*cos(q[2])*cos(q[3]))*sin(q[4]) + sin(q[2])*cos(q[1])*cos(q[4]))*sin(q[5]);
   out_161451432710629729[19] = L6*(((sin(q[1])*sin(q[3]) - cos(q[1])*cos(q[2])*cos(q[3]))*cos(q[4]) + sin(q[2])*sin(q[4])*cos(q[1]))*cos(q[5]) - (-sin(q[1])*cos(q[3]) - sin(q[3])*cos(q[1])*cos(q[2]))*sin(q[5]));
   out_161451432710629729[20] = 0;

}
