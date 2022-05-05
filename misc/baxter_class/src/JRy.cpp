/******************************************************************************
 *                       Code generated with sympy 1.9                        *
 *                                                                            *
 *              See http://www.sympy.org/ for more information.               *
 *                                                                            *
 *                    This file is part of 'JRy_W0project'                    *
 ******************************************************************************/
#include "../include/baxter.hpp"


void baxter::Baxter::JRy_W0(const Vector7d& q, Matrix_3_7_d& out) {

   out(0) = 0;
   out(1) = 0;
   out(2) = 0;
   out(3) = 0;
   out(4) = 0;
   out(5) = 0;
   out(6) = 0;
   out(7) = 0;
   out(8) = 0;
   out(9) = 0;
   out(10) = 0;
   out(11) = 0;
   out(12) = 0;
   out(13) = 0;
   out(14) = 0;
   out(15) = 0;
   out(16) = 0;
   out(17) = 0;
   out(18) = 0;
   out(19) = 0;
   out(20) = 0;

}


void baxter::Baxter::JRy_BR(const Vector7d& q, Matrix_3_7_d& out) {

   out(0) = 0;
   out(1) = 0;
   out(2) = 0;
   out(3) = 0;
   out(4) = 0;
   out(5) = 0;
   out(6) = 0;
   out(7) = 0;
   out(8) = 0;
   out(9) = 0;
   out(10) = 0;
   out(11) = 0;
   out(12) = 0;
   out(13) = 0;
   out(14) = 0;
   out(15) = 0;
   out(16) = 0;
   out(17) = 0;
   out(18) = 0;
   out(19) = 0;
   out(20) = 0;

}

void baxter::Baxter::JRy_0(const Vector7d& q, Matrix_3_7_d& out) {

   out(0,0)= -0.5*M_SQRT2*sin(q(0)) + (0.5)*M_SQRT2*cos(q(0));
   out(0,1)= 0;
   out(0,2)= 0;
   out(0,3)= 0;
   out(0,4)= 0;
   out(0,5)= 0;
   out(0,6)= 0;
   out(1,0)= (0.5)*M_SQRT2*sin(q(0)) + (0.5)*M_SQRT2*cos(q(0));
   out(1,1)= 0;
   out(1,2)= 0;
   out(1,3) = 0;
   out(1,4) = 0;
   out(1,5) = 0;
   out(1,6) = 0;
   out(2,0) = 0;
   out(2,1) = 0;
   out(2,2) = 0;
   out(2,3) = 0;
   out(2,4) = 0;
   out(2,5) = 0;
   out(2,6) = 0;

}

void baxter::Baxter::JRy_1(const Vector7d& q, Matrix_3_7_d& out) {

   out(0,0)= (-0.5*M_SQRT2*sin(q(0)) - 0.5*M_SQRT2*cos(q(0)))*cos(q(1));
   out(0,1)= -(-0.5*M_SQRT2*sin(q(0)) + (0.5)*M_SQRT2*cos(q(0)))*sin(q(1));
   out(0,2)= 0;
   out(0,3)= 0;
   out(0,4)= 0;
   out(0,5)= 0;
   out(0,6)= 0;
   out(1,0)= (-0.5*M_SQRT2*sin(q(0)) + (0.5)*M_SQRT2*cos(q(0)))*cos(q(1));
   out(1,1)= -((0.5)*M_SQRT2*sin(q(0)) + (0.5)*M_SQRT2*cos(q(0)))*sin(q(1));
   out(1,2)= 0;
   out(1,3) = 0;
   out(1,4) = 0;
   out(1,5) = 0;
   out(1,6) = 0;
   out(2,0) = 0;
   out(2,1) = cos(q(1));
   out(2,2) = 0;
   out(2,3) = 0;
   out(2,4) = 0;
   out(2,5) = 0;
   out(2,6) = 0;

}
void baxter::Baxter::JRy_2(const Vector7d& q, Matrix_3_7_d& out) {

   out(0,0)= (-0.5*M_SQRT2*sin(q(0)) + (0.5)*M_SQRT2*cos(q(0)))*cos(q(2)) + ((0.5)*M_SQRT2*sin(q(0)) + (0.5)*M_SQRT2*cos(q(0)))*sin(q(1))*sin(q(2));
   out(0,1)= ((0.5)*M_SQRT2*sin(q(0)) - 0.5*M_SQRT2*cos(q(0)))*sin(q(2))*cos(q(1));
   out(0,2)= ((0.5)*M_SQRT2*sin(q(0)) - 0.5*M_SQRT2*cos(q(0)))*sin(q(1))*cos(q(2)) - ((0.5)*M_SQRT2*sin(q(0)) + (0.5)*M_SQRT2*cos(q(0)))*sin(q(2));
   out(0,3)= 0;
   out(0,4)= 0;
   out(0,5)= 0;
   out(0,6)= 0;
   out(1,0)= ((0.5)*M_SQRT2*sin(q(0)) - 0.5*M_SQRT2*cos(q(0)))*sin(q(1))*sin(q(2)) + ((0.5)*M_SQRT2*sin(q(0)) + (0.5)*M_SQRT2*cos(q(0)))*cos(q(2));
   out(1,1)= (-0.5*M_SQRT2*sin(q(0)) - 0.5*M_SQRT2*cos(q(0)))*sin(q(2))*cos(q(1));
   out(1,2)= (-0.5*M_SQRT2*sin(q(0)) - 0.5*M_SQRT2*cos(q(0)))*sin(q(1))*cos(q(2)) - ((0.5)*M_SQRT2*sin(q(0)) - 0.5*M_SQRT2*cos(q(0)))*sin(q(2));
   out(1,3) = 0;
   out(1,4) = 0;
   out(1,5) = 0;
   out(1,6) = 0;
   out(2,0) = 0;
   out(2,1) = -sin(q(1))*sin(q(2));
   out(2,2) = cos(q(1))*cos(q(2));
   out(2,3) = 0;
   out(2,4) = 0;
   out(2,5) = 0;
   out(2,6) = 0;

}
void baxter::Baxter::JRy_3(const Vector7d& q, Matrix_3_7_d& out) {

   out(0,0)= (-0.5*M_SQRT2*sin(q(0)) - 0.5*M_SQRT2*cos(q(0)))*cos(q(1))*cos(q(3)) + (-(-0.5*M_SQRT2*sin(q(0)) - 0.5*M_SQRT2*cos(q(0)))*sin(q(1))*cos(q(2)) - (-0.5*M_SQRT2*sin(q(0)) + (0.5)*M_SQRT2*cos(q(0)))*sin(q(2)))*sin(q(3));
   out(0,1)= -(-0.5*M_SQRT2*sin(q(0)) + (0.5)*M_SQRT2*cos(q(0)))*sin(q(1))*cos(q(3)) - (-0.5*M_SQRT2*sin(q(0)) + (0.5)*M_SQRT2*cos(q(0)))*sin(q(3))*cos(q(1))*cos(q(2));
   out(0,2)= ((-0.5*M_SQRT2*sin(q(0)) + (0.5)*M_SQRT2*cos(q(0)))*sin(q(1))*sin(q(2)) - ((0.5)*M_SQRT2*sin(q(0)) + (0.5)*M_SQRT2*cos(q(0)))*cos(q(2)))*sin(q(3));
   out(0,3)= -(-0.5*M_SQRT2*sin(q(0)) + (0.5)*M_SQRT2*cos(q(0)))*sin(q(3))*cos(q(1)) + (((0.5)*M_SQRT2*sin(q(0)) - 0.5*M_SQRT2*cos(q(0)))*sin(q(1))*cos(q(2)) - ((0.5)*M_SQRT2*sin(q(0)) + (0.5)*M_SQRT2*cos(q(0)))*sin(q(2)))*cos(q(3));
   out(0,4)= 0;
   out(0,5)= 0;
   out(0,6)= 0;
   out(1,0)= (-0.5*M_SQRT2*sin(q(0)) + (0.5)*M_SQRT2*cos(q(0)))*cos(q(1))*cos(q(3)) + (-(-0.5*M_SQRT2*sin(q(0)) + (0.5)*M_SQRT2*cos(q(0)))*sin(q(1))*cos(q(2)) - ((0.5)*M_SQRT2*sin(q(0)) + (0.5)*M_SQRT2*cos(q(0)))*sin(q(2)))*sin(q(3));
   out(1,1)= -((0.5)*M_SQRT2*sin(q(0)) + (0.5)*M_SQRT2*cos(q(0)))*sin(q(1))*cos(q(3)) - ((0.5)*M_SQRT2*sin(q(0)) + (0.5)*M_SQRT2*cos(q(0)))*sin(q(3))*cos(q(1))*cos(q(2));
   out(1,2)= (-((0.5)*M_SQRT2*sin(q(0)) - 0.5*M_SQRT2*cos(q(0)))*cos(q(2)) + ((0.5)*M_SQRT2*sin(q(0)) + (0.5)*M_SQRT2*cos(q(0)))*sin(q(1))*sin(q(2)))*sin(q(3));
   out(1,3) = -((0.5)*M_SQRT2*sin(q(0)) + (0.5)*M_SQRT2*cos(q(0)))*sin(q(3))*cos(q(1)) + ((-0.5*M_SQRT2*sin(q(0)) - 0.5*M_SQRT2*cos(q(0)))*sin(q(1))*cos(q(2)) - ((0.5)*M_SQRT2*sin(q(0)) - 0.5*M_SQRT2*cos(q(0)))*sin(q(2)))*cos(q(3));
   out(1,4) = 0;
   out(1,5) = 0;
   out(1,6) = 0;
   out(2,0) = 0;
   out(2,1) = -sin(q(1))*sin(q(3))*cos(q(2)) + cos(q(1))*cos(q(3));
   out(2,2) = -sin(q(2))*sin(q(3))*cos(q(1));
   out(2,3) = -sin(q(1))*sin(q(3)) + cos(q(1))*cos(q(2))*cos(q(3));
   out(2,4) = 0;
   out(2,5) = 0;
   out(2,6) = 0;

}
void baxter::Baxter::JRy_4(const Vector7d& q, Matrix_3_7_d& out) {

   out(0,0)= ((-0.5*M_SQRT2*sin(q(0)) + (0.5)*M_SQRT2*cos(q(0)))*cos(q(2)) + ((0.5)*M_SQRT2*sin(q(0)) + (0.5)*M_SQRT2*cos(q(0)))*sin(q(1))*sin(q(2)))*cos(q(4)) + (-(-0.5*M_SQRT2*sin(q(0)) - 0.5*M_SQRT2*cos(q(0)))*sin(q(3))*cos(q(1)) - ((-0.5*M_SQRT2*sin(q(0)) - 0.5*M_SQRT2*cos(q(0)))*sin(q(1))*cos(q(2)) + (-0.5*M_SQRT2*sin(q(0)) + (0.5)*M_SQRT2*cos(q(0)))*sin(q(2)))*cos(q(3)))*sin(q(4));
   out(0,1)= ((0.5)*M_SQRT2*sin(q(0)) - 0.5*M_SQRT2*cos(q(0)))*sin(q(2))*cos(q(1))*cos(q(4)) + ((-0.5*M_SQRT2*sin(q(0)) + (0.5)*M_SQRT2*cos(q(0)))*sin(q(1))*sin(q(3)) - (-0.5*M_SQRT2*sin(q(0)) + (0.5)*M_SQRT2*cos(q(0)))*cos(q(1))*cos(q(2))*cos(q(3)))*sin(q(4));
   out(0,2)= -(-(-0.5*M_SQRT2*sin(q(0)) + (0.5)*M_SQRT2*cos(q(0)))*sin(q(1))*sin(q(2)) + ((0.5)*M_SQRT2*sin(q(0)) + (0.5)*M_SQRT2*cos(q(0)))*cos(q(2)))*sin(q(4))*cos(q(3)) + (((0.5)*M_SQRT2*sin(q(0)) - 0.5*M_SQRT2*cos(q(0)))*sin(q(1))*cos(q(2)) - ((0.5)*M_SQRT2*sin(q(0)) + (0.5)*M_SQRT2*cos(q(0)))*sin(q(2)))*cos(q(4));
   out(0,3)= (-(-0.5*M_SQRT2*sin(q(0)) + (0.5)*M_SQRT2*cos(q(0)))*cos(q(1))*cos(q(3)) + (-((0.5)*M_SQRT2*sin(q(0)) - 0.5*M_SQRT2*cos(q(0)))*sin(q(1))*cos(q(2)) + ((0.5)*M_SQRT2*sin(q(0)) + (0.5)*M_SQRT2*cos(q(0)))*sin(q(2)))*sin(q(3)))*sin(q(4));
   out(0,4)= -(((0.5)*M_SQRT2*sin(q(0)) - 0.5*M_SQRT2*cos(q(0)))*sin(q(1))*sin(q(2)) + ((0.5)*M_SQRT2*sin(q(0)) + (0.5)*M_SQRT2*cos(q(0)))*cos(q(2)))*sin(q(4)) + (((0.5)*M_SQRT2*sin(q(0)) - 0.5*M_SQRT2*cos(q(0)))*sin(q(3))*cos(q(1)) - (-((0.5)*M_SQRT2*sin(q(0)) - 0.5*M_SQRT2*cos(q(0)))*sin(q(1))*cos(q(2)) + ((0.5)*M_SQRT2*sin(q(0)) + (0.5)*M_SQRT2*cos(q(0)))*sin(q(2)))*cos(q(3)))*cos(q(4));
   out(0,5)= 0;
   out(0,6)= 0;
   out(1,0)= (-(-0.5*M_SQRT2*sin(q(0)) + (0.5)*M_SQRT2*cos(q(0)))*sin(q(3))*cos(q(1)) - ((-0.5*M_SQRT2*sin(q(0)) + (0.5)*M_SQRT2*cos(q(0)))*sin(q(1))*cos(q(2)) + ((0.5)*M_SQRT2*sin(q(0)) + (0.5)*M_SQRT2*cos(q(0)))*sin(q(2)))*cos(q(3)))*sin(q(4)) + (((0.5)*M_SQRT2*sin(q(0)) - 0.5*M_SQRT2*cos(q(0)))*sin(q(1))*sin(q(2)) + ((0.5)*M_SQRT2*sin(q(0)) + (0.5)*M_SQRT2*cos(q(0)))*cos(q(2)))*cos(q(4));
   out(1,1)= (-0.5*M_SQRT2*sin(q(0)) - 0.5*M_SQRT2*cos(q(0)))*sin(q(2))*cos(q(1))*cos(q(4)) + (((0.5)*M_SQRT2*sin(q(0)) + (0.5)*M_SQRT2*cos(q(0)))*sin(q(1))*sin(q(3)) - ((0.5)*M_SQRT2*sin(q(0)) + (0.5)*M_SQRT2*cos(q(0)))*cos(q(1))*cos(q(2))*cos(q(3)))*sin(q(4));
   out(1,2)= -(((0.5)*M_SQRT2*sin(q(0)) - 0.5*M_SQRT2*cos(q(0)))*cos(q(2)) - ((0.5)*M_SQRT2*sin(q(0)) + (0.5)*M_SQRT2*cos(q(0)))*sin(q(1))*sin(q(2)))*sin(q(4))*cos(q(3)) + ((-0.5*M_SQRT2*sin(q(0)) - 0.5*M_SQRT2*cos(q(0)))*sin(q(1))*cos(q(2)) - ((0.5)*M_SQRT2*sin(q(0)) - 0.5*M_SQRT2*cos(q(0)))*sin(q(2)))*cos(q(4));
   out(1,3) = (-((0.5)*M_SQRT2*sin(q(0)) + (0.5)*M_SQRT2*cos(q(0)))*cos(q(1))*cos(q(3)) + (-(-0.5*M_SQRT2*sin(q(0)) - 0.5*M_SQRT2*cos(q(0)))*sin(q(1))*cos(q(2)) + ((0.5)*M_SQRT2*sin(q(0)) - 0.5*M_SQRT2*cos(q(0)))*sin(q(2)))*sin(q(3)))*sin(q(4));
   out(1,4) = -((-0.5*M_SQRT2*sin(q(0)) - 0.5*M_SQRT2*cos(q(0)))*sin(q(1))*sin(q(2)) + ((0.5)*M_SQRT2*sin(q(0)) - 0.5*M_SQRT2*cos(q(0)))*cos(q(2)))*sin(q(4)) + ((-0.5*M_SQRT2*sin(q(0)) - 0.5*M_SQRT2*cos(q(0)))*sin(q(3))*cos(q(1)) - (-(-0.5*M_SQRT2*sin(q(0)) - 0.5*M_SQRT2*cos(q(0)))*sin(q(1))*cos(q(2)) + ((0.5)*M_SQRT2*sin(q(0)) - 0.5*M_SQRT2*cos(q(0)))*sin(q(2)))*cos(q(3)))*cos(q(4));
   out(1,5) = 0;
   out(1,6) = 0;
   out(2,0) = 0;
   out(2,1) = (-sin(q(1))*cos(q(2))*cos(q(3)) - sin(q(3))*cos(q(1)))*sin(q(4)) - sin(q(1))*sin(q(2))*cos(q(4));
   out(2,2) = -sin(q(2))*sin(q(4))*cos(q(1))*cos(q(3)) + cos(q(1))*cos(q(2))*cos(q(4));
   out(2,3) = (-sin(q(1))*cos(q(3)) - sin(q(3))*cos(q(1))*cos(q(2)))*sin(q(4));
   out(2,4) = (-sin(q(1))*sin(q(3)) + cos(q(1))*cos(q(2))*cos(q(3)))*cos(q(4)) - sin(q(2))*sin(q(4))*cos(q(1));
   out(2,5) = 0;
   out(2,6) = 0;

}
void baxter::Baxter::JRy_5(const Vector7d& q, Matrix_3_7_d& out) {

   out(0,0)= (-((-0.5*M_SQRT2*sin(q(0)) + (0.5)*M_SQRT2*cos(q(0)))*cos(q(2)) + ((0.5)*M_SQRT2*sin(q(0)) + (0.5)*M_SQRT2*cos(q(0)))*sin(q(1))*sin(q(2)))*sin(q(4)) - ((-0.5*M_SQRT2*sin(q(0)) - 0.5*M_SQRT2*cos(q(0)))*sin(q(3))*cos(q(1)) + ((-0.5*M_SQRT2*sin(q(0)) - 0.5*M_SQRT2*cos(q(0)))*sin(q(1))*cos(q(2)) + (-0.5*M_SQRT2*sin(q(0)) + (0.5)*M_SQRT2*cos(q(0)))*sin(q(2)))*cos(q(3)))*cos(q(4)))*sin(q(5)) + (-((0.5)*M_SQRT2*sin(q(0)) + (0.5)*M_SQRT2*cos(q(0)))*cos(q(1))*cos(q(3)) - ((-0.5*M_SQRT2*sin(q(0)) - 0.5*M_SQRT2*cos(q(0)))*sin(q(1))*cos(q(2)) + (-0.5*M_SQRT2*sin(q(0)) + (0.5)*M_SQRT2*cos(q(0)))*sin(q(2)))*sin(q(3)))*cos(q(5));
   out(0,1)= (-(-0.5*M_SQRT2*sin(q(0)) + (0.5)*M_SQRT2*cos(q(0)))*sin(q(3))*cos(q(1))*cos(q(2)) + ((0.5)*M_SQRT2*sin(q(0)) - 0.5*M_SQRT2*cos(q(0)))*sin(q(1))*cos(q(3)))*cos(q(5)) + (-((0.5)*M_SQRT2*sin(q(0)) - 0.5*M_SQRT2*cos(q(0)))*sin(q(2))*sin(q(4))*cos(q(1)) - (-(-0.5*M_SQRT2*sin(q(0)) + (0.5)*M_SQRT2*cos(q(0)))*sin(q(1))*sin(q(3)) + (-0.5*M_SQRT2*sin(q(0)) + (0.5)*M_SQRT2*cos(q(0)))*cos(q(1))*cos(q(2))*cos(q(3)))*cos(q(4)))*sin(q(5));
   out(0,2)= -(-(-0.5*M_SQRT2*sin(q(0)) + (0.5)*M_SQRT2*cos(q(0)))*sin(q(1))*sin(q(2)) + ((0.5)*M_SQRT2*sin(q(0)) + (0.5)*M_SQRT2*cos(q(0)))*cos(q(2)))*sin(q(3))*cos(q(5)) + (-(-(-0.5*M_SQRT2*sin(q(0)) + (0.5)*M_SQRT2*cos(q(0)))*sin(q(1))*sin(q(2)) + ((0.5)*M_SQRT2*sin(q(0)) + (0.5)*M_SQRT2*cos(q(0)))*cos(q(2)))*cos(q(3))*cos(q(4)) - (((0.5)*M_SQRT2*sin(q(0)) - 0.5*M_SQRT2*cos(q(0)))*sin(q(1))*cos(q(2)) - ((0.5)*M_SQRT2*sin(q(0)) + (0.5)*M_SQRT2*cos(q(0)))*sin(q(2)))*sin(q(4)))*sin(q(5));
   out(0,3)= -((-0.5*M_SQRT2*sin(q(0)) + (0.5)*M_SQRT2*cos(q(0)))*cos(q(1))*cos(q(3)) - (-((0.5)*M_SQRT2*sin(q(0)) - 0.5*M_SQRT2*cos(q(0)))*sin(q(1))*cos(q(2)) + ((0.5)*M_SQRT2*sin(q(0)) + (0.5)*M_SQRT2*cos(q(0)))*sin(q(2)))*sin(q(3)))*sin(q(5))*cos(q(4)) + (((0.5)*M_SQRT2*sin(q(0)) - 0.5*M_SQRT2*cos(q(0)))*sin(q(3))*cos(q(1)) - (-((0.5)*M_SQRT2*sin(q(0)) - 0.5*M_SQRT2*cos(q(0)))*sin(q(1))*cos(q(2)) + ((0.5)*M_SQRT2*sin(q(0)) + (0.5)*M_SQRT2*cos(q(0)))*sin(q(2)))*cos(q(3)))*cos(q(5));
   out(0,4)= (-(((0.5)*M_SQRT2*sin(q(0)) - 0.5*M_SQRT2*cos(q(0)))*sin(q(1))*sin(q(2)) + ((0.5)*M_SQRT2*sin(q(0)) + (0.5)*M_SQRT2*cos(q(0)))*cos(q(2)))*cos(q(4)) + (-((0.5)*M_SQRT2*sin(q(0)) - 0.5*M_SQRT2*cos(q(0)))*sin(q(3))*cos(q(1)) + (-((0.5)*M_SQRT2*sin(q(0)) - 0.5*M_SQRT2*cos(q(0)))*sin(q(1))*cos(q(2)) + ((0.5)*M_SQRT2*sin(q(0)) + (0.5)*M_SQRT2*cos(q(0)))*sin(q(2)))*cos(q(3)))*sin(q(4)))*sin(q(5));
   out(0,5)= (-(((0.5)*M_SQRT2*sin(q(0)) - 0.5*M_SQRT2*cos(q(0)))*sin(q(1))*sin(q(2)) + ((0.5)*M_SQRT2*sin(q(0)) + (0.5)*M_SQRT2*cos(q(0)))*cos(q(2)))*sin(q(4)) - (-((0.5)*M_SQRT2*sin(q(0)) - 0.5*M_SQRT2*cos(q(0)))*sin(q(3))*cos(q(1)) + (-((0.5)*M_SQRT2*sin(q(0)) - 0.5*M_SQRT2*cos(q(0)))*sin(q(1))*cos(q(2)) + ((0.5)*M_SQRT2*sin(q(0)) + (0.5)*M_SQRT2*cos(q(0)))*sin(q(2)))*cos(q(3)))*cos(q(4)))*cos(q(5)) - (-((0.5)*M_SQRT2*sin(q(0)) - 0.5*M_SQRT2*cos(q(0)))*cos(q(1))*cos(q(3)) - (-((0.5)*M_SQRT2*sin(q(0)) - 0.5*M_SQRT2*cos(q(0)))*sin(q(1))*cos(q(2)) + ((0.5)*M_SQRT2*sin(q(0)) + (0.5)*M_SQRT2*cos(q(0)))*sin(q(2)))*sin(q(3)))*sin(q(5));
   out(0,6)= 0;
   out(1,0)= (-((-0.5*M_SQRT2*sin(q(0)) + (0.5)*M_SQRT2*cos(q(0)))*sin(q(3))*cos(q(1)) + ((-0.5*M_SQRT2*sin(q(0)) + (0.5)*M_SQRT2*cos(q(0)))*sin(q(1))*cos(q(2)) + ((0.5)*M_SQRT2*sin(q(0)) + (0.5)*M_SQRT2*cos(q(0)))*sin(q(2)))*cos(q(3)))*cos(q(4)) - (((0.5)*M_SQRT2*sin(q(0)) - 0.5*M_SQRT2*cos(q(0)))*sin(q(1))*sin(q(2)) + ((0.5)*M_SQRT2*sin(q(0)) + (0.5)*M_SQRT2*cos(q(0)))*cos(q(2)))*sin(q(4)))*sin(q(5)) + (-((0.5)*M_SQRT2*sin(q(0)) - 0.5*M_SQRT2*cos(q(0)))*cos(q(1))*cos(q(3)) - ((-0.5*M_SQRT2*sin(q(0)) + (0.5)*M_SQRT2*cos(q(0)))*sin(q(1))*cos(q(2)) + ((0.5)*M_SQRT2*sin(q(0)) + (0.5)*M_SQRT2*cos(q(0)))*sin(q(2)))*sin(q(3)))*cos(q(5));
   out(1,1)= ((-0.5*M_SQRT2*sin(q(0)) - 0.5*M_SQRT2*cos(q(0)))*sin(q(1))*cos(q(3)) - ((0.5)*M_SQRT2*sin(q(0)) + (0.5)*M_SQRT2*cos(q(0)))*sin(q(3))*cos(q(1))*cos(q(2)))*cos(q(5)) + (-(-0.5*M_SQRT2*sin(q(0)) - 0.5*M_SQRT2*cos(q(0)))*sin(q(2))*sin(q(4))*cos(q(1)) - (-((0.5)*M_SQRT2*sin(q(0)) + (0.5)*M_SQRT2*cos(q(0)))*sin(q(1))*sin(q(3)) + ((0.5)*M_SQRT2*sin(q(0)) + (0.5)*M_SQRT2*cos(q(0)))*cos(q(1))*cos(q(2))*cos(q(3)))*cos(q(4)))*sin(q(5));
   out(1,2)= -(((0.5)*M_SQRT2*sin(q(0)) - 0.5*M_SQRT2*cos(q(0)))*cos(q(2)) - ((0.5)*M_SQRT2*sin(q(0)) + (0.5)*M_SQRT2*cos(q(0)))*sin(q(1))*sin(q(2)))*sin(q(3))*cos(q(5)) + (-(((0.5)*M_SQRT2*sin(q(0)) - 0.5*M_SQRT2*cos(q(0)))*cos(q(2)) - ((0.5)*M_SQRT2*sin(q(0)) + (0.5)*M_SQRT2*cos(q(0)))*sin(q(1))*sin(q(2)))*cos(q(3))*cos(q(4)) - ((-0.5*M_SQRT2*sin(q(0)) - 0.5*M_SQRT2*cos(q(0)))*sin(q(1))*cos(q(2)) - ((0.5)*M_SQRT2*sin(q(0)) - 0.5*M_SQRT2*cos(q(0)))*sin(q(2)))*sin(q(4)))*sin(q(5));
   out(1,3) = ((-0.5*M_SQRT2*sin(q(0)) - 0.5*M_SQRT2*cos(q(0)))*sin(q(3))*cos(q(1)) - (-(-0.5*M_SQRT2*sin(q(0)) - 0.5*M_SQRT2*cos(q(0)))*sin(q(1))*cos(q(2)) + ((0.5)*M_SQRT2*sin(q(0)) - 0.5*M_SQRT2*cos(q(0)))*sin(q(2)))*cos(q(3)))*cos(q(5)) - (((0.5)*M_SQRT2*sin(q(0)) + (0.5)*M_SQRT2*cos(q(0)))*cos(q(1))*cos(q(3)) - (-(-0.5*M_SQRT2*sin(q(0)) - 0.5*M_SQRT2*cos(q(0)))*sin(q(1))*cos(q(2)) + ((0.5)*M_SQRT2*sin(q(0)) - 0.5*M_SQRT2*cos(q(0)))*sin(q(2)))*sin(q(3)))*sin(q(5))*cos(q(4));
   out(1,4) = (-((-0.5*M_SQRT2*sin(q(0)) - 0.5*M_SQRT2*cos(q(0)))*sin(q(1))*sin(q(2)) + ((0.5)*M_SQRT2*sin(q(0)) - 0.5*M_SQRT2*cos(q(0)))*cos(q(2)))*cos(q(4)) + (-(-0.5*M_SQRT2*sin(q(0)) - 0.5*M_SQRT2*cos(q(0)))*sin(q(3))*cos(q(1)) + (-(-0.5*M_SQRT2*sin(q(0)) - 0.5*M_SQRT2*cos(q(0)))*sin(q(1))*cos(q(2)) + ((0.5)*M_SQRT2*sin(q(0)) - 0.5*M_SQRT2*cos(q(0)))*sin(q(2)))*cos(q(3)))*sin(q(4)))*sin(q(5));
   out(1,5) = (-((-0.5*M_SQRT2*sin(q(0)) - 0.5*M_SQRT2*cos(q(0)))*sin(q(1))*sin(q(2)) + ((0.5)*M_SQRT2*sin(q(0)) - 0.5*M_SQRT2*cos(q(0)))*cos(q(2)))*sin(q(4)) - (-(-0.5*M_SQRT2*sin(q(0)) - 0.5*M_SQRT2*cos(q(0)))*sin(q(3))*cos(q(1)) + (-(-0.5*M_SQRT2*sin(q(0)) - 0.5*M_SQRT2*cos(q(0)))*sin(q(1))*cos(q(2)) + ((0.5)*M_SQRT2*sin(q(0)) - 0.5*M_SQRT2*cos(q(0)))*sin(q(2)))*cos(q(3)))*cos(q(4)))*cos(q(5)) - (-(-0.5*M_SQRT2*sin(q(0)) - 0.5*M_SQRT2*cos(q(0)))*cos(q(1))*cos(q(3)) - (-(-0.5*M_SQRT2*sin(q(0)) - 0.5*M_SQRT2*cos(q(0)))*sin(q(1))*cos(q(2)) + ((0.5)*M_SQRT2*sin(q(0)) - 0.5*M_SQRT2*cos(q(0)))*sin(q(2)))*sin(q(3)))*sin(q(5));
   out(1,6) = 0;
   out(2,0) = 0;
   out(2,1) = (-(sin(q(1))*cos(q(2))*cos(q(3)) + sin(q(3))*cos(q(1)))*cos(q(4)) + sin(q(1))*sin(q(2))*sin(q(4)))*sin(q(5)) + (-sin(q(1))*sin(q(3))*cos(q(2)) + cos(q(1))*cos(q(3)))*cos(q(5));
   out(2,2) = (-sin(q(2))*cos(q(1))*cos(q(3))*cos(q(4)) - sin(q(4))*cos(q(1))*cos(q(2)))*sin(q(5)) - sin(q(2))*sin(q(3))*cos(q(1))*cos(q(5));
   out(2,3) = (-sin(q(1))*sin(q(3)) + cos(q(1))*cos(q(2))*cos(q(3)))*cos(q(5)) - (sin(q(1))*cos(q(3)) + sin(q(3))*cos(q(1))*cos(q(2)))*sin(q(5))*cos(q(4));
   out(2,4) = ((sin(q(1))*sin(q(3)) - cos(q(1))*cos(q(2))*cos(q(3)))*sin(q(4)) - sin(q(2))*cos(q(1))*cos(q(4)))*sin(q(5));
   out(2,5) = (-(sin(q(1))*sin(q(3)) - cos(q(1))*cos(q(2))*cos(q(3)))*cos(q(4)) - sin(q(2))*sin(q(4))*cos(q(1)))*cos(q(5)) - (sin(q(1))*cos(q(3)) + sin(q(3))*cos(q(1))*cos(q(2)))*sin(q(5));
   out(2,6) = 0;

}

void baxter::Baxter::JRy_6(const Vector7d& q, Matrix_3_7_d& out) {

   out(0,0)= (((-0.5*M_SQRT2*sin(q(0)) + (0.5)*M_SQRT2*cos(q(0)))*cos(q(2)) + ((0.5)*M_SQRT2*sin(q(0)) + (0.5)*M_SQRT2*cos(q(0)))*sin(q(1))*sin(q(2)))*cos(q(4)) + (-(-0.5*M_SQRT2*sin(q(0)) - 0.5*M_SQRT2*cos(q(0)))*sin(q(3))*cos(q(1)) - ((-0.5*M_SQRT2*sin(q(0)) - 0.5*M_SQRT2*cos(q(0)))*sin(q(1))*cos(q(2)) + (-0.5*M_SQRT2*sin(q(0)) + (0.5)*M_SQRT2*cos(q(0)))*sin(q(2)))*cos(q(3)))*sin(q(4)))*cos(q(6)) + (-(((-0.5*M_SQRT2*sin(q(0)) + (0.5)*M_SQRT2*cos(q(0)))*cos(q(2)) + ((0.5)*M_SQRT2*sin(q(0)) + (0.5)*M_SQRT2*cos(q(0)))*sin(q(1))*sin(q(2)))*sin(q(4)) + ((-0.5*M_SQRT2*sin(q(0)) - 0.5*M_SQRT2*cos(q(0)))*sin(q(3))*cos(q(1)) + ((-0.5*M_SQRT2*sin(q(0)) - 0.5*M_SQRT2*cos(q(0)))*sin(q(1))*cos(q(2)) + (-0.5*M_SQRT2*sin(q(0)) + (0.5)*M_SQRT2*cos(q(0)))*sin(q(2)))*cos(q(3)))*cos(q(4)))*cos(q(5)) - (-((0.5)*M_SQRT2*sin(q(0)) + (0.5)*M_SQRT2*cos(q(0)))*cos(q(1))*cos(q(3)) - ((-0.5*M_SQRT2*sin(q(0)) - 0.5*M_SQRT2*cos(q(0)))*sin(q(1))*cos(q(2)) + (-0.5*M_SQRT2*sin(q(0)) + (0.5)*M_SQRT2*cos(q(0)))*sin(q(2)))*sin(q(3)))*sin(q(5)))*sin(q(6));
   out(0,1)= (-(-(-0.5*M_SQRT2*sin(q(0)) + (0.5)*M_SQRT2*cos(q(0)))*sin(q(3))*cos(q(1))*cos(q(2)) + ((0.5)*M_SQRT2*sin(q(0)) - 0.5*M_SQRT2*cos(q(0)))*sin(q(1))*cos(q(3)))*sin(q(5)) - (((0.5)*M_SQRT2*sin(q(0)) - 0.5*M_SQRT2*cos(q(0)))*sin(q(2))*sin(q(4))*cos(q(1)) + (-(-0.5*M_SQRT2*sin(q(0)) + (0.5)*M_SQRT2*cos(q(0)))*sin(q(1))*sin(q(3)) + (-0.5*M_SQRT2*sin(q(0)) + (0.5)*M_SQRT2*cos(q(0)))*cos(q(1))*cos(q(2))*cos(q(3)))*cos(q(4)))*cos(q(5)))*sin(q(6)) + (((0.5)*M_SQRT2*sin(q(0)) - 0.5*M_SQRT2*cos(q(0)))*sin(q(2))*cos(q(1))*cos(q(4)) + ((-0.5*M_SQRT2*sin(q(0)) + (0.5)*M_SQRT2*cos(q(0)))*sin(q(1))*sin(q(3)) - (-0.5*M_SQRT2*sin(q(0)) + (0.5)*M_SQRT2*cos(q(0)))*cos(q(1))*cos(q(2))*cos(q(3)))*sin(q(4)))*cos(q(6));
   out(0,2)= ((-(-0.5*M_SQRT2*sin(q(0)) + (0.5)*M_SQRT2*cos(q(0)))*sin(q(1))*sin(q(2)) + ((0.5)*M_SQRT2*sin(q(0)) + (0.5)*M_SQRT2*cos(q(0)))*cos(q(2)))*sin(q(3))*sin(q(5)) - ((-(-0.5*M_SQRT2*sin(q(0)) + (0.5)*M_SQRT2*cos(q(0)))*sin(q(1))*sin(q(2)) + ((0.5)*M_SQRT2*sin(q(0)) + (0.5)*M_SQRT2*cos(q(0)))*cos(q(2)))*cos(q(3))*cos(q(4)) + (((0.5)*M_SQRT2*sin(q(0)) - 0.5*M_SQRT2*cos(q(0)))*sin(q(1))*cos(q(2)) - ((0.5)*M_SQRT2*sin(q(0)) + (0.5)*M_SQRT2*cos(q(0)))*sin(q(2)))*sin(q(4)))*cos(q(5)))*sin(q(6)) + (-(-(-0.5*M_SQRT2*sin(q(0)) + (0.5)*M_SQRT2*cos(q(0)))*sin(q(1))*sin(q(2)) + ((0.5)*M_SQRT2*sin(q(0)) + (0.5)*M_SQRT2*cos(q(0)))*cos(q(2)))*sin(q(4))*cos(q(3)) + (((0.5)*M_SQRT2*sin(q(0)) - 0.5*M_SQRT2*cos(q(0)))*sin(q(1))*cos(q(2)) - ((0.5)*M_SQRT2*sin(q(0)) + (0.5)*M_SQRT2*cos(q(0)))*sin(q(2)))*cos(q(4)))*cos(q(6));
   out(0,3)= (-(-0.5*M_SQRT2*sin(q(0)) + (0.5)*M_SQRT2*cos(q(0)))*cos(q(1))*cos(q(3)) + (-((0.5)*M_SQRT2*sin(q(0)) - 0.5*M_SQRT2*cos(q(0)))*sin(q(1))*cos(q(2)) + ((0.5)*M_SQRT2*sin(q(0)) + (0.5)*M_SQRT2*cos(q(0)))*sin(q(2)))*sin(q(3)))*sin(q(4))*cos(q(6)) + (-((-0.5*M_SQRT2*sin(q(0)) + (0.5)*M_SQRT2*cos(q(0)))*cos(q(1))*cos(q(3)) - (-((0.5)*M_SQRT2*sin(q(0)) - 0.5*M_SQRT2*cos(q(0)))*sin(q(1))*cos(q(2)) + ((0.5)*M_SQRT2*sin(q(0)) + (0.5)*M_SQRT2*cos(q(0)))*sin(q(2)))*sin(q(3)))*cos(q(4))*cos(q(5)) - (((0.5)*M_SQRT2*sin(q(0)) - 0.5*M_SQRT2*cos(q(0)))*sin(q(3))*cos(q(1)) - (-((0.5)*M_SQRT2*sin(q(0)) - 0.5*M_SQRT2*cos(q(0)))*sin(q(1))*cos(q(2)) + ((0.5)*M_SQRT2*sin(q(0)) + (0.5)*M_SQRT2*cos(q(0)))*sin(q(2)))*cos(q(3)))*sin(q(5)))*sin(q(6));
   out(0,4)= (-(((0.5)*M_SQRT2*sin(q(0)) - 0.5*M_SQRT2*cos(q(0)))*sin(q(1))*sin(q(2)) + ((0.5)*M_SQRT2*sin(q(0)) + (0.5)*M_SQRT2*cos(q(0)))*cos(q(2)))*sin(q(4)) + (((0.5)*M_SQRT2*sin(q(0)) - 0.5*M_SQRT2*cos(q(0)))*sin(q(3))*cos(q(1)) - (-((0.5)*M_SQRT2*sin(q(0)) - 0.5*M_SQRT2*cos(q(0)))*sin(q(1))*cos(q(2)) + ((0.5)*M_SQRT2*sin(q(0)) + (0.5)*M_SQRT2*cos(q(0)))*sin(q(2)))*cos(q(3)))*cos(q(4)))*cos(q(6)) - ((((0.5)*M_SQRT2*sin(q(0)) - 0.5*M_SQRT2*cos(q(0)))*sin(q(1))*sin(q(2)) + ((0.5)*M_SQRT2*sin(q(0)) + (0.5)*M_SQRT2*cos(q(0)))*cos(q(2)))*cos(q(4)) - (-((0.5)*M_SQRT2*sin(q(0)) - 0.5*M_SQRT2*cos(q(0)))*sin(q(3))*cos(q(1)) + (-((0.5)*M_SQRT2*sin(q(0)) - 0.5*M_SQRT2*cos(q(0)))*sin(q(1))*cos(q(2)) + ((0.5)*M_SQRT2*sin(q(0)) + (0.5)*M_SQRT2*cos(q(0)))*sin(q(2)))*cos(q(3)))*sin(q(4)))*sin(q(6))*cos(q(5));
   out(0,5)= (((((0.5)*M_SQRT2*sin(q(0)) - 0.5*M_SQRT2*cos(q(0)))*sin(q(1))*sin(q(2)) + ((0.5)*M_SQRT2*sin(q(0)) + (0.5)*M_SQRT2*cos(q(0)))*cos(q(2)))*sin(q(4)) + (-((0.5)*M_SQRT2*sin(q(0)) - 0.5*M_SQRT2*cos(q(0)))*sin(q(3))*cos(q(1)) + (-((0.5)*M_SQRT2*sin(q(0)) - 0.5*M_SQRT2*cos(q(0)))*sin(q(1))*cos(q(2)) + ((0.5)*M_SQRT2*sin(q(0)) + (0.5)*M_SQRT2*cos(q(0)))*sin(q(2)))*cos(q(3)))*cos(q(4)))*sin(q(5)) - (-((0.5)*M_SQRT2*sin(q(0)) - 0.5*M_SQRT2*cos(q(0)))*cos(q(1))*cos(q(3)) - (-((0.5)*M_SQRT2*sin(q(0)) - 0.5*M_SQRT2*cos(q(0)))*sin(q(1))*cos(q(2)) + ((0.5)*M_SQRT2*sin(q(0)) + (0.5)*M_SQRT2*cos(q(0)))*sin(q(2)))*sin(q(3)))*cos(q(5)))*sin(q(6));
   out(0,6)= (-((((0.5)*M_SQRT2*sin(q(0)) - 0.5*M_SQRT2*cos(q(0)))*sin(q(1))*sin(q(2)) + ((0.5)*M_SQRT2*sin(q(0)) + (0.5)*M_SQRT2*cos(q(0)))*cos(q(2)))*sin(q(4)) + (-((0.5)*M_SQRT2*sin(q(0)) - 0.5*M_SQRT2*cos(q(0)))*sin(q(3))*cos(q(1)) + (-((0.5)*M_SQRT2*sin(q(0)) - 0.5*M_SQRT2*cos(q(0)))*sin(q(1))*cos(q(2)) + ((0.5)*M_SQRT2*sin(q(0)) + (0.5)*M_SQRT2*cos(q(0)))*sin(q(2)))*cos(q(3)))*cos(q(4)))*cos(q(5)) + (((0.5)*M_SQRT2*sin(q(0)) - 0.5*M_SQRT2*cos(q(0)))*cos(q(1))*cos(q(3)) + (-((0.5)*M_SQRT2*sin(q(0)) - 0.5*M_SQRT2*cos(q(0)))*sin(q(1))*cos(q(2)) + ((0.5)*M_SQRT2*sin(q(0)) + (0.5)*M_SQRT2*cos(q(0)))*sin(q(2)))*sin(q(3)))*sin(q(5)))*cos(q(6)) - ((((0.5)*M_SQRT2*sin(q(0)) - 0.5*M_SQRT2*cos(q(0)))*sin(q(1))*sin(q(2)) + ((0.5)*M_SQRT2*sin(q(0)) + (0.5)*M_SQRT2*cos(q(0)))*cos(q(2)))*cos(q(4)) - (-((0.5)*M_SQRT2*sin(q(0)) - 0.5*M_SQRT2*cos(q(0)))*sin(q(3))*cos(q(1)) + (-((0.5)*M_SQRT2*sin(q(0)) - 0.5*M_SQRT2*cos(q(0)))*sin(q(1))*cos(q(2)) + ((0.5)*M_SQRT2*sin(q(0)) + (0.5)*M_SQRT2*cos(q(0)))*sin(q(2)))*cos(q(3)))*sin(q(4)))*sin(q(6));
   out(1,0)= (-(((-0.5*M_SQRT2*sin(q(0)) + (0.5)*M_SQRT2*cos(q(0)))*sin(q(3))*cos(q(1)) + ((-0.5*M_SQRT2*sin(q(0)) + (0.5)*M_SQRT2*cos(q(0)))*sin(q(1))*cos(q(2)) + ((0.5)*M_SQRT2*sin(q(0)) + (0.5)*M_SQRT2*cos(q(0)))*sin(q(2)))*cos(q(3)))*cos(q(4)) + (((0.5)*M_SQRT2*sin(q(0)) - 0.5*M_SQRT2*cos(q(0)))*sin(q(1))*sin(q(2)) + ((0.5)*M_SQRT2*sin(q(0)) + (0.5)*M_SQRT2*cos(q(0)))*cos(q(2)))*sin(q(4)))*cos(q(5)) - (-((0.5)*M_SQRT2*sin(q(0)) - 0.5*M_SQRT2*cos(q(0)))*cos(q(1))*cos(q(3)) - ((-0.5*M_SQRT2*sin(q(0)) + (0.5)*M_SQRT2*cos(q(0)))*sin(q(1))*cos(q(2)) + ((0.5)*M_SQRT2*sin(q(0)) + (0.5)*M_SQRT2*cos(q(0)))*sin(q(2)))*sin(q(3)))*sin(q(5)))*sin(q(6)) + ((-(-0.5*M_SQRT2*sin(q(0)) + (0.5)*M_SQRT2*cos(q(0)))*sin(q(3))*cos(q(1)) - ((-0.5*M_SQRT2*sin(q(0)) + (0.5)*M_SQRT2*cos(q(0)))*sin(q(1))*cos(q(2)) + ((0.5)*M_SQRT2*sin(q(0)) + (0.5)*M_SQRT2*cos(q(0)))*sin(q(2)))*cos(q(3)))*sin(q(4)) + (((0.5)*M_SQRT2*sin(q(0)) - 0.5*M_SQRT2*cos(q(0)))*sin(q(1))*sin(q(2)) + ((0.5)*M_SQRT2*sin(q(0)) + (0.5)*M_SQRT2*cos(q(0)))*cos(q(2)))*cos(q(4)))*cos(q(6));
   out(1,1)= (-((-0.5*M_SQRT2*sin(q(0)) - 0.5*M_SQRT2*cos(q(0)))*sin(q(1))*cos(q(3)) - ((0.5)*M_SQRT2*sin(q(0)) + (0.5)*M_SQRT2*cos(q(0)))*sin(q(3))*cos(q(1))*cos(q(2)))*sin(q(5)) - ((-0.5*M_SQRT2*sin(q(0)) - 0.5*M_SQRT2*cos(q(0)))*sin(q(2))*sin(q(4))*cos(q(1)) + (-((0.5)*M_SQRT2*sin(q(0)) + (0.5)*M_SQRT2*cos(q(0)))*sin(q(1))*sin(q(3)) + ((0.5)*M_SQRT2*sin(q(0)) + (0.5)*M_SQRT2*cos(q(0)))*cos(q(1))*cos(q(2))*cos(q(3)))*cos(q(4)))*cos(q(5)))*sin(q(6)) + ((-0.5*M_SQRT2*sin(q(0)) - 0.5*M_SQRT2*cos(q(0)))*sin(q(2))*cos(q(1))*cos(q(4)) + (((0.5)*M_SQRT2*sin(q(0)) + (0.5)*M_SQRT2*cos(q(0)))*sin(q(1))*sin(q(3)) - ((0.5)*M_SQRT2*sin(q(0)) + (0.5)*M_SQRT2*cos(q(0)))*cos(q(1))*cos(q(2))*cos(q(3)))*sin(q(4)))*cos(q(6));
   out(1,2)= ((((0.5)*M_SQRT2*sin(q(0)) - 0.5*M_SQRT2*cos(q(0)))*cos(q(2)) - ((0.5)*M_SQRT2*sin(q(0)) + (0.5)*M_SQRT2*cos(q(0)))*sin(q(1))*sin(q(2)))*sin(q(3))*sin(q(5)) - ((((0.5)*M_SQRT2*sin(q(0)) - 0.5*M_SQRT2*cos(q(0)))*cos(q(2)) - ((0.5)*M_SQRT2*sin(q(0)) + (0.5)*M_SQRT2*cos(q(0)))*sin(q(1))*sin(q(2)))*cos(q(3))*cos(q(4)) + ((-0.5*M_SQRT2*sin(q(0)) - 0.5*M_SQRT2*cos(q(0)))*sin(q(1))*cos(q(2)) - ((0.5)*M_SQRT2*sin(q(0)) - 0.5*M_SQRT2*cos(q(0)))*sin(q(2)))*sin(q(4)))*cos(q(5)))*sin(q(6)) + (-(((0.5)*M_SQRT2*sin(q(0)) - 0.5*M_SQRT2*cos(q(0)))*cos(q(2)) - ((0.5)*M_SQRT2*sin(q(0)) + (0.5)*M_SQRT2*cos(q(0)))*sin(q(1))*sin(q(2)))*sin(q(4))*cos(q(3)) + ((-0.5*M_SQRT2*sin(q(0)) - 0.5*M_SQRT2*cos(q(0)))*sin(q(1))*cos(q(2)) - ((0.5)*M_SQRT2*sin(q(0)) - 0.5*M_SQRT2*cos(q(0)))*sin(q(2)))*cos(q(4)))*cos(q(6));
   out(1,3) = (-((-0.5*M_SQRT2*sin(q(0)) - 0.5*M_SQRT2*cos(q(0)))*sin(q(3))*cos(q(1)) - (-(-0.5*M_SQRT2*sin(q(0)) - 0.5*M_SQRT2*cos(q(0)))*sin(q(1))*cos(q(2)) + ((0.5)*M_SQRT2*sin(q(0)) - 0.5*M_SQRT2*cos(q(0)))*sin(q(2)))*cos(q(3)))*sin(q(5)) - (((0.5)*M_SQRT2*sin(q(0)) + (0.5)*M_SQRT2*cos(q(0)))*cos(q(1))*cos(q(3)) - (-(-0.5*M_SQRT2*sin(q(0)) - 0.5*M_SQRT2*cos(q(0)))*sin(q(1))*cos(q(2)) + ((0.5)*M_SQRT2*sin(q(0)) - 0.5*M_SQRT2*cos(q(0)))*sin(q(2)))*sin(q(3)))*cos(q(4))*cos(q(5)))*sin(q(6)) + (-((0.5)*M_SQRT2*sin(q(0)) + (0.5)*M_SQRT2*cos(q(0)))*cos(q(1))*cos(q(3)) + (-(-0.5*M_SQRT2*sin(q(0)) - 0.5*M_SQRT2*cos(q(0)))*sin(q(1))*cos(q(2)) + ((0.5)*M_SQRT2*sin(q(0)) - 0.5*M_SQRT2*cos(q(0)))*sin(q(2)))*sin(q(3)))*sin(q(4))*cos(q(6));
   out(1,4) = (-((-0.5*M_SQRT2*sin(q(0)) - 0.5*M_SQRT2*cos(q(0)))*sin(q(1))*sin(q(2)) + ((0.5)*M_SQRT2*sin(q(0)) - 0.5*M_SQRT2*cos(q(0)))*cos(q(2)))*sin(q(4)) + ((-0.5*M_SQRT2*sin(q(0)) - 0.5*M_SQRT2*cos(q(0)))*sin(q(3))*cos(q(1)) - (-(-0.5*M_SQRT2*sin(q(0)) - 0.5*M_SQRT2*cos(q(0)))*sin(q(1))*cos(q(2)) + ((0.5)*M_SQRT2*sin(q(0)) - 0.5*M_SQRT2*cos(q(0)))*sin(q(2)))*cos(q(3)))*cos(q(4)))*cos(q(6)) - (((-0.5*M_SQRT2*sin(q(0)) - 0.5*M_SQRT2*cos(q(0)))*sin(q(1))*sin(q(2)) + ((0.5)*M_SQRT2*sin(q(0)) - 0.5*M_SQRT2*cos(q(0)))*cos(q(2)))*cos(q(4)) - (-(-0.5*M_SQRT2*sin(q(0)) - 0.5*M_SQRT2*cos(q(0)))*sin(q(3))*cos(q(1)) + (-(-0.5*M_SQRT2*sin(q(0)) - 0.5*M_SQRT2*cos(q(0)))*sin(q(1))*cos(q(2)) + ((0.5)*M_SQRT2*sin(q(0)) - 0.5*M_SQRT2*cos(q(0)))*sin(q(2)))*cos(q(3)))*sin(q(4)))*sin(q(6))*cos(q(5));
   out(1,5) = ((((-0.5*M_SQRT2*sin(q(0)) - 0.5*M_SQRT2*cos(q(0)))*sin(q(1))*sin(q(2)) + ((0.5)*M_SQRT2*sin(q(0)) - 0.5*M_SQRT2*cos(q(0)))*cos(q(2)))*sin(q(4)) + (-(-0.5*M_SQRT2*sin(q(0)) - 0.5*M_SQRT2*cos(q(0)))*sin(q(3))*cos(q(1)) + (-(-0.5*M_SQRT2*sin(q(0)) - 0.5*M_SQRT2*cos(q(0)))*sin(q(1))*cos(q(2)) + ((0.5)*M_SQRT2*sin(q(0)) - 0.5*M_SQRT2*cos(q(0)))*sin(q(2)))*cos(q(3)))*cos(q(4)))*sin(q(5)) - (-(-0.5*M_SQRT2*sin(q(0)) - 0.5*M_SQRT2*cos(q(0)))*cos(q(1))*cos(q(3)) - (-(-0.5*M_SQRT2*sin(q(0)) - 0.5*M_SQRT2*cos(q(0)))*sin(q(1))*cos(q(2)) + ((0.5)*M_SQRT2*sin(q(0)) - 0.5*M_SQRT2*cos(q(0)))*sin(q(2)))*sin(q(3)))*cos(q(5)))*sin(q(6));
   out(1,6) = (-(((-0.5*M_SQRT2*sin(q(0)) - 0.5*M_SQRT2*cos(q(0)))*sin(q(1))*sin(q(2)) + ((0.5)*M_SQRT2*sin(q(0)) - 0.5*M_SQRT2*cos(q(0)))*cos(q(2)))*sin(q(4)) + (-(-0.5*M_SQRT2*sin(q(0)) - 0.5*M_SQRT2*cos(q(0)))*sin(q(3))*cos(q(1)) + (-(-0.5*M_SQRT2*sin(q(0)) - 0.5*M_SQRT2*cos(q(0)))*sin(q(1))*cos(q(2)) + ((0.5)*M_SQRT2*sin(q(0)) - 0.5*M_SQRT2*cos(q(0)))*sin(q(2)))*cos(q(3)))*cos(q(4)))*cos(q(5)) + ((-0.5*M_SQRT2*sin(q(0)) - 0.5*M_SQRT2*cos(q(0)))*cos(q(1))*cos(q(3)) + (-(-0.5*M_SQRT2*sin(q(0)) - 0.5*M_SQRT2*cos(q(0)))*sin(q(1))*cos(q(2)) + ((0.5)*M_SQRT2*sin(q(0)) - 0.5*M_SQRT2*cos(q(0)))*sin(q(2)))*sin(q(3)))*sin(q(5)))*cos(q(6)) - (((-0.5*M_SQRT2*sin(q(0)) - 0.5*M_SQRT2*cos(q(0)))*sin(q(1))*sin(q(2)) + ((0.5)*M_SQRT2*sin(q(0)) - 0.5*M_SQRT2*cos(q(0)))*cos(q(2)))*cos(q(4)) - (-(-0.5*M_SQRT2*sin(q(0)) - 0.5*M_SQRT2*cos(q(0)))*sin(q(3))*cos(q(1)) + (-(-0.5*M_SQRT2*sin(q(0)) - 0.5*M_SQRT2*cos(q(0)))*sin(q(1))*cos(q(2)) + ((0.5)*M_SQRT2*sin(q(0)) - 0.5*M_SQRT2*cos(q(0)))*sin(q(2)))*cos(q(3)))*sin(q(4)))*sin(q(6));
   out(2,0) = 0;
   out(2,1) = (-((sin(q(1))*cos(q(2))*cos(q(3)) + sin(q(3))*cos(q(1)))*cos(q(4)) - sin(q(1))*sin(q(2))*sin(q(4)))*cos(q(5)) - (-sin(q(1))*sin(q(3))*cos(q(2)) + cos(q(1))*cos(q(3)))*sin(q(5)))*sin(q(6)) + ((-sin(q(1))*cos(q(2))*cos(q(3)) - sin(q(3))*cos(q(1)))*sin(q(4)) - sin(q(1))*sin(q(2))*cos(q(4)))*cos(q(6));
   out(2,2) = (-(sin(q(2))*cos(q(1))*cos(q(3))*cos(q(4)) + sin(q(4))*cos(q(1))*cos(q(2)))*cos(q(5)) + sin(q(2))*sin(q(3))*sin(q(5))*cos(q(1)))*sin(q(6)) + (-sin(q(2))*sin(q(4))*cos(q(1))*cos(q(3)) + cos(q(1))*cos(q(2))*cos(q(4)))*cos(q(6));
   out(2,3) = (-(-sin(q(1))*sin(q(3)) + cos(q(1))*cos(q(2))*cos(q(3)))*sin(q(5)) - (sin(q(1))*cos(q(3)) + sin(q(3))*cos(q(1))*cos(q(2)))*cos(q(4))*cos(q(5)))*sin(q(6)) + (-sin(q(1))*cos(q(3)) - sin(q(3))*cos(q(1))*cos(q(2)))*sin(q(4))*cos(q(6));
   out(2,4) = ((-sin(q(1))*sin(q(3)) + cos(q(1))*cos(q(2))*cos(q(3)))*cos(q(4)) - sin(q(2))*sin(q(4))*cos(q(1)))*cos(q(6)) - (-(sin(q(1))*sin(q(3)) - cos(q(1))*cos(q(2))*cos(q(3)))*sin(q(4)) + sin(q(2))*cos(q(1))*cos(q(4)))*sin(q(6))*cos(q(5));
   out(2,5) = (((sin(q(1))*sin(q(3)) - cos(q(1))*cos(q(2))*cos(q(3)))*cos(q(4)) + sin(q(2))*sin(q(4))*cos(q(1)))*sin(q(5)) - (sin(q(1))*cos(q(3)) + sin(q(3))*cos(q(1))*cos(q(2)))*cos(q(5)))*sin(q(6));
   out(2,6) = (-((sin(q(1))*sin(q(3)) - cos(q(1))*cos(q(2))*cos(q(3)))*cos(q(4)) + sin(q(2))*sin(q(4))*cos(q(1)))*cos(q(5)) + (-sin(q(1))*cos(q(3)) - sin(q(3))*cos(q(1))*cos(q(2)))*sin(q(5)))*cos(q(6)) - (-(sin(q(1))*sin(q(3)) - cos(q(1))*cos(q(2))*cos(q(3)))*sin(q(4)) + sin(q(2))*cos(q(1))*cos(q(4)))*sin(q(6));

}
void baxter::Baxter::JRy_ee(const Vector7d& q, Matrix_3_7_d& out) {

   out(0,0)= (((-0.5*M_SQRT2*sin(q(0)) + (0.5)*M_SQRT2*cos(q(0)))*cos(q(2)) + ((0.5)*M_SQRT2*sin(q(0)) + (0.5)*M_SQRT2*cos(q(0)))*sin(q(1))*sin(q(2)))*cos(q(4)) + (-(-0.5*M_SQRT2*sin(q(0)) - 0.5*M_SQRT2*cos(q(0)))*sin(q(3))*cos(q(1)) - ((-0.5*M_SQRT2*sin(q(0)) - 0.5*M_SQRT2*cos(q(0)))*sin(q(1))*cos(q(2)) + (-0.5*M_SQRT2*sin(q(0)) + (0.5)*M_SQRT2*cos(q(0)))*sin(q(2)))*cos(q(3)))*sin(q(4)))*cos(q(6)) + (-(((-0.5*M_SQRT2*sin(q(0)) + (0.5)*M_SQRT2*cos(q(0)))*cos(q(2)) + ((0.5)*M_SQRT2*sin(q(0)) + (0.5)*M_SQRT2*cos(q(0)))*sin(q(1))*sin(q(2)))*sin(q(4)) + ((-0.5*M_SQRT2*sin(q(0)) - 0.5*M_SQRT2*cos(q(0)))*sin(q(3))*cos(q(1)) + ((-0.5*M_SQRT2*sin(q(0)) - 0.5*M_SQRT2*cos(q(0)))*sin(q(1))*cos(q(2)) + (-0.5*M_SQRT2*sin(q(0)) + (0.5)*M_SQRT2*cos(q(0)))*sin(q(2)))*cos(q(3)))*cos(q(4)))*cos(q(5)) - (-((0.5)*M_SQRT2*sin(q(0)) + (0.5)*M_SQRT2*cos(q(0)))*cos(q(1))*cos(q(3)) - ((-0.5*M_SQRT2*sin(q(0)) - 0.5*M_SQRT2*cos(q(0)))*sin(q(1))*cos(q(2)) + (-0.5*M_SQRT2*sin(q(0)) + (0.5)*M_SQRT2*cos(q(0)))*sin(q(2)))*sin(q(3)))*sin(q(5)))*sin(q(6));
   out(0,1)= (-(-(-0.5*M_SQRT2*sin(q(0)) + (0.5)*M_SQRT2*cos(q(0)))*sin(q(3))*cos(q(1))*cos(q(2)) + ((0.5)*M_SQRT2*sin(q(0)) - 0.5*M_SQRT2*cos(q(0)))*sin(q(1))*cos(q(3)))*sin(q(5)) - (((0.5)*M_SQRT2*sin(q(0)) - 0.5*M_SQRT2*cos(q(0)))*sin(q(2))*sin(q(4))*cos(q(1)) + (-(-0.5*M_SQRT2*sin(q(0)) + (0.5)*M_SQRT2*cos(q(0)))*sin(q(1))*sin(q(3)) + (-0.5*M_SQRT2*sin(q(0)) + (0.5)*M_SQRT2*cos(q(0)))*cos(q(1))*cos(q(2))*cos(q(3)))*cos(q(4)))*cos(q(5)))*sin(q(6)) + (((0.5)*M_SQRT2*sin(q(0)) - 0.5*M_SQRT2*cos(q(0)))*sin(q(2))*cos(q(1))*cos(q(4)) + ((-0.5*M_SQRT2*sin(q(0)) + (0.5)*M_SQRT2*cos(q(0)))*sin(q(1))*sin(q(3)) - (-0.5*M_SQRT2*sin(q(0)) + (0.5)*M_SQRT2*cos(q(0)))*cos(q(1))*cos(q(2))*cos(q(3)))*sin(q(4)))*cos(q(6));
   out(0,2)= ((-(-0.5*M_SQRT2*sin(q(0)) + (0.5)*M_SQRT2*cos(q(0)))*sin(q(1))*sin(q(2)) + ((0.5)*M_SQRT2*sin(q(0)) + (0.5)*M_SQRT2*cos(q(0)))*cos(q(2)))*sin(q(3))*sin(q(5)) - ((-(-0.5*M_SQRT2*sin(q(0)) + (0.5)*M_SQRT2*cos(q(0)))*sin(q(1))*sin(q(2)) + ((0.5)*M_SQRT2*sin(q(0)) + (0.5)*M_SQRT2*cos(q(0)))*cos(q(2)))*cos(q(3))*cos(q(4)) + (((0.5)*M_SQRT2*sin(q(0)) - 0.5*M_SQRT2*cos(q(0)))*sin(q(1))*cos(q(2)) - ((0.5)*M_SQRT2*sin(q(0)) + (0.5)*M_SQRT2*cos(q(0)))*sin(q(2)))*sin(q(4)))*cos(q(5)))*sin(q(6)) + (-(-(-0.5*M_SQRT2*sin(q(0)) + (0.5)*M_SQRT2*cos(q(0)))*sin(q(1))*sin(q(2)) + ((0.5)*M_SQRT2*sin(q(0)) + (0.5)*M_SQRT2*cos(q(0)))*cos(q(2)))*sin(q(4))*cos(q(3)) + (((0.5)*M_SQRT2*sin(q(0)) - 0.5*M_SQRT2*cos(q(0)))*sin(q(1))*cos(q(2)) - ((0.5)*M_SQRT2*sin(q(0)) + (0.5)*M_SQRT2*cos(q(0)))*sin(q(2)))*cos(q(4)))*cos(q(6));
   out(0,3)= (-(-0.5*M_SQRT2*sin(q(0)) + (0.5)*M_SQRT2*cos(q(0)))*cos(q(1))*cos(q(3)) + (-((0.5)*M_SQRT2*sin(q(0)) - 0.5*M_SQRT2*cos(q(0)))*sin(q(1))*cos(q(2)) + ((0.5)*M_SQRT2*sin(q(0)) + (0.5)*M_SQRT2*cos(q(0)))*sin(q(2)))*sin(q(3)))*sin(q(4))*cos(q(6)) + (-((-0.5*M_SQRT2*sin(q(0)) + (0.5)*M_SQRT2*cos(q(0)))*cos(q(1))*cos(q(3)) - (-((0.5)*M_SQRT2*sin(q(0)) - 0.5*M_SQRT2*cos(q(0)))*sin(q(1))*cos(q(2)) + ((0.5)*M_SQRT2*sin(q(0)) + (0.5)*M_SQRT2*cos(q(0)))*sin(q(2)))*sin(q(3)))*cos(q(4))*cos(q(5)) - (((0.5)*M_SQRT2*sin(q(0)) - 0.5*M_SQRT2*cos(q(0)))*sin(q(3))*cos(q(1)) - (-((0.5)*M_SQRT2*sin(q(0)) - 0.5*M_SQRT2*cos(q(0)))*sin(q(1))*cos(q(2)) + ((0.5)*M_SQRT2*sin(q(0)) + (0.5)*M_SQRT2*cos(q(0)))*sin(q(2)))*cos(q(3)))*sin(q(5)))*sin(q(6));
   out(0,4)= (-(((0.5)*M_SQRT2*sin(q(0)) - 0.5*M_SQRT2*cos(q(0)))*sin(q(1))*sin(q(2)) + ((0.5)*M_SQRT2*sin(q(0)) + (0.5)*M_SQRT2*cos(q(0)))*cos(q(2)))*sin(q(4)) + (((0.5)*M_SQRT2*sin(q(0)) - 0.5*M_SQRT2*cos(q(0)))*sin(q(3))*cos(q(1)) - (-((0.5)*M_SQRT2*sin(q(0)) - 0.5*M_SQRT2*cos(q(0)))*sin(q(1))*cos(q(2)) + ((0.5)*M_SQRT2*sin(q(0)) + (0.5)*M_SQRT2*cos(q(0)))*sin(q(2)))*cos(q(3)))*cos(q(4)))*cos(q(6)) - ((((0.5)*M_SQRT2*sin(q(0)) - 0.5*M_SQRT2*cos(q(0)))*sin(q(1))*sin(q(2)) + ((0.5)*M_SQRT2*sin(q(0)) + (0.5)*M_SQRT2*cos(q(0)))*cos(q(2)))*cos(q(4)) - (-((0.5)*M_SQRT2*sin(q(0)) - 0.5*M_SQRT2*cos(q(0)))*sin(q(3))*cos(q(1)) + (-((0.5)*M_SQRT2*sin(q(0)) - 0.5*M_SQRT2*cos(q(0)))*sin(q(1))*cos(q(2)) + ((0.5)*M_SQRT2*sin(q(0)) + (0.5)*M_SQRT2*cos(q(0)))*sin(q(2)))*cos(q(3)))*sin(q(4)))*sin(q(6))*cos(q(5));
   out(0,5)= (((((0.5)*M_SQRT2*sin(q(0)) - 0.5*M_SQRT2*cos(q(0)))*sin(q(1))*sin(q(2)) + ((0.5)*M_SQRT2*sin(q(0)) + (0.5)*M_SQRT2*cos(q(0)))*cos(q(2)))*sin(q(4)) + (-((0.5)*M_SQRT2*sin(q(0)) - 0.5*M_SQRT2*cos(q(0)))*sin(q(3))*cos(q(1)) + (-((0.5)*M_SQRT2*sin(q(0)) - 0.5*M_SQRT2*cos(q(0)))*sin(q(1))*cos(q(2)) + ((0.5)*M_SQRT2*sin(q(0)) + (0.5)*M_SQRT2*cos(q(0)))*sin(q(2)))*cos(q(3)))*cos(q(4)))*sin(q(5)) - (-((0.5)*M_SQRT2*sin(q(0)) - 0.5*M_SQRT2*cos(q(0)))*cos(q(1))*cos(q(3)) - (-((0.5)*M_SQRT2*sin(q(0)) - 0.5*M_SQRT2*cos(q(0)))*sin(q(1))*cos(q(2)) + ((0.5)*M_SQRT2*sin(q(0)) + (0.5)*M_SQRT2*cos(q(0)))*sin(q(2)))*sin(q(3)))*cos(q(5)))*sin(q(6));
   out(0,6)= (-((((0.5)*M_SQRT2*sin(q(0)) - 0.5*M_SQRT2*cos(q(0)))*sin(q(1))*sin(q(2)) + ((0.5)*M_SQRT2*sin(q(0)) + (0.5)*M_SQRT2*cos(q(0)))*cos(q(2)))*sin(q(4)) + (-((0.5)*M_SQRT2*sin(q(0)) - 0.5*M_SQRT2*cos(q(0)))*sin(q(3))*cos(q(1)) + (-((0.5)*M_SQRT2*sin(q(0)) - 0.5*M_SQRT2*cos(q(0)))*sin(q(1))*cos(q(2)) + ((0.5)*M_SQRT2*sin(q(0)) + (0.5)*M_SQRT2*cos(q(0)))*sin(q(2)))*cos(q(3)))*cos(q(4)))*cos(q(5)) + (((0.5)*M_SQRT2*sin(q(0)) - 0.5*M_SQRT2*cos(q(0)))*cos(q(1))*cos(q(3)) + (-((0.5)*M_SQRT2*sin(q(0)) - 0.5*M_SQRT2*cos(q(0)))*sin(q(1))*cos(q(2)) + ((0.5)*M_SQRT2*sin(q(0)) + (0.5)*M_SQRT2*cos(q(0)))*sin(q(2)))*sin(q(3)))*sin(q(5)))*cos(q(6)) - ((((0.5)*M_SQRT2*sin(q(0)) - 0.5*M_SQRT2*cos(q(0)))*sin(q(1))*sin(q(2)) + ((0.5)*M_SQRT2*sin(q(0)) + (0.5)*M_SQRT2*cos(q(0)))*cos(q(2)))*cos(q(4)) - (-((0.5)*M_SQRT2*sin(q(0)) - 0.5*M_SQRT2*cos(q(0)))*sin(q(3))*cos(q(1)) + (-((0.5)*M_SQRT2*sin(q(0)) - 0.5*M_SQRT2*cos(q(0)))*sin(q(1))*cos(q(2)) + ((0.5)*M_SQRT2*sin(q(0)) + (0.5)*M_SQRT2*cos(q(0)))*sin(q(2)))*cos(q(3)))*sin(q(4)))*sin(q(6));
   out(1,0)= (-(((-0.5*M_SQRT2*sin(q(0)) + (0.5)*M_SQRT2*cos(q(0)))*sin(q(3))*cos(q(1)) + ((-0.5*M_SQRT2*sin(q(0)) + (0.5)*M_SQRT2*cos(q(0)))*sin(q(1))*cos(q(2)) + ((0.5)*M_SQRT2*sin(q(0)) + (0.5)*M_SQRT2*cos(q(0)))*sin(q(2)))*cos(q(3)))*cos(q(4)) + (((0.5)*M_SQRT2*sin(q(0)) - 0.5*M_SQRT2*cos(q(0)))*sin(q(1))*sin(q(2)) + ((0.5)*M_SQRT2*sin(q(0)) + (0.5)*M_SQRT2*cos(q(0)))*cos(q(2)))*sin(q(4)))*cos(q(5)) - (-((0.5)*M_SQRT2*sin(q(0)) - 0.5*M_SQRT2*cos(q(0)))*cos(q(1))*cos(q(3)) - ((-0.5*M_SQRT2*sin(q(0)) + (0.5)*M_SQRT2*cos(q(0)))*sin(q(1))*cos(q(2)) + ((0.5)*M_SQRT2*sin(q(0)) + (0.5)*M_SQRT2*cos(q(0)))*sin(q(2)))*sin(q(3)))*sin(q(5)))*sin(q(6)) + ((-(-0.5*M_SQRT2*sin(q(0)) + (0.5)*M_SQRT2*cos(q(0)))*sin(q(3))*cos(q(1)) - ((-0.5*M_SQRT2*sin(q(0)) + (0.5)*M_SQRT2*cos(q(0)))*sin(q(1))*cos(q(2)) + ((0.5)*M_SQRT2*sin(q(0)) + (0.5)*M_SQRT2*cos(q(0)))*sin(q(2)))*cos(q(3)))*sin(q(4)) + (((0.5)*M_SQRT2*sin(q(0)) - 0.5*M_SQRT2*cos(q(0)))*sin(q(1))*sin(q(2)) + ((0.5)*M_SQRT2*sin(q(0)) + (0.5)*M_SQRT2*cos(q(0)))*cos(q(2)))*cos(q(4)))*cos(q(6));
   out(1,1)= (-((-0.5*M_SQRT2*sin(q(0)) - 0.5*M_SQRT2*cos(q(0)))*sin(q(1))*cos(q(3)) - ((0.5)*M_SQRT2*sin(q(0)) + (0.5)*M_SQRT2*cos(q(0)))*sin(q(3))*cos(q(1))*cos(q(2)))*sin(q(5)) - ((-0.5*M_SQRT2*sin(q(0)) - 0.5*M_SQRT2*cos(q(0)))*sin(q(2))*sin(q(4))*cos(q(1)) + (-((0.5)*M_SQRT2*sin(q(0)) + (0.5)*M_SQRT2*cos(q(0)))*sin(q(1))*sin(q(3)) + ((0.5)*M_SQRT2*sin(q(0)) + (0.5)*M_SQRT2*cos(q(0)))*cos(q(1))*cos(q(2))*cos(q(3)))*cos(q(4)))*cos(q(5)))*sin(q(6)) + ((-0.5*M_SQRT2*sin(q(0)) - 0.5*M_SQRT2*cos(q(0)))*sin(q(2))*cos(q(1))*cos(q(4)) + (((0.5)*M_SQRT2*sin(q(0)) + (0.5)*M_SQRT2*cos(q(0)))*sin(q(1))*sin(q(3)) - ((0.5)*M_SQRT2*sin(q(0)) + (0.5)*M_SQRT2*cos(q(0)))*cos(q(1))*cos(q(2))*cos(q(3)))*sin(q(4)))*cos(q(6));
   out(1,2)= ((((0.5)*M_SQRT2*sin(q(0)) - 0.5*M_SQRT2*cos(q(0)))*cos(q(2)) - ((0.5)*M_SQRT2*sin(q(0)) + (0.5)*M_SQRT2*cos(q(0)))*sin(q(1))*sin(q(2)))*sin(q(3))*sin(q(5)) - ((((0.5)*M_SQRT2*sin(q(0)) - 0.5*M_SQRT2*cos(q(0)))*cos(q(2)) - ((0.5)*M_SQRT2*sin(q(0)) + (0.5)*M_SQRT2*cos(q(0)))*sin(q(1))*sin(q(2)))*cos(q(3))*cos(q(4)) + ((-0.5*M_SQRT2*sin(q(0)) - 0.5*M_SQRT2*cos(q(0)))*sin(q(1))*cos(q(2)) - ((0.5)*M_SQRT2*sin(q(0)) - 0.5*M_SQRT2*cos(q(0)))*sin(q(2)))*sin(q(4)))*cos(q(5)))*sin(q(6)) + (-(((0.5)*M_SQRT2*sin(q(0)) - 0.5*M_SQRT2*cos(q(0)))*cos(q(2)) - ((0.5)*M_SQRT2*sin(q(0)) + (0.5)*M_SQRT2*cos(q(0)))*sin(q(1))*sin(q(2)))*sin(q(4))*cos(q(3)) + ((-0.5*M_SQRT2*sin(q(0)) - 0.5*M_SQRT2*cos(q(0)))*sin(q(1))*cos(q(2)) - ((0.5)*M_SQRT2*sin(q(0)) - 0.5*M_SQRT2*cos(q(0)))*sin(q(2)))*cos(q(4)))*cos(q(6));
   out(1,3) = (-((-0.5*M_SQRT2*sin(q(0)) - 0.5*M_SQRT2*cos(q(0)))*sin(q(3))*cos(q(1)) - (-(-0.5*M_SQRT2*sin(q(0)) - 0.5*M_SQRT2*cos(q(0)))*sin(q(1))*cos(q(2)) + ((0.5)*M_SQRT2*sin(q(0)) - 0.5*M_SQRT2*cos(q(0)))*sin(q(2)))*cos(q(3)))*sin(q(5)) - (((0.5)*M_SQRT2*sin(q(0)) + (0.5)*M_SQRT2*cos(q(0)))*cos(q(1))*cos(q(3)) - (-(-0.5*M_SQRT2*sin(q(0)) - 0.5*M_SQRT2*cos(q(0)))*sin(q(1))*cos(q(2)) + ((0.5)*M_SQRT2*sin(q(0)) - 0.5*M_SQRT2*cos(q(0)))*sin(q(2)))*sin(q(3)))*cos(q(4))*cos(q(5)))*sin(q(6)) + (-((0.5)*M_SQRT2*sin(q(0)) + (0.5)*M_SQRT2*cos(q(0)))*cos(q(1))*cos(q(3)) + (-(-0.5*M_SQRT2*sin(q(0)) - 0.5*M_SQRT2*cos(q(0)))*sin(q(1))*cos(q(2)) + ((0.5)*M_SQRT2*sin(q(0)) - 0.5*M_SQRT2*cos(q(0)))*sin(q(2)))*sin(q(3)))*sin(q(4))*cos(q(6));
   out(1,4) = (-((-0.5*M_SQRT2*sin(q(0)) - 0.5*M_SQRT2*cos(q(0)))*sin(q(1))*sin(q(2)) + ((0.5)*M_SQRT2*sin(q(0)) - 0.5*M_SQRT2*cos(q(0)))*cos(q(2)))*sin(q(4)) + ((-0.5*M_SQRT2*sin(q(0)) - 0.5*M_SQRT2*cos(q(0)))*sin(q(3))*cos(q(1)) - (-(-0.5*M_SQRT2*sin(q(0)) - 0.5*M_SQRT2*cos(q(0)))*sin(q(1))*cos(q(2)) + ((0.5)*M_SQRT2*sin(q(0)) - 0.5*M_SQRT2*cos(q(0)))*sin(q(2)))*cos(q(3)))*cos(q(4)))*cos(q(6)) - (((-0.5*M_SQRT2*sin(q(0)) - 0.5*M_SQRT2*cos(q(0)))*sin(q(1))*sin(q(2)) + ((0.5)*M_SQRT2*sin(q(0)) - 0.5*M_SQRT2*cos(q(0)))*cos(q(2)))*cos(q(4)) - (-(-0.5*M_SQRT2*sin(q(0)) - 0.5*M_SQRT2*cos(q(0)))*sin(q(3))*cos(q(1)) + (-(-0.5*M_SQRT2*sin(q(0)) - 0.5*M_SQRT2*cos(q(0)))*sin(q(1))*cos(q(2)) + ((0.5)*M_SQRT2*sin(q(0)) - 0.5*M_SQRT2*cos(q(0)))*sin(q(2)))*cos(q(3)))*sin(q(4)))*sin(q(6))*cos(q(5));
   out(1,5) = ((((-0.5*M_SQRT2*sin(q(0)) - 0.5*M_SQRT2*cos(q(0)))*sin(q(1))*sin(q(2)) + ((0.5)*M_SQRT2*sin(q(0)) - 0.5*M_SQRT2*cos(q(0)))*cos(q(2)))*sin(q(4)) + (-(-0.5*M_SQRT2*sin(q(0)) - 0.5*M_SQRT2*cos(q(0)))*sin(q(3))*cos(q(1)) + (-(-0.5*M_SQRT2*sin(q(0)) - 0.5*M_SQRT2*cos(q(0)))*sin(q(1))*cos(q(2)) + ((0.5)*M_SQRT2*sin(q(0)) - 0.5*M_SQRT2*cos(q(0)))*sin(q(2)))*cos(q(3)))*cos(q(4)))*sin(q(5)) - (-(-0.5*M_SQRT2*sin(q(0)) - 0.5*M_SQRT2*cos(q(0)))*cos(q(1))*cos(q(3)) - (-(-0.5*M_SQRT2*sin(q(0)) - 0.5*M_SQRT2*cos(q(0)))*sin(q(1))*cos(q(2)) + ((0.5)*M_SQRT2*sin(q(0)) - 0.5*M_SQRT2*cos(q(0)))*sin(q(2)))*sin(q(3)))*cos(q(5)))*sin(q(6));
   out(1,6) = (-(((-0.5*M_SQRT2*sin(q(0)) - 0.5*M_SQRT2*cos(q(0)))*sin(q(1))*sin(q(2)) + ((0.5)*M_SQRT2*sin(q(0)) - 0.5*M_SQRT2*cos(q(0)))*cos(q(2)))*sin(q(4)) + (-(-0.5*M_SQRT2*sin(q(0)) - 0.5*M_SQRT2*cos(q(0)))*sin(q(3))*cos(q(1)) + (-(-0.5*M_SQRT2*sin(q(0)) - 0.5*M_SQRT2*cos(q(0)))*sin(q(1))*cos(q(2)) + ((0.5)*M_SQRT2*sin(q(0)) - 0.5*M_SQRT2*cos(q(0)))*sin(q(2)))*cos(q(3)))*cos(q(4)))*cos(q(5)) + ((-0.5*M_SQRT2*sin(q(0)) - 0.5*M_SQRT2*cos(q(0)))*cos(q(1))*cos(q(3)) + (-(-0.5*M_SQRT2*sin(q(0)) - 0.5*M_SQRT2*cos(q(0)))*sin(q(1))*cos(q(2)) + ((0.5)*M_SQRT2*sin(q(0)) - 0.5*M_SQRT2*cos(q(0)))*sin(q(2)))*sin(q(3)))*sin(q(5)))*cos(q(6)) - (((-0.5*M_SQRT2*sin(q(0)) - 0.5*M_SQRT2*cos(q(0)))*sin(q(1))*sin(q(2)) + ((0.5)*M_SQRT2*sin(q(0)) - 0.5*M_SQRT2*cos(q(0)))*cos(q(2)))*cos(q(4)) - (-(-0.5*M_SQRT2*sin(q(0)) - 0.5*M_SQRT2*cos(q(0)))*sin(q(3))*cos(q(1)) + (-(-0.5*M_SQRT2*sin(q(0)) - 0.5*M_SQRT2*cos(q(0)))*sin(q(1))*cos(q(2)) + ((0.5)*M_SQRT2*sin(q(0)) - 0.5*M_SQRT2*cos(q(0)))*sin(q(2)))*cos(q(3)))*sin(q(4)))*sin(q(6));
   out(2,0) = 0;
   out(2,1) = (-((sin(q(1))*cos(q(2))*cos(q(3)) + sin(q(3))*cos(q(1)))*cos(q(4)) - sin(q(1))*sin(q(2))*sin(q(4)))*cos(q(5)) - (-sin(q(1))*sin(q(3))*cos(q(2)) + cos(q(1))*cos(q(3)))*sin(q(5)))*sin(q(6)) + ((-sin(q(1))*cos(q(2))*cos(q(3)) - sin(q(3))*cos(q(1)))*sin(q(4)) - sin(q(1))*sin(q(2))*cos(q(4)))*cos(q(6));
   out(2,2) = (-(sin(q(2))*cos(q(1))*cos(q(3))*cos(q(4)) + sin(q(4))*cos(q(1))*cos(q(2)))*cos(q(5)) + sin(q(2))*sin(q(3))*sin(q(5))*cos(q(1)))*sin(q(6)) + (-sin(q(2))*sin(q(4))*cos(q(1))*cos(q(3)) + cos(q(1))*cos(q(2))*cos(q(4)))*cos(q(6));
   out(2,3) = (-(-sin(q(1))*sin(q(3)) + cos(q(1))*cos(q(2))*cos(q(3)))*sin(q(5)) - (sin(q(1))*cos(q(3)) + sin(q(3))*cos(q(1))*cos(q(2)))*cos(q(4))*cos(q(5)))*sin(q(6)) + (-sin(q(1))*cos(q(3)) - sin(q(3))*cos(q(1))*cos(q(2)))*sin(q(4))*cos(q(6));
   out(2,4) = ((-sin(q(1))*sin(q(3)) + cos(q(1))*cos(q(2))*cos(q(3)))*cos(q(4)) - sin(q(2))*sin(q(4))*cos(q(1)))*cos(q(6)) - (-(sin(q(1))*sin(q(3)) - cos(q(1))*cos(q(2))*cos(q(3)))*sin(q(4)) + sin(q(2))*cos(q(1))*cos(q(4)))*sin(q(6))*cos(q(5));
   out(2,5) = (((sin(q(1))*sin(q(3)) - cos(q(1))*cos(q(2))*cos(q(3)))*cos(q(4)) + sin(q(2))*sin(q(4))*cos(q(1)))*sin(q(5)) - (sin(q(1))*cos(q(3)) + sin(q(3))*cos(q(1))*cos(q(2)))*cos(q(5)))*sin(q(6));
   out(2,6) = (-((sin(q(1))*sin(q(3)) - cos(q(1))*cos(q(2))*cos(q(3)))*cos(q(4)) + sin(q(2))*sin(q(4))*cos(q(1)))*cos(q(5)) + (-sin(q(1))*cos(q(3)) - sin(q(3))*cos(q(1))*cos(q(2)))*sin(q(5)))*cos(q(6)) - (-(sin(q(1))*sin(q(3)) - cos(q(1))*cos(q(2))*cos(q(3)))*sin(q(4)) + sin(q(2))*cos(q(1))*cos(q(4)))*sin(q(6));

}







































