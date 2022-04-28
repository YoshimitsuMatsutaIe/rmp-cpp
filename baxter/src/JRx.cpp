/******************************************************************************
 *                       Code generated with sympy 1.9                        *
 *                                                                            *
 *              See http://www.sympy.org/ for more information.               *
 *                                                                            *
 *                    This file is part of 'JRx_W0project'                    *
 ******************************************************************************/
#include "../include/baxter.hpp"


void baxter::Baxter::JRx_W0(const Vector7d& q, Matrix_3_7_d& out) {

   out(0,0)= 0;
   out(0,1)= 0;
   out(0,2)= 0;
   out(0,3)= 0;
   out(0,4)= 0;
   out(0,5)= 0;
   out(0,6)= 0;
   out(1,0)= 0;
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

void baxter::Baxter::JRx_BR(const Vector7d& q, Matrix_3_7_d& out) {

   out(0,0)= 0;
   out(0,1)= 0;
   out(0,2)= 0;
   out(0,3)= 0;
   out(0,4)= 0;
   out(0,5)= 0;
   out(0,6)= 0;
   out(1,0)= 0;
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


void baxter::Baxter::JRx_0(const Vector7d& q, Matrix_3_7_d& out) {

   out(0,0)= (0.5)*M_SQRT2*sin(q(0)) + (0.5)*M_SQRT2*cos(q(0));
   out(0,1)= 0;
   out(0,2)= 0;
   out(0,3)= 0;
   out(0,4)= 0;
   out(0,5)= 0;
   out(0,6)= 0;
   out(1,0)= (0.5)*M_SQRT2*sin(q(0)) - 0.5*M_SQRT2*cos(q(0));
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


void baxter::Baxter::JRx_1(const Vector7d& q, Matrix_3_7_d& out) {

   out(0,0)= (-0.5*M_SQRT2*sin(q(0)) - 0.5*M_SQRT2*cos(q(0)))*sin(q(1));
   out(0,1)= (-0.5*M_SQRT2*sin(q(0)) + (0.5)*M_SQRT2*cos(q(0)))*cos(q(1));
   out(0,2)= 0;
   out(0,3)= 0;
   out(0,4)= 0;
   out(0,5)= 0;
   out(0,6)= 0;
   out(1,0)= (-0.5*M_SQRT2*sin(q(0)) + (0.5)*M_SQRT2*cos(q(0)))*sin(q(1));
   out(1,1)= ((0.5)*M_SQRT2*sin(q(0)) + (0.5)*M_SQRT2*cos(q(0)))*cos(q(1));
   out(1,2)= 0;
   out(1,3) = 0;
   out(1,4) = 0;
   out(1,5) = 0;
   out(1,6) = 0;
   out(2,0) = 0;
   out(2,1) = sin(q(1));
   out(2,2) = 0;
   out(2,3) = 0;
   out(2,4) = 0;
   out(2,5) = 0;
   out(2,6) = 0;

}

void baxter::Baxter::JRx_2(const Vector7d& q, Matrix_3_7_d& out) {

   out(0,0)= (-0.5*M_SQRT2*sin(q(0)) - 0.5*M_SQRT2*cos(q(0)))*sin(q(1))*cos(q(2)) + (-0.5*M_SQRT2*sin(q(0)) + (0.5)*M_SQRT2*cos(q(0)))*sin(q(2));
   out(0,1)= (-0.5*M_SQRT2*sin(q(0)) + (0.5)*M_SQRT2*cos(q(0)))*cos(q(1))*cos(q(2));
   out(0,2)= -(-0.5*M_SQRT2*sin(q(0)) + (0.5)*M_SQRT2*cos(q(0)))*sin(q(1))*sin(q(2)) + ((0.5)*M_SQRT2*sin(q(0)) + (0.5)*M_SQRT2*cos(q(0)))*cos(q(2));
   out(0,3)= 0;
   out(0,4)= 0;
   out(0,5)= 0;
   out(0,6)= 0;
   out(1,0)= (-0.5*M_SQRT2*sin(q(0)) + (0.5)*M_SQRT2*cos(q(0)))*sin(q(1))*cos(q(2)) + ((0.5)*M_SQRT2*sin(q(0)) + (0.5)*M_SQRT2*cos(q(0)))*sin(q(2));
   out(1,1)= ((0.5)*M_SQRT2*sin(q(0)) + (0.5)*M_SQRT2*cos(q(0)))*cos(q(1))*cos(q(2));
   out(1,2)= ((0.5)*M_SQRT2*sin(q(0)) - 0.5*M_SQRT2*cos(q(0)))*cos(q(2)) - ((0.5)*M_SQRT2*sin(q(0)) + (0.5)*M_SQRT2*cos(q(0)))*sin(q(1))*sin(q(2));
   out(1,3) = 0;
   out(1,4) = 0;
   out(1,5) = 0;
   out(1,6) = 0;
   out(2,0) = 0;
   out(2,1) = sin(q(1))*cos(q(2));
   out(2,2) = sin(q(2))*cos(q(1));
   out(2,3) = 0;
   out(2,4) = 0;
   out(2,5) = 0;
   out(2,6) = 0;

}

void baxter::Baxter::JRx_3(const Vector7d& q, Matrix_3_7_d& out) {

   out(0,0)= (-0.5*M_SQRT2*sin(q(0)) - 0.5*M_SQRT2*cos(q(0)))*sin(q(3))*cos(q(1)) + ((-0.5*M_SQRT2*sin(q(0)) - 0.5*M_SQRT2*cos(q(0)))*sin(q(1))*cos(q(2)) + (-0.5*M_SQRT2*sin(q(0)) + (0.5)*M_SQRT2*cos(q(0)))*sin(q(2)))*cos(q(3));
   out(0,1)= -(-0.5*M_SQRT2*sin(q(0)) + (0.5)*M_SQRT2*cos(q(0)))*sin(q(1))*sin(q(3)) + (-0.5*M_SQRT2*sin(q(0)) + (0.5)*M_SQRT2*cos(q(0)))*cos(q(1))*cos(q(2))*cos(q(3));
   out(0,2)= (-(-0.5*M_SQRT2*sin(q(0)) + (0.5)*M_SQRT2*cos(q(0)))*sin(q(1))*sin(q(2)) + ((0.5)*M_SQRT2*sin(q(0)) + (0.5)*M_SQRT2*cos(q(0)))*cos(q(2)))*cos(q(3));
   out(0,3)= (-0.5*M_SQRT2*sin(q(0)) + (0.5)*M_SQRT2*cos(q(0)))*cos(q(1))*cos(q(3)) - (-((0.5)*M_SQRT2*sin(q(0)) - 0.5*M_SQRT2*cos(q(0)))*sin(q(1))*cos(q(2)) + ((0.5)*M_SQRT2*sin(q(0)) + (0.5)*M_SQRT2*cos(q(0)))*sin(q(2)))*sin(q(3));
   out(0,4)= 0;
   out(0,5)= 0;
   out(0,6)= 0;
   out(1,0)= (-0.5*M_SQRT2*sin(q(0)) + (0.5)*M_SQRT2*cos(q(0)))*sin(q(3))*cos(q(1)) + ((-0.5*M_SQRT2*sin(q(0)) + (0.5)*M_SQRT2*cos(q(0)))*sin(q(1))*cos(q(2)) + ((0.5)*M_SQRT2*sin(q(0)) + (0.5)*M_SQRT2*cos(q(0)))*sin(q(2)))*cos(q(3));
   out(1,1)= -((0.5)*M_SQRT2*sin(q(0)) + (0.5)*M_SQRT2*cos(q(0)))*sin(q(1))*sin(q(3)) + ((0.5)*M_SQRT2*sin(q(0)) + (0.5)*M_SQRT2*cos(q(0)))*cos(q(1))*cos(q(2))*cos(q(3));
   out(1,2)= (((0.5)*M_SQRT2*sin(q(0)) - 0.5*M_SQRT2*cos(q(0)))*cos(q(2)) - ((0.5)*M_SQRT2*sin(q(0)) + (0.5)*M_SQRT2*cos(q(0)))*sin(q(1))*sin(q(2)))*cos(q(3));
   out(1,3) = ((0.5)*M_SQRT2*sin(q(0)) + (0.5)*M_SQRT2*cos(q(0)))*cos(q(1))*cos(q(3)) - (-(-0.5*M_SQRT2*sin(q(0)) - 0.5*M_SQRT2*cos(q(0)))*sin(q(1))*cos(q(2)) + ((0.5)*M_SQRT2*sin(q(0)) - 0.5*M_SQRT2*cos(q(0)))*sin(q(2)))*sin(q(3));
   out(1,4) = 0;
   out(1,5) = 0;
   out(1,6) = 0;
   out(2,0) = 0;
   out(2,1) = sin(q(1))*cos(q(2))*cos(q(3)) + sin(q(3))*cos(q(1));
   out(2,2) = sin(q(2))*cos(q(1))*cos(q(3));
   out(2,3) = sin(q(1))*cos(q(3)) + sin(q(3))*cos(q(1))*cos(q(2));
   out(2,4) = 0;
   out(2,5) = 0;
   out(2,6) = 0;

}

void baxter::Baxter::JRx_4(const Vector7d& q, Matrix_3_7_d& out) {

   out(0,0)= ((-0.5*M_SQRT2*sin(q(0)) + (0.5)*M_SQRT2*cos(q(0)))*cos(q(2)) + ((0.5)*M_SQRT2*sin(q(0)) + (0.5)*M_SQRT2*cos(q(0)))*sin(q(1))*sin(q(2)))*sin(q(4)) + ((-0.5*M_SQRT2*sin(q(0)) - 0.5*M_SQRT2*cos(q(0)))*sin(q(3))*cos(q(1)) + ((-0.5*M_SQRT2*sin(q(0)) - 0.5*M_SQRT2*cos(q(0)))*sin(q(1))*cos(q(2)) + (-0.5*M_SQRT2*sin(q(0)) + (0.5)*M_SQRT2*cos(q(0)))*sin(q(2)))*cos(q(3)))*cos(q(4));
   out(0,1)= ((0.5)*M_SQRT2*sin(q(0)) - 0.5*M_SQRT2*cos(q(0)))*sin(q(2))*sin(q(4))*cos(q(1)) + (-(-0.5*M_SQRT2*sin(q(0)) + (0.5)*M_SQRT2*cos(q(0)))*sin(q(1))*sin(q(3)) + (-0.5*M_SQRT2*sin(q(0)) + (0.5)*M_SQRT2*cos(q(0)))*cos(q(1))*cos(q(2))*cos(q(3)))*cos(q(4));
   out(0,2)= (-(-0.5*M_SQRT2*sin(q(0)) + (0.5)*M_SQRT2*cos(q(0)))*sin(q(1))*sin(q(2)) + ((0.5)*M_SQRT2*sin(q(0)) + (0.5)*M_SQRT2*cos(q(0)))*cos(q(2)))*cos(q(3))*cos(q(4)) + (((0.5)*M_SQRT2*sin(q(0)) - 0.5*M_SQRT2*cos(q(0)))*sin(q(1))*cos(q(2)) - ((0.5)*M_SQRT2*sin(q(0)) + (0.5)*M_SQRT2*cos(q(0)))*sin(q(2)))*sin(q(4));
   out(0,3)= ((-0.5*M_SQRT2*sin(q(0)) + (0.5)*M_SQRT2*cos(q(0)))*cos(q(1))*cos(q(3)) - (-((0.5)*M_SQRT2*sin(q(0)) - 0.5*M_SQRT2*cos(q(0)))*sin(q(1))*cos(q(2)) + ((0.5)*M_SQRT2*sin(q(0)) + (0.5)*M_SQRT2*cos(q(0)))*sin(q(2)))*sin(q(3)))*cos(q(4));
   out(0,4)= (((0.5)*M_SQRT2*sin(q(0)) - 0.5*M_SQRT2*cos(q(0)))*sin(q(1))*sin(q(2)) + ((0.5)*M_SQRT2*sin(q(0)) + (0.5)*M_SQRT2*cos(q(0)))*cos(q(2)))*cos(q(4)) - (-((0.5)*M_SQRT2*sin(q(0)) - 0.5*M_SQRT2*cos(q(0)))*sin(q(3))*cos(q(1)) + (-((0.5)*M_SQRT2*sin(q(0)) - 0.5*M_SQRT2*cos(q(0)))*sin(q(1))*cos(q(2)) + ((0.5)*M_SQRT2*sin(q(0)) + (0.5)*M_SQRT2*cos(q(0)))*sin(q(2)))*cos(q(3)))*sin(q(4));
   out(0,5)= 0;
   out(0,6)= 0;
   out(1,0)= ((-0.5*M_SQRT2*sin(q(0)) + (0.5)*M_SQRT2*cos(q(0)))*sin(q(3))*cos(q(1)) + ((-0.5*M_SQRT2*sin(q(0)) + (0.5)*M_SQRT2*cos(q(0)))*sin(q(1))*cos(q(2)) + ((0.5)*M_SQRT2*sin(q(0)) + (0.5)*M_SQRT2*cos(q(0)))*sin(q(2)))*cos(q(3)))*cos(q(4)) + (((0.5)*M_SQRT2*sin(q(0)) - 0.5*M_SQRT2*cos(q(0)))*sin(q(1))*sin(q(2)) + ((0.5)*M_SQRT2*sin(q(0)) + (0.5)*M_SQRT2*cos(q(0)))*cos(q(2)))*sin(q(4));
   out(1,1)= (-0.5*M_SQRT2*sin(q(0)) - 0.5*M_SQRT2*cos(q(0)))*sin(q(2))*sin(q(4))*cos(q(1)) + (-((0.5)*M_SQRT2*sin(q(0)) + (0.5)*M_SQRT2*cos(q(0)))*sin(q(1))*sin(q(3)) + ((0.5)*M_SQRT2*sin(q(0)) + (0.5)*M_SQRT2*cos(q(0)))*cos(q(1))*cos(q(2))*cos(q(3)))*cos(q(4));
   out(1,2)= (((0.5)*M_SQRT2*sin(q(0)) - 0.5*M_SQRT2*cos(q(0)))*cos(q(2)) - ((0.5)*M_SQRT2*sin(q(0)) + (0.5)*M_SQRT2*cos(q(0)))*sin(q(1))*sin(q(2)))*cos(q(3))*cos(q(4)) + ((-0.5*M_SQRT2*sin(q(0)) - 0.5*M_SQRT2*cos(q(0)))*sin(q(1))*cos(q(2)) - ((0.5)*M_SQRT2*sin(q(0)) - 0.5*M_SQRT2*cos(q(0)))*sin(q(2)))*sin(q(4));
   out(1,3) = (((0.5)*M_SQRT2*sin(q(0)) + (0.5)*M_SQRT2*cos(q(0)))*cos(q(1))*cos(q(3)) - (-(-0.5*M_SQRT2*sin(q(0)) - 0.5*M_SQRT2*cos(q(0)))*sin(q(1))*cos(q(2)) + ((0.5)*M_SQRT2*sin(q(0)) - 0.5*M_SQRT2*cos(q(0)))*sin(q(2)))*sin(q(3)))*cos(q(4));
   out(1,4) = ((-0.5*M_SQRT2*sin(q(0)) - 0.5*M_SQRT2*cos(q(0)))*sin(q(1))*sin(q(2)) + ((0.5)*M_SQRT2*sin(q(0)) - 0.5*M_SQRT2*cos(q(0)))*cos(q(2)))*cos(q(4)) - (-(-0.5*M_SQRT2*sin(q(0)) - 0.5*M_SQRT2*cos(q(0)))*sin(q(3))*cos(q(1)) + (-(-0.5*M_SQRT2*sin(q(0)) - 0.5*M_SQRT2*cos(q(0)))*sin(q(1))*cos(q(2)) + ((0.5)*M_SQRT2*sin(q(0)) - 0.5*M_SQRT2*cos(q(0)))*sin(q(2)))*cos(q(3)))*sin(q(4));
   out(1,5) = 0;
   out(1,6) = 0;
   out(2,0) = 0;
   out(2,1) = (sin(q(1))*cos(q(2))*cos(q(3)) + sin(q(3))*cos(q(1)))*cos(q(4)) - sin(q(1))*sin(q(2))*sin(q(4));
   out(2,2) = sin(q(2))*cos(q(1))*cos(q(3))*cos(q(4)) + sin(q(4))*cos(q(1))*cos(q(2));
   out(2,3) = (sin(q(1))*cos(q(3)) + sin(q(3))*cos(q(1))*cos(q(2)))*cos(q(4));
   out(2,4) = -(sin(q(1))*sin(q(3)) - cos(q(1))*cos(q(2))*cos(q(3)))*sin(q(4)) + sin(q(2))*cos(q(1))*cos(q(4));
   out(2,5) = 0;
   out(2,6) = 0;

}


void baxter::Baxter::JRx_5(const Vector7d& q, Matrix_3_7_d& out) {

   out(0,0)= (((-0.5*M_SQRT2*sin(q(0)) + (0.5)*M_SQRT2*cos(q(0)))*cos(q(2)) + ((0.5)*M_SQRT2*sin(q(0)) + (0.5)*M_SQRT2*cos(q(0)))*sin(q(1))*sin(q(2)))*sin(q(4)) + ((-0.5*M_SQRT2*sin(q(0)) - 0.5*M_SQRT2*cos(q(0)))*sin(q(3))*cos(q(1)) + ((-0.5*M_SQRT2*sin(q(0)) - 0.5*M_SQRT2*cos(q(0)))*sin(q(1))*cos(q(2)) + (-0.5*M_SQRT2*sin(q(0)) + (0.5)*M_SQRT2*cos(q(0)))*sin(q(2)))*cos(q(3)))*cos(q(4)))*cos(q(5)) + (-((0.5)*M_SQRT2*sin(q(0)) + (0.5)*M_SQRT2*cos(q(0)))*cos(q(1))*cos(q(3)) - ((-0.5*M_SQRT2*sin(q(0)) - 0.5*M_SQRT2*cos(q(0)))*sin(q(1))*cos(q(2)) + (-0.5*M_SQRT2*sin(q(0)) + (0.5)*M_SQRT2*cos(q(0)))*sin(q(2)))*sin(q(3)))*sin(q(5));
   out(0,1)= (-(-0.5*M_SQRT2*sin(q(0)) + (0.5)*M_SQRT2*cos(q(0)))*sin(q(3))*cos(q(1))*cos(q(2)) + ((0.5)*M_SQRT2*sin(q(0)) - 0.5*M_SQRT2*cos(q(0)))*sin(q(1))*cos(q(3)))*sin(q(5)) + (((0.5)*M_SQRT2*sin(q(0)) - 0.5*M_SQRT2*cos(q(0)))*sin(q(2))*sin(q(4))*cos(q(1)) + (-(-0.5*M_SQRT2*sin(q(0)) + (0.5)*M_SQRT2*cos(q(0)))*sin(q(1))*sin(q(3)) + (-0.5*M_SQRT2*sin(q(0)) + (0.5)*M_SQRT2*cos(q(0)))*cos(q(1))*cos(q(2))*cos(q(3)))*cos(q(4)))*cos(q(5));
   out(0,2)= -(-(-0.5*M_SQRT2*sin(q(0)) + (0.5)*M_SQRT2*cos(q(0)))*sin(q(1))*sin(q(2)) + ((0.5)*M_SQRT2*sin(q(0)) + (0.5)*M_SQRT2*cos(q(0)))*cos(q(2)))*sin(q(3))*sin(q(5)) + ((-(-0.5*M_SQRT2*sin(q(0)) + (0.5)*M_SQRT2*cos(q(0)))*sin(q(1))*sin(q(2)) + ((0.5)*M_SQRT2*sin(q(0)) + (0.5)*M_SQRT2*cos(q(0)))*cos(q(2)))*cos(q(3))*cos(q(4)) + (((0.5)*M_SQRT2*sin(q(0)) - 0.5*M_SQRT2*cos(q(0)))*sin(q(1))*cos(q(2)) - ((0.5)*M_SQRT2*sin(q(0)) + (0.5)*M_SQRT2*cos(q(0)))*sin(q(2)))*sin(q(4)))*cos(q(5));
   out(0,3)= ((-0.5*M_SQRT2*sin(q(0)) + (0.5)*M_SQRT2*cos(q(0)))*cos(q(1))*cos(q(3)) - (-((0.5)*M_SQRT2*sin(q(0)) - 0.5*M_SQRT2*cos(q(0)))*sin(q(1))*cos(q(2)) + ((0.5)*M_SQRT2*sin(q(0)) + (0.5)*M_SQRT2*cos(q(0)))*sin(q(2)))*sin(q(3)))*cos(q(4))*cos(q(5)) + (((0.5)*M_SQRT2*sin(q(0)) - 0.5*M_SQRT2*cos(q(0)))*sin(q(3))*cos(q(1)) - (-((0.5)*M_SQRT2*sin(q(0)) - 0.5*M_SQRT2*cos(q(0)))*sin(q(1))*cos(q(2)) + ((0.5)*M_SQRT2*sin(q(0)) + (0.5)*M_SQRT2*cos(q(0)))*sin(q(2)))*cos(q(3)))*sin(q(5));
   out(0,4)= ((((0.5)*M_SQRT2*sin(q(0)) - 0.5*M_SQRT2*cos(q(0)))*sin(q(1))*sin(q(2)) + ((0.5)*M_SQRT2*sin(q(0)) + (0.5)*M_SQRT2*cos(q(0)))*cos(q(2)))*cos(q(4)) - (-((0.5)*M_SQRT2*sin(q(0)) - 0.5*M_SQRT2*cos(q(0)))*sin(q(3))*cos(q(1)) + (-((0.5)*M_SQRT2*sin(q(0)) - 0.5*M_SQRT2*cos(q(0)))*sin(q(1))*cos(q(2)) + ((0.5)*M_SQRT2*sin(q(0)) + (0.5)*M_SQRT2*cos(q(0)))*sin(q(2)))*cos(q(3)))*sin(q(4)))*cos(q(5));
   out(0,5)= -((((0.5)*M_SQRT2*sin(q(0)) - 0.5*M_SQRT2*cos(q(0)))*sin(q(1))*sin(q(2)) + ((0.5)*M_SQRT2*sin(q(0)) + (0.5)*M_SQRT2*cos(q(0)))*cos(q(2)))*sin(q(4)) + (-((0.5)*M_SQRT2*sin(q(0)) - 0.5*M_SQRT2*cos(q(0)))*sin(q(3))*cos(q(1)) + (-((0.5)*M_SQRT2*sin(q(0)) - 0.5*M_SQRT2*cos(q(0)))*sin(q(1))*cos(q(2)) + ((0.5)*M_SQRT2*sin(q(0)) + (0.5)*M_SQRT2*cos(q(0)))*sin(q(2)))*cos(q(3)))*cos(q(4)))*sin(q(5)) + (-((0.5)*M_SQRT2*sin(q(0)) - 0.5*M_SQRT2*cos(q(0)))*cos(q(1))*cos(q(3)) - (-((0.5)*M_SQRT2*sin(q(0)) - 0.5*M_SQRT2*cos(q(0)))*sin(q(1))*cos(q(2)) + ((0.5)*M_SQRT2*sin(q(0)) + (0.5)*M_SQRT2*cos(q(0)))*sin(q(2)))*sin(q(3)))*cos(q(5));
   out(0,6)= 0;
   out(1,0)= (((-0.5*M_SQRT2*sin(q(0)) + (0.5)*M_SQRT2*cos(q(0)))*sin(q(3))*cos(q(1)) + ((-0.5*M_SQRT2*sin(q(0)) + (0.5)*M_SQRT2*cos(q(0)))*sin(q(1))*cos(q(2)) + ((0.5)*M_SQRT2*sin(q(0)) + (0.5)*M_SQRT2*cos(q(0)))*sin(q(2)))*cos(q(3)))*cos(q(4)) + (((0.5)*M_SQRT2*sin(q(0)) - 0.5*M_SQRT2*cos(q(0)))*sin(q(1))*sin(q(2)) + ((0.5)*M_SQRT2*sin(q(0)) + (0.5)*M_SQRT2*cos(q(0)))*cos(q(2)))*sin(q(4)))*cos(q(5)) + (-((0.5)*M_SQRT2*sin(q(0)) - 0.5*M_SQRT2*cos(q(0)))*cos(q(1))*cos(q(3)) - ((-0.5*M_SQRT2*sin(q(0)) + (0.5)*M_SQRT2*cos(q(0)))*sin(q(1))*cos(q(2)) + ((0.5)*M_SQRT2*sin(q(0)) + (0.5)*M_SQRT2*cos(q(0)))*sin(q(2)))*sin(q(3)))*sin(q(5));
   out(1,1)= ((-0.5*M_SQRT2*sin(q(0)) - 0.5*M_SQRT2*cos(q(0)))*sin(q(1))*cos(q(3)) - ((0.5)*M_SQRT2*sin(q(0)) + (0.5)*M_SQRT2*cos(q(0)))*sin(q(3))*cos(q(1))*cos(q(2)))*sin(q(5)) + ((-0.5*M_SQRT2*sin(q(0)) - 0.5*M_SQRT2*cos(q(0)))*sin(q(2))*sin(q(4))*cos(q(1)) + (-((0.5)*M_SQRT2*sin(q(0)) + (0.5)*M_SQRT2*cos(q(0)))*sin(q(1))*sin(q(3)) + ((0.5)*M_SQRT2*sin(q(0)) + (0.5)*M_SQRT2*cos(q(0)))*cos(q(1))*cos(q(2))*cos(q(3)))*cos(q(4)))*cos(q(5));
   out(1,2)= -(((0.5)*M_SQRT2*sin(q(0)) - 0.5*M_SQRT2*cos(q(0)))*cos(q(2)) - ((0.5)*M_SQRT2*sin(q(0)) + (0.5)*M_SQRT2*cos(q(0)))*sin(q(1))*sin(q(2)))*sin(q(3))*sin(q(5)) + ((((0.5)*M_SQRT2*sin(q(0)) - 0.5*M_SQRT2*cos(q(0)))*cos(q(2)) - ((0.5)*M_SQRT2*sin(q(0)) + (0.5)*M_SQRT2*cos(q(0)))*sin(q(1))*sin(q(2)))*cos(q(3))*cos(q(4)) + ((-0.5*M_SQRT2*sin(q(0)) - 0.5*M_SQRT2*cos(q(0)))*sin(q(1))*cos(q(2)) - ((0.5)*M_SQRT2*sin(q(0)) - 0.5*M_SQRT2*cos(q(0)))*sin(q(2)))*sin(q(4)))*cos(q(5));
   out(1,3) = ((-0.5*M_SQRT2*sin(q(0)) - 0.5*M_SQRT2*cos(q(0)))*sin(q(3))*cos(q(1)) - (-(-0.5*M_SQRT2*sin(q(0)) - 0.5*M_SQRT2*cos(q(0)))*sin(q(1))*cos(q(2)) + ((0.5)*M_SQRT2*sin(q(0)) - 0.5*M_SQRT2*cos(q(0)))*sin(q(2)))*cos(q(3)))*sin(q(5)) + (((0.5)*M_SQRT2*sin(q(0)) + (0.5)*M_SQRT2*cos(q(0)))*cos(q(1))*cos(q(3)) - (-(-0.5*M_SQRT2*sin(q(0)) - 0.5*M_SQRT2*cos(q(0)))*sin(q(1))*cos(q(2)) + ((0.5)*M_SQRT2*sin(q(0)) - 0.5*M_SQRT2*cos(q(0)))*sin(q(2)))*sin(q(3)))*cos(q(4))*cos(q(5));
   out(1,4) = (((-0.5*M_SQRT2*sin(q(0)) - 0.5*M_SQRT2*cos(q(0)))*sin(q(1))*sin(q(2)) + ((0.5)*M_SQRT2*sin(q(0)) - 0.5*M_SQRT2*cos(q(0)))*cos(q(2)))*cos(q(4)) - (-(-0.5*M_SQRT2*sin(q(0)) - 0.5*M_SQRT2*cos(q(0)))*sin(q(3))*cos(q(1)) + (-(-0.5*M_SQRT2*sin(q(0)) - 0.5*M_SQRT2*cos(q(0)))*sin(q(1))*cos(q(2)) + ((0.5)*M_SQRT2*sin(q(0)) - 0.5*M_SQRT2*cos(q(0)))*sin(q(2)))*cos(q(3)))*sin(q(4)))*cos(q(5));
   out(1,5) = -(((-0.5*M_SQRT2*sin(q(0)) - 0.5*M_SQRT2*cos(q(0)))*sin(q(1))*sin(q(2)) + ((0.5)*M_SQRT2*sin(q(0)) - 0.5*M_SQRT2*cos(q(0)))*cos(q(2)))*sin(q(4)) + (-(-0.5*M_SQRT2*sin(q(0)) - 0.5*M_SQRT2*cos(q(0)))*sin(q(3))*cos(q(1)) + (-(-0.5*M_SQRT2*sin(q(0)) - 0.5*M_SQRT2*cos(q(0)))*sin(q(1))*cos(q(2)) + ((0.5)*M_SQRT2*sin(q(0)) - 0.5*M_SQRT2*cos(q(0)))*sin(q(2)))*cos(q(3)))*cos(q(4)))*sin(q(5)) + (-(-0.5*M_SQRT2*sin(q(0)) - 0.5*M_SQRT2*cos(q(0)))*cos(q(1))*cos(q(3)) - (-(-0.5*M_SQRT2*sin(q(0)) - 0.5*M_SQRT2*cos(q(0)))*sin(q(1))*cos(q(2)) + ((0.5)*M_SQRT2*sin(q(0)) - 0.5*M_SQRT2*cos(q(0)))*sin(q(2)))*sin(q(3)))*cos(q(5));
   out(1,6) = 0;
   out(2,0) = 0;
   out(2,1) = ((sin(q(1))*cos(q(2))*cos(q(3)) + sin(q(3))*cos(q(1)))*cos(q(4)) - sin(q(1))*sin(q(2))*sin(q(4)))*cos(q(5)) + (-sin(q(1))*sin(q(3))*cos(q(2)) + cos(q(1))*cos(q(3)))*sin(q(5));
   out(2,2) = (sin(q(2))*cos(q(1))*cos(q(3))*cos(q(4)) + sin(q(4))*cos(q(1))*cos(q(2)))*cos(q(5)) - sin(q(2))*sin(q(3))*sin(q(5))*cos(q(1));
   out(2,3) = (-sin(q(1))*sin(q(3)) + cos(q(1))*cos(q(2))*cos(q(3)))*sin(q(5)) + (sin(q(1))*cos(q(3)) + sin(q(3))*cos(q(1))*cos(q(2)))*cos(q(4))*cos(q(5));
   out(2,4) = (-(sin(q(1))*sin(q(3)) - cos(q(1))*cos(q(2))*cos(q(3)))*sin(q(4)) + sin(q(2))*cos(q(1))*cos(q(4)))*cos(q(5));
   out(2,5) = -((sin(q(1))*sin(q(3)) - cos(q(1))*cos(q(2))*cos(q(3)))*cos(q(4)) + sin(q(2))*sin(q(4))*cos(q(1)))*sin(q(5)) + (sin(q(1))*cos(q(3)) + sin(q(3))*cos(q(1))*cos(q(2)))*cos(q(5));
   out(2,6) = 0;

}


void baxter::Baxter::JRx_6(const Vector7d& q, Matrix_3_7_d& out) {

   out(0,0)= (((-0.5*M_SQRT2*sin(q(0)) + (0.5)*M_SQRT2*cos(q(0)))*cos(q(2)) + ((0.5)*M_SQRT2*sin(q(0)) + (0.5)*M_SQRT2*cos(q(0)))*sin(q(1))*sin(q(2)))*cos(q(4)) + (-(-0.5*M_SQRT2*sin(q(0)) - 0.5*M_SQRT2*cos(q(0)))*sin(q(3))*cos(q(1)) - ((-0.5*M_SQRT2*sin(q(0)) - 0.5*M_SQRT2*cos(q(0)))*sin(q(1))*cos(q(2)) + (-0.5*M_SQRT2*sin(q(0)) + (0.5)*M_SQRT2*cos(q(0)))*sin(q(2)))*cos(q(3)))*sin(q(4)))*sin(q(6)) + ((((-0.5*M_SQRT2*sin(q(0)) + (0.5)*M_SQRT2*cos(q(0)))*cos(q(2)) + ((0.5)*M_SQRT2*sin(q(0)) + (0.5)*M_SQRT2*cos(q(0)))*sin(q(1))*sin(q(2)))*sin(q(4)) + ((-0.5*M_SQRT2*sin(q(0)) - 0.5*M_SQRT2*cos(q(0)))*sin(q(3))*cos(q(1)) + ((-0.5*M_SQRT2*sin(q(0)) - 0.5*M_SQRT2*cos(q(0)))*sin(q(1))*cos(q(2)) + (-0.5*M_SQRT2*sin(q(0)) + (0.5)*M_SQRT2*cos(q(0)))*sin(q(2)))*cos(q(3)))*cos(q(4)))*cos(q(5)) + (-((0.5)*M_SQRT2*sin(q(0)) + (0.5)*M_SQRT2*cos(q(0)))*cos(q(1))*cos(q(3)) - ((-0.5*M_SQRT2*sin(q(0)) - 0.5*M_SQRT2*cos(q(0)))*sin(q(1))*cos(q(2)) + (-0.5*M_SQRT2*sin(q(0)) + (0.5)*M_SQRT2*cos(q(0)))*sin(q(2)))*sin(q(3)))*sin(q(5)))*cos(q(6));
   out(0,1)= ((-(-0.5*M_SQRT2*sin(q(0)) + (0.5)*M_SQRT2*cos(q(0)))*sin(q(3))*cos(q(1))*cos(q(2)) + ((0.5)*M_SQRT2*sin(q(0)) - 0.5*M_SQRT2*cos(q(0)))*sin(q(1))*cos(q(3)))*sin(q(5)) + (((0.5)*M_SQRT2*sin(q(0)) - 0.5*M_SQRT2*cos(q(0)))*sin(q(2))*sin(q(4))*cos(q(1)) + (-(-0.5*M_SQRT2*sin(q(0)) + (0.5)*M_SQRT2*cos(q(0)))*sin(q(1))*sin(q(3)) + (-0.5*M_SQRT2*sin(q(0)) + (0.5)*M_SQRT2*cos(q(0)))*cos(q(1))*cos(q(2))*cos(q(3)))*cos(q(4)))*cos(q(5)))*cos(q(6)) + (((0.5)*M_SQRT2*sin(q(0)) - 0.5*M_SQRT2*cos(q(0)))*sin(q(2))*cos(q(1))*cos(q(4)) + ((-0.5*M_SQRT2*sin(q(0)) + (0.5)*M_SQRT2*cos(q(0)))*sin(q(1))*sin(q(3)) - (-0.5*M_SQRT2*sin(q(0)) + (0.5)*M_SQRT2*cos(q(0)))*cos(q(1))*cos(q(2))*cos(q(3)))*sin(q(4)))*sin(q(6));
   out(0,2)= (-(-(-0.5*M_SQRT2*sin(q(0)) + (0.5)*M_SQRT2*cos(q(0)))*sin(q(1))*sin(q(2)) + ((0.5)*M_SQRT2*sin(q(0)) + (0.5)*M_SQRT2*cos(q(0)))*cos(q(2)))*sin(q(3))*sin(q(5)) + ((-(-0.5*M_SQRT2*sin(q(0)) + (0.5)*M_SQRT2*cos(q(0)))*sin(q(1))*sin(q(2)) + ((0.5)*M_SQRT2*sin(q(0)) + (0.5)*M_SQRT2*cos(q(0)))*cos(q(2)))*cos(q(3))*cos(q(4)) + (((0.5)*M_SQRT2*sin(q(0)) - 0.5*M_SQRT2*cos(q(0)))*sin(q(1))*cos(q(2)) - ((0.5)*M_SQRT2*sin(q(0)) + (0.5)*M_SQRT2*cos(q(0)))*sin(q(2)))*sin(q(4)))*cos(q(5)))*cos(q(6)) + (-(-(-0.5*M_SQRT2*sin(q(0)) + (0.5)*M_SQRT2*cos(q(0)))*sin(q(1))*sin(q(2)) + ((0.5)*M_SQRT2*sin(q(0)) + (0.5)*M_SQRT2*cos(q(0)))*cos(q(2)))*sin(q(4))*cos(q(3)) + (((0.5)*M_SQRT2*sin(q(0)) - 0.5*M_SQRT2*cos(q(0)))*sin(q(1))*cos(q(2)) - ((0.5)*M_SQRT2*sin(q(0)) + (0.5)*M_SQRT2*cos(q(0)))*sin(q(2)))*cos(q(4)))*sin(q(6));
   out(0,3)= (-(-0.5*M_SQRT2*sin(q(0)) + (0.5)*M_SQRT2*cos(q(0)))*cos(q(1))*cos(q(3)) + (-((0.5)*M_SQRT2*sin(q(0)) - 0.5*M_SQRT2*cos(q(0)))*sin(q(1))*cos(q(2)) + ((0.5)*M_SQRT2*sin(q(0)) + (0.5)*M_SQRT2*cos(q(0)))*sin(q(2)))*sin(q(3)))*sin(q(4))*sin(q(6)) + (((-0.5*M_SQRT2*sin(q(0)) + (0.5)*M_SQRT2*cos(q(0)))*cos(q(1))*cos(q(3)) - (-((0.5)*M_SQRT2*sin(q(0)) - 0.5*M_SQRT2*cos(q(0)))*sin(q(1))*cos(q(2)) + ((0.5)*M_SQRT2*sin(q(0)) + (0.5)*M_SQRT2*cos(q(0)))*sin(q(2)))*sin(q(3)))*cos(q(4))*cos(q(5)) + (((0.5)*M_SQRT2*sin(q(0)) - 0.5*M_SQRT2*cos(q(0)))*sin(q(3))*cos(q(1)) - (-((0.5)*M_SQRT2*sin(q(0)) - 0.5*M_SQRT2*cos(q(0)))*sin(q(1))*cos(q(2)) + ((0.5)*M_SQRT2*sin(q(0)) + (0.5)*M_SQRT2*cos(q(0)))*sin(q(2)))*cos(q(3)))*sin(q(5)))*cos(q(6));
   out(0,4)= (-(((0.5)*M_SQRT2*sin(q(0)) - 0.5*M_SQRT2*cos(q(0)))*sin(q(1))*sin(q(2)) + ((0.5)*M_SQRT2*sin(q(0)) + (0.5)*M_SQRT2*cos(q(0)))*cos(q(2)))*sin(q(4)) + (((0.5)*M_SQRT2*sin(q(0)) - 0.5*M_SQRT2*cos(q(0)))*sin(q(3))*cos(q(1)) - (-((0.5)*M_SQRT2*sin(q(0)) - 0.5*M_SQRT2*cos(q(0)))*sin(q(1))*cos(q(2)) + ((0.5)*M_SQRT2*sin(q(0)) + (0.5)*M_SQRT2*cos(q(0)))*sin(q(2)))*cos(q(3)))*cos(q(4)))*sin(q(6)) + ((((0.5)*M_SQRT2*sin(q(0)) - 0.5*M_SQRT2*cos(q(0)))*sin(q(1))*sin(q(2)) + ((0.5)*M_SQRT2*sin(q(0)) + (0.5)*M_SQRT2*cos(q(0)))*cos(q(2)))*cos(q(4)) - (-((0.5)*M_SQRT2*sin(q(0)) - 0.5*M_SQRT2*cos(q(0)))*sin(q(3))*cos(q(1)) + (-((0.5)*M_SQRT2*sin(q(0)) - 0.5*M_SQRT2*cos(q(0)))*sin(q(1))*cos(q(2)) + ((0.5)*M_SQRT2*sin(q(0)) + (0.5)*M_SQRT2*cos(q(0)))*sin(q(2)))*cos(q(3)))*sin(q(4)))*cos(q(5))*cos(q(6));
   out(0,5)= (-((((0.5)*M_SQRT2*sin(q(0)) - 0.5*M_SQRT2*cos(q(0)))*sin(q(1))*sin(q(2)) + ((0.5)*M_SQRT2*sin(q(0)) + (0.5)*M_SQRT2*cos(q(0)))*cos(q(2)))*sin(q(4)) + (-((0.5)*M_SQRT2*sin(q(0)) - 0.5*M_SQRT2*cos(q(0)))*sin(q(3))*cos(q(1)) + (-((0.5)*M_SQRT2*sin(q(0)) - 0.5*M_SQRT2*cos(q(0)))*sin(q(1))*cos(q(2)) + ((0.5)*M_SQRT2*sin(q(0)) + (0.5)*M_SQRT2*cos(q(0)))*sin(q(2)))*cos(q(3)))*cos(q(4)))*sin(q(5)) + (-((0.5)*M_SQRT2*sin(q(0)) - 0.5*M_SQRT2*cos(q(0)))*cos(q(1))*cos(q(3)) - (-((0.5)*M_SQRT2*sin(q(0)) - 0.5*M_SQRT2*cos(q(0)))*sin(q(1))*cos(q(2)) + ((0.5)*M_SQRT2*sin(q(0)) + (0.5)*M_SQRT2*cos(q(0)))*sin(q(2)))*sin(q(3)))*cos(q(5)))*cos(q(6));
   out(0,6)= -(((((0.5)*M_SQRT2*sin(q(0)) - 0.5*M_SQRT2*cos(q(0)))*sin(q(1))*sin(q(2)) + ((0.5)*M_SQRT2*sin(q(0)) + (0.5)*M_SQRT2*cos(q(0)))*cos(q(2)))*sin(q(4)) + (-((0.5)*M_SQRT2*sin(q(0)) - 0.5*M_SQRT2*cos(q(0)))*sin(q(3))*cos(q(1)) + (-((0.5)*M_SQRT2*sin(q(0)) - 0.5*M_SQRT2*cos(q(0)))*sin(q(1))*cos(q(2)) + ((0.5)*M_SQRT2*sin(q(0)) + (0.5)*M_SQRT2*cos(q(0)))*sin(q(2)))*cos(q(3)))*cos(q(4)))*cos(q(5)) - (((0.5)*M_SQRT2*sin(q(0)) - 0.5*M_SQRT2*cos(q(0)))*cos(q(1))*cos(q(3)) + (-((0.5)*M_SQRT2*sin(q(0)) - 0.5*M_SQRT2*cos(q(0)))*sin(q(1))*cos(q(2)) + ((0.5)*M_SQRT2*sin(q(0)) + (0.5)*M_SQRT2*cos(q(0)))*sin(q(2)))*sin(q(3)))*sin(q(5)))*sin(q(6)) + ((((0.5)*M_SQRT2*sin(q(0)) - 0.5*M_SQRT2*cos(q(0)))*sin(q(1))*sin(q(2)) + ((0.5)*M_SQRT2*sin(q(0)) + (0.5)*M_SQRT2*cos(q(0)))*cos(q(2)))*cos(q(4)) - (-((0.5)*M_SQRT2*sin(q(0)) - 0.5*M_SQRT2*cos(q(0)))*sin(q(3))*cos(q(1)) + (-((0.5)*M_SQRT2*sin(q(0)) - 0.5*M_SQRT2*cos(q(0)))*sin(q(1))*cos(q(2)) + ((0.5)*M_SQRT2*sin(q(0)) + (0.5)*M_SQRT2*cos(q(0)))*sin(q(2)))*cos(q(3)))*sin(q(4)))*cos(q(6));
   out(1,0)= ((((-0.5*M_SQRT2*sin(q(0)) + (0.5)*M_SQRT2*cos(q(0)))*sin(q(3))*cos(q(1)) + ((-0.5*M_SQRT2*sin(q(0)) + (0.5)*M_SQRT2*cos(q(0)))*sin(q(1))*cos(q(2)) + ((0.5)*M_SQRT2*sin(q(0)) + (0.5)*M_SQRT2*cos(q(0)))*sin(q(2)))*cos(q(3)))*cos(q(4)) + (((0.5)*M_SQRT2*sin(q(0)) - 0.5*M_SQRT2*cos(q(0)))*sin(q(1))*sin(q(2)) + ((0.5)*M_SQRT2*sin(q(0)) + (0.5)*M_SQRT2*cos(q(0)))*cos(q(2)))*sin(q(4)))*cos(q(5)) + (-((0.5)*M_SQRT2*sin(q(0)) - 0.5*M_SQRT2*cos(q(0)))*cos(q(1))*cos(q(3)) - ((-0.5*M_SQRT2*sin(q(0)) + (0.5)*M_SQRT2*cos(q(0)))*sin(q(1))*cos(q(2)) + ((0.5)*M_SQRT2*sin(q(0)) + (0.5)*M_SQRT2*cos(q(0)))*sin(q(2)))*sin(q(3)))*sin(q(5)))*cos(q(6)) + ((-(-0.5*M_SQRT2*sin(q(0)) + (0.5)*M_SQRT2*cos(q(0)))*sin(q(3))*cos(q(1)) - ((-0.5*M_SQRT2*sin(q(0)) + (0.5)*M_SQRT2*cos(q(0)))*sin(q(1))*cos(q(2)) + ((0.5)*M_SQRT2*sin(q(0)) + (0.5)*M_SQRT2*cos(q(0)))*sin(q(2)))*cos(q(3)))*sin(q(4)) + (((0.5)*M_SQRT2*sin(q(0)) - 0.5*M_SQRT2*cos(q(0)))*sin(q(1))*sin(q(2)) + ((0.5)*M_SQRT2*sin(q(0)) + (0.5)*M_SQRT2*cos(q(0)))*cos(q(2)))*cos(q(4)))*sin(q(6));
   out(1,1)= (((-0.5*M_SQRT2*sin(q(0)) - 0.5*M_SQRT2*cos(q(0)))*sin(q(1))*cos(q(3)) - ((0.5)*M_SQRT2*sin(q(0)) + (0.5)*M_SQRT2*cos(q(0)))*sin(q(3))*cos(q(1))*cos(q(2)))*sin(q(5)) + ((-0.5*M_SQRT2*sin(q(0)) - 0.5*M_SQRT2*cos(q(0)))*sin(q(2))*sin(q(4))*cos(q(1)) + (-((0.5)*M_SQRT2*sin(q(0)) + (0.5)*M_SQRT2*cos(q(0)))*sin(q(1))*sin(q(3)) + ((0.5)*M_SQRT2*sin(q(0)) + (0.5)*M_SQRT2*cos(q(0)))*cos(q(1))*cos(q(2))*cos(q(3)))*cos(q(4)))*cos(q(5)))*cos(q(6)) + ((-0.5*M_SQRT2*sin(q(0)) - 0.5*M_SQRT2*cos(q(0)))*sin(q(2))*cos(q(1))*cos(q(4)) + (((0.5)*M_SQRT2*sin(q(0)) + (0.5)*M_SQRT2*cos(q(0)))*sin(q(1))*sin(q(3)) - ((0.5)*M_SQRT2*sin(q(0)) + (0.5)*M_SQRT2*cos(q(0)))*cos(q(1))*cos(q(2))*cos(q(3)))*sin(q(4)))*sin(q(6));
   out(1,2)= (-(((0.5)*M_SQRT2*sin(q(0)) - 0.5*M_SQRT2*cos(q(0)))*cos(q(2)) - ((0.5)*M_SQRT2*sin(q(0)) + (0.5)*M_SQRT2*cos(q(0)))*sin(q(1))*sin(q(2)))*sin(q(3))*sin(q(5)) + ((((0.5)*M_SQRT2*sin(q(0)) - 0.5*M_SQRT2*cos(q(0)))*cos(q(2)) - ((0.5)*M_SQRT2*sin(q(0)) + (0.5)*M_SQRT2*cos(q(0)))*sin(q(1))*sin(q(2)))*cos(q(3))*cos(q(4)) + ((-0.5*M_SQRT2*sin(q(0)) - 0.5*M_SQRT2*cos(q(0)))*sin(q(1))*cos(q(2)) - ((0.5)*M_SQRT2*sin(q(0)) - 0.5*M_SQRT2*cos(q(0)))*sin(q(2)))*sin(q(4)))*cos(q(5)))*cos(q(6)) + (-(((0.5)*M_SQRT2*sin(q(0)) - 0.5*M_SQRT2*cos(q(0)))*cos(q(2)) - ((0.5)*M_SQRT2*sin(q(0)) + (0.5)*M_SQRT2*cos(q(0)))*sin(q(1))*sin(q(2)))*sin(q(4))*cos(q(3)) + ((-0.5*M_SQRT2*sin(q(0)) - 0.5*M_SQRT2*cos(q(0)))*sin(q(1))*cos(q(2)) - ((0.5)*M_SQRT2*sin(q(0)) - 0.5*M_SQRT2*cos(q(0)))*sin(q(2)))*cos(q(4)))*sin(q(6));
   out(1,3) = (((-0.5*M_SQRT2*sin(q(0)) - 0.5*M_SQRT2*cos(q(0)))*sin(q(3))*cos(q(1)) - (-(-0.5*M_SQRT2*sin(q(0)) - 0.5*M_SQRT2*cos(q(0)))*sin(q(1))*cos(q(2)) + ((0.5)*M_SQRT2*sin(q(0)) - 0.5*M_SQRT2*cos(q(0)))*sin(q(2)))*cos(q(3)))*sin(q(5)) + (((0.5)*M_SQRT2*sin(q(0)) + (0.5)*M_SQRT2*cos(q(0)))*cos(q(1))*cos(q(3)) - (-(-0.5*M_SQRT2*sin(q(0)) - 0.5*M_SQRT2*cos(q(0)))*sin(q(1))*cos(q(2)) + ((0.5)*M_SQRT2*sin(q(0)) - 0.5*M_SQRT2*cos(q(0)))*sin(q(2)))*sin(q(3)))*cos(q(4))*cos(q(5)))*cos(q(6)) + (-((0.5)*M_SQRT2*sin(q(0)) + (0.5)*M_SQRT2*cos(q(0)))*cos(q(1))*cos(q(3)) + (-(-0.5*M_SQRT2*sin(q(0)) - 0.5*M_SQRT2*cos(q(0)))*sin(q(1))*cos(q(2)) + ((0.5)*M_SQRT2*sin(q(0)) - 0.5*M_SQRT2*cos(q(0)))*sin(q(2)))*sin(q(3)))*sin(q(4))*sin(q(6));
   out(1,4) = (-((-0.5*M_SQRT2*sin(q(0)) - 0.5*M_SQRT2*cos(q(0)))*sin(q(1))*sin(q(2)) + ((0.5)*M_SQRT2*sin(q(0)) - 0.5*M_SQRT2*cos(q(0)))*cos(q(2)))*sin(q(4)) + ((-0.5*M_SQRT2*sin(q(0)) - 0.5*M_SQRT2*cos(q(0)))*sin(q(3))*cos(q(1)) - (-(-0.5*M_SQRT2*sin(q(0)) - 0.5*M_SQRT2*cos(q(0)))*sin(q(1))*cos(q(2)) + ((0.5)*M_SQRT2*sin(q(0)) - 0.5*M_SQRT2*cos(q(0)))*sin(q(2)))*cos(q(3)))*cos(q(4)))*sin(q(6)) + (((-0.5*M_SQRT2*sin(q(0)) - 0.5*M_SQRT2*cos(q(0)))*sin(q(1))*sin(q(2)) + ((0.5)*M_SQRT2*sin(q(0)) - 0.5*M_SQRT2*cos(q(0)))*cos(q(2)))*cos(q(4)) - (-(-0.5*M_SQRT2*sin(q(0)) - 0.5*M_SQRT2*cos(q(0)))*sin(q(3))*cos(q(1)) + (-(-0.5*M_SQRT2*sin(q(0)) - 0.5*M_SQRT2*cos(q(0)))*sin(q(1))*cos(q(2)) + ((0.5)*M_SQRT2*sin(q(0)) - 0.5*M_SQRT2*cos(q(0)))*sin(q(2)))*cos(q(3)))*sin(q(4)))*cos(q(5))*cos(q(6));
   out(1,5) = (-(((-0.5*M_SQRT2*sin(q(0)) - 0.5*M_SQRT2*cos(q(0)))*sin(q(1))*sin(q(2)) + ((0.5)*M_SQRT2*sin(q(0)) - 0.5*M_SQRT2*cos(q(0)))*cos(q(2)))*sin(q(4)) + (-(-0.5*M_SQRT2*sin(q(0)) - 0.5*M_SQRT2*cos(q(0)))*sin(q(3))*cos(q(1)) + (-(-0.5*M_SQRT2*sin(q(0)) - 0.5*M_SQRT2*cos(q(0)))*sin(q(1))*cos(q(2)) + ((0.5)*M_SQRT2*sin(q(0)) - 0.5*M_SQRT2*cos(q(0)))*sin(q(2)))*cos(q(3)))*cos(q(4)))*sin(q(5)) + (-(-0.5*M_SQRT2*sin(q(0)) - 0.5*M_SQRT2*cos(q(0)))*cos(q(1))*cos(q(3)) - (-(-0.5*M_SQRT2*sin(q(0)) - 0.5*M_SQRT2*cos(q(0)))*sin(q(1))*cos(q(2)) + ((0.5)*M_SQRT2*sin(q(0)) - 0.5*M_SQRT2*cos(q(0)))*sin(q(2)))*sin(q(3)))*cos(q(5)))*cos(q(6));
   out(1,6) = -((((-0.5*M_SQRT2*sin(q(0)) - 0.5*M_SQRT2*cos(q(0)))*sin(q(1))*sin(q(2)) + ((0.5)*M_SQRT2*sin(q(0)) - 0.5*M_SQRT2*cos(q(0)))*cos(q(2)))*sin(q(4)) + (-(-0.5*M_SQRT2*sin(q(0)) - 0.5*M_SQRT2*cos(q(0)))*sin(q(3))*cos(q(1)) + (-(-0.5*M_SQRT2*sin(q(0)) - 0.5*M_SQRT2*cos(q(0)))*sin(q(1))*cos(q(2)) + ((0.5)*M_SQRT2*sin(q(0)) - 0.5*M_SQRT2*cos(q(0)))*sin(q(2)))*cos(q(3)))*cos(q(4)))*cos(q(5)) - ((-0.5*M_SQRT2*sin(q(0)) - 0.5*M_SQRT2*cos(q(0)))*cos(q(1))*cos(q(3)) + (-(-0.5*M_SQRT2*sin(q(0)) - 0.5*M_SQRT2*cos(q(0)))*sin(q(1))*cos(q(2)) + ((0.5)*M_SQRT2*sin(q(0)) - 0.5*M_SQRT2*cos(q(0)))*sin(q(2)))*sin(q(3)))*sin(q(5)))*sin(q(6)) + (((-0.5*M_SQRT2*sin(q(0)) - 0.5*M_SQRT2*cos(q(0)))*sin(q(1))*sin(q(2)) + ((0.5)*M_SQRT2*sin(q(0)) - 0.5*M_SQRT2*cos(q(0)))*cos(q(2)))*cos(q(4)) - (-(-0.5*M_SQRT2*sin(q(0)) - 0.5*M_SQRT2*cos(q(0)))*sin(q(3))*cos(q(1)) + (-(-0.5*M_SQRT2*sin(q(0)) - 0.5*M_SQRT2*cos(q(0)))*sin(q(1))*cos(q(2)) + ((0.5)*M_SQRT2*sin(q(0)) - 0.5*M_SQRT2*cos(q(0)))*sin(q(2)))*cos(q(3)))*sin(q(4)))*cos(q(6));
   out(2,0) = 0;
   out(2,1) = (((sin(q(1))*cos(q(2))*cos(q(3)) + sin(q(3))*cos(q(1)))*cos(q(4)) - sin(q(1))*sin(q(2))*sin(q(4)))*cos(q(5)) + (-sin(q(1))*sin(q(3))*cos(q(2)) + cos(q(1))*cos(q(3)))*sin(q(5)))*cos(q(6)) + ((-sin(q(1))*cos(q(2))*cos(q(3)) - sin(q(3))*cos(q(1)))*sin(q(4)) - sin(q(1))*sin(q(2))*cos(q(4)))*sin(q(6));
   out(2,2) = ((sin(q(2))*cos(q(1))*cos(q(3))*cos(q(4)) + sin(q(4))*cos(q(1))*cos(q(2)))*cos(q(5)) - sin(q(2))*sin(q(3))*sin(q(5))*cos(q(1)))*cos(q(6)) + (-sin(q(2))*sin(q(4))*cos(q(1))*cos(q(3)) + cos(q(1))*cos(q(2))*cos(q(4)))*sin(q(6));
   out(2,3) = ((-sin(q(1))*sin(q(3)) + cos(q(1))*cos(q(2))*cos(q(3)))*sin(q(5)) + (sin(q(1))*cos(q(3)) + sin(q(3))*cos(q(1))*cos(q(2)))*cos(q(4))*cos(q(5)))*cos(q(6)) + (-sin(q(1))*cos(q(3)) - sin(q(3))*cos(q(1))*cos(q(2)))*sin(q(4))*sin(q(6));
   out(2,4) = ((-sin(q(1))*sin(q(3)) + cos(q(1))*cos(q(2))*cos(q(3)))*cos(q(4)) - sin(q(2))*sin(q(4))*cos(q(1)))*sin(q(6)) + (-(sin(q(1))*sin(q(3)) - cos(q(1))*cos(q(2))*cos(q(3)))*sin(q(4)) + sin(q(2))*cos(q(1))*cos(q(4)))*cos(q(5))*cos(q(6));
   out(2,5) = (-((sin(q(1))*sin(q(3)) - cos(q(1))*cos(q(2))*cos(q(3)))*cos(q(4)) + sin(q(2))*sin(q(4))*cos(q(1)))*sin(q(5)) + (sin(q(1))*cos(q(3)) + sin(q(3))*cos(q(1))*cos(q(2)))*cos(q(5)))*cos(q(6));
   out(2,6) = -(((sin(q(1))*sin(q(3)) - cos(q(1))*cos(q(2))*cos(q(3)))*cos(q(4)) + sin(q(2))*sin(q(4))*cos(q(1)))*cos(q(5)) - (-sin(q(1))*cos(q(3)) - sin(q(3))*cos(q(1))*cos(q(2)))*sin(q(5)))*sin(q(6)) + (-(sin(q(1))*sin(q(3)) - cos(q(1))*cos(q(2))*cos(q(3)))*sin(q(4)) + sin(q(2))*cos(q(1))*cos(q(4)))*cos(q(6));

}


void baxter::Baxter::JRx_ee(const Vector7d& q, Matrix_3_7_d& out) {

   out(0,0)= (((-0.5*M_SQRT2*sin(q(0)) + (0.5)*M_SQRT2*cos(q(0)))*cos(q(2)) + ((0.5)*M_SQRT2*sin(q(0)) + (0.5)*M_SQRT2*cos(q(0)))*sin(q(1))*sin(q(2)))*cos(q(4)) + (-(-0.5*M_SQRT2*sin(q(0)) - 0.5*M_SQRT2*cos(q(0)))*sin(q(3))*cos(q(1)) - ((-0.5*M_SQRT2*sin(q(0)) - 0.5*M_SQRT2*cos(q(0)))*sin(q(1))*cos(q(2)) + (-0.5*M_SQRT2*sin(q(0)) + (0.5)*M_SQRT2*cos(q(0)))*sin(q(2)))*cos(q(3)))*sin(q(4)))*sin(q(6)) + ((((-0.5*M_SQRT2*sin(q(0)) + (0.5)*M_SQRT2*cos(q(0)))*cos(q(2)) + ((0.5)*M_SQRT2*sin(q(0)) + (0.5)*M_SQRT2*cos(q(0)))*sin(q(1))*sin(q(2)))*sin(q(4)) + ((-0.5*M_SQRT2*sin(q(0)) - 0.5*M_SQRT2*cos(q(0)))*sin(q(3))*cos(q(1)) + ((-0.5*M_SQRT2*sin(q(0)) - 0.5*M_SQRT2*cos(q(0)))*sin(q(1))*cos(q(2)) + (-0.5*M_SQRT2*sin(q(0)) + (0.5)*M_SQRT2*cos(q(0)))*sin(q(2)))*cos(q(3)))*cos(q(4)))*cos(q(5)) + (-((0.5)*M_SQRT2*sin(q(0)) + (0.5)*M_SQRT2*cos(q(0)))*cos(q(1))*cos(q(3)) - ((-0.5*M_SQRT2*sin(q(0)) - 0.5*M_SQRT2*cos(q(0)))*sin(q(1))*cos(q(2)) + (-0.5*M_SQRT2*sin(q(0)) + (0.5)*M_SQRT2*cos(q(0)))*sin(q(2)))*sin(q(3)))*sin(q(5)))*cos(q(6));
   out(0,1)= ((-(-0.5*M_SQRT2*sin(q(0)) + (0.5)*M_SQRT2*cos(q(0)))*sin(q(3))*cos(q(1))*cos(q(2)) + ((0.5)*M_SQRT2*sin(q(0)) - 0.5*M_SQRT2*cos(q(0)))*sin(q(1))*cos(q(3)))*sin(q(5)) + (((0.5)*M_SQRT2*sin(q(0)) - 0.5*M_SQRT2*cos(q(0)))*sin(q(2))*sin(q(4))*cos(q(1)) + (-(-0.5*M_SQRT2*sin(q(0)) + (0.5)*M_SQRT2*cos(q(0)))*sin(q(1))*sin(q(3)) + (-0.5*M_SQRT2*sin(q(0)) + (0.5)*M_SQRT2*cos(q(0)))*cos(q(1))*cos(q(2))*cos(q(3)))*cos(q(4)))*cos(q(5)))*cos(q(6)) + (((0.5)*M_SQRT2*sin(q(0)) - 0.5*M_SQRT2*cos(q(0)))*sin(q(2))*cos(q(1))*cos(q(4)) + ((-0.5*M_SQRT2*sin(q(0)) + (0.5)*M_SQRT2*cos(q(0)))*sin(q(1))*sin(q(3)) - (-0.5*M_SQRT2*sin(q(0)) + (0.5)*M_SQRT2*cos(q(0)))*cos(q(1))*cos(q(2))*cos(q(3)))*sin(q(4)))*sin(q(6));
   out(0,2)= (-(-(-0.5*M_SQRT2*sin(q(0)) + (0.5)*M_SQRT2*cos(q(0)))*sin(q(1))*sin(q(2)) + ((0.5)*M_SQRT2*sin(q(0)) + (0.5)*M_SQRT2*cos(q(0)))*cos(q(2)))*sin(q(3))*sin(q(5)) + ((-(-0.5*M_SQRT2*sin(q(0)) + (0.5)*M_SQRT2*cos(q(0)))*sin(q(1))*sin(q(2)) + ((0.5)*M_SQRT2*sin(q(0)) + (0.5)*M_SQRT2*cos(q(0)))*cos(q(2)))*cos(q(3))*cos(q(4)) + (((0.5)*M_SQRT2*sin(q(0)) - 0.5*M_SQRT2*cos(q(0)))*sin(q(1))*cos(q(2)) - ((0.5)*M_SQRT2*sin(q(0)) + (0.5)*M_SQRT2*cos(q(0)))*sin(q(2)))*sin(q(4)))*cos(q(5)))*cos(q(6)) + (-(-(-0.5*M_SQRT2*sin(q(0)) + (0.5)*M_SQRT2*cos(q(0)))*sin(q(1))*sin(q(2)) + ((0.5)*M_SQRT2*sin(q(0)) + (0.5)*M_SQRT2*cos(q(0)))*cos(q(2)))*sin(q(4))*cos(q(3)) + (((0.5)*M_SQRT2*sin(q(0)) - 0.5*M_SQRT2*cos(q(0)))*sin(q(1))*cos(q(2)) - ((0.5)*M_SQRT2*sin(q(0)) + (0.5)*M_SQRT2*cos(q(0)))*sin(q(2)))*cos(q(4)))*sin(q(6));
   out(0,3)= (-(-0.5*M_SQRT2*sin(q(0)) + (0.5)*M_SQRT2*cos(q(0)))*cos(q(1))*cos(q(3)) + (-((0.5)*M_SQRT2*sin(q(0)) - 0.5*M_SQRT2*cos(q(0)))*sin(q(1))*cos(q(2)) + ((0.5)*M_SQRT2*sin(q(0)) + (0.5)*M_SQRT2*cos(q(0)))*sin(q(2)))*sin(q(3)))*sin(q(4))*sin(q(6)) + (((-0.5*M_SQRT2*sin(q(0)) + (0.5)*M_SQRT2*cos(q(0)))*cos(q(1))*cos(q(3)) - (-((0.5)*M_SQRT2*sin(q(0)) - 0.5*M_SQRT2*cos(q(0)))*sin(q(1))*cos(q(2)) + ((0.5)*M_SQRT2*sin(q(0)) + (0.5)*M_SQRT2*cos(q(0)))*sin(q(2)))*sin(q(3)))*cos(q(4))*cos(q(5)) + (((0.5)*M_SQRT2*sin(q(0)) - 0.5*M_SQRT2*cos(q(0)))*sin(q(3))*cos(q(1)) - (-((0.5)*M_SQRT2*sin(q(0)) - 0.5*M_SQRT2*cos(q(0)))*sin(q(1))*cos(q(2)) + ((0.5)*M_SQRT2*sin(q(0)) + (0.5)*M_SQRT2*cos(q(0)))*sin(q(2)))*cos(q(3)))*sin(q(5)))*cos(q(6));
   out(0,4)= (-(((0.5)*M_SQRT2*sin(q(0)) - 0.5*M_SQRT2*cos(q(0)))*sin(q(1))*sin(q(2)) + ((0.5)*M_SQRT2*sin(q(0)) + (0.5)*M_SQRT2*cos(q(0)))*cos(q(2)))*sin(q(4)) + (((0.5)*M_SQRT2*sin(q(0)) - 0.5*M_SQRT2*cos(q(0)))*sin(q(3))*cos(q(1)) - (-((0.5)*M_SQRT2*sin(q(0)) - 0.5*M_SQRT2*cos(q(0)))*sin(q(1))*cos(q(2)) + ((0.5)*M_SQRT2*sin(q(0)) + (0.5)*M_SQRT2*cos(q(0)))*sin(q(2)))*cos(q(3)))*cos(q(4)))*sin(q(6)) + ((((0.5)*M_SQRT2*sin(q(0)) - 0.5*M_SQRT2*cos(q(0)))*sin(q(1))*sin(q(2)) + ((0.5)*M_SQRT2*sin(q(0)) + (0.5)*M_SQRT2*cos(q(0)))*cos(q(2)))*cos(q(4)) - (-((0.5)*M_SQRT2*sin(q(0)) - 0.5*M_SQRT2*cos(q(0)))*sin(q(3))*cos(q(1)) + (-((0.5)*M_SQRT2*sin(q(0)) - 0.5*M_SQRT2*cos(q(0)))*sin(q(1))*cos(q(2)) + ((0.5)*M_SQRT2*sin(q(0)) + (0.5)*M_SQRT2*cos(q(0)))*sin(q(2)))*cos(q(3)))*sin(q(4)))*cos(q(5))*cos(q(6));
   out(0,5)= (-((((0.5)*M_SQRT2*sin(q(0)) - 0.5*M_SQRT2*cos(q(0)))*sin(q(1))*sin(q(2)) + ((0.5)*M_SQRT2*sin(q(0)) + (0.5)*M_SQRT2*cos(q(0)))*cos(q(2)))*sin(q(4)) + (-((0.5)*M_SQRT2*sin(q(0)) - 0.5*M_SQRT2*cos(q(0)))*sin(q(3))*cos(q(1)) + (-((0.5)*M_SQRT2*sin(q(0)) - 0.5*M_SQRT2*cos(q(0)))*sin(q(1))*cos(q(2)) + ((0.5)*M_SQRT2*sin(q(0)) + (0.5)*M_SQRT2*cos(q(0)))*sin(q(2)))*cos(q(3)))*cos(q(4)))*sin(q(5)) + (-((0.5)*M_SQRT2*sin(q(0)) - 0.5*M_SQRT2*cos(q(0)))*cos(q(1))*cos(q(3)) - (-((0.5)*M_SQRT2*sin(q(0)) - 0.5*M_SQRT2*cos(q(0)))*sin(q(1))*cos(q(2)) + ((0.5)*M_SQRT2*sin(q(0)) + (0.5)*M_SQRT2*cos(q(0)))*sin(q(2)))*sin(q(3)))*cos(q(5)))*cos(q(6));
   out(0,6)= -(((((0.5)*M_SQRT2*sin(q(0)) - 0.5*M_SQRT2*cos(q(0)))*sin(q(1))*sin(q(2)) + ((0.5)*M_SQRT2*sin(q(0)) + (0.5)*M_SQRT2*cos(q(0)))*cos(q(2)))*sin(q(4)) + (-((0.5)*M_SQRT2*sin(q(0)) - 0.5*M_SQRT2*cos(q(0)))*sin(q(3))*cos(q(1)) + (-((0.5)*M_SQRT2*sin(q(0)) - 0.5*M_SQRT2*cos(q(0)))*sin(q(1))*cos(q(2)) + ((0.5)*M_SQRT2*sin(q(0)) + (0.5)*M_SQRT2*cos(q(0)))*sin(q(2)))*cos(q(3)))*cos(q(4)))*cos(q(5)) - (((0.5)*M_SQRT2*sin(q(0)) - 0.5*M_SQRT2*cos(q(0)))*cos(q(1))*cos(q(3)) + (-((0.5)*M_SQRT2*sin(q(0)) - 0.5*M_SQRT2*cos(q(0)))*sin(q(1))*cos(q(2)) + ((0.5)*M_SQRT2*sin(q(0)) + (0.5)*M_SQRT2*cos(q(0)))*sin(q(2)))*sin(q(3)))*sin(q(5)))*sin(q(6)) + ((((0.5)*M_SQRT2*sin(q(0)) - 0.5*M_SQRT2*cos(q(0)))*sin(q(1))*sin(q(2)) + ((0.5)*M_SQRT2*sin(q(0)) + (0.5)*M_SQRT2*cos(q(0)))*cos(q(2)))*cos(q(4)) - (-((0.5)*M_SQRT2*sin(q(0)) - 0.5*M_SQRT2*cos(q(0)))*sin(q(3))*cos(q(1)) + (-((0.5)*M_SQRT2*sin(q(0)) - 0.5*M_SQRT2*cos(q(0)))*sin(q(1))*cos(q(2)) + ((0.5)*M_SQRT2*sin(q(0)) + (0.5)*M_SQRT2*cos(q(0)))*sin(q(2)))*cos(q(3)))*sin(q(4)))*cos(q(6));
   out(1,0)= ((((-0.5*M_SQRT2*sin(q(0)) + (0.5)*M_SQRT2*cos(q(0)))*sin(q(3))*cos(q(1)) + ((-0.5*M_SQRT2*sin(q(0)) + (0.5)*M_SQRT2*cos(q(0)))*sin(q(1))*cos(q(2)) + ((0.5)*M_SQRT2*sin(q(0)) + (0.5)*M_SQRT2*cos(q(0)))*sin(q(2)))*cos(q(3)))*cos(q(4)) + (((0.5)*M_SQRT2*sin(q(0)) - 0.5*M_SQRT2*cos(q(0)))*sin(q(1))*sin(q(2)) + ((0.5)*M_SQRT2*sin(q(0)) + (0.5)*M_SQRT2*cos(q(0)))*cos(q(2)))*sin(q(4)))*cos(q(5)) + (-((0.5)*M_SQRT2*sin(q(0)) - 0.5*M_SQRT2*cos(q(0)))*cos(q(1))*cos(q(3)) - ((-0.5*M_SQRT2*sin(q(0)) + (0.5)*M_SQRT2*cos(q(0)))*sin(q(1))*cos(q(2)) + ((0.5)*M_SQRT2*sin(q(0)) + (0.5)*M_SQRT2*cos(q(0)))*sin(q(2)))*sin(q(3)))*sin(q(5)))*cos(q(6)) + ((-(-0.5*M_SQRT2*sin(q(0)) + (0.5)*M_SQRT2*cos(q(0)))*sin(q(3))*cos(q(1)) - ((-0.5*M_SQRT2*sin(q(0)) + (0.5)*M_SQRT2*cos(q(0)))*sin(q(1))*cos(q(2)) + ((0.5)*M_SQRT2*sin(q(0)) + (0.5)*M_SQRT2*cos(q(0)))*sin(q(2)))*cos(q(3)))*sin(q(4)) + (((0.5)*M_SQRT2*sin(q(0)) - 0.5*M_SQRT2*cos(q(0)))*sin(q(1))*sin(q(2)) + ((0.5)*M_SQRT2*sin(q(0)) + (0.5)*M_SQRT2*cos(q(0)))*cos(q(2)))*cos(q(4)))*sin(q(6));
   out(1,1)= (((-0.5*M_SQRT2*sin(q(0)) - 0.5*M_SQRT2*cos(q(0)))*sin(q(1))*cos(q(3)) - ((0.5)*M_SQRT2*sin(q(0)) + (0.5)*M_SQRT2*cos(q(0)))*sin(q(3))*cos(q(1))*cos(q(2)))*sin(q(5)) + ((-0.5*M_SQRT2*sin(q(0)) - 0.5*M_SQRT2*cos(q(0)))*sin(q(2))*sin(q(4))*cos(q(1)) + (-((0.5)*M_SQRT2*sin(q(0)) + (0.5)*M_SQRT2*cos(q(0)))*sin(q(1))*sin(q(3)) + ((0.5)*M_SQRT2*sin(q(0)) + (0.5)*M_SQRT2*cos(q(0)))*cos(q(1))*cos(q(2))*cos(q(3)))*cos(q(4)))*cos(q(5)))*cos(q(6)) + ((-0.5*M_SQRT2*sin(q(0)) - 0.5*M_SQRT2*cos(q(0)))*sin(q(2))*cos(q(1))*cos(q(4)) + (((0.5)*M_SQRT2*sin(q(0)) + (0.5)*M_SQRT2*cos(q(0)))*sin(q(1))*sin(q(3)) - ((0.5)*M_SQRT2*sin(q(0)) + (0.5)*M_SQRT2*cos(q(0)))*cos(q(1))*cos(q(2))*cos(q(3)))*sin(q(4)))*sin(q(6));
   out(1,2)= (-(((0.5)*M_SQRT2*sin(q(0)) - 0.5*M_SQRT2*cos(q(0)))*cos(q(2)) - ((0.5)*M_SQRT2*sin(q(0)) + (0.5)*M_SQRT2*cos(q(0)))*sin(q(1))*sin(q(2)))*sin(q(3))*sin(q(5)) + ((((0.5)*M_SQRT2*sin(q(0)) - 0.5*M_SQRT2*cos(q(0)))*cos(q(2)) - ((0.5)*M_SQRT2*sin(q(0)) + (0.5)*M_SQRT2*cos(q(0)))*sin(q(1))*sin(q(2)))*cos(q(3))*cos(q(4)) + ((-0.5*M_SQRT2*sin(q(0)) - 0.5*M_SQRT2*cos(q(0)))*sin(q(1))*cos(q(2)) - ((0.5)*M_SQRT2*sin(q(0)) - 0.5*M_SQRT2*cos(q(0)))*sin(q(2)))*sin(q(4)))*cos(q(5)))*cos(q(6)) + (-(((0.5)*M_SQRT2*sin(q(0)) - 0.5*M_SQRT2*cos(q(0)))*cos(q(2)) - ((0.5)*M_SQRT2*sin(q(0)) + (0.5)*M_SQRT2*cos(q(0)))*sin(q(1))*sin(q(2)))*sin(q(4))*cos(q(3)) + ((-0.5*M_SQRT2*sin(q(0)) - 0.5*M_SQRT2*cos(q(0)))*sin(q(1))*cos(q(2)) - ((0.5)*M_SQRT2*sin(q(0)) - 0.5*M_SQRT2*cos(q(0)))*sin(q(2)))*cos(q(4)))*sin(q(6));
   out(1,3) = (((-0.5*M_SQRT2*sin(q(0)) - 0.5*M_SQRT2*cos(q(0)))*sin(q(3))*cos(q(1)) - (-(-0.5*M_SQRT2*sin(q(0)) - 0.5*M_SQRT2*cos(q(0)))*sin(q(1))*cos(q(2)) + ((0.5)*M_SQRT2*sin(q(0)) - 0.5*M_SQRT2*cos(q(0)))*sin(q(2)))*cos(q(3)))*sin(q(5)) + (((0.5)*M_SQRT2*sin(q(0)) + (0.5)*M_SQRT2*cos(q(0)))*cos(q(1))*cos(q(3)) - (-(-0.5*M_SQRT2*sin(q(0)) - 0.5*M_SQRT2*cos(q(0)))*sin(q(1))*cos(q(2)) + ((0.5)*M_SQRT2*sin(q(0)) - 0.5*M_SQRT2*cos(q(0)))*sin(q(2)))*sin(q(3)))*cos(q(4))*cos(q(5)))*cos(q(6)) + (-((0.5)*M_SQRT2*sin(q(0)) + (0.5)*M_SQRT2*cos(q(0)))*cos(q(1))*cos(q(3)) + (-(-0.5*M_SQRT2*sin(q(0)) - 0.5*M_SQRT2*cos(q(0)))*sin(q(1))*cos(q(2)) + ((0.5)*M_SQRT2*sin(q(0)) - 0.5*M_SQRT2*cos(q(0)))*sin(q(2)))*sin(q(3)))*sin(q(4))*sin(q(6));
   out(1,4) = (-((-0.5*M_SQRT2*sin(q(0)) - 0.5*M_SQRT2*cos(q(0)))*sin(q(1))*sin(q(2)) + ((0.5)*M_SQRT2*sin(q(0)) - 0.5*M_SQRT2*cos(q(0)))*cos(q(2)))*sin(q(4)) + ((-0.5*M_SQRT2*sin(q(0)) - 0.5*M_SQRT2*cos(q(0)))*sin(q(3))*cos(q(1)) - (-(-0.5*M_SQRT2*sin(q(0)) - 0.5*M_SQRT2*cos(q(0)))*sin(q(1))*cos(q(2)) + ((0.5)*M_SQRT2*sin(q(0)) - 0.5*M_SQRT2*cos(q(0)))*sin(q(2)))*cos(q(3)))*cos(q(4)))*sin(q(6)) + (((-0.5*M_SQRT2*sin(q(0)) - 0.5*M_SQRT2*cos(q(0)))*sin(q(1))*sin(q(2)) + ((0.5)*M_SQRT2*sin(q(0)) - 0.5*M_SQRT2*cos(q(0)))*cos(q(2)))*cos(q(4)) - (-(-0.5*M_SQRT2*sin(q(0)) - 0.5*M_SQRT2*cos(q(0)))*sin(q(3))*cos(q(1)) + (-(-0.5*M_SQRT2*sin(q(0)) - 0.5*M_SQRT2*cos(q(0)))*sin(q(1))*cos(q(2)) + ((0.5)*M_SQRT2*sin(q(0)) - 0.5*M_SQRT2*cos(q(0)))*sin(q(2)))*cos(q(3)))*sin(q(4)))*cos(q(5))*cos(q(6));
   out(1,5) = (-(((-0.5*M_SQRT2*sin(q(0)) - 0.5*M_SQRT2*cos(q(0)))*sin(q(1))*sin(q(2)) + ((0.5)*M_SQRT2*sin(q(0)) - 0.5*M_SQRT2*cos(q(0)))*cos(q(2)))*sin(q(4)) + (-(-0.5*M_SQRT2*sin(q(0)) - 0.5*M_SQRT2*cos(q(0)))*sin(q(3))*cos(q(1)) + (-(-0.5*M_SQRT2*sin(q(0)) - 0.5*M_SQRT2*cos(q(0)))*sin(q(1))*cos(q(2)) + ((0.5)*M_SQRT2*sin(q(0)) - 0.5*M_SQRT2*cos(q(0)))*sin(q(2)))*cos(q(3)))*cos(q(4)))*sin(q(5)) + (-(-0.5*M_SQRT2*sin(q(0)) - 0.5*M_SQRT2*cos(q(0)))*cos(q(1))*cos(q(3)) - (-(-0.5*M_SQRT2*sin(q(0)) - 0.5*M_SQRT2*cos(q(0)))*sin(q(1))*cos(q(2)) + ((0.5)*M_SQRT2*sin(q(0)) - 0.5*M_SQRT2*cos(q(0)))*sin(q(2)))*sin(q(3)))*cos(q(5)))*cos(q(6));
   out(1,6) = -((((-0.5*M_SQRT2*sin(q(0)) - 0.5*M_SQRT2*cos(q(0)))*sin(q(1))*sin(q(2)) + ((0.5)*M_SQRT2*sin(q(0)) - 0.5*M_SQRT2*cos(q(0)))*cos(q(2)))*sin(q(4)) + (-(-0.5*M_SQRT2*sin(q(0)) - 0.5*M_SQRT2*cos(q(0)))*sin(q(3))*cos(q(1)) + (-(-0.5*M_SQRT2*sin(q(0)) - 0.5*M_SQRT2*cos(q(0)))*sin(q(1))*cos(q(2)) + ((0.5)*M_SQRT2*sin(q(0)) - 0.5*M_SQRT2*cos(q(0)))*sin(q(2)))*cos(q(3)))*cos(q(4)))*cos(q(5)) - ((-0.5*M_SQRT2*sin(q(0)) - 0.5*M_SQRT2*cos(q(0)))*cos(q(1))*cos(q(3)) + (-(-0.5*M_SQRT2*sin(q(0)) - 0.5*M_SQRT2*cos(q(0)))*sin(q(1))*cos(q(2)) + ((0.5)*M_SQRT2*sin(q(0)) - 0.5*M_SQRT2*cos(q(0)))*sin(q(2)))*sin(q(3)))*sin(q(5)))*sin(q(6)) + (((-0.5*M_SQRT2*sin(q(0)) - 0.5*M_SQRT2*cos(q(0)))*sin(q(1))*sin(q(2)) + ((0.5)*M_SQRT2*sin(q(0)) - 0.5*M_SQRT2*cos(q(0)))*cos(q(2)))*cos(q(4)) - (-(-0.5*M_SQRT2*sin(q(0)) - 0.5*M_SQRT2*cos(q(0)))*sin(q(3))*cos(q(1)) + (-(-0.5*M_SQRT2*sin(q(0)) - 0.5*M_SQRT2*cos(q(0)))*sin(q(1))*cos(q(2)) + ((0.5)*M_SQRT2*sin(q(0)) - 0.5*M_SQRT2*cos(q(0)))*sin(q(2)))*cos(q(3)))*sin(q(4)))*cos(q(6));
   out(2,0) = 0;
   out(2,1) = (((sin(q(1))*cos(q(2))*cos(q(3)) + sin(q(3))*cos(q(1)))*cos(q(4)) - sin(q(1))*sin(q(2))*sin(q(4)))*cos(q(5)) + (-sin(q(1))*sin(q(3))*cos(q(2)) + cos(q(1))*cos(q(3)))*sin(q(5)))*cos(q(6)) + ((-sin(q(1))*cos(q(2))*cos(q(3)) - sin(q(3))*cos(q(1)))*sin(q(4)) - sin(q(1))*sin(q(2))*cos(q(4)))*sin(q(6));
   out(2,2) = ((sin(q(2))*cos(q(1))*cos(q(3))*cos(q(4)) + sin(q(4))*cos(q(1))*cos(q(2)))*cos(q(5)) - sin(q(2))*sin(q(3))*sin(q(5))*cos(q(1)))*cos(q(6)) + (-sin(q(2))*sin(q(4))*cos(q(1))*cos(q(3)) + cos(q(1))*cos(q(2))*cos(q(4)))*sin(q(6));
   out(2,3) = ((-sin(q(1))*sin(q(3)) + cos(q(1))*cos(q(2))*cos(q(3)))*sin(q(5)) + (sin(q(1))*cos(q(3)) + sin(q(3))*cos(q(1))*cos(q(2)))*cos(q(4))*cos(q(5)))*cos(q(6)) + (-sin(q(1))*cos(q(3)) - sin(q(3))*cos(q(1))*cos(q(2)))*sin(q(4))*sin(q(6));
   out(2,4) = ((-sin(q(1))*sin(q(3)) + cos(q(1))*cos(q(2))*cos(q(3)))*cos(q(4)) - sin(q(2))*sin(q(4))*cos(q(1)))*sin(q(6)) + (-(sin(q(1))*sin(q(3)) - cos(q(1))*cos(q(2))*cos(q(3)))*sin(q(4)) + sin(q(2))*cos(q(1))*cos(q(4)))*cos(q(5))*cos(q(6));
   out(2,5) = (-((sin(q(1))*sin(q(3)) - cos(q(1))*cos(q(2))*cos(q(3)))*cos(q(4)) + sin(q(2))*sin(q(4))*cos(q(1)))*sin(q(5)) + (sin(q(1))*cos(q(3)) + sin(q(3))*cos(q(1))*cos(q(2)))*cos(q(5)))*cos(q(6));
   out(2,6) = -(((sin(q(1))*sin(q(3)) - cos(q(1))*cos(q(2))*cos(q(3)))*cos(q(4)) + sin(q(2))*sin(q(4))*cos(q(1)))*cos(q(5)) - (-sin(q(1))*cos(q(3)) - sin(q(3))*cos(q(1))*cos(q(2)))*sin(q(5)))*sin(q(6)) + (-(sin(q(1))*sin(q(3)) - cos(q(1))*cos(q(2))*cos(q(3)))*sin(q(4)) + sin(q(2))*cos(q(1))*cos(q(4)))*cos(q(6));

}










