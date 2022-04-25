/******************************************************************************
 *                       Code generated with sympy 1.9                        *
 *                                                                            *
 *              See http://www.sympy.org/ for more information.               *
 *                                                                            *
 *                    This file is part of 'JRy_W0project'                    *
 ******************************************************************************/
#include "include/baxter/JRy.hpp"
#include <math.h>

void JRy_W0(double *out_394126202056194292) {

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


void JRy_BR(double *out_394126202056194292) {

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

void JRy_0(double *q, double *out_6459234169754179164) {

   out_6459234169754179164[0] = -0.5*M_SQRT2*sin(q[0]) + (0.5)*M_SQRT2*cos(q[0]);
   out_6459234169754179164[1] = 0;
   out_6459234169754179164[2] = 0;
   out_6459234169754179164[3] = 0;
   out_6459234169754179164[4] = 0;
   out_6459234169754179164[5] = 0;
   out_6459234169754179164[6] = 0;
   out_6459234169754179164[7] = (0.5)*M_SQRT2*sin(q[0]) + (0.5)*M_SQRT2*cos(q[0]);
   out_6459234169754179164[8] = 0;
   out_6459234169754179164[9] = 0;
   out_6459234169754179164[10] = 0;
   out_6459234169754179164[11] = 0;
   out_6459234169754179164[12] = 0;
   out_6459234169754179164[13] = 0;
   out_6459234169754179164[14] = 0;
   out_6459234169754179164[15] = 0;
   out_6459234169754179164[16] = 0;
   out_6459234169754179164[17] = 0;
   out_6459234169754179164[18] = 0;
   out_6459234169754179164[19] = 0;
   out_6459234169754179164[20] = 0;

}

void JRy_1(double *q, double *out_4479899400867271964) {

   out_4479899400867271964[0] = (-0.5*M_SQRT2*sin(q[0]) - 0.5*M_SQRT2*cos(q[0]))*cos(q[1]);
   out_4479899400867271964[1] = -(-0.5*M_SQRT2*sin(q[0]) + (0.5)*M_SQRT2*cos(q[0]))*sin(q[1]);
   out_4479899400867271964[2] = 0;
   out_4479899400867271964[3] = 0;
   out_4479899400867271964[4] = 0;
   out_4479899400867271964[5] = 0;
   out_4479899400867271964[6] = 0;
   out_4479899400867271964[7] = (-0.5*M_SQRT2*sin(q[0]) + (0.5)*M_SQRT2*cos(q[0]))*cos(q[1]);
   out_4479899400867271964[8] = -((0.5)*M_SQRT2*sin(q[0]) + (0.5)*M_SQRT2*cos(q[0]))*sin(q[1]);
   out_4479899400867271964[9] = 0;
   out_4479899400867271964[10] = 0;
   out_4479899400867271964[11] = 0;
   out_4479899400867271964[12] = 0;
   out_4479899400867271964[13] = 0;
   out_4479899400867271964[14] = 0;
   out_4479899400867271964[15] = cos(q[1]);
   out_4479899400867271964[16] = 0;
   out_4479899400867271964[17] = 0;
   out_4479899400867271964[18] = 0;
   out_4479899400867271964[19] = 0;
   out_4479899400867271964[20] = 0;

}
void JRy_2(double *q, double *out_3234876222573070766) {

   out_3234876222573070766[0] = (-0.5*M_SQRT2*sin(q[0]) + (0.5)*M_SQRT2*cos(q[0]))*cos(q[2]) + ((0.5)*M_SQRT2*sin(q[0]) + (0.5)*M_SQRT2*cos(q[0]))*sin(q[1])*sin(q[2]);
   out_3234876222573070766[1] = ((0.5)*M_SQRT2*sin(q[0]) - 0.5*M_SQRT2*cos(q[0]))*sin(q[2])*cos(q[1]);
   out_3234876222573070766[2] = ((0.5)*M_SQRT2*sin(q[0]) - 0.5*M_SQRT2*cos(q[0]))*sin(q[1])*cos(q[2]) - ((0.5)*M_SQRT2*sin(q[0]) + (0.5)*M_SQRT2*cos(q[0]))*sin(q[2]);
   out_3234876222573070766[3] = 0;
   out_3234876222573070766[4] = 0;
   out_3234876222573070766[5] = 0;
   out_3234876222573070766[6] = 0;
   out_3234876222573070766[7] = ((0.5)*M_SQRT2*sin(q[0]) - 0.5*M_SQRT2*cos(q[0]))*sin(q[1])*sin(q[2]) + ((0.5)*M_SQRT2*sin(q[0]) + (0.5)*M_SQRT2*cos(q[0]))*cos(q[2]);
   out_3234876222573070766[8] = (-0.5*M_SQRT2*sin(q[0]) - 0.5*M_SQRT2*cos(q[0]))*sin(q[2])*cos(q[1]);
   out_3234876222573070766[9] = (-0.5*M_SQRT2*sin(q[0]) - 0.5*M_SQRT2*cos(q[0]))*sin(q[1])*cos(q[2]) - ((0.5)*M_SQRT2*sin(q[0]) - 0.5*M_SQRT2*cos(q[0]))*sin(q[2]);
   out_3234876222573070766[10] = 0;
   out_3234876222573070766[11] = 0;
   out_3234876222573070766[12] = 0;
   out_3234876222573070766[13] = 0;
   out_3234876222573070766[14] = 0;
   out_3234876222573070766[15] = -sin(q[1])*sin(q[2]);
   out_3234876222573070766[16] = cos(q[1])*cos(q[2]);
   out_3234876222573070766[17] = 0;
   out_3234876222573070766[18] = 0;
   out_3234876222573070766[19] = 0;
   out_3234876222573070766[20] = 0;

}
void JRy_3(double *q, double *out) {

   out[0] = (-0.5*M_SQRT2*sin(q[0]) - 0.5*M_SQRT2*cos(q[0]))*cos(q[1])*cos(q[3]) + (-(-0.5*M_SQRT2*sin(q[0]) - 0.5*M_SQRT2*cos(q[0]))*sin(q[1])*cos(q[2]) - (-0.5*M_SQRT2*sin(q[0]) + (0.5)*M_SQRT2*cos(q[0]))*sin(q[2]))*sin(q[3]);
   out[1] = -(-0.5*M_SQRT2*sin(q[0]) + (0.5)*M_SQRT2*cos(q[0]))*sin(q[1])*cos(q[3]) - (-0.5*M_SQRT2*sin(q[0]) + (0.5)*M_SQRT2*cos(q[0]))*sin(q[3])*cos(q[1])*cos(q[2]);
   out[2] = ((-0.5*M_SQRT2*sin(q[0]) + (0.5)*M_SQRT2*cos(q[0]))*sin(q[1])*sin(q[2]) - ((0.5)*M_SQRT2*sin(q[0]) + (0.5)*M_SQRT2*cos(q[0]))*cos(q[2]))*sin(q[3]);
   out[3] = -(-0.5*M_SQRT2*sin(q[0]) + (0.5)*M_SQRT2*cos(q[0]))*sin(q[3])*cos(q[1]) + (((0.5)*M_SQRT2*sin(q[0]) - 0.5*M_SQRT2*cos(q[0]))*sin(q[1])*cos(q[2]) - ((0.5)*M_SQRT2*sin(q[0]) + (0.5)*M_SQRT2*cos(q[0]))*sin(q[2]))*cos(q[3]);
   out[4] = 0;
   out[5] = 0;
   out[6] = 0;
   out[7] = (-0.5*M_SQRT2*sin(q[0]) + (0.5)*M_SQRT2*cos(q[0]))*cos(q[1])*cos(q[3]) + (-(-0.5*M_SQRT2*sin(q[0]) + (0.5)*M_SQRT2*cos(q[0]))*sin(q[1])*cos(q[2]) - ((0.5)*M_SQRT2*sin(q[0]) + (0.5)*M_SQRT2*cos(q[0]))*sin(q[2]))*sin(q[3]);
   out[8] = -((0.5)*M_SQRT2*sin(q[0]) + (0.5)*M_SQRT2*cos(q[0]))*sin(q[1])*cos(q[3]) - ((0.5)*M_SQRT2*sin(q[0]) + (0.5)*M_SQRT2*cos(q[0]))*sin(q[3])*cos(q[1])*cos(q[2]);
   out[9] = (-((0.5)*M_SQRT2*sin(q[0]) - 0.5*M_SQRT2*cos(q[0]))*cos(q[2]) + ((0.5)*M_SQRT2*sin(q[0]) + (0.5)*M_SQRT2*cos(q[0]))*sin(q[1])*sin(q[2]))*sin(q[3]);
   out[10] = -((0.5)*M_SQRT2*sin(q[0]) + (0.5)*M_SQRT2*cos(q[0]))*sin(q[3])*cos(q[1]) + ((-0.5*M_SQRT2*sin(q[0]) - 0.5*M_SQRT2*cos(q[0]))*sin(q[1])*cos(q[2]) - ((0.5)*M_SQRT2*sin(q[0]) - 0.5*M_SQRT2*cos(q[0]))*sin(q[2]))*cos(q[3]);
   out[11] = 0;
   out[12] = 0;
   out[13] = 0;
   out[14] = 0;
   out[15] = -sin(q[1])*sin(q[3])*cos(q[2]) + cos(q[1])*cos(q[3]);
   out[16] = -sin(q[2])*sin(q[3])*cos(q[1]);
   out[17] = -sin(q[1])*sin(q[3]) + cos(q[1])*cos(q[2])*cos(q[3]);
   out[18] = 0;
   out[19] = 0;
   out[20] = 0;

}
void JRy_4(double *q, double *out) {

   out[0] = ((-0.5*M_SQRT2*sin(q[0]) + (0.5)*M_SQRT2*cos(q[0]))*cos(q[2]) + ((0.5)*M_SQRT2*sin(q[0]) + (0.5)*M_SQRT2*cos(q[0]))*sin(q[1])*sin(q[2]))*cos(q[4]) + (-(-0.5*M_SQRT2*sin(q[0]) - 0.5*M_SQRT2*cos(q[0]))*sin(q[3])*cos(q[1]) - ((-0.5*M_SQRT2*sin(q[0]) - 0.5*M_SQRT2*cos(q[0]))*sin(q[1])*cos(q[2]) + (-0.5*M_SQRT2*sin(q[0]) + (0.5)*M_SQRT2*cos(q[0]))*sin(q[2]))*cos(q[3]))*sin(q[4]);
   out[1] = ((0.5)*M_SQRT2*sin(q[0]) - 0.5*M_SQRT2*cos(q[0]))*sin(q[2])*cos(q[1])*cos(q[4]) + ((-0.5*M_SQRT2*sin(q[0]) + (0.5)*M_SQRT2*cos(q[0]))*sin(q[1])*sin(q[3]) - (-0.5*M_SQRT2*sin(q[0]) + (0.5)*M_SQRT2*cos(q[0]))*cos(q[1])*cos(q[2])*cos(q[3]))*sin(q[4]);
   out[2] = -(-(-0.5*M_SQRT2*sin(q[0]) + (0.5)*M_SQRT2*cos(q[0]))*sin(q[1])*sin(q[2]) + ((0.5)*M_SQRT2*sin(q[0]) + (0.5)*M_SQRT2*cos(q[0]))*cos(q[2]))*sin(q[4])*cos(q[3]) + (((0.5)*M_SQRT2*sin(q[0]) - 0.5*M_SQRT2*cos(q[0]))*sin(q[1])*cos(q[2]) - ((0.5)*M_SQRT2*sin(q[0]) + (0.5)*M_SQRT2*cos(q[0]))*sin(q[2]))*cos(q[4]);
   out[3] = (-(-0.5*M_SQRT2*sin(q[0]) + (0.5)*M_SQRT2*cos(q[0]))*cos(q[1])*cos(q[3]) + (-((0.5)*M_SQRT2*sin(q[0]) - 0.5*M_SQRT2*cos(q[0]))*sin(q[1])*cos(q[2]) + ((0.5)*M_SQRT2*sin(q[0]) + (0.5)*M_SQRT2*cos(q[0]))*sin(q[2]))*sin(q[3]))*sin(q[4]);
   out[4] = -(((0.5)*M_SQRT2*sin(q[0]) - 0.5*M_SQRT2*cos(q[0]))*sin(q[1])*sin(q[2]) + ((0.5)*M_SQRT2*sin(q[0]) + (0.5)*M_SQRT2*cos(q[0]))*cos(q[2]))*sin(q[4]) + (((0.5)*M_SQRT2*sin(q[0]) - 0.5*M_SQRT2*cos(q[0]))*sin(q[3])*cos(q[1]) - (-((0.5)*M_SQRT2*sin(q[0]) - 0.5*M_SQRT2*cos(q[0]))*sin(q[1])*cos(q[2]) + ((0.5)*M_SQRT2*sin(q[0]) + (0.5)*M_SQRT2*cos(q[0]))*sin(q[2]))*cos(q[3]))*cos(q[4]);
   out[5] = 0;
   out[6] = 0;
   out[7] = (-(-0.5*M_SQRT2*sin(q[0]) + (0.5)*M_SQRT2*cos(q[0]))*sin(q[3])*cos(q[1]) - ((-0.5*M_SQRT2*sin(q[0]) + (0.5)*M_SQRT2*cos(q[0]))*sin(q[1])*cos(q[2]) + ((0.5)*M_SQRT2*sin(q[0]) + (0.5)*M_SQRT2*cos(q[0]))*sin(q[2]))*cos(q[3]))*sin(q[4]) + (((0.5)*M_SQRT2*sin(q[0]) - 0.5*M_SQRT2*cos(q[0]))*sin(q[1])*sin(q[2]) + ((0.5)*M_SQRT2*sin(q[0]) + (0.5)*M_SQRT2*cos(q[0]))*cos(q[2]))*cos(q[4]);
   out[8] = (-0.5*M_SQRT2*sin(q[0]) - 0.5*M_SQRT2*cos(q[0]))*sin(q[2])*cos(q[1])*cos(q[4]) + (((0.5)*M_SQRT2*sin(q[0]) + (0.5)*M_SQRT2*cos(q[0]))*sin(q[1])*sin(q[3]) - ((0.5)*M_SQRT2*sin(q[0]) + (0.5)*M_SQRT2*cos(q[0]))*cos(q[1])*cos(q[2])*cos(q[3]))*sin(q[4]);
   out[9] = -(((0.5)*M_SQRT2*sin(q[0]) - 0.5*M_SQRT2*cos(q[0]))*cos(q[2]) - ((0.5)*M_SQRT2*sin(q[0]) + (0.5)*M_SQRT2*cos(q[0]))*sin(q[1])*sin(q[2]))*sin(q[4])*cos(q[3]) + ((-0.5*M_SQRT2*sin(q[0]) - 0.5*M_SQRT2*cos(q[0]))*sin(q[1])*cos(q[2]) - ((0.5)*M_SQRT2*sin(q[0]) - 0.5*M_SQRT2*cos(q[0]))*sin(q[2]))*cos(q[4]);
   out[10] = (-((0.5)*M_SQRT2*sin(q[0]) + (0.5)*M_SQRT2*cos(q[0]))*cos(q[1])*cos(q[3]) + (-(-0.5*M_SQRT2*sin(q[0]) - 0.5*M_SQRT2*cos(q[0]))*sin(q[1])*cos(q[2]) + ((0.5)*M_SQRT2*sin(q[0]) - 0.5*M_SQRT2*cos(q[0]))*sin(q[2]))*sin(q[3]))*sin(q[4]);
   out[11] = -((-0.5*M_SQRT2*sin(q[0]) - 0.5*M_SQRT2*cos(q[0]))*sin(q[1])*sin(q[2]) + ((0.5)*M_SQRT2*sin(q[0]) - 0.5*M_SQRT2*cos(q[0]))*cos(q[2]))*sin(q[4]) + ((-0.5*M_SQRT2*sin(q[0]) - 0.5*M_SQRT2*cos(q[0]))*sin(q[3])*cos(q[1]) - (-(-0.5*M_SQRT2*sin(q[0]) - 0.5*M_SQRT2*cos(q[0]))*sin(q[1])*cos(q[2]) + ((0.5)*M_SQRT2*sin(q[0]) - 0.5*M_SQRT2*cos(q[0]))*sin(q[2]))*cos(q[3]))*cos(q[4]);
   out[12] = 0;
   out[13] = 0;
   out[14] = 0;
   out[15] = (-sin(q[1])*cos(q[2])*cos(q[3]) - sin(q[3])*cos(q[1]))*sin(q[4]) - sin(q[1])*sin(q[2])*cos(q[4]);
   out[16] = -sin(q[2])*sin(q[4])*cos(q[1])*cos(q[3]) + cos(q[1])*cos(q[2])*cos(q[4]);
   out[17] = (-sin(q[1])*cos(q[3]) - sin(q[3])*cos(q[1])*cos(q[2]))*sin(q[4]);
   out[18] = (-sin(q[1])*sin(q[3]) + cos(q[1])*cos(q[2])*cos(q[3]))*cos(q[4]) - sin(q[2])*sin(q[4])*cos(q[1]);
   out[19] = 0;
   out[20] = 0;

}
void JRy_5(double *q, double *out) {

   out[0] = (-((-0.5*M_SQRT2*sin(q[0]) + (0.5)*M_SQRT2*cos(q[0]))*cos(q[2]) + ((0.5)*M_SQRT2*sin(q[0]) + (0.5)*M_SQRT2*cos(q[0]))*sin(q[1])*sin(q[2]))*sin(q[4]) - ((-0.5*M_SQRT2*sin(q[0]) - 0.5*M_SQRT2*cos(q[0]))*sin(q[3])*cos(q[1]) + ((-0.5*M_SQRT2*sin(q[0]) - 0.5*M_SQRT2*cos(q[0]))*sin(q[1])*cos(q[2]) + (-0.5*M_SQRT2*sin(q[0]) + (0.5)*M_SQRT2*cos(q[0]))*sin(q[2]))*cos(q[3]))*cos(q[4]))*sin(q[5]) + (-((0.5)*M_SQRT2*sin(q[0]) + (0.5)*M_SQRT2*cos(q[0]))*cos(q[1])*cos(q[3]) - ((-0.5*M_SQRT2*sin(q[0]) - 0.5*M_SQRT2*cos(q[0]))*sin(q[1])*cos(q[2]) + (-0.5*M_SQRT2*sin(q[0]) + (0.5)*M_SQRT2*cos(q[0]))*sin(q[2]))*sin(q[3]))*cos(q[5]);
   out[1] = (-(-0.5*M_SQRT2*sin(q[0]) + (0.5)*M_SQRT2*cos(q[0]))*sin(q[3])*cos(q[1])*cos(q[2]) + ((0.5)*M_SQRT2*sin(q[0]) - 0.5*M_SQRT2*cos(q[0]))*sin(q[1])*cos(q[3]))*cos(q[5]) + (-((0.5)*M_SQRT2*sin(q[0]) - 0.5*M_SQRT2*cos(q[0]))*sin(q[2])*sin(q[4])*cos(q[1]) - (-(-0.5*M_SQRT2*sin(q[0]) + (0.5)*M_SQRT2*cos(q[0]))*sin(q[1])*sin(q[3]) + (-0.5*M_SQRT2*sin(q[0]) + (0.5)*M_SQRT2*cos(q[0]))*cos(q[1])*cos(q[2])*cos(q[3]))*cos(q[4]))*sin(q[5]);
   out[2] = -(-(-0.5*M_SQRT2*sin(q[0]) + (0.5)*M_SQRT2*cos(q[0]))*sin(q[1])*sin(q[2]) + ((0.5)*M_SQRT2*sin(q[0]) + (0.5)*M_SQRT2*cos(q[0]))*cos(q[2]))*sin(q[3])*cos(q[5]) + (-(-(-0.5*M_SQRT2*sin(q[0]) + (0.5)*M_SQRT2*cos(q[0]))*sin(q[1])*sin(q[2]) + ((0.5)*M_SQRT2*sin(q[0]) + (0.5)*M_SQRT2*cos(q[0]))*cos(q[2]))*cos(q[3])*cos(q[4]) - (((0.5)*M_SQRT2*sin(q[0]) - 0.5*M_SQRT2*cos(q[0]))*sin(q[1])*cos(q[2]) - ((0.5)*M_SQRT2*sin(q[0]) + (0.5)*M_SQRT2*cos(q[0]))*sin(q[2]))*sin(q[4]))*sin(q[5]);
   out[3] = -((-0.5*M_SQRT2*sin(q[0]) + (0.5)*M_SQRT2*cos(q[0]))*cos(q[1])*cos(q[3]) - (-((0.5)*M_SQRT2*sin(q[0]) - 0.5*M_SQRT2*cos(q[0]))*sin(q[1])*cos(q[2]) + ((0.5)*M_SQRT2*sin(q[0]) + (0.5)*M_SQRT2*cos(q[0]))*sin(q[2]))*sin(q[3]))*sin(q[5])*cos(q[4]) + (((0.5)*M_SQRT2*sin(q[0]) - 0.5*M_SQRT2*cos(q[0]))*sin(q[3])*cos(q[1]) - (-((0.5)*M_SQRT2*sin(q[0]) - 0.5*M_SQRT2*cos(q[0]))*sin(q[1])*cos(q[2]) + ((0.5)*M_SQRT2*sin(q[0]) + (0.5)*M_SQRT2*cos(q[0]))*sin(q[2]))*cos(q[3]))*cos(q[5]);
   out[4] = (-(((0.5)*M_SQRT2*sin(q[0]) - 0.5*M_SQRT2*cos(q[0]))*sin(q[1])*sin(q[2]) + ((0.5)*M_SQRT2*sin(q[0]) + (0.5)*M_SQRT2*cos(q[0]))*cos(q[2]))*cos(q[4]) + (-((0.5)*M_SQRT2*sin(q[0]) - 0.5*M_SQRT2*cos(q[0]))*sin(q[3])*cos(q[1]) + (-((0.5)*M_SQRT2*sin(q[0]) - 0.5*M_SQRT2*cos(q[0]))*sin(q[1])*cos(q[2]) + ((0.5)*M_SQRT2*sin(q[0]) + (0.5)*M_SQRT2*cos(q[0]))*sin(q[2]))*cos(q[3]))*sin(q[4]))*sin(q[5]);
   out[5] = (-(((0.5)*M_SQRT2*sin(q[0]) - 0.5*M_SQRT2*cos(q[0]))*sin(q[1])*sin(q[2]) + ((0.5)*M_SQRT2*sin(q[0]) + (0.5)*M_SQRT2*cos(q[0]))*cos(q[2]))*sin(q[4]) - (-((0.5)*M_SQRT2*sin(q[0]) - 0.5*M_SQRT2*cos(q[0]))*sin(q[3])*cos(q[1]) + (-((0.5)*M_SQRT2*sin(q[0]) - 0.5*M_SQRT2*cos(q[0]))*sin(q[1])*cos(q[2]) + ((0.5)*M_SQRT2*sin(q[0]) + (0.5)*M_SQRT2*cos(q[0]))*sin(q[2]))*cos(q[3]))*cos(q[4]))*cos(q[5]) - (-((0.5)*M_SQRT2*sin(q[0]) - 0.5*M_SQRT2*cos(q[0]))*cos(q[1])*cos(q[3]) - (-((0.5)*M_SQRT2*sin(q[0]) - 0.5*M_SQRT2*cos(q[0]))*sin(q[1])*cos(q[2]) + ((0.5)*M_SQRT2*sin(q[0]) + (0.5)*M_SQRT2*cos(q[0]))*sin(q[2]))*sin(q[3]))*sin(q[5]);
   out[6] = 0;
   out[7] = (-((-0.5*M_SQRT2*sin(q[0]) + (0.5)*M_SQRT2*cos(q[0]))*sin(q[3])*cos(q[1]) + ((-0.5*M_SQRT2*sin(q[0]) + (0.5)*M_SQRT2*cos(q[0]))*sin(q[1])*cos(q[2]) + ((0.5)*M_SQRT2*sin(q[0]) + (0.5)*M_SQRT2*cos(q[0]))*sin(q[2]))*cos(q[3]))*cos(q[4]) - (((0.5)*M_SQRT2*sin(q[0]) - 0.5*M_SQRT2*cos(q[0]))*sin(q[1])*sin(q[2]) + ((0.5)*M_SQRT2*sin(q[0]) + (0.5)*M_SQRT2*cos(q[0]))*cos(q[2]))*sin(q[4]))*sin(q[5]) + (-((0.5)*M_SQRT2*sin(q[0]) - 0.5*M_SQRT2*cos(q[0]))*cos(q[1])*cos(q[3]) - ((-0.5*M_SQRT2*sin(q[0]) + (0.5)*M_SQRT2*cos(q[0]))*sin(q[1])*cos(q[2]) + ((0.5)*M_SQRT2*sin(q[0]) + (0.5)*M_SQRT2*cos(q[0]))*sin(q[2]))*sin(q[3]))*cos(q[5]);
   out[8] = ((-0.5*M_SQRT2*sin(q[0]) - 0.5*M_SQRT2*cos(q[0]))*sin(q[1])*cos(q[3]) - ((0.5)*M_SQRT2*sin(q[0]) + (0.5)*M_SQRT2*cos(q[0]))*sin(q[3])*cos(q[1])*cos(q[2]))*cos(q[5]) + (-(-0.5*M_SQRT2*sin(q[0]) - 0.5*M_SQRT2*cos(q[0]))*sin(q[2])*sin(q[4])*cos(q[1]) - (-((0.5)*M_SQRT2*sin(q[0]) + (0.5)*M_SQRT2*cos(q[0]))*sin(q[1])*sin(q[3]) + ((0.5)*M_SQRT2*sin(q[0]) + (0.5)*M_SQRT2*cos(q[0]))*cos(q[1])*cos(q[2])*cos(q[3]))*cos(q[4]))*sin(q[5]);
   out[9] = -(((0.5)*M_SQRT2*sin(q[0]) - 0.5*M_SQRT2*cos(q[0]))*cos(q[2]) - ((0.5)*M_SQRT2*sin(q[0]) + (0.5)*M_SQRT2*cos(q[0]))*sin(q[1])*sin(q[2]))*sin(q[3])*cos(q[5]) + (-(((0.5)*M_SQRT2*sin(q[0]) - 0.5*M_SQRT2*cos(q[0]))*cos(q[2]) - ((0.5)*M_SQRT2*sin(q[0]) + (0.5)*M_SQRT2*cos(q[0]))*sin(q[1])*sin(q[2]))*cos(q[3])*cos(q[4]) - ((-0.5*M_SQRT2*sin(q[0]) - 0.5*M_SQRT2*cos(q[0]))*sin(q[1])*cos(q[2]) - ((0.5)*M_SQRT2*sin(q[0]) - 0.5*M_SQRT2*cos(q[0]))*sin(q[2]))*sin(q[4]))*sin(q[5]);
   out[10] = ((-0.5*M_SQRT2*sin(q[0]) - 0.5*M_SQRT2*cos(q[0]))*sin(q[3])*cos(q[1]) - (-(-0.5*M_SQRT2*sin(q[0]) - 0.5*M_SQRT2*cos(q[0]))*sin(q[1])*cos(q[2]) + ((0.5)*M_SQRT2*sin(q[0]) - 0.5*M_SQRT2*cos(q[0]))*sin(q[2]))*cos(q[3]))*cos(q[5]) - (((0.5)*M_SQRT2*sin(q[0]) + (0.5)*M_SQRT2*cos(q[0]))*cos(q[1])*cos(q[3]) - (-(-0.5*M_SQRT2*sin(q[0]) - 0.5*M_SQRT2*cos(q[0]))*sin(q[1])*cos(q[2]) + ((0.5)*M_SQRT2*sin(q[0]) - 0.5*M_SQRT2*cos(q[0]))*sin(q[2]))*sin(q[3]))*sin(q[5])*cos(q[4]);
   out[11] = (-((-0.5*M_SQRT2*sin(q[0]) - 0.5*M_SQRT2*cos(q[0]))*sin(q[1])*sin(q[2]) + ((0.5)*M_SQRT2*sin(q[0]) - 0.5*M_SQRT2*cos(q[0]))*cos(q[2]))*cos(q[4]) + (-(-0.5*M_SQRT2*sin(q[0]) - 0.5*M_SQRT2*cos(q[0]))*sin(q[3])*cos(q[1]) + (-(-0.5*M_SQRT2*sin(q[0]) - 0.5*M_SQRT2*cos(q[0]))*sin(q[1])*cos(q[2]) + ((0.5)*M_SQRT2*sin(q[0]) - 0.5*M_SQRT2*cos(q[0]))*sin(q[2]))*cos(q[3]))*sin(q[4]))*sin(q[5]);
   out[12] = (-((-0.5*M_SQRT2*sin(q[0]) - 0.5*M_SQRT2*cos(q[0]))*sin(q[1])*sin(q[2]) + ((0.5)*M_SQRT2*sin(q[0]) - 0.5*M_SQRT2*cos(q[0]))*cos(q[2]))*sin(q[4]) - (-(-0.5*M_SQRT2*sin(q[0]) - 0.5*M_SQRT2*cos(q[0]))*sin(q[3])*cos(q[1]) + (-(-0.5*M_SQRT2*sin(q[0]) - 0.5*M_SQRT2*cos(q[0]))*sin(q[1])*cos(q[2]) + ((0.5)*M_SQRT2*sin(q[0]) - 0.5*M_SQRT2*cos(q[0]))*sin(q[2]))*cos(q[3]))*cos(q[4]))*cos(q[5]) - (-(-0.5*M_SQRT2*sin(q[0]) - 0.5*M_SQRT2*cos(q[0]))*cos(q[1])*cos(q[3]) - (-(-0.5*M_SQRT2*sin(q[0]) - 0.5*M_SQRT2*cos(q[0]))*sin(q[1])*cos(q[2]) + ((0.5)*M_SQRT2*sin(q[0]) - 0.5*M_SQRT2*cos(q[0]))*sin(q[2]))*sin(q[3]))*sin(q[5]);
   out[13] = 0;
   out[14] = 0;
   out[15] = (-(sin(q[1])*cos(q[2])*cos(q[3]) + sin(q[3])*cos(q[1]))*cos(q[4]) + sin(q[1])*sin(q[2])*sin(q[4]))*sin(q[5]) + (-sin(q[1])*sin(q[3])*cos(q[2]) + cos(q[1])*cos(q[3]))*cos(q[5]);
   out[16] = (-sin(q[2])*cos(q[1])*cos(q[3])*cos(q[4]) - sin(q[4])*cos(q[1])*cos(q[2]))*sin(q[5]) - sin(q[2])*sin(q[3])*cos(q[1])*cos(q[5]);
   out[17] = (-sin(q[1])*sin(q[3]) + cos(q[1])*cos(q[2])*cos(q[3]))*cos(q[5]) - (sin(q[1])*cos(q[3]) + sin(q[3])*cos(q[1])*cos(q[2]))*sin(q[5])*cos(q[4]);
   out[18] = ((sin(q[1])*sin(q[3]) - cos(q[1])*cos(q[2])*cos(q[3]))*sin(q[4]) - sin(q[2])*cos(q[1])*cos(q[4]))*sin(q[5]);
   out[19] = (-(sin(q[1])*sin(q[3]) - cos(q[1])*cos(q[2])*cos(q[3]))*cos(q[4]) - sin(q[2])*sin(q[4])*cos(q[1]))*cos(q[5]) - (sin(q[1])*cos(q[3]) + sin(q[3])*cos(q[1])*cos(q[2]))*sin(q[5]);
   out[20] = 0;

}

void JRy_6(double *q, double *out) {

   out[0] = (((-0.5*M_SQRT2*sin(q[0]) + (0.5)*M_SQRT2*cos(q[0]))*cos(q[2]) + ((0.5)*M_SQRT2*sin(q[0]) + (0.5)*M_SQRT2*cos(q[0]))*sin(q[1])*sin(q[2]))*cos(q[4]) + (-(-0.5*M_SQRT2*sin(q[0]) - 0.5*M_SQRT2*cos(q[0]))*sin(q[3])*cos(q[1]) - ((-0.5*M_SQRT2*sin(q[0]) - 0.5*M_SQRT2*cos(q[0]))*sin(q[1])*cos(q[2]) + (-0.5*M_SQRT2*sin(q[0]) + (0.5)*M_SQRT2*cos(q[0]))*sin(q[2]))*cos(q[3]))*sin(q[4]))*cos(q[6]) + (-(((-0.5*M_SQRT2*sin(q[0]) + (0.5)*M_SQRT2*cos(q[0]))*cos(q[2]) + ((0.5)*M_SQRT2*sin(q[0]) + (0.5)*M_SQRT2*cos(q[0]))*sin(q[1])*sin(q[2]))*sin(q[4]) + ((-0.5*M_SQRT2*sin(q[0]) - 0.5*M_SQRT2*cos(q[0]))*sin(q[3])*cos(q[1]) + ((-0.5*M_SQRT2*sin(q[0]) - 0.5*M_SQRT2*cos(q[0]))*sin(q[1])*cos(q[2]) + (-0.5*M_SQRT2*sin(q[0]) + (0.5)*M_SQRT2*cos(q[0]))*sin(q[2]))*cos(q[3]))*cos(q[4]))*cos(q[5]) - (-((0.5)*M_SQRT2*sin(q[0]) + (0.5)*M_SQRT2*cos(q[0]))*cos(q[1])*cos(q[3]) - ((-0.5*M_SQRT2*sin(q[0]) - 0.5*M_SQRT2*cos(q[0]))*sin(q[1])*cos(q[2]) + (-0.5*M_SQRT2*sin(q[0]) + (0.5)*M_SQRT2*cos(q[0]))*sin(q[2]))*sin(q[3]))*sin(q[5]))*sin(q[6]);
   out[1] = (-(-(-0.5*M_SQRT2*sin(q[0]) + (0.5)*M_SQRT2*cos(q[0]))*sin(q[3])*cos(q[1])*cos(q[2]) + ((0.5)*M_SQRT2*sin(q[0]) - 0.5*M_SQRT2*cos(q[0]))*sin(q[1])*cos(q[3]))*sin(q[5]) - (((0.5)*M_SQRT2*sin(q[0]) - 0.5*M_SQRT2*cos(q[0]))*sin(q[2])*sin(q[4])*cos(q[1]) + (-(-0.5*M_SQRT2*sin(q[0]) + (0.5)*M_SQRT2*cos(q[0]))*sin(q[1])*sin(q[3]) + (-0.5*M_SQRT2*sin(q[0]) + (0.5)*M_SQRT2*cos(q[0]))*cos(q[1])*cos(q[2])*cos(q[3]))*cos(q[4]))*cos(q[5]))*sin(q[6]) + (((0.5)*M_SQRT2*sin(q[0]) - 0.5*M_SQRT2*cos(q[0]))*sin(q[2])*cos(q[1])*cos(q[4]) + ((-0.5*M_SQRT2*sin(q[0]) + (0.5)*M_SQRT2*cos(q[0]))*sin(q[1])*sin(q[3]) - (-0.5*M_SQRT2*sin(q[0]) + (0.5)*M_SQRT2*cos(q[0]))*cos(q[1])*cos(q[2])*cos(q[3]))*sin(q[4]))*cos(q[6]);
   out[2] = ((-(-0.5*M_SQRT2*sin(q[0]) + (0.5)*M_SQRT2*cos(q[0]))*sin(q[1])*sin(q[2]) + ((0.5)*M_SQRT2*sin(q[0]) + (0.5)*M_SQRT2*cos(q[0]))*cos(q[2]))*sin(q[3])*sin(q[5]) - ((-(-0.5*M_SQRT2*sin(q[0]) + (0.5)*M_SQRT2*cos(q[0]))*sin(q[1])*sin(q[2]) + ((0.5)*M_SQRT2*sin(q[0]) + (0.5)*M_SQRT2*cos(q[0]))*cos(q[2]))*cos(q[3])*cos(q[4]) + (((0.5)*M_SQRT2*sin(q[0]) - 0.5*M_SQRT2*cos(q[0]))*sin(q[1])*cos(q[2]) - ((0.5)*M_SQRT2*sin(q[0]) + (0.5)*M_SQRT2*cos(q[0]))*sin(q[2]))*sin(q[4]))*cos(q[5]))*sin(q[6]) + (-(-(-0.5*M_SQRT2*sin(q[0]) + (0.5)*M_SQRT2*cos(q[0]))*sin(q[1])*sin(q[2]) + ((0.5)*M_SQRT2*sin(q[0]) + (0.5)*M_SQRT2*cos(q[0]))*cos(q[2]))*sin(q[4])*cos(q[3]) + (((0.5)*M_SQRT2*sin(q[0]) - 0.5*M_SQRT2*cos(q[0]))*sin(q[1])*cos(q[2]) - ((0.5)*M_SQRT2*sin(q[0]) + (0.5)*M_SQRT2*cos(q[0]))*sin(q[2]))*cos(q[4]))*cos(q[6]);
   out[3] = (-(-0.5*M_SQRT2*sin(q[0]) + (0.5)*M_SQRT2*cos(q[0]))*cos(q[1])*cos(q[3]) + (-((0.5)*M_SQRT2*sin(q[0]) - 0.5*M_SQRT2*cos(q[0]))*sin(q[1])*cos(q[2]) + ((0.5)*M_SQRT2*sin(q[0]) + (0.5)*M_SQRT2*cos(q[0]))*sin(q[2]))*sin(q[3]))*sin(q[4])*cos(q[6]) + (-((-0.5*M_SQRT2*sin(q[0]) + (0.5)*M_SQRT2*cos(q[0]))*cos(q[1])*cos(q[3]) - (-((0.5)*M_SQRT2*sin(q[0]) - 0.5*M_SQRT2*cos(q[0]))*sin(q[1])*cos(q[2]) + ((0.5)*M_SQRT2*sin(q[0]) + (0.5)*M_SQRT2*cos(q[0]))*sin(q[2]))*sin(q[3]))*cos(q[4])*cos(q[5]) - (((0.5)*M_SQRT2*sin(q[0]) - 0.5*M_SQRT2*cos(q[0]))*sin(q[3])*cos(q[1]) - (-((0.5)*M_SQRT2*sin(q[0]) - 0.5*M_SQRT2*cos(q[0]))*sin(q[1])*cos(q[2]) + ((0.5)*M_SQRT2*sin(q[0]) + (0.5)*M_SQRT2*cos(q[0]))*sin(q[2]))*cos(q[3]))*sin(q[5]))*sin(q[6]);
   out[4] = (-(((0.5)*M_SQRT2*sin(q[0]) - 0.5*M_SQRT2*cos(q[0]))*sin(q[1])*sin(q[2]) + ((0.5)*M_SQRT2*sin(q[0]) + (0.5)*M_SQRT2*cos(q[0]))*cos(q[2]))*sin(q[4]) + (((0.5)*M_SQRT2*sin(q[0]) - 0.5*M_SQRT2*cos(q[0]))*sin(q[3])*cos(q[1]) - (-((0.5)*M_SQRT2*sin(q[0]) - 0.5*M_SQRT2*cos(q[0]))*sin(q[1])*cos(q[2]) + ((0.5)*M_SQRT2*sin(q[0]) + (0.5)*M_SQRT2*cos(q[0]))*sin(q[2]))*cos(q[3]))*cos(q[4]))*cos(q[6]) - ((((0.5)*M_SQRT2*sin(q[0]) - 0.5*M_SQRT2*cos(q[0]))*sin(q[1])*sin(q[2]) + ((0.5)*M_SQRT2*sin(q[0]) + (0.5)*M_SQRT2*cos(q[0]))*cos(q[2]))*cos(q[4]) - (-((0.5)*M_SQRT2*sin(q[0]) - 0.5*M_SQRT2*cos(q[0]))*sin(q[3])*cos(q[1]) + (-((0.5)*M_SQRT2*sin(q[0]) - 0.5*M_SQRT2*cos(q[0]))*sin(q[1])*cos(q[2]) + ((0.5)*M_SQRT2*sin(q[0]) + (0.5)*M_SQRT2*cos(q[0]))*sin(q[2]))*cos(q[3]))*sin(q[4]))*sin(q[6])*cos(q[5]);
   out[5] = (((((0.5)*M_SQRT2*sin(q[0]) - 0.5*M_SQRT2*cos(q[0]))*sin(q[1])*sin(q[2]) + ((0.5)*M_SQRT2*sin(q[0]) + (0.5)*M_SQRT2*cos(q[0]))*cos(q[2]))*sin(q[4]) + (-((0.5)*M_SQRT2*sin(q[0]) - 0.5*M_SQRT2*cos(q[0]))*sin(q[3])*cos(q[1]) + (-((0.5)*M_SQRT2*sin(q[0]) - 0.5*M_SQRT2*cos(q[0]))*sin(q[1])*cos(q[2]) + ((0.5)*M_SQRT2*sin(q[0]) + (0.5)*M_SQRT2*cos(q[0]))*sin(q[2]))*cos(q[3]))*cos(q[4]))*sin(q[5]) - (-((0.5)*M_SQRT2*sin(q[0]) - 0.5*M_SQRT2*cos(q[0]))*cos(q[1])*cos(q[3]) - (-((0.5)*M_SQRT2*sin(q[0]) - 0.5*M_SQRT2*cos(q[0]))*sin(q[1])*cos(q[2]) + ((0.5)*M_SQRT2*sin(q[0]) + (0.5)*M_SQRT2*cos(q[0]))*sin(q[2]))*sin(q[3]))*cos(q[5]))*sin(q[6]);
   out[6] = (-((((0.5)*M_SQRT2*sin(q[0]) - 0.5*M_SQRT2*cos(q[0]))*sin(q[1])*sin(q[2]) + ((0.5)*M_SQRT2*sin(q[0]) + (0.5)*M_SQRT2*cos(q[0]))*cos(q[2]))*sin(q[4]) + (-((0.5)*M_SQRT2*sin(q[0]) - 0.5*M_SQRT2*cos(q[0]))*sin(q[3])*cos(q[1]) + (-((0.5)*M_SQRT2*sin(q[0]) - 0.5*M_SQRT2*cos(q[0]))*sin(q[1])*cos(q[2]) + ((0.5)*M_SQRT2*sin(q[0]) + (0.5)*M_SQRT2*cos(q[0]))*sin(q[2]))*cos(q[3]))*cos(q[4]))*cos(q[5]) + (((0.5)*M_SQRT2*sin(q[0]) - 0.5*M_SQRT2*cos(q[0]))*cos(q[1])*cos(q[3]) + (-((0.5)*M_SQRT2*sin(q[0]) - 0.5*M_SQRT2*cos(q[0]))*sin(q[1])*cos(q[2]) + ((0.5)*M_SQRT2*sin(q[0]) + (0.5)*M_SQRT2*cos(q[0]))*sin(q[2]))*sin(q[3]))*sin(q[5]))*cos(q[6]) - ((((0.5)*M_SQRT2*sin(q[0]) - 0.5*M_SQRT2*cos(q[0]))*sin(q[1])*sin(q[2]) + ((0.5)*M_SQRT2*sin(q[0]) + (0.5)*M_SQRT2*cos(q[0]))*cos(q[2]))*cos(q[4]) - (-((0.5)*M_SQRT2*sin(q[0]) - 0.5*M_SQRT2*cos(q[0]))*sin(q[3])*cos(q[1]) + (-((0.5)*M_SQRT2*sin(q[0]) - 0.5*M_SQRT2*cos(q[0]))*sin(q[1])*cos(q[2]) + ((0.5)*M_SQRT2*sin(q[0]) + (0.5)*M_SQRT2*cos(q[0]))*sin(q[2]))*cos(q[3]))*sin(q[4]))*sin(q[6]);
   out[7] = (-(((-0.5*M_SQRT2*sin(q[0]) + (0.5)*M_SQRT2*cos(q[0]))*sin(q[3])*cos(q[1]) + ((-0.5*M_SQRT2*sin(q[0]) + (0.5)*M_SQRT2*cos(q[0]))*sin(q[1])*cos(q[2]) + ((0.5)*M_SQRT2*sin(q[0]) + (0.5)*M_SQRT2*cos(q[0]))*sin(q[2]))*cos(q[3]))*cos(q[4]) + (((0.5)*M_SQRT2*sin(q[0]) - 0.5*M_SQRT2*cos(q[0]))*sin(q[1])*sin(q[2]) + ((0.5)*M_SQRT2*sin(q[0]) + (0.5)*M_SQRT2*cos(q[0]))*cos(q[2]))*sin(q[4]))*cos(q[5]) - (-((0.5)*M_SQRT2*sin(q[0]) - 0.5*M_SQRT2*cos(q[0]))*cos(q[1])*cos(q[3]) - ((-0.5*M_SQRT2*sin(q[0]) + (0.5)*M_SQRT2*cos(q[0]))*sin(q[1])*cos(q[2]) + ((0.5)*M_SQRT2*sin(q[0]) + (0.5)*M_SQRT2*cos(q[0]))*sin(q[2]))*sin(q[3]))*sin(q[5]))*sin(q[6]) + ((-(-0.5*M_SQRT2*sin(q[0]) + (0.5)*M_SQRT2*cos(q[0]))*sin(q[3])*cos(q[1]) - ((-0.5*M_SQRT2*sin(q[0]) + (0.5)*M_SQRT2*cos(q[0]))*sin(q[1])*cos(q[2]) + ((0.5)*M_SQRT2*sin(q[0]) + (0.5)*M_SQRT2*cos(q[0]))*sin(q[2]))*cos(q[3]))*sin(q[4]) + (((0.5)*M_SQRT2*sin(q[0]) - 0.5*M_SQRT2*cos(q[0]))*sin(q[1])*sin(q[2]) + ((0.5)*M_SQRT2*sin(q[0]) + (0.5)*M_SQRT2*cos(q[0]))*cos(q[2]))*cos(q[4]))*cos(q[6]);
   out[8] = (-((-0.5*M_SQRT2*sin(q[0]) - 0.5*M_SQRT2*cos(q[0]))*sin(q[1])*cos(q[3]) - ((0.5)*M_SQRT2*sin(q[0]) + (0.5)*M_SQRT2*cos(q[0]))*sin(q[3])*cos(q[1])*cos(q[2]))*sin(q[5]) - ((-0.5*M_SQRT2*sin(q[0]) - 0.5*M_SQRT2*cos(q[0]))*sin(q[2])*sin(q[4])*cos(q[1]) + (-((0.5)*M_SQRT2*sin(q[0]) + (0.5)*M_SQRT2*cos(q[0]))*sin(q[1])*sin(q[3]) + ((0.5)*M_SQRT2*sin(q[0]) + (0.5)*M_SQRT2*cos(q[0]))*cos(q[1])*cos(q[2])*cos(q[3]))*cos(q[4]))*cos(q[5]))*sin(q[6]) + ((-0.5*M_SQRT2*sin(q[0]) - 0.5*M_SQRT2*cos(q[0]))*sin(q[2])*cos(q[1])*cos(q[4]) + (((0.5)*M_SQRT2*sin(q[0]) + (0.5)*M_SQRT2*cos(q[0]))*sin(q[1])*sin(q[3]) - ((0.5)*M_SQRT2*sin(q[0]) + (0.5)*M_SQRT2*cos(q[0]))*cos(q[1])*cos(q[2])*cos(q[3]))*sin(q[4]))*cos(q[6]);
   out[9] = ((((0.5)*M_SQRT2*sin(q[0]) - 0.5*M_SQRT2*cos(q[0]))*cos(q[2]) - ((0.5)*M_SQRT2*sin(q[0]) + (0.5)*M_SQRT2*cos(q[0]))*sin(q[1])*sin(q[2]))*sin(q[3])*sin(q[5]) - ((((0.5)*M_SQRT2*sin(q[0]) - 0.5*M_SQRT2*cos(q[0]))*cos(q[2]) - ((0.5)*M_SQRT2*sin(q[0]) + (0.5)*M_SQRT2*cos(q[0]))*sin(q[1])*sin(q[2]))*cos(q[3])*cos(q[4]) + ((-0.5*M_SQRT2*sin(q[0]) - 0.5*M_SQRT2*cos(q[0]))*sin(q[1])*cos(q[2]) - ((0.5)*M_SQRT2*sin(q[0]) - 0.5*M_SQRT2*cos(q[0]))*sin(q[2]))*sin(q[4]))*cos(q[5]))*sin(q[6]) + (-(((0.5)*M_SQRT2*sin(q[0]) - 0.5*M_SQRT2*cos(q[0]))*cos(q[2]) - ((0.5)*M_SQRT2*sin(q[0]) + (0.5)*M_SQRT2*cos(q[0]))*sin(q[1])*sin(q[2]))*sin(q[4])*cos(q[3]) + ((-0.5*M_SQRT2*sin(q[0]) - 0.5*M_SQRT2*cos(q[0]))*sin(q[1])*cos(q[2]) - ((0.5)*M_SQRT2*sin(q[0]) - 0.5*M_SQRT2*cos(q[0]))*sin(q[2]))*cos(q[4]))*cos(q[6]);
   out[10] = (-((-0.5*M_SQRT2*sin(q[0]) - 0.5*M_SQRT2*cos(q[0]))*sin(q[3])*cos(q[1]) - (-(-0.5*M_SQRT2*sin(q[0]) - 0.5*M_SQRT2*cos(q[0]))*sin(q[1])*cos(q[2]) + ((0.5)*M_SQRT2*sin(q[0]) - 0.5*M_SQRT2*cos(q[0]))*sin(q[2]))*cos(q[3]))*sin(q[5]) - (((0.5)*M_SQRT2*sin(q[0]) + (0.5)*M_SQRT2*cos(q[0]))*cos(q[1])*cos(q[3]) - (-(-0.5*M_SQRT2*sin(q[0]) - 0.5*M_SQRT2*cos(q[0]))*sin(q[1])*cos(q[2]) + ((0.5)*M_SQRT2*sin(q[0]) - 0.5*M_SQRT2*cos(q[0]))*sin(q[2]))*sin(q[3]))*cos(q[4])*cos(q[5]))*sin(q[6]) + (-((0.5)*M_SQRT2*sin(q[0]) + (0.5)*M_SQRT2*cos(q[0]))*cos(q[1])*cos(q[3]) + (-(-0.5*M_SQRT2*sin(q[0]) - 0.5*M_SQRT2*cos(q[0]))*sin(q[1])*cos(q[2]) + ((0.5)*M_SQRT2*sin(q[0]) - 0.5*M_SQRT2*cos(q[0]))*sin(q[2]))*sin(q[3]))*sin(q[4])*cos(q[6]);
   out[11] = (-((-0.5*M_SQRT2*sin(q[0]) - 0.5*M_SQRT2*cos(q[0]))*sin(q[1])*sin(q[2]) + ((0.5)*M_SQRT2*sin(q[0]) - 0.5*M_SQRT2*cos(q[0]))*cos(q[2]))*sin(q[4]) + ((-0.5*M_SQRT2*sin(q[0]) - 0.5*M_SQRT2*cos(q[0]))*sin(q[3])*cos(q[1]) - (-(-0.5*M_SQRT2*sin(q[0]) - 0.5*M_SQRT2*cos(q[0]))*sin(q[1])*cos(q[2]) + ((0.5)*M_SQRT2*sin(q[0]) - 0.5*M_SQRT2*cos(q[0]))*sin(q[2]))*cos(q[3]))*cos(q[4]))*cos(q[6]) - (((-0.5*M_SQRT2*sin(q[0]) - 0.5*M_SQRT2*cos(q[0]))*sin(q[1])*sin(q[2]) + ((0.5)*M_SQRT2*sin(q[0]) - 0.5*M_SQRT2*cos(q[0]))*cos(q[2]))*cos(q[4]) - (-(-0.5*M_SQRT2*sin(q[0]) - 0.5*M_SQRT2*cos(q[0]))*sin(q[3])*cos(q[1]) + (-(-0.5*M_SQRT2*sin(q[0]) - 0.5*M_SQRT2*cos(q[0]))*sin(q[1])*cos(q[2]) + ((0.5)*M_SQRT2*sin(q[0]) - 0.5*M_SQRT2*cos(q[0]))*sin(q[2]))*cos(q[3]))*sin(q[4]))*sin(q[6])*cos(q[5]);
   out[12] = ((((-0.5*M_SQRT2*sin(q[0]) - 0.5*M_SQRT2*cos(q[0]))*sin(q[1])*sin(q[2]) + ((0.5)*M_SQRT2*sin(q[0]) - 0.5*M_SQRT2*cos(q[0]))*cos(q[2]))*sin(q[4]) + (-(-0.5*M_SQRT2*sin(q[0]) - 0.5*M_SQRT2*cos(q[0]))*sin(q[3])*cos(q[1]) + (-(-0.5*M_SQRT2*sin(q[0]) - 0.5*M_SQRT2*cos(q[0]))*sin(q[1])*cos(q[2]) + ((0.5)*M_SQRT2*sin(q[0]) - 0.5*M_SQRT2*cos(q[0]))*sin(q[2]))*cos(q[3]))*cos(q[4]))*sin(q[5]) - (-(-0.5*M_SQRT2*sin(q[0]) - 0.5*M_SQRT2*cos(q[0]))*cos(q[1])*cos(q[3]) - (-(-0.5*M_SQRT2*sin(q[0]) - 0.5*M_SQRT2*cos(q[0]))*sin(q[1])*cos(q[2]) + ((0.5)*M_SQRT2*sin(q[0]) - 0.5*M_SQRT2*cos(q[0]))*sin(q[2]))*sin(q[3]))*cos(q[5]))*sin(q[6]);
   out[13] = (-(((-0.5*M_SQRT2*sin(q[0]) - 0.5*M_SQRT2*cos(q[0]))*sin(q[1])*sin(q[2]) + ((0.5)*M_SQRT2*sin(q[0]) - 0.5*M_SQRT2*cos(q[0]))*cos(q[2]))*sin(q[4]) + (-(-0.5*M_SQRT2*sin(q[0]) - 0.5*M_SQRT2*cos(q[0]))*sin(q[3])*cos(q[1]) + (-(-0.5*M_SQRT2*sin(q[0]) - 0.5*M_SQRT2*cos(q[0]))*sin(q[1])*cos(q[2]) + ((0.5)*M_SQRT2*sin(q[0]) - 0.5*M_SQRT2*cos(q[0]))*sin(q[2]))*cos(q[3]))*cos(q[4]))*cos(q[5]) + ((-0.5*M_SQRT2*sin(q[0]) - 0.5*M_SQRT2*cos(q[0]))*cos(q[1])*cos(q[3]) + (-(-0.5*M_SQRT2*sin(q[0]) - 0.5*M_SQRT2*cos(q[0]))*sin(q[1])*cos(q[2]) + ((0.5)*M_SQRT2*sin(q[0]) - 0.5*M_SQRT2*cos(q[0]))*sin(q[2]))*sin(q[3]))*sin(q[5]))*cos(q[6]) - (((-0.5*M_SQRT2*sin(q[0]) - 0.5*M_SQRT2*cos(q[0]))*sin(q[1])*sin(q[2]) + ((0.5)*M_SQRT2*sin(q[0]) - 0.5*M_SQRT2*cos(q[0]))*cos(q[2]))*cos(q[4]) - (-(-0.5*M_SQRT2*sin(q[0]) - 0.5*M_SQRT2*cos(q[0]))*sin(q[3])*cos(q[1]) + (-(-0.5*M_SQRT2*sin(q[0]) - 0.5*M_SQRT2*cos(q[0]))*sin(q[1])*cos(q[2]) + ((0.5)*M_SQRT2*sin(q[0]) - 0.5*M_SQRT2*cos(q[0]))*sin(q[2]))*cos(q[3]))*sin(q[4]))*sin(q[6]);
   out[14] = 0;
   out[15] = (-((sin(q[1])*cos(q[2])*cos(q[3]) + sin(q[3])*cos(q[1]))*cos(q[4]) - sin(q[1])*sin(q[2])*sin(q[4]))*cos(q[5]) - (-sin(q[1])*sin(q[3])*cos(q[2]) + cos(q[1])*cos(q[3]))*sin(q[5]))*sin(q[6]) + ((-sin(q[1])*cos(q[2])*cos(q[3]) - sin(q[3])*cos(q[1]))*sin(q[4]) - sin(q[1])*sin(q[2])*cos(q[4]))*cos(q[6]);
   out[16] = (-(sin(q[2])*cos(q[1])*cos(q[3])*cos(q[4]) + sin(q[4])*cos(q[1])*cos(q[2]))*cos(q[5]) + sin(q[2])*sin(q[3])*sin(q[5])*cos(q[1]))*sin(q[6]) + (-sin(q[2])*sin(q[4])*cos(q[1])*cos(q[3]) + cos(q[1])*cos(q[2])*cos(q[4]))*cos(q[6]);
   out[17] = (-(-sin(q[1])*sin(q[3]) + cos(q[1])*cos(q[2])*cos(q[3]))*sin(q[5]) - (sin(q[1])*cos(q[3]) + sin(q[3])*cos(q[1])*cos(q[2]))*cos(q[4])*cos(q[5]))*sin(q[6]) + (-sin(q[1])*cos(q[3]) - sin(q[3])*cos(q[1])*cos(q[2]))*sin(q[4])*cos(q[6]);
   out[18] = ((-sin(q[1])*sin(q[3]) + cos(q[1])*cos(q[2])*cos(q[3]))*cos(q[4]) - sin(q[2])*sin(q[4])*cos(q[1]))*cos(q[6]) - (-(sin(q[1])*sin(q[3]) - cos(q[1])*cos(q[2])*cos(q[3]))*sin(q[4]) + sin(q[2])*cos(q[1])*cos(q[4]))*sin(q[6])*cos(q[5]);
   out[19] = (((sin(q[1])*sin(q[3]) - cos(q[1])*cos(q[2])*cos(q[3]))*cos(q[4]) + sin(q[2])*sin(q[4])*cos(q[1]))*sin(q[5]) - (sin(q[1])*cos(q[3]) + sin(q[3])*cos(q[1])*cos(q[2]))*cos(q[5]))*sin(q[6]);
   out[20] = (-((sin(q[1])*sin(q[3]) - cos(q[1])*cos(q[2])*cos(q[3]))*cos(q[4]) + sin(q[2])*sin(q[4])*cos(q[1]))*cos(q[5]) + (-sin(q[1])*cos(q[3]) - sin(q[3])*cos(q[1])*cos(q[2]))*sin(q[5]))*cos(q[6]) - (-(sin(q[1])*sin(q[3]) - cos(q[1])*cos(q[2])*cos(q[3]))*sin(q[4]) + sin(q[2])*cos(q[1])*cos(q[4]))*sin(q[6]);

}
void JRy_ee(double *q, double *out) {

   out[0] = (((-0.5*M_SQRT2*sin(q[0]) + (0.5)*M_SQRT2*cos(q[0]))*cos(q[2]) + ((0.5)*M_SQRT2*sin(q[0]) + (0.5)*M_SQRT2*cos(q[0]))*sin(q[1])*sin(q[2]))*cos(q[4]) + (-(-0.5*M_SQRT2*sin(q[0]) - 0.5*M_SQRT2*cos(q[0]))*sin(q[3])*cos(q[1]) - ((-0.5*M_SQRT2*sin(q[0]) - 0.5*M_SQRT2*cos(q[0]))*sin(q[1])*cos(q[2]) + (-0.5*M_SQRT2*sin(q[0]) + (0.5)*M_SQRT2*cos(q[0]))*sin(q[2]))*cos(q[3]))*sin(q[4]))*cos(q[6]) + (-(((-0.5*M_SQRT2*sin(q[0]) + (0.5)*M_SQRT2*cos(q[0]))*cos(q[2]) + ((0.5)*M_SQRT2*sin(q[0]) + (0.5)*M_SQRT2*cos(q[0]))*sin(q[1])*sin(q[2]))*sin(q[4]) + ((-0.5*M_SQRT2*sin(q[0]) - 0.5*M_SQRT2*cos(q[0]))*sin(q[3])*cos(q[1]) + ((-0.5*M_SQRT2*sin(q[0]) - 0.5*M_SQRT2*cos(q[0]))*sin(q[1])*cos(q[2]) + (-0.5*M_SQRT2*sin(q[0]) + (0.5)*M_SQRT2*cos(q[0]))*sin(q[2]))*cos(q[3]))*cos(q[4]))*cos(q[5]) - (-((0.5)*M_SQRT2*sin(q[0]) + (0.5)*M_SQRT2*cos(q[0]))*cos(q[1])*cos(q[3]) - ((-0.5*M_SQRT2*sin(q[0]) - 0.5*M_SQRT2*cos(q[0]))*sin(q[1])*cos(q[2]) + (-0.5*M_SQRT2*sin(q[0]) + (0.5)*M_SQRT2*cos(q[0]))*sin(q[2]))*sin(q[3]))*sin(q[5]))*sin(q[6]);
   out[1] = (-(-(-0.5*M_SQRT2*sin(q[0]) + (0.5)*M_SQRT2*cos(q[0]))*sin(q[3])*cos(q[1])*cos(q[2]) + ((0.5)*M_SQRT2*sin(q[0]) - 0.5*M_SQRT2*cos(q[0]))*sin(q[1])*cos(q[3]))*sin(q[5]) - (((0.5)*M_SQRT2*sin(q[0]) - 0.5*M_SQRT2*cos(q[0]))*sin(q[2])*sin(q[4])*cos(q[1]) + (-(-0.5*M_SQRT2*sin(q[0]) + (0.5)*M_SQRT2*cos(q[0]))*sin(q[1])*sin(q[3]) + (-0.5*M_SQRT2*sin(q[0]) + (0.5)*M_SQRT2*cos(q[0]))*cos(q[1])*cos(q[2])*cos(q[3]))*cos(q[4]))*cos(q[5]))*sin(q[6]) + (((0.5)*M_SQRT2*sin(q[0]) - 0.5*M_SQRT2*cos(q[0]))*sin(q[2])*cos(q[1])*cos(q[4]) + ((-0.5*M_SQRT2*sin(q[0]) + (0.5)*M_SQRT2*cos(q[0]))*sin(q[1])*sin(q[3]) - (-0.5*M_SQRT2*sin(q[0]) + (0.5)*M_SQRT2*cos(q[0]))*cos(q[1])*cos(q[2])*cos(q[3]))*sin(q[4]))*cos(q[6]);
   out[2] = ((-(-0.5*M_SQRT2*sin(q[0]) + (0.5)*M_SQRT2*cos(q[0]))*sin(q[1])*sin(q[2]) + ((0.5)*M_SQRT2*sin(q[0]) + (0.5)*M_SQRT2*cos(q[0]))*cos(q[2]))*sin(q[3])*sin(q[5]) - ((-(-0.5*M_SQRT2*sin(q[0]) + (0.5)*M_SQRT2*cos(q[0]))*sin(q[1])*sin(q[2]) + ((0.5)*M_SQRT2*sin(q[0]) + (0.5)*M_SQRT2*cos(q[0]))*cos(q[2]))*cos(q[3])*cos(q[4]) + (((0.5)*M_SQRT2*sin(q[0]) - 0.5*M_SQRT2*cos(q[0]))*sin(q[1])*cos(q[2]) - ((0.5)*M_SQRT2*sin(q[0]) + (0.5)*M_SQRT2*cos(q[0]))*sin(q[2]))*sin(q[4]))*cos(q[5]))*sin(q[6]) + (-(-(-0.5*M_SQRT2*sin(q[0]) + (0.5)*M_SQRT2*cos(q[0]))*sin(q[1])*sin(q[2]) + ((0.5)*M_SQRT2*sin(q[0]) + (0.5)*M_SQRT2*cos(q[0]))*cos(q[2]))*sin(q[4])*cos(q[3]) + (((0.5)*M_SQRT2*sin(q[0]) - 0.5*M_SQRT2*cos(q[0]))*sin(q[1])*cos(q[2]) - ((0.5)*M_SQRT2*sin(q[0]) + (0.5)*M_SQRT2*cos(q[0]))*sin(q[2]))*cos(q[4]))*cos(q[6]);
   out[3] = (-(-0.5*M_SQRT2*sin(q[0]) + (0.5)*M_SQRT2*cos(q[0]))*cos(q[1])*cos(q[3]) + (-((0.5)*M_SQRT2*sin(q[0]) - 0.5*M_SQRT2*cos(q[0]))*sin(q[1])*cos(q[2]) + ((0.5)*M_SQRT2*sin(q[0]) + (0.5)*M_SQRT2*cos(q[0]))*sin(q[2]))*sin(q[3]))*sin(q[4])*cos(q[6]) + (-((-0.5*M_SQRT2*sin(q[0]) + (0.5)*M_SQRT2*cos(q[0]))*cos(q[1])*cos(q[3]) - (-((0.5)*M_SQRT2*sin(q[0]) - 0.5*M_SQRT2*cos(q[0]))*sin(q[1])*cos(q[2]) + ((0.5)*M_SQRT2*sin(q[0]) + (0.5)*M_SQRT2*cos(q[0]))*sin(q[2]))*sin(q[3]))*cos(q[4])*cos(q[5]) - (((0.5)*M_SQRT2*sin(q[0]) - 0.5*M_SQRT2*cos(q[0]))*sin(q[3])*cos(q[1]) - (-((0.5)*M_SQRT2*sin(q[0]) - 0.5*M_SQRT2*cos(q[0]))*sin(q[1])*cos(q[2]) + ((0.5)*M_SQRT2*sin(q[0]) + (0.5)*M_SQRT2*cos(q[0]))*sin(q[2]))*cos(q[3]))*sin(q[5]))*sin(q[6]);
   out[4] = (-(((0.5)*M_SQRT2*sin(q[0]) - 0.5*M_SQRT2*cos(q[0]))*sin(q[1])*sin(q[2]) + ((0.5)*M_SQRT2*sin(q[0]) + (0.5)*M_SQRT2*cos(q[0]))*cos(q[2]))*sin(q[4]) + (((0.5)*M_SQRT2*sin(q[0]) - 0.5*M_SQRT2*cos(q[0]))*sin(q[3])*cos(q[1]) - (-((0.5)*M_SQRT2*sin(q[0]) - 0.5*M_SQRT2*cos(q[0]))*sin(q[1])*cos(q[2]) + ((0.5)*M_SQRT2*sin(q[0]) + (0.5)*M_SQRT2*cos(q[0]))*sin(q[2]))*cos(q[3]))*cos(q[4]))*cos(q[6]) - ((((0.5)*M_SQRT2*sin(q[0]) - 0.5*M_SQRT2*cos(q[0]))*sin(q[1])*sin(q[2]) + ((0.5)*M_SQRT2*sin(q[0]) + (0.5)*M_SQRT2*cos(q[0]))*cos(q[2]))*cos(q[4]) - (-((0.5)*M_SQRT2*sin(q[0]) - 0.5*M_SQRT2*cos(q[0]))*sin(q[3])*cos(q[1]) + (-((0.5)*M_SQRT2*sin(q[0]) - 0.5*M_SQRT2*cos(q[0]))*sin(q[1])*cos(q[2]) + ((0.5)*M_SQRT2*sin(q[0]) + (0.5)*M_SQRT2*cos(q[0]))*sin(q[2]))*cos(q[3]))*sin(q[4]))*sin(q[6])*cos(q[5]);
   out[5] = (((((0.5)*M_SQRT2*sin(q[0]) - 0.5*M_SQRT2*cos(q[0]))*sin(q[1])*sin(q[2]) + ((0.5)*M_SQRT2*sin(q[0]) + (0.5)*M_SQRT2*cos(q[0]))*cos(q[2]))*sin(q[4]) + (-((0.5)*M_SQRT2*sin(q[0]) - 0.5*M_SQRT2*cos(q[0]))*sin(q[3])*cos(q[1]) + (-((0.5)*M_SQRT2*sin(q[0]) - 0.5*M_SQRT2*cos(q[0]))*sin(q[1])*cos(q[2]) + ((0.5)*M_SQRT2*sin(q[0]) + (0.5)*M_SQRT2*cos(q[0]))*sin(q[2]))*cos(q[3]))*cos(q[4]))*sin(q[5]) - (-((0.5)*M_SQRT2*sin(q[0]) - 0.5*M_SQRT2*cos(q[0]))*cos(q[1])*cos(q[3]) - (-((0.5)*M_SQRT2*sin(q[0]) - 0.5*M_SQRT2*cos(q[0]))*sin(q[1])*cos(q[2]) + ((0.5)*M_SQRT2*sin(q[0]) + (0.5)*M_SQRT2*cos(q[0]))*sin(q[2]))*sin(q[3]))*cos(q[5]))*sin(q[6]);
   out[6] = (-((((0.5)*M_SQRT2*sin(q[0]) - 0.5*M_SQRT2*cos(q[0]))*sin(q[1])*sin(q[2]) + ((0.5)*M_SQRT2*sin(q[0]) + (0.5)*M_SQRT2*cos(q[0]))*cos(q[2]))*sin(q[4]) + (-((0.5)*M_SQRT2*sin(q[0]) - 0.5*M_SQRT2*cos(q[0]))*sin(q[3])*cos(q[1]) + (-((0.5)*M_SQRT2*sin(q[0]) - 0.5*M_SQRT2*cos(q[0]))*sin(q[1])*cos(q[2]) + ((0.5)*M_SQRT2*sin(q[0]) + (0.5)*M_SQRT2*cos(q[0]))*sin(q[2]))*cos(q[3]))*cos(q[4]))*cos(q[5]) + (((0.5)*M_SQRT2*sin(q[0]) - 0.5*M_SQRT2*cos(q[0]))*cos(q[1])*cos(q[3]) + (-((0.5)*M_SQRT2*sin(q[0]) - 0.5*M_SQRT2*cos(q[0]))*sin(q[1])*cos(q[2]) + ((0.5)*M_SQRT2*sin(q[0]) + (0.5)*M_SQRT2*cos(q[0]))*sin(q[2]))*sin(q[3]))*sin(q[5]))*cos(q[6]) - ((((0.5)*M_SQRT2*sin(q[0]) - 0.5*M_SQRT2*cos(q[0]))*sin(q[1])*sin(q[2]) + ((0.5)*M_SQRT2*sin(q[0]) + (0.5)*M_SQRT2*cos(q[0]))*cos(q[2]))*cos(q[4]) - (-((0.5)*M_SQRT2*sin(q[0]) - 0.5*M_SQRT2*cos(q[0]))*sin(q[3])*cos(q[1]) + (-((0.5)*M_SQRT2*sin(q[0]) - 0.5*M_SQRT2*cos(q[0]))*sin(q[1])*cos(q[2]) + ((0.5)*M_SQRT2*sin(q[0]) + (0.5)*M_SQRT2*cos(q[0]))*sin(q[2]))*cos(q[3]))*sin(q[4]))*sin(q[6]);
   out[7] = (-(((-0.5*M_SQRT2*sin(q[0]) + (0.5)*M_SQRT2*cos(q[0]))*sin(q[3])*cos(q[1]) + ((-0.5*M_SQRT2*sin(q[0]) + (0.5)*M_SQRT2*cos(q[0]))*sin(q[1])*cos(q[2]) + ((0.5)*M_SQRT2*sin(q[0]) + (0.5)*M_SQRT2*cos(q[0]))*sin(q[2]))*cos(q[3]))*cos(q[4]) + (((0.5)*M_SQRT2*sin(q[0]) - 0.5*M_SQRT2*cos(q[0]))*sin(q[1])*sin(q[2]) + ((0.5)*M_SQRT2*sin(q[0]) + (0.5)*M_SQRT2*cos(q[0]))*cos(q[2]))*sin(q[4]))*cos(q[5]) - (-((0.5)*M_SQRT2*sin(q[0]) - 0.5*M_SQRT2*cos(q[0]))*cos(q[1])*cos(q[3]) - ((-0.5*M_SQRT2*sin(q[0]) + (0.5)*M_SQRT2*cos(q[0]))*sin(q[1])*cos(q[2]) + ((0.5)*M_SQRT2*sin(q[0]) + (0.5)*M_SQRT2*cos(q[0]))*sin(q[2]))*sin(q[3]))*sin(q[5]))*sin(q[6]) + ((-(-0.5*M_SQRT2*sin(q[0]) + (0.5)*M_SQRT2*cos(q[0]))*sin(q[3])*cos(q[1]) - ((-0.5*M_SQRT2*sin(q[0]) + (0.5)*M_SQRT2*cos(q[0]))*sin(q[1])*cos(q[2]) + ((0.5)*M_SQRT2*sin(q[0]) + (0.5)*M_SQRT2*cos(q[0]))*sin(q[2]))*cos(q[3]))*sin(q[4]) + (((0.5)*M_SQRT2*sin(q[0]) - 0.5*M_SQRT2*cos(q[0]))*sin(q[1])*sin(q[2]) + ((0.5)*M_SQRT2*sin(q[0]) + (0.5)*M_SQRT2*cos(q[0]))*cos(q[2]))*cos(q[4]))*cos(q[6]);
   out[8] = (-((-0.5*M_SQRT2*sin(q[0]) - 0.5*M_SQRT2*cos(q[0]))*sin(q[1])*cos(q[3]) - ((0.5)*M_SQRT2*sin(q[0]) + (0.5)*M_SQRT2*cos(q[0]))*sin(q[3])*cos(q[1])*cos(q[2]))*sin(q[5]) - ((-0.5*M_SQRT2*sin(q[0]) - 0.5*M_SQRT2*cos(q[0]))*sin(q[2])*sin(q[4])*cos(q[1]) + (-((0.5)*M_SQRT2*sin(q[0]) + (0.5)*M_SQRT2*cos(q[0]))*sin(q[1])*sin(q[3]) + ((0.5)*M_SQRT2*sin(q[0]) + (0.5)*M_SQRT2*cos(q[0]))*cos(q[1])*cos(q[2])*cos(q[3]))*cos(q[4]))*cos(q[5]))*sin(q[6]) + ((-0.5*M_SQRT2*sin(q[0]) - 0.5*M_SQRT2*cos(q[0]))*sin(q[2])*cos(q[1])*cos(q[4]) + (((0.5)*M_SQRT2*sin(q[0]) + (0.5)*M_SQRT2*cos(q[0]))*sin(q[1])*sin(q[3]) - ((0.5)*M_SQRT2*sin(q[0]) + (0.5)*M_SQRT2*cos(q[0]))*cos(q[1])*cos(q[2])*cos(q[3]))*sin(q[4]))*cos(q[6]);
   out[9] = ((((0.5)*M_SQRT2*sin(q[0]) - 0.5*M_SQRT2*cos(q[0]))*cos(q[2]) - ((0.5)*M_SQRT2*sin(q[0]) + (0.5)*M_SQRT2*cos(q[0]))*sin(q[1])*sin(q[2]))*sin(q[3])*sin(q[5]) - ((((0.5)*M_SQRT2*sin(q[0]) - 0.5*M_SQRT2*cos(q[0]))*cos(q[2]) - ((0.5)*M_SQRT2*sin(q[0]) + (0.5)*M_SQRT2*cos(q[0]))*sin(q[1])*sin(q[2]))*cos(q[3])*cos(q[4]) + ((-0.5*M_SQRT2*sin(q[0]) - 0.5*M_SQRT2*cos(q[0]))*sin(q[1])*cos(q[2]) - ((0.5)*M_SQRT2*sin(q[0]) - 0.5*M_SQRT2*cos(q[0]))*sin(q[2]))*sin(q[4]))*cos(q[5]))*sin(q[6]) + (-(((0.5)*M_SQRT2*sin(q[0]) - 0.5*M_SQRT2*cos(q[0]))*cos(q[2]) - ((0.5)*M_SQRT2*sin(q[0]) + (0.5)*M_SQRT2*cos(q[0]))*sin(q[1])*sin(q[2]))*sin(q[4])*cos(q[3]) + ((-0.5*M_SQRT2*sin(q[0]) - 0.5*M_SQRT2*cos(q[0]))*sin(q[1])*cos(q[2]) - ((0.5)*M_SQRT2*sin(q[0]) - 0.5*M_SQRT2*cos(q[0]))*sin(q[2]))*cos(q[4]))*cos(q[6]);
   out[10] = (-((-0.5*M_SQRT2*sin(q[0]) - 0.5*M_SQRT2*cos(q[0]))*sin(q[3])*cos(q[1]) - (-(-0.5*M_SQRT2*sin(q[0]) - 0.5*M_SQRT2*cos(q[0]))*sin(q[1])*cos(q[2]) + ((0.5)*M_SQRT2*sin(q[0]) - 0.5*M_SQRT2*cos(q[0]))*sin(q[2]))*cos(q[3]))*sin(q[5]) - (((0.5)*M_SQRT2*sin(q[0]) + (0.5)*M_SQRT2*cos(q[0]))*cos(q[1])*cos(q[3]) - (-(-0.5*M_SQRT2*sin(q[0]) - 0.5*M_SQRT2*cos(q[0]))*sin(q[1])*cos(q[2]) + ((0.5)*M_SQRT2*sin(q[0]) - 0.5*M_SQRT2*cos(q[0]))*sin(q[2]))*sin(q[3]))*cos(q[4])*cos(q[5]))*sin(q[6]) + (-((0.5)*M_SQRT2*sin(q[0]) + (0.5)*M_SQRT2*cos(q[0]))*cos(q[1])*cos(q[3]) + (-(-0.5*M_SQRT2*sin(q[0]) - 0.5*M_SQRT2*cos(q[0]))*sin(q[1])*cos(q[2]) + ((0.5)*M_SQRT2*sin(q[0]) - 0.5*M_SQRT2*cos(q[0]))*sin(q[2]))*sin(q[3]))*sin(q[4])*cos(q[6]);
   out[11] = (-((-0.5*M_SQRT2*sin(q[0]) - 0.5*M_SQRT2*cos(q[0]))*sin(q[1])*sin(q[2]) + ((0.5)*M_SQRT2*sin(q[0]) - 0.5*M_SQRT2*cos(q[0]))*cos(q[2]))*sin(q[4]) + ((-0.5*M_SQRT2*sin(q[0]) - 0.5*M_SQRT2*cos(q[0]))*sin(q[3])*cos(q[1]) - (-(-0.5*M_SQRT2*sin(q[0]) - 0.5*M_SQRT2*cos(q[0]))*sin(q[1])*cos(q[2]) + ((0.5)*M_SQRT2*sin(q[0]) - 0.5*M_SQRT2*cos(q[0]))*sin(q[2]))*cos(q[3]))*cos(q[4]))*cos(q[6]) - (((-0.5*M_SQRT2*sin(q[0]) - 0.5*M_SQRT2*cos(q[0]))*sin(q[1])*sin(q[2]) + ((0.5)*M_SQRT2*sin(q[0]) - 0.5*M_SQRT2*cos(q[0]))*cos(q[2]))*cos(q[4]) - (-(-0.5*M_SQRT2*sin(q[0]) - 0.5*M_SQRT2*cos(q[0]))*sin(q[3])*cos(q[1]) + (-(-0.5*M_SQRT2*sin(q[0]) - 0.5*M_SQRT2*cos(q[0]))*sin(q[1])*cos(q[2]) + ((0.5)*M_SQRT2*sin(q[0]) - 0.5*M_SQRT2*cos(q[0]))*sin(q[2]))*cos(q[3]))*sin(q[4]))*sin(q[6])*cos(q[5]);
   out[12] = ((((-0.5*M_SQRT2*sin(q[0]) - 0.5*M_SQRT2*cos(q[0]))*sin(q[1])*sin(q[2]) + ((0.5)*M_SQRT2*sin(q[0]) - 0.5*M_SQRT2*cos(q[0]))*cos(q[2]))*sin(q[4]) + (-(-0.5*M_SQRT2*sin(q[0]) - 0.5*M_SQRT2*cos(q[0]))*sin(q[3])*cos(q[1]) + (-(-0.5*M_SQRT2*sin(q[0]) - 0.5*M_SQRT2*cos(q[0]))*sin(q[1])*cos(q[2]) + ((0.5)*M_SQRT2*sin(q[0]) - 0.5*M_SQRT2*cos(q[0]))*sin(q[2]))*cos(q[3]))*cos(q[4]))*sin(q[5]) - (-(-0.5*M_SQRT2*sin(q[0]) - 0.5*M_SQRT2*cos(q[0]))*cos(q[1])*cos(q[3]) - (-(-0.5*M_SQRT2*sin(q[0]) - 0.5*M_SQRT2*cos(q[0]))*sin(q[1])*cos(q[2]) + ((0.5)*M_SQRT2*sin(q[0]) - 0.5*M_SQRT2*cos(q[0]))*sin(q[2]))*sin(q[3]))*cos(q[5]))*sin(q[6]);
   out[13] = (-(((-0.5*M_SQRT2*sin(q[0]) - 0.5*M_SQRT2*cos(q[0]))*sin(q[1])*sin(q[2]) + ((0.5)*M_SQRT2*sin(q[0]) - 0.5*M_SQRT2*cos(q[0]))*cos(q[2]))*sin(q[4]) + (-(-0.5*M_SQRT2*sin(q[0]) - 0.5*M_SQRT2*cos(q[0]))*sin(q[3])*cos(q[1]) + (-(-0.5*M_SQRT2*sin(q[0]) - 0.5*M_SQRT2*cos(q[0]))*sin(q[1])*cos(q[2]) + ((0.5)*M_SQRT2*sin(q[0]) - 0.5*M_SQRT2*cos(q[0]))*sin(q[2]))*cos(q[3]))*cos(q[4]))*cos(q[5]) + ((-0.5*M_SQRT2*sin(q[0]) - 0.5*M_SQRT2*cos(q[0]))*cos(q[1])*cos(q[3]) + (-(-0.5*M_SQRT2*sin(q[0]) - 0.5*M_SQRT2*cos(q[0]))*sin(q[1])*cos(q[2]) + ((0.5)*M_SQRT2*sin(q[0]) - 0.5*M_SQRT2*cos(q[0]))*sin(q[2]))*sin(q[3]))*sin(q[5]))*cos(q[6]) - (((-0.5*M_SQRT2*sin(q[0]) - 0.5*M_SQRT2*cos(q[0]))*sin(q[1])*sin(q[2]) + ((0.5)*M_SQRT2*sin(q[0]) - 0.5*M_SQRT2*cos(q[0]))*cos(q[2]))*cos(q[4]) - (-(-0.5*M_SQRT2*sin(q[0]) - 0.5*M_SQRT2*cos(q[0]))*sin(q[3])*cos(q[1]) + (-(-0.5*M_SQRT2*sin(q[0]) - 0.5*M_SQRT2*cos(q[0]))*sin(q[1])*cos(q[2]) + ((0.5)*M_SQRT2*sin(q[0]) - 0.5*M_SQRT2*cos(q[0]))*sin(q[2]))*cos(q[3]))*sin(q[4]))*sin(q[6]);
   out[14] = 0;
   out[15] = (-((sin(q[1])*cos(q[2])*cos(q[3]) + sin(q[3])*cos(q[1]))*cos(q[4]) - sin(q[1])*sin(q[2])*sin(q[4]))*cos(q[5]) - (-sin(q[1])*sin(q[3])*cos(q[2]) + cos(q[1])*cos(q[3]))*sin(q[5]))*sin(q[6]) + ((-sin(q[1])*cos(q[2])*cos(q[3]) - sin(q[3])*cos(q[1]))*sin(q[4]) - sin(q[1])*sin(q[2])*cos(q[4]))*cos(q[6]);
   out[16] = (-(sin(q[2])*cos(q[1])*cos(q[3])*cos(q[4]) + sin(q[4])*cos(q[1])*cos(q[2]))*cos(q[5]) + sin(q[2])*sin(q[3])*sin(q[5])*cos(q[1]))*sin(q[6]) + (-sin(q[2])*sin(q[4])*cos(q[1])*cos(q[3]) + cos(q[1])*cos(q[2])*cos(q[4]))*cos(q[6]);
   out[17] = (-(-sin(q[1])*sin(q[3]) + cos(q[1])*cos(q[2])*cos(q[3]))*sin(q[5]) - (sin(q[1])*cos(q[3]) + sin(q[3])*cos(q[1])*cos(q[2]))*cos(q[4])*cos(q[5]))*sin(q[6]) + (-sin(q[1])*cos(q[3]) - sin(q[3])*cos(q[1])*cos(q[2]))*sin(q[4])*cos(q[6]);
   out[18] = ((-sin(q[1])*sin(q[3]) + cos(q[1])*cos(q[2])*cos(q[3]))*cos(q[4]) - sin(q[2])*sin(q[4])*cos(q[1]))*cos(q[6]) - (-(sin(q[1])*sin(q[3]) - cos(q[1])*cos(q[2])*cos(q[3]))*sin(q[4]) + sin(q[2])*cos(q[1])*cos(q[4]))*sin(q[6])*cos(q[5]);
   out[19] = (((sin(q[1])*sin(q[3]) - cos(q[1])*cos(q[2])*cos(q[3]))*cos(q[4]) + sin(q[2])*sin(q[4])*cos(q[1]))*sin(q[5]) - (sin(q[1])*cos(q[3]) + sin(q[3])*cos(q[1])*cos(q[2]))*cos(q[5]))*sin(q[6]);
   out[20] = (-((sin(q[1])*sin(q[3]) - cos(q[1])*cos(q[2])*cos(q[3]))*cos(q[4]) + sin(q[2])*sin(q[4])*cos(q[1]))*cos(q[5]) + (-sin(q[1])*cos(q[3]) - sin(q[3])*cos(q[1])*cos(q[2]))*sin(q[5]))*cos(q[6]) - (-(sin(q[1])*sin(q[3]) - cos(q[1])*cos(q[2])*cos(q[3]))*sin(q[4]) + sin(q[2])*cos(q[1])*cos(q[4]))*sin(q[6]);

}







































