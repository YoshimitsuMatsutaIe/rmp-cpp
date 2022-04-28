/******************************************************************************
 *                       Code generated with sympy 1.9                        *
 *                                                                            *
 *              See http://www.sympy.org/ for more information.               *
 *                                                                            *
 *                    This file is part of 'Jo_W0project'                     *
 ******************************************************************************/
#include "../include/baxter.hpp"


void baxter::Baxter::Jo_W0(const Vector7d& q, Matrix_3_7_d& out) {

   out = Matrix_3_7_d::Zero(3, 7);

}

void baxter::Baxter::Jo_BR(const Vector7d& q, Matrix_3_7_d& out) {

   out = Matrix_3_7_d::Zero(3, 7);

}

void baxter::Baxter::Jo_0(const Vector7d& q, Matrix_3_7_d& out) {
   out = Matrix_3_7_d::Zero(3, 7);
}

void baxter::Baxter::Jo_1(const Vector7d& q, Matrix_3_7_d& out) {

   out(0,0)= L1*(0.5*M_SQRT2*sin(q(0)) + 0.5*M_SQRT2*cos(q(0)));
   out(0,1)= 0;
   out(0,2)= 0;
   out(0,3)= 0;
   out(0,4)= 0;
   out(0,5)= 0;
   out(0,6)= 0;
   out(1,0)= L1*(0.5*M_SQRT2*sin(q(0)) - 0.5*M_SQRT2*cos(q(0)));
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



void baxter::Baxter::Jo_2(const Vector7d& q, Matrix_3_7_d& out) {

   out(0,0)= L1*(0.5*M_SQRT2*sin(q(0)) + 0.5*M_SQRT2*cos(q(0))) + L2*(0.5*M_SQRT2*sin(q(0)) + 0.5*M_SQRT2*cos(q(0)))*cos(q(1));
   out(0,1)= -L2*(0.5*M_SQRT2*sin(q(0)) - 0.5*M_SQRT2*cos(q(0)))*sin(q(1));
   out(0,2)= 0;
   out(0,3)= 0;
   out(0,4)= 0;
   out(0,5)= 0;
   out(0,6)= 0;
   out(1,0)= L1*(0.5*M_SQRT2*sin(q(0)) - 0.5*M_SQRT2*cos(q(0))) + L2*(0.5*M_SQRT2*sin(q(0)) - 0.5*M_SQRT2*cos(q(0)))*cos(q(1));
   out(1,1)= -L2*(-0.5*M_SQRT2*sin(q(0)) - 0.5*M_SQRT2*cos(q(0)))*sin(q(1));
   out(1,2)= 0;
   out(1,3) = 0;
   out(1,4) = 0;
   out(1,5) = 0;
   out(1,6) = 0;
   out(2,0) = 0;
   out(2,1) = -L2*cos(q(1));
   out(2,2) = 0;
   out(2,3) = 0;
   out(2,4) = 0;
   out(2,5) = 0;
   out(2,6) = 0;

}

void baxter::Baxter::Jo_3(const Vector7d& q, Matrix_3_7_d& out) {

   out(0,0)= L1*(0.5*M_SQRT2*sin(q(0)) + 0.5*M_SQRT2*cos(q(0))) + L2*(0.5*M_SQRT2*sin(q(0)) + 0.5*M_SQRT2*cos(q(0)))*cos(q(1)) + L3*((-0.5*M_SQRT2*sin(q(0)) - 0.5*M_SQRT2*cos(q(0)))*sin(q(1))*cos(q(2)) + (-0.5*M_SQRT2*sin(q(0)) + 0.5*M_SQRT2*cos(q(0)))*sin(q(2)));
   out(0,1)= -L2*(0.5*M_SQRT2*sin(q(0)) - 0.5*M_SQRT2*cos(q(0)))*sin(q(1)) + L3*(-0.5*M_SQRT2*sin(q(0)) + 0.5*M_SQRT2*cos(q(0)))*cos(q(1))*cos(q(2));
   out(0,2)= L3*(-(-0.5*M_SQRT2*sin(q(0)) + 0.5*M_SQRT2*cos(q(0)))*sin(q(1))*sin(q(2)) + (0.5*M_SQRT2*sin(q(0)) + 0.5*M_SQRT2*cos(q(0)))*cos(q(2)));
   out(0,3)= 0;
   out(0,4)= 0;
   out(0,5)= 0;
   out(0,6)= 0;
   out(1,0)= L1*(0.5*M_SQRT2*sin(q(0)) - 0.5*M_SQRT2*cos(q(0))) + L2*(0.5*M_SQRT2*sin(q(0)) - 0.5*M_SQRT2*cos(q(0)))*cos(q(1)) + L3*((-0.5*M_SQRT2*sin(q(0)) + 0.5*M_SQRT2*cos(q(0)))*sin(q(1))*cos(q(2)) + (0.5*M_SQRT2*sin(q(0)) + 0.5*M_SQRT2*cos(q(0)))*sin(q(2)));
   out(1,1)= -L2*(-0.5*M_SQRT2*sin(q(0)) - 0.5*M_SQRT2*cos(q(0)))*sin(q(1)) + L3*(0.5*M_SQRT2*sin(q(0)) + 0.5*M_SQRT2*cos(q(0)))*cos(q(1))*cos(q(2));
   out(1,2)= L3*((0.5*M_SQRT2*sin(q(0)) - 0.5*M_SQRT2*cos(q(0)))*cos(q(2)) - (0.5*M_SQRT2*sin(q(0)) + 0.5*M_SQRT2*cos(q(0)))*sin(q(1))*sin(q(2)));
   out(1,3) = 0;
   out(1,4) = 0;
   out(1,5) = 0;
   out(1,6) = 0;
   out(2,0) = 0;
   out(2,1) = -L2*cos(q(1)) + L3*sin(q(1))*cos(q(2));
   out(2,2) = L3*sin(q(2))*cos(q(1));
   out(2,3) = 0;
   out(2,4) = 0;
   out(2,5) = 0;
   out(2,6) = 0;

}


void baxter::Baxter::Jo_4(const Vector7d& q, Matrix_3_7_d& out) {

   out(0,0)= L1*(0.5*M_SQRT2*sin(q(0)) + 0.5*M_SQRT2*cos(q(0))) + L2*(0.5*M_SQRT2*sin(q(0)) + 0.5*M_SQRT2*cos(q(0)))*cos(q(1)) + L3*((-0.5*M_SQRT2*sin(q(0)) - 0.5*M_SQRT2*cos(q(0)))*sin(q(1))*cos(q(2)) + (-0.5*M_SQRT2*sin(q(0)) + 0.5*M_SQRT2*cos(q(0)))*sin(q(2))) - L4*((-0.5*M_SQRT2*sin(q(0)) - 0.5*M_SQRT2*cos(q(0)))*cos(q(1))*cos(q(3)) + (-(-0.5*M_SQRT2*sin(q(0)) - 0.5*M_SQRT2*cos(q(0)))*sin(q(1))*cos(q(2)) - (-0.5*M_SQRT2*sin(q(0)) + 0.5*M_SQRT2*cos(q(0)))*sin(q(2)))*sin(q(3)));
   out(0,1)= -L2*(0.5*M_SQRT2*sin(q(0)) - 0.5*M_SQRT2*cos(q(0)))*sin(q(1)) + L3*(-0.5*M_SQRT2*sin(q(0)) + 0.5*M_SQRT2*cos(q(0)))*cos(q(1))*cos(q(2)) - L4*(-(-0.5*M_SQRT2*sin(q(0)) + 0.5*M_SQRT2*cos(q(0)))*sin(q(1))*cos(q(3)) - (-0.5*M_SQRT2*sin(q(0)) + 0.5*M_SQRT2*cos(q(0)))*sin(q(3))*cos(q(1))*cos(q(2)));
   out(0,2)= L3*(-(-0.5*M_SQRT2*sin(q(0)) + 0.5*M_SQRT2*cos(q(0)))*sin(q(1))*sin(q(2)) + (0.5*M_SQRT2*sin(q(0)) + 0.5*M_SQRT2*cos(q(0)))*cos(q(2))) - L4*((-0.5*M_SQRT2*sin(q(0)) + 0.5*M_SQRT2*cos(q(0)))*sin(q(1))*sin(q(2)) - (0.5*M_SQRT2*sin(q(0)) + 0.5*M_SQRT2*cos(q(0)))*cos(q(2)))*sin(q(3));
   out(0,3)= -L4*(-(-0.5*M_SQRT2*sin(q(0)) + 0.5*M_SQRT2*cos(q(0)))*sin(q(3))*cos(q(1)) + ((0.5*M_SQRT2*sin(q(0)) - 0.5*M_SQRT2*cos(q(0)))*sin(q(1))*cos(q(2)) - (0.5*M_SQRT2*sin(q(0)) + 0.5*M_SQRT2*cos(q(0)))*sin(q(2)))*cos(q(3)));
   out(0,4)= 0;
   out(0,5)= 0;
   out(0,6)= 0;
   out(1,0)= L1*(0.5*M_SQRT2*sin(q(0)) - 0.5*M_SQRT2*cos(q(0))) + L2*(0.5*M_SQRT2*sin(q(0)) - 0.5*M_SQRT2*cos(q(0)))*cos(q(1)) + L3*((-0.5*M_SQRT2*sin(q(0)) + 0.5*M_SQRT2*cos(q(0)))*sin(q(1))*cos(q(2)) + (0.5*M_SQRT2*sin(q(0)) + 0.5*M_SQRT2*cos(q(0)))*sin(q(2))) - L4*((-0.5*M_SQRT2*sin(q(0)) + 0.5*M_SQRT2*cos(q(0)))*cos(q(1))*cos(q(3)) + (-(-0.5*M_SQRT2*sin(q(0)) + 0.5*M_SQRT2*cos(q(0)))*sin(q(1))*cos(q(2)) - (0.5*M_SQRT2*sin(q(0)) + 0.5*M_SQRT2*cos(q(0)))*sin(q(2)))*sin(q(3)));
   out(1,1)= -L2*(-0.5*M_SQRT2*sin(q(0)) - 0.5*M_SQRT2*cos(q(0)))*sin(q(1)) + L3*(0.5*M_SQRT2*sin(q(0)) + 0.5*M_SQRT2*cos(q(0)))*cos(q(1))*cos(q(2)) - L4*(-(0.5*M_SQRT2*sin(q(0)) + 0.5*M_SQRT2*cos(q(0)))*sin(q(1))*cos(q(3)) - (0.5*M_SQRT2*sin(q(0)) + 0.5*M_SQRT2*cos(q(0)))*sin(q(3))*cos(q(1))*cos(q(2)));
   out(1,2)= L3*((0.5*M_SQRT2*sin(q(0)) - 0.5*M_SQRT2*cos(q(0)))*cos(q(2)) - (0.5*M_SQRT2*sin(q(0)) + 0.5*M_SQRT2*cos(q(0)))*sin(q(1))*sin(q(2))) - L4*(-(0.5*M_SQRT2*sin(q(0)) - 0.5*M_SQRT2*cos(q(0)))*cos(q(2)) + (0.5*M_SQRT2*sin(q(0)) + 0.5*M_SQRT2*cos(q(0)))*sin(q(1))*sin(q(2)))*sin(q(3));
   out(1,3) = -L4*(-(0.5*M_SQRT2*sin(q(0)) + 0.5*M_SQRT2*cos(q(0)))*sin(q(3))*cos(q(1)) + ((-0.5*M_SQRT2*sin(q(0)) - 0.5*M_SQRT2*cos(q(0)))*sin(q(1))*cos(q(2)) - (0.5*M_SQRT2*sin(q(0)) - 0.5*M_SQRT2*cos(q(0)))*sin(q(2)))*cos(q(3)));
   out(1,4) = 0;
   out(1,5) = 0;
   out(1,6) = 0;
   out(2,0) = 0;
   out(2,1) = -L2*cos(q(1)) + L3*sin(q(1))*cos(q(2)) - L4*(-sin(q(1))*sin(q(3))*cos(q(2)) + cos(q(1))*cos(q(3)));
   out(2,2) = L3*sin(q(2))*cos(q(1)) + L4*sin(q(2))*sin(q(3))*cos(q(1));
   out(2,3) = -L4*(-sin(q(1))*sin(q(3)) + cos(q(1))*cos(q(2))*cos(q(3)));
   out(2,4) = 0;
   out(2,5) = 0;
   out(2,6) = 0;

}


void baxter::Baxter::Jo_5(const Vector7d& q, Matrix_3_7_d& out) {

   out(0,0)= L1*(0.5*M_SQRT2*sin(q(0)) + 0.5*M_SQRT2*cos(q(0))) + L2*(0.5*M_SQRT2*sin(q(0)) + 0.5*M_SQRT2*cos(q(0)))*cos(q(1)) + L3*((-0.5*M_SQRT2*sin(q(0)) - 0.5*M_SQRT2*cos(q(0)))*sin(q(1))*cos(q(2)) + (-0.5*M_SQRT2*sin(q(0)) + 0.5*M_SQRT2*cos(q(0)))*sin(q(2))) - L4*((-0.5*M_SQRT2*sin(q(0)) - 0.5*M_SQRT2*cos(q(0)))*cos(q(1))*cos(q(3)) + (-(-0.5*M_SQRT2*sin(q(0)) - 0.5*M_SQRT2*cos(q(0)))*sin(q(1))*cos(q(2)) - (-0.5*M_SQRT2*sin(q(0)) + 0.5*M_SQRT2*cos(q(0)))*sin(q(2)))*sin(q(3))) + L5*(((-0.5*M_SQRT2*sin(q(0)) + 0.5*M_SQRT2*cos(q(0)))*cos(q(2)) + (0.5*M_SQRT2*sin(q(0)) + 0.5*M_SQRT2*cos(q(0)))*sin(q(1))*sin(q(2)))*sin(q(4)) + ((-0.5*M_SQRT2*sin(q(0)) - 0.5*M_SQRT2*cos(q(0)))*sin(q(3))*cos(q(1)) + ((-0.5*M_SQRT2*sin(q(0)) - 0.5*M_SQRT2*cos(q(0)))*sin(q(1))*cos(q(2)) + (-0.5*M_SQRT2*sin(q(0)) + 0.5*M_SQRT2*cos(q(0)))*sin(q(2)))*cos(q(3)))*cos(q(4)));
   out(0,1)= -L2*(0.5*M_SQRT2*sin(q(0)) - 0.5*M_SQRT2*cos(q(0)))*sin(q(1)) + L3*(-0.5*M_SQRT2*sin(q(0)) + 0.5*M_SQRT2*cos(q(0)))*cos(q(1))*cos(q(2)) - L4*(-(-0.5*M_SQRT2*sin(q(0)) + 0.5*M_SQRT2*cos(q(0)))*sin(q(1))*cos(q(3)) - (-0.5*M_SQRT2*sin(q(0)) + 0.5*M_SQRT2*cos(q(0)))*sin(q(3))*cos(q(1))*cos(q(2))) + L5*((0.5*M_SQRT2*sin(q(0)) - 0.5*M_SQRT2*cos(q(0)))*sin(q(2))*sin(q(4))*cos(q(1)) + (-(-0.5*M_SQRT2*sin(q(0)) + 0.5*M_SQRT2*cos(q(0)))*sin(q(1))*sin(q(3)) + (-0.5*M_SQRT2*sin(q(0)) + 0.5*M_SQRT2*cos(q(0)))*cos(q(1))*cos(q(2))*cos(q(3)))*cos(q(4)));
   out(0,2)= L3*(-(-0.5*M_SQRT2*sin(q(0)) + 0.5*M_SQRT2*cos(q(0)))*sin(q(1))*sin(q(2)) + (0.5*M_SQRT2*sin(q(0)) + 0.5*M_SQRT2*cos(q(0)))*cos(q(2))) - L4*((-0.5*M_SQRT2*sin(q(0)) + 0.5*M_SQRT2*cos(q(0)))*sin(q(1))*sin(q(2)) - (0.5*M_SQRT2*sin(q(0)) + 0.5*M_SQRT2*cos(q(0)))*cos(q(2)))*sin(q(3)) + L5*((-(-0.5*M_SQRT2*sin(q(0)) + 0.5*M_SQRT2*cos(q(0)))*sin(q(1))*sin(q(2)) + (0.5*M_SQRT2*sin(q(0)) + 0.5*M_SQRT2*cos(q(0)))*cos(q(2)))*cos(q(3))*cos(q(4)) + ((0.5*M_SQRT2*sin(q(0)) - 0.5*M_SQRT2*cos(q(0)))*sin(q(1))*cos(q(2)) - (0.5*M_SQRT2*sin(q(0)) + 0.5*M_SQRT2*cos(q(0)))*sin(q(2)))*sin(q(4)));
   out(0,3)= -L4*(-(-0.5*M_SQRT2*sin(q(0)) + 0.5*M_SQRT2*cos(q(0)))*sin(q(3))*cos(q(1)) + ((0.5*M_SQRT2*sin(q(0)) - 0.5*M_SQRT2*cos(q(0)))*sin(q(1))*cos(q(2)) - (0.5*M_SQRT2*sin(q(0)) + 0.5*M_SQRT2*cos(q(0)))*sin(q(2)))*cos(q(3))) + L5*((-0.5*M_SQRT2*sin(q(0)) + 0.5*M_SQRT2*cos(q(0)))*cos(q(1))*cos(q(3)) - (-(0.5*M_SQRT2*sin(q(0)) - 0.5*M_SQRT2*cos(q(0)))*sin(q(1))*cos(q(2)) + (0.5*M_SQRT2*sin(q(0)) + 0.5*M_SQRT2*cos(q(0)))*sin(q(2)))*sin(q(3)))*cos(q(4));
   out(0,4)= L5*(((0.5*M_SQRT2*sin(q(0)) - 0.5*M_SQRT2*cos(q(0)))*sin(q(1))*sin(q(2)) + (0.5*M_SQRT2*sin(q(0)) + 0.5*M_SQRT2*cos(q(0)))*cos(q(2)))*cos(q(4)) - (-(0.5*M_SQRT2*sin(q(0)) - 0.5*M_SQRT2*cos(q(0)))*sin(q(3))*cos(q(1)) + (-(0.5*M_SQRT2*sin(q(0)) - 0.5*M_SQRT2*cos(q(0)))*sin(q(1))*cos(q(2)) + (0.5*M_SQRT2*sin(q(0)) + 0.5*M_SQRT2*cos(q(0)))*sin(q(2)))*cos(q(3)))*sin(q(4)));
   out(0,5)= 0;
   out(0,6)= 0;
   out(1,0)= L1*(0.5*M_SQRT2*sin(q(0)) - 0.5*M_SQRT2*cos(q(0))) + L2*(0.5*M_SQRT2*sin(q(0)) - 0.5*M_SQRT2*cos(q(0)))*cos(q(1)) + L3*((-0.5*M_SQRT2*sin(q(0)) + 0.5*M_SQRT2*cos(q(0)))*sin(q(1))*cos(q(2)) + (0.5*M_SQRT2*sin(q(0)) + 0.5*M_SQRT2*cos(q(0)))*sin(q(2))) - L4*((-0.5*M_SQRT2*sin(q(0)) + 0.5*M_SQRT2*cos(q(0)))*cos(q(1))*cos(q(3)) + (-(-0.5*M_SQRT2*sin(q(0)) + 0.5*M_SQRT2*cos(q(0)))*sin(q(1))*cos(q(2)) - (0.5*M_SQRT2*sin(q(0)) + 0.5*M_SQRT2*cos(q(0)))*sin(q(2)))*sin(q(3))) + L5*(((-0.5*M_SQRT2*sin(q(0)) + 0.5*M_SQRT2*cos(q(0)))*sin(q(3))*cos(q(1)) + ((-0.5*M_SQRT2*sin(q(0)) + 0.5*M_SQRT2*cos(q(0)))*sin(q(1))*cos(q(2)) + (0.5*M_SQRT2*sin(q(0)) + 0.5*M_SQRT2*cos(q(0)))*sin(q(2)))*cos(q(3)))*cos(q(4)) + ((0.5*M_SQRT2*sin(q(0)) - 0.5*M_SQRT2*cos(q(0)))*sin(q(1))*sin(q(2)) + (0.5*M_SQRT2*sin(q(0)) + 0.5*M_SQRT2*cos(q(0)))*cos(q(2)))*sin(q(4)));
   out(1,1)= -L2*(-0.5*M_SQRT2*sin(q(0)) - 0.5*M_SQRT2*cos(q(0)))*sin(q(1)) + L3*(0.5*M_SQRT2*sin(q(0)) + 0.5*M_SQRT2*cos(q(0)))*cos(q(1))*cos(q(2)) - L4*(-(0.5*M_SQRT2*sin(q(0)) + 0.5*M_SQRT2*cos(q(0)))*sin(q(1))*cos(q(3)) - (0.5*M_SQRT2*sin(q(0)) + 0.5*M_SQRT2*cos(q(0)))*sin(q(3))*cos(q(1))*cos(q(2))) + L5*((-0.5*M_SQRT2*sin(q(0)) - 0.5*M_SQRT2*cos(q(0)))*sin(q(2))*sin(q(4))*cos(q(1)) + (-(0.5*M_SQRT2*sin(q(0)) + 0.5*M_SQRT2*cos(q(0)))*sin(q(1))*sin(q(3)) + (0.5*M_SQRT2*sin(q(0)) + 0.5*M_SQRT2*cos(q(0)))*cos(q(1))*cos(q(2))*cos(q(3)))*cos(q(4)));
   out(1,2)= L3*((0.5*M_SQRT2*sin(q(0)) - 0.5*M_SQRT2*cos(q(0)))*cos(q(2)) - (0.5*M_SQRT2*sin(q(0)) + 0.5*M_SQRT2*cos(q(0)))*sin(q(1))*sin(q(2))) - L4*(-(0.5*M_SQRT2*sin(q(0)) - 0.5*M_SQRT2*cos(q(0)))*cos(q(2)) + (0.5*M_SQRT2*sin(q(0)) + 0.5*M_SQRT2*cos(q(0)))*sin(q(1))*sin(q(2)))*sin(q(3)) + L5*(((0.5*M_SQRT2*sin(q(0)) - 0.5*M_SQRT2*cos(q(0)))*cos(q(2)) - (0.5*M_SQRT2*sin(q(0)) + 0.5*M_SQRT2*cos(q(0)))*sin(q(1))*sin(q(2)))*cos(q(3))*cos(q(4)) + ((-0.5*M_SQRT2*sin(q(0)) - 0.5*M_SQRT2*cos(q(0)))*sin(q(1))*cos(q(2)) - (0.5*M_SQRT2*sin(q(0)) - 0.5*M_SQRT2*cos(q(0)))*sin(q(2)))*sin(q(4)));
   out(1,3) = -L4*(-(0.5*M_SQRT2*sin(q(0)) + 0.5*M_SQRT2*cos(q(0)))*sin(q(3))*cos(q(1)) + ((-0.5*M_SQRT2*sin(q(0)) - 0.5*M_SQRT2*cos(q(0)))*sin(q(1))*cos(q(2)) - (0.5*M_SQRT2*sin(q(0)) - 0.5*M_SQRT2*cos(q(0)))*sin(q(2)))*cos(q(3))) + L5*((0.5*M_SQRT2*sin(q(0)) + 0.5*M_SQRT2*cos(q(0)))*cos(q(1))*cos(q(3)) - (-(-0.5*M_SQRT2*sin(q(0)) - 0.5*M_SQRT2*cos(q(0)))*sin(q(1))*cos(q(2)) + (0.5*M_SQRT2*sin(q(0)) - 0.5*M_SQRT2*cos(q(0)))*sin(q(2)))*sin(q(3)))*cos(q(4));
   out(1,4) = L5*(((-0.5*M_SQRT2*sin(q(0)) - 0.5*M_SQRT2*cos(q(0)))*sin(q(1))*sin(q(2)) + (0.5*M_SQRT2*sin(q(0)) - 0.5*M_SQRT2*cos(q(0)))*cos(q(2)))*cos(q(4)) - (-(-0.5*M_SQRT2*sin(q(0)) - 0.5*M_SQRT2*cos(q(0)))*sin(q(3))*cos(q(1)) + (-(-0.5*M_SQRT2*sin(q(0)) - 0.5*M_SQRT2*cos(q(0)))*sin(q(1))*cos(q(2)) + (0.5*M_SQRT2*sin(q(0)) - 0.5*M_SQRT2*cos(q(0)))*sin(q(2)))*cos(q(3)))*sin(q(4)));
   out(1,5) = 0;
   out(1,6) = 0;
   out(2,0) = 0;
   out(2,1) = -L2*cos(q(1)) + L3*sin(q(1))*cos(q(2)) - L4*(-sin(q(1))*sin(q(3))*cos(q(2)) + cos(q(1))*cos(q(3))) + L5*((sin(q(1))*cos(q(2))*cos(q(3)) + sin(q(3))*cos(q(1)))*cos(q(4)) - sin(q(1))*sin(q(2))*sin(q(4)));
   out(2,2) = L3*sin(q(2))*cos(q(1)) + L4*sin(q(2))*sin(q(3))*cos(q(1)) + L5*(sin(q(2))*cos(q(1))*cos(q(3))*cos(q(4)) + sin(q(4))*cos(q(1))*cos(q(2)));
   out(2,3) = -L4*(-sin(q(1))*sin(q(3)) + cos(q(1))*cos(q(2))*cos(q(3))) + L5*(sin(q(1))*cos(q(3)) + sin(q(3))*cos(q(1))*cos(q(2)))*cos(q(4));
   out(2,4) = L5*(-(sin(q(1))*sin(q(3)) - cos(q(1))*cos(q(2))*cos(q(3)))*sin(q(4)) + sin(q(2))*cos(q(1))*cos(q(4)));
   out(2,5) = 0;
   out(2,6) = 0;

}


void baxter::Baxter::Jo_6(const Vector7d& q, Matrix_3_7_d& out) {

   out(0,0)= L1*(0.5*M_SQRT2*sin(q(0)) + 0.5*M_SQRT2*cos(q(0))) + L2*(0.5*M_SQRT2*sin(q(0)) + 0.5*M_SQRT2*cos(q(0)))*cos(q(1)) + L3*((-0.5*M_SQRT2*sin(q(0)) - 0.5*M_SQRT2*cos(q(0)))*sin(q(1))*cos(q(2)) + (-0.5*M_SQRT2*sin(q(0)) + 0.5*M_SQRT2*cos(q(0)))*sin(q(2))) - L4*((-0.5*M_SQRT2*sin(q(0)) - 0.5*M_SQRT2*cos(q(0)))*cos(q(1))*cos(q(3)) + (-(-0.5*M_SQRT2*sin(q(0)) - 0.5*M_SQRT2*cos(q(0)))*sin(q(1))*cos(q(2)) - (-0.5*M_SQRT2*sin(q(0)) + 0.5*M_SQRT2*cos(q(0)))*sin(q(2)))*sin(q(3))) + L5*(((-0.5*M_SQRT2*sin(q(0)) + 0.5*M_SQRT2*cos(q(0)))*cos(q(2)) + (0.5*M_SQRT2*sin(q(0)) + 0.5*M_SQRT2*cos(q(0)))*sin(q(1))*sin(q(2)))*sin(q(4)) + ((-0.5*M_SQRT2*sin(q(0)) - 0.5*M_SQRT2*cos(q(0)))*sin(q(3))*cos(q(1)) + ((-0.5*M_SQRT2*sin(q(0)) - 0.5*M_SQRT2*cos(q(0)))*sin(q(1))*cos(q(2)) + (-0.5*M_SQRT2*sin(q(0)) + 0.5*M_SQRT2*cos(q(0)))*sin(q(2)))*cos(q(3)))*cos(q(4)));
   out(0,1)= -L2*(0.5*M_SQRT2*sin(q(0)) - 0.5*M_SQRT2*cos(q(0)))*sin(q(1)) + L3*(-0.5*M_SQRT2*sin(q(0)) + 0.5*M_SQRT2*cos(q(0)))*cos(q(1))*cos(q(2)) - L4*(-(-0.5*M_SQRT2*sin(q(0)) + 0.5*M_SQRT2*cos(q(0)))*sin(q(1))*cos(q(3)) - (-0.5*M_SQRT2*sin(q(0)) + 0.5*M_SQRT2*cos(q(0)))*sin(q(3))*cos(q(1))*cos(q(2))) + L5*((0.5*M_SQRT2*sin(q(0)) - 0.5*M_SQRT2*cos(q(0)))*sin(q(2))*sin(q(4))*cos(q(1)) + (-(-0.5*M_SQRT2*sin(q(0)) + 0.5*M_SQRT2*cos(q(0)))*sin(q(1))*sin(q(3)) + (-0.5*M_SQRT2*sin(q(0)) + 0.5*M_SQRT2*cos(q(0)))*cos(q(1))*cos(q(2))*cos(q(3)))*cos(q(4)));
   out(0,2)= L3*(-(-0.5*M_SQRT2*sin(q(0)) + 0.5*M_SQRT2*cos(q(0)))*sin(q(1))*sin(q(2)) + (0.5*M_SQRT2*sin(q(0)) + 0.5*M_SQRT2*cos(q(0)))*cos(q(2))) - L4*((-0.5*M_SQRT2*sin(q(0)) + 0.5*M_SQRT2*cos(q(0)))*sin(q(1))*sin(q(2)) - (0.5*M_SQRT2*sin(q(0)) + 0.5*M_SQRT2*cos(q(0)))*cos(q(2)))*sin(q(3)) + L5*((-(-0.5*M_SQRT2*sin(q(0)) + 0.5*M_SQRT2*cos(q(0)))*sin(q(1))*sin(q(2)) + (0.5*M_SQRT2*sin(q(0)) + 0.5*M_SQRT2*cos(q(0)))*cos(q(2)))*cos(q(3))*cos(q(4)) + ((0.5*M_SQRT2*sin(q(0)) - 0.5*M_SQRT2*cos(q(0)))*sin(q(1))*cos(q(2)) - (0.5*M_SQRT2*sin(q(0)) + 0.5*M_SQRT2*cos(q(0)))*sin(q(2)))*sin(q(4)));
   out(0,3)= -L4*(-(-0.5*M_SQRT2*sin(q(0)) + 0.5*M_SQRT2*cos(q(0)))*sin(q(3))*cos(q(1)) + ((0.5*M_SQRT2*sin(q(0)) - 0.5*M_SQRT2*cos(q(0)))*sin(q(1))*cos(q(2)) - (0.5*M_SQRT2*sin(q(0)) + 0.5*M_SQRT2*cos(q(0)))*sin(q(2)))*cos(q(3))) + L5*((-0.5*M_SQRT2*sin(q(0)) + 0.5*M_SQRT2*cos(q(0)))*cos(q(1))*cos(q(3)) - (-(0.5*M_SQRT2*sin(q(0)) - 0.5*M_SQRT2*cos(q(0)))*sin(q(1))*cos(q(2)) + (0.5*M_SQRT2*sin(q(0)) + 0.5*M_SQRT2*cos(q(0)))*sin(q(2)))*sin(q(3)))*cos(q(4));
   out(0,4)= L5*(((0.5*M_SQRT2*sin(q(0)) - 0.5*M_SQRT2*cos(q(0)))*sin(q(1))*sin(q(2)) + (0.5*M_SQRT2*sin(q(0)) + 0.5*M_SQRT2*cos(q(0)))*cos(q(2)))*cos(q(4)) - (-(0.5*M_SQRT2*sin(q(0)) - 0.5*M_SQRT2*cos(q(0)))*sin(q(3))*cos(q(1)) + (-(0.5*M_SQRT2*sin(q(0)) - 0.5*M_SQRT2*cos(q(0)))*sin(q(1))*cos(q(2)) + (0.5*M_SQRT2*sin(q(0)) + 0.5*M_SQRT2*cos(q(0)))*sin(q(2)))*cos(q(3)))*sin(q(4)));
   out(0,5)= 0;
   out(0,6)= 0;
   out(1,0)= L1*(0.5*M_SQRT2*sin(q(0)) - 0.5*M_SQRT2*cos(q(0))) + L2*(0.5*M_SQRT2*sin(q(0)) - 0.5*M_SQRT2*cos(q(0)))*cos(q(1)) + L3*((-0.5*M_SQRT2*sin(q(0)) + 0.5*M_SQRT2*cos(q(0)))*sin(q(1))*cos(q(2)) + (0.5*M_SQRT2*sin(q(0)) + 0.5*M_SQRT2*cos(q(0)))*sin(q(2))) - L4*((-0.5*M_SQRT2*sin(q(0)) + 0.5*M_SQRT2*cos(q(0)))*cos(q(1))*cos(q(3)) + (-(-0.5*M_SQRT2*sin(q(0)) + 0.5*M_SQRT2*cos(q(0)))*sin(q(1))*cos(q(2)) - (0.5*M_SQRT2*sin(q(0)) + 0.5*M_SQRT2*cos(q(0)))*sin(q(2)))*sin(q(3))) + L5*(((-0.5*M_SQRT2*sin(q(0)) + 0.5*M_SQRT2*cos(q(0)))*sin(q(3))*cos(q(1)) + ((-0.5*M_SQRT2*sin(q(0)) + 0.5*M_SQRT2*cos(q(0)))*sin(q(1))*cos(q(2)) + (0.5*M_SQRT2*sin(q(0)) + 0.5*M_SQRT2*cos(q(0)))*sin(q(2)))*cos(q(3)))*cos(q(4)) + ((0.5*M_SQRT2*sin(q(0)) - 0.5*M_SQRT2*cos(q(0)))*sin(q(1))*sin(q(2)) + (0.5*M_SQRT2*sin(q(0)) + 0.5*M_SQRT2*cos(q(0)))*cos(q(2)))*sin(q(4)));
   out(1,1)= -L2*(-0.5*M_SQRT2*sin(q(0)) - 0.5*M_SQRT2*cos(q(0)))*sin(q(1)) + L3*(0.5*M_SQRT2*sin(q(0)) + 0.5*M_SQRT2*cos(q(0)))*cos(q(1))*cos(q(2)) - L4*(-(0.5*M_SQRT2*sin(q(0)) + 0.5*M_SQRT2*cos(q(0)))*sin(q(1))*cos(q(3)) - (0.5*M_SQRT2*sin(q(0)) + 0.5*M_SQRT2*cos(q(0)))*sin(q(3))*cos(q(1))*cos(q(2))) + L5*((-0.5*M_SQRT2*sin(q(0)) - 0.5*M_SQRT2*cos(q(0)))*sin(q(2))*sin(q(4))*cos(q(1)) + (-(0.5*M_SQRT2*sin(q(0)) + 0.5*M_SQRT2*cos(q(0)))*sin(q(1))*sin(q(3)) + (0.5*M_SQRT2*sin(q(0)) + 0.5*M_SQRT2*cos(q(0)))*cos(q(1))*cos(q(2))*cos(q(3)))*cos(q(4)));
   out(1,2)= L3*((0.5*M_SQRT2*sin(q(0)) - 0.5*M_SQRT2*cos(q(0)))*cos(q(2)) - (0.5*M_SQRT2*sin(q(0)) + 0.5*M_SQRT2*cos(q(0)))*sin(q(1))*sin(q(2))) - L4*(-(0.5*M_SQRT2*sin(q(0)) - 0.5*M_SQRT2*cos(q(0)))*cos(q(2)) + (0.5*M_SQRT2*sin(q(0)) + 0.5*M_SQRT2*cos(q(0)))*sin(q(1))*sin(q(2)))*sin(q(3)) + L5*(((0.5*M_SQRT2*sin(q(0)) - 0.5*M_SQRT2*cos(q(0)))*cos(q(2)) - (0.5*M_SQRT2*sin(q(0)) + 0.5*M_SQRT2*cos(q(0)))*sin(q(1))*sin(q(2)))*cos(q(3))*cos(q(4)) + ((-0.5*M_SQRT2*sin(q(0)) - 0.5*M_SQRT2*cos(q(0)))*sin(q(1))*cos(q(2)) - (0.5*M_SQRT2*sin(q(0)) - 0.5*M_SQRT2*cos(q(0)))*sin(q(2)))*sin(q(4)));
   out(1,3) = -L4*(-(0.5*M_SQRT2*sin(q(0)) + 0.5*M_SQRT2*cos(q(0)))*sin(q(3))*cos(q(1)) + ((-0.5*M_SQRT2*sin(q(0)) - 0.5*M_SQRT2*cos(q(0)))*sin(q(1))*cos(q(2)) - (0.5*M_SQRT2*sin(q(0)) - 0.5*M_SQRT2*cos(q(0)))*sin(q(2)))*cos(q(3))) + L5*((0.5*M_SQRT2*sin(q(0)) + 0.5*M_SQRT2*cos(q(0)))*cos(q(1))*cos(q(3)) - (-(-0.5*M_SQRT2*sin(q(0)) - 0.5*M_SQRT2*cos(q(0)))*sin(q(1))*cos(q(2)) + (0.5*M_SQRT2*sin(q(0)) - 0.5*M_SQRT2*cos(q(0)))*sin(q(2)))*sin(q(3)))*cos(q(4));
   out(1,4) = L5*(((-0.5*M_SQRT2*sin(q(0)) - 0.5*M_SQRT2*cos(q(0)))*sin(q(1))*sin(q(2)) + (0.5*M_SQRT2*sin(q(0)) - 0.5*M_SQRT2*cos(q(0)))*cos(q(2)))*cos(q(4)) - (-(-0.5*M_SQRT2*sin(q(0)) - 0.5*M_SQRT2*cos(q(0)))*sin(q(3))*cos(q(1)) + (-(-0.5*M_SQRT2*sin(q(0)) - 0.5*M_SQRT2*cos(q(0)))*sin(q(1))*cos(q(2)) + (0.5*M_SQRT2*sin(q(0)) - 0.5*M_SQRT2*cos(q(0)))*sin(q(2)))*cos(q(3)))*sin(q(4)));
   out(1,5) = 0;
   out(1,6) = 0;
   out(2,0) = 0;
   out(2,1) = -L2*cos(q(1)) + L3*sin(q(1))*cos(q(2)) - L4*(-sin(q(1))*sin(q(3))*cos(q(2)) + cos(q(1))*cos(q(3))) + L5*((sin(q(1))*cos(q(2))*cos(q(3)) + sin(q(3))*cos(q(1)))*cos(q(4)) - sin(q(1))*sin(q(2))*sin(q(4)));
   out(2,2) = L3*sin(q(2))*cos(q(1)) + L4*sin(q(2))*sin(q(3))*cos(q(1)) + L5*(sin(q(2))*cos(q(1))*cos(q(3))*cos(q(4)) + sin(q(4))*cos(q(1))*cos(q(2)));
   out(2,3) = -L4*(-sin(q(1))*sin(q(3)) + cos(q(1))*cos(q(2))*cos(q(3))) + L5*(sin(q(1))*cos(q(3)) + sin(q(3))*cos(q(1))*cos(q(2)))*cos(q(4));
   out(2,4) = L5*(-(sin(q(1))*sin(q(3)) - cos(q(1))*cos(q(2))*cos(q(3)))*sin(q(4)) + sin(q(2))*cos(q(1))*cos(q(4)));
   out(2,5) = 0;
   out(2,6) = 0;

}


void baxter::Baxter::Jo_ee(const Vector7d& q, Matrix_3_7_d& out) {

   out(0,0)= L1*(0.5*M_SQRT2*sin(q(0)) + 0.5*M_SQRT2*cos(q(0))) + L2*(0.5*M_SQRT2*sin(q(0)) + 0.5*M_SQRT2*cos(q(0)))*cos(q(1)) + L3*((-0.5*M_SQRT2*sin(q(0)) - 0.5*M_SQRT2*cos(q(0)))*sin(q(1))*cos(q(2)) + (-0.5*M_SQRT2*sin(q(0)) + 0.5*M_SQRT2*cos(q(0)))*sin(q(2))) - L4*((-0.5*M_SQRT2*sin(q(0)) - 0.5*M_SQRT2*cos(q(0)))*cos(q(1))*cos(q(3)) + (-(-0.5*M_SQRT2*sin(q(0)) - 0.5*M_SQRT2*cos(q(0)))*sin(q(1))*cos(q(2)) - (-0.5*M_SQRT2*sin(q(0)) + 0.5*M_SQRT2*cos(q(0)))*sin(q(2)))*sin(q(3))) + L5*(((-0.5*M_SQRT2*sin(q(0)) + 0.5*M_SQRT2*cos(q(0)))*cos(q(2)) + (0.5*M_SQRT2*sin(q(0)) + 0.5*M_SQRT2*cos(q(0)))*sin(q(1))*sin(q(2)))*sin(q(4)) + ((-0.5*M_SQRT2*sin(q(0)) - 0.5*M_SQRT2*cos(q(0)))*sin(q(3))*cos(q(1)) + ((-0.5*M_SQRT2*sin(q(0)) - 0.5*M_SQRT2*cos(q(0)))*sin(q(1))*cos(q(2)) + (-0.5*M_SQRT2*sin(q(0)) + 0.5*M_SQRT2*cos(q(0)))*sin(q(2)))*cos(q(3)))*cos(q(4))) + L6*((((-0.5*M_SQRT2*sin(q(0)) + 0.5*M_SQRT2*cos(q(0)))*cos(q(2)) + (0.5*M_SQRT2*sin(q(0)) + 0.5*M_SQRT2*cos(q(0)))*sin(q(1))*sin(q(2)))*sin(q(4)) + ((-0.5*M_SQRT2*sin(q(0)) - 0.5*M_SQRT2*cos(q(0)))*sin(q(3))*cos(q(1)) + ((-0.5*M_SQRT2*sin(q(0)) - 0.5*M_SQRT2*cos(q(0)))*sin(q(1))*cos(q(2)) + (-0.5*M_SQRT2*sin(q(0)) + 0.5*M_SQRT2*cos(q(0)))*sin(q(2)))*cos(q(3)))*cos(q(4)))*sin(q(5)) + ((0.5*M_SQRT2*sin(q(0)) + 0.5*M_SQRT2*cos(q(0)))*cos(q(1))*cos(q(3)) + ((-0.5*M_SQRT2*sin(q(0)) - 0.5*M_SQRT2*cos(q(0)))*sin(q(1))*cos(q(2)) + (-0.5*M_SQRT2*sin(q(0)) + 0.5*M_SQRT2*cos(q(0)))*sin(q(2)))*sin(q(3)))*cos(q(5)));
   out(0,1)= -L2*(0.5*M_SQRT2*sin(q(0)) - 0.5*M_SQRT2*cos(q(0)))*sin(q(1)) + L3*(-0.5*M_SQRT2*sin(q(0)) + 0.5*M_SQRT2*cos(q(0)))*cos(q(1))*cos(q(2)) - L4*(-(-0.5*M_SQRT2*sin(q(0)) + 0.5*M_SQRT2*cos(q(0)))*sin(q(1))*cos(q(3)) - (-0.5*M_SQRT2*sin(q(0)) + 0.5*M_SQRT2*cos(q(0)))*sin(q(3))*cos(q(1))*cos(q(2))) + L5*((0.5*M_SQRT2*sin(q(0)) - 0.5*M_SQRT2*cos(q(0)))*sin(q(2))*sin(q(4))*cos(q(1)) + (-(-0.5*M_SQRT2*sin(q(0)) + 0.5*M_SQRT2*cos(q(0)))*sin(q(1))*sin(q(3)) + (-0.5*M_SQRT2*sin(q(0)) + 0.5*M_SQRT2*cos(q(0)))*cos(q(1))*cos(q(2))*cos(q(3)))*cos(q(4))) + L6*(((-0.5*M_SQRT2*sin(q(0)) + 0.5*M_SQRT2*cos(q(0)))*sin(q(3))*cos(q(1))*cos(q(2)) - (0.5*M_SQRT2*sin(q(0)) - 0.5*M_SQRT2*cos(q(0)))*sin(q(1))*cos(q(3)))*cos(q(5)) + ((0.5*M_SQRT2*sin(q(0)) - 0.5*M_SQRT2*cos(q(0)))*sin(q(2))*sin(q(4))*cos(q(1)) + (-(-0.5*M_SQRT2*sin(q(0)) + 0.5*M_SQRT2*cos(q(0)))*sin(q(1))*sin(q(3)) + (-0.5*M_SQRT2*sin(q(0)) + 0.5*M_SQRT2*cos(q(0)))*cos(q(1))*cos(q(2))*cos(q(3)))*cos(q(4)))*sin(q(5)));
   out(0,2)= L3*(-(-0.5*M_SQRT2*sin(q(0)) + 0.5*M_SQRT2*cos(q(0)))*sin(q(1))*sin(q(2)) + (0.5*M_SQRT2*sin(q(0)) + 0.5*M_SQRT2*cos(q(0)))*cos(q(2))) - L4*((-0.5*M_SQRT2*sin(q(0)) + 0.5*M_SQRT2*cos(q(0)))*sin(q(1))*sin(q(2)) - (0.5*M_SQRT2*sin(q(0)) + 0.5*M_SQRT2*cos(q(0)))*cos(q(2)))*sin(q(3)) + L5*((-(-0.5*M_SQRT2*sin(q(0)) + 0.5*M_SQRT2*cos(q(0)))*sin(q(1))*sin(q(2)) + (0.5*M_SQRT2*sin(q(0)) + 0.5*M_SQRT2*cos(q(0)))*cos(q(2)))*cos(q(3))*cos(q(4)) + ((0.5*M_SQRT2*sin(q(0)) - 0.5*M_SQRT2*cos(q(0)))*sin(q(1))*cos(q(2)) - (0.5*M_SQRT2*sin(q(0)) + 0.5*M_SQRT2*cos(q(0)))*sin(q(2)))*sin(q(4))) + L6*((-(-0.5*M_SQRT2*sin(q(0)) + 0.5*M_SQRT2*cos(q(0)))*sin(q(1))*sin(q(2)) + (0.5*M_SQRT2*sin(q(0)) + 0.5*M_SQRT2*cos(q(0)))*cos(q(2)))*sin(q(3))*cos(q(5)) + ((-(-0.5*M_SQRT2*sin(q(0)) + 0.5*M_SQRT2*cos(q(0)))*sin(q(1))*sin(q(2)) + (0.5*M_SQRT2*sin(q(0)) + 0.5*M_SQRT2*cos(q(0)))*cos(q(2)))*cos(q(3))*cos(q(4)) + ((0.5*M_SQRT2*sin(q(0)) - 0.5*M_SQRT2*cos(q(0)))*sin(q(1))*cos(q(2)) - (0.5*M_SQRT2*sin(q(0)) + 0.5*M_SQRT2*cos(q(0)))*sin(q(2)))*sin(q(4)))*sin(q(5)));
   out(0,3)= -L4*(-(-0.5*M_SQRT2*sin(q(0)) + 0.5*M_SQRT2*cos(q(0)))*sin(q(3))*cos(q(1)) + ((0.5*M_SQRT2*sin(q(0)) - 0.5*M_SQRT2*cos(q(0)))*sin(q(1))*cos(q(2)) - (0.5*M_SQRT2*sin(q(0)) + 0.5*M_SQRT2*cos(q(0)))*sin(q(2)))*cos(q(3))) + L5*((-0.5*M_SQRT2*sin(q(0)) + 0.5*M_SQRT2*cos(q(0)))*cos(q(1))*cos(q(3)) - (-(0.5*M_SQRT2*sin(q(0)) - 0.5*M_SQRT2*cos(q(0)))*sin(q(1))*cos(q(2)) + (0.5*M_SQRT2*sin(q(0)) + 0.5*M_SQRT2*cos(q(0)))*sin(q(2)))*sin(q(3)))*cos(q(4)) + L6*(((-0.5*M_SQRT2*sin(q(0)) + 0.5*M_SQRT2*cos(q(0)))*cos(q(1))*cos(q(3)) - (-(0.5*M_SQRT2*sin(q(0)) - 0.5*M_SQRT2*cos(q(0)))*sin(q(1))*cos(q(2)) + (0.5*M_SQRT2*sin(q(0)) + 0.5*M_SQRT2*cos(q(0)))*sin(q(2)))*sin(q(3)))*sin(q(5))*cos(q(4)) + (-(0.5*M_SQRT2*sin(q(0)) - 0.5*M_SQRT2*cos(q(0)))*sin(q(3))*cos(q(1)) + (-(0.5*M_SQRT2*sin(q(0)) - 0.5*M_SQRT2*cos(q(0)))*sin(q(1))*cos(q(2)) + (0.5*M_SQRT2*sin(q(0)) + 0.5*M_SQRT2*cos(q(0)))*sin(q(2)))*cos(q(3)))*cos(q(5)));
   out(0,4)= L5*(((0.5*M_SQRT2*sin(q(0)) - 0.5*M_SQRT2*cos(q(0)))*sin(q(1))*sin(q(2)) + (0.5*M_SQRT2*sin(q(0)) + 0.5*M_SQRT2*cos(q(0)))*cos(q(2)))*cos(q(4)) - (-(0.5*M_SQRT2*sin(q(0)) - 0.5*M_SQRT2*cos(q(0)))*sin(q(3))*cos(q(1)) + (-(0.5*M_SQRT2*sin(q(0)) - 0.5*M_SQRT2*cos(q(0)))*sin(q(1))*cos(q(2)) + (0.5*M_SQRT2*sin(q(0)) + 0.5*M_SQRT2*cos(q(0)))*sin(q(2)))*cos(q(3)))*sin(q(4))) + L6*(((0.5*M_SQRT2*sin(q(0)) - 0.5*M_SQRT2*cos(q(0)))*sin(q(1))*sin(q(2)) + (0.5*M_SQRT2*sin(q(0)) + 0.5*M_SQRT2*cos(q(0)))*cos(q(2)))*cos(q(4)) - (-(0.5*M_SQRT2*sin(q(0)) - 0.5*M_SQRT2*cos(q(0)))*sin(q(3))*cos(q(1)) + (-(0.5*M_SQRT2*sin(q(0)) - 0.5*M_SQRT2*cos(q(0)))*sin(q(1))*cos(q(2)) + (0.5*M_SQRT2*sin(q(0)) + 0.5*M_SQRT2*cos(q(0)))*sin(q(2)))*cos(q(3)))*sin(q(4)))*sin(q(5));
   out(0,5)= L6*((((0.5*M_SQRT2*sin(q(0)) - 0.5*M_SQRT2*cos(q(0)))*sin(q(1))*sin(q(2)) + (0.5*M_SQRT2*sin(q(0)) + 0.5*M_SQRT2*cos(q(0)))*cos(q(2)))*sin(q(4)) + (-(0.5*M_SQRT2*sin(q(0)) - 0.5*M_SQRT2*cos(q(0)))*sin(q(3))*cos(q(1)) + (-(0.5*M_SQRT2*sin(q(0)) - 0.5*M_SQRT2*cos(q(0)))*sin(q(1))*cos(q(2)) + (0.5*M_SQRT2*sin(q(0)) + 0.5*M_SQRT2*cos(q(0)))*sin(q(2)))*cos(q(3)))*cos(q(4)))*cos(q(5)) - ((0.5*M_SQRT2*sin(q(0)) - 0.5*M_SQRT2*cos(q(0)))*cos(q(1))*cos(q(3)) + (-(0.5*M_SQRT2*sin(q(0)) - 0.5*M_SQRT2*cos(q(0)))*sin(q(1))*cos(q(2)) + (0.5*M_SQRT2*sin(q(0)) + 0.5*M_SQRT2*cos(q(0)))*sin(q(2)))*sin(q(3)))*sin(q(5)));
   out(0,6)= 0;
   out(1,0)= L1*(0.5*M_SQRT2*sin(q(0)) - 0.5*M_SQRT2*cos(q(0))) + L2*(0.5*M_SQRT2*sin(q(0)) - 0.5*M_SQRT2*cos(q(0)))*cos(q(1)) + L3*((-0.5*M_SQRT2*sin(q(0)) + 0.5*M_SQRT2*cos(q(0)))*sin(q(1))*cos(q(2)) + (0.5*M_SQRT2*sin(q(0)) + 0.5*M_SQRT2*cos(q(0)))*sin(q(2))) - L4*((-0.5*M_SQRT2*sin(q(0)) + 0.5*M_SQRT2*cos(q(0)))*cos(q(1))*cos(q(3)) + (-(-0.5*M_SQRT2*sin(q(0)) + 0.5*M_SQRT2*cos(q(0)))*sin(q(1))*cos(q(2)) - (0.5*M_SQRT2*sin(q(0)) + 0.5*M_SQRT2*cos(q(0)))*sin(q(2)))*sin(q(3))) + L5*(((-0.5*M_SQRT2*sin(q(0)) + 0.5*M_SQRT2*cos(q(0)))*sin(q(3))*cos(q(1)) + ((-0.5*M_SQRT2*sin(q(0)) + 0.5*M_SQRT2*cos(q(0)))*sin(q(1))*cos(q(2)) + (0.5*M_SQRT2*sin(q(0)) + 0.5*M_SQRT2*cos(q(0)))*sin(q(2)))*cos(q(3)))*cos(q(4)) + ((0.5*M_SQRT2*sin(q(0)) - 0.5*M_SQRT2*cos(q(0)))*sin(q(1))*sin(q(2)) + (0.5*M_SQRT2*sin(q(0)) + 0.5*M_SQRT2*cos(q(0)))*cos(q(2)))*sin(q(4))) + L6*((((-0.5*M_SQRT2*sin(q(0)) + 0.5*M_SQRT2*cos(q(0)))*sin(q(3))*cos(q(1)) + ((-0.5*M_SQRT2*sin(q(0)) + 0.5*M_SQRT2*cos(q(0)))*sin(q(1))*cos(q(2)) + (0.5*M_SQRT2*sin(q(0)) + 0.5*M_SQRT2*cos(q(0)))*sin(q(2)))*cos(q(3)))*cos(q(4)) + ((0.5*M_SQRT2*sin(q(0)) - 0.5*M_SQRT2*cos(q(0)))*sin(q(1))*sin(q(2)) + (0.5*M_SQRT2*sin(q(0)) + 0.5*M_SQRT2*cos(q(0)))*cos(q(2)))*sin(q(4)))*sin(q(5)) + ((0.5*M_SQRT2*sin(q(0)) - 0.5*M_SQRT2*cos(q(0)))*cos(q(1))*cos(q(3)) + ((-0.5*M_SQRT2*sin(q(0)) + 0.5*M_SQRT2*cos(q(0)))*sin(q(1))*cos(q(2)) + (0.5*M_SQRT2*sin(q(0)) + 0.5*M_SQRT2*cos(q(0)))*sin(q(2)))*sin(q(3)))*cos(q(5)));
   out(1,1)= -L2*(-0.5*M_SQRT2*sin(q(0)) - 0.5*M_SQRT2*cos(q(0)))*sin(q(1)) + L3*(0.5*M_SQRT2*sin(q(0)) + 0.5*M_SQRT2*cos(q(0)))*cos(q(1))*cos(q(2)) - L4*(-(0.5*M_SQRT2*sin(q(0)) + 0.5*M_SQRT2*cos(q(0)))*sin(q(1))*cos(q(3)) - (0.5*M_SQRT2*sin(q(0)) + 0.5*M_SQRT2*cos(q(0)))*sin(q(3))*cos(q(1))*cos(q(2))) + L5*((-0.5*M_SQRT2*sin(q(0)) - 0.5*M_SQRT2*cos(q(0)))*sin(q(2))*sin(q(4))*cos(q(1)) + (-(0.5*M_SQRT2*sin(q(0)) + 0.5*M_SQRT2*cos(q(0)))*sin(q(1))*sin(q(3)) + (0.5*M_SQRT2*sin(q(0)) + 0.5*M_SQRT2*cos(q(0)))*cos(q(1))*cos(q(2))*cos(q(3)))*cos(q(4))) + L6*((-(-0.5*M_SQRT2*sin(q(0)) - 0.5*M_SQRT2*cos(q(0)))*sin(q(1))*cos(q(3)) + (0.5*M_SQRT2*sin(q(0)) + 0.5*M_SQRT2*cos(q(0)))*sin(q(3))*cos(q(1))*cos(q(2)))*cos(q(5)) + ((-0.5*M_SQRT2*sin(q(0)) - 0.5*M_SQRT2*cos(q(0)))*sin(q(2))*sin(q(4))*cos(q(1)) + (-(0.5*M_SQRT2*sin(q(0)) + 0.5*M_SQRT2*cos(q(0)))*sin(q(1))*sin(q(3)) + (0.5*M_SQRT2*sin(q(0)) + 0.5*M_SQRT2*cos(q(0)))*cos(q(1))*cos(q(2))*cos(q(3)))*cos(q(4)))*sin(q(5)));
   out(1,2)= L3*((0.5*M_SQRT2*sin(q(0)) - 0.5*M_SQRT2*cos(q(0)))*cos(q(2)) - (0.5*M_SQRT2*sin(q(0)) + 0.5*M_SQRT2*cos(q(0)))*sin(q(1))*sin(q(2))) - L4*(-(0.5*M_SQRT2*sin(q(0)) - 0.5*M_SQRT2*cos(q(0)))*cos(q(2)) + (0.5*M_SQRT2*sin(q(0)) + 0.5*M_SQRT2*cos(q(0)))*sin(q(1))*sin(q(2)))*sin(q(3)) + L5*(((0.5*M_SQRT2*sin(q(0)) - 0.5*M_SQRT2*cos(q(0)))*cos(q(2)) - (0.5*M_SQRT2*sin(q(0)) + 0.5*M_SQRT2*cos(q(0)))*sin(q(1))*sin(q(2)))*cos(q(3))*cos(q(4)) + ((-0.5*M_SQRT2*sin(q(0)) - 0.5*M_SQRT2*cos(q(0)))*sin(q(1))*cos(q(2)) - (0.5*M_SQRT2*sin(q(0)) - 0.5*M_SQRT2*cos(q(0)))*sin(q(2)))*sin(q(4))) + L6*(((0.5*M_SQRT2*sin(q(0)) - 0.5*M_SQRT2*cos(q(0)))*cos(q(2)) - (0.5*M_SQRT2*sin(q(0)) + 0.5*M_SQRT2*cos(q(0)))*sin(q(1))*sin(q(2)))*sin(q(3))*cos(q(5)) + (((0.5*M_SQRT2*sin(q(0)) - 0.5*M_SQRT2*cos(q(0)))*cos(q(2)) - (0.5*M_SQRT2*sin(q(0)) + 0.5*M_SQRT2*cos(q(0)))*sin(q(1))*sin(q(2)))*cos(q(3))*cos(q(4)) + ((-0.5*M_SQRT2*sin(q(0)) - 0.5*M_SQRT2*cos(q(0)))*sin(q(1))*cos(q(2)) - (0.5*M_SQRT2*sin(q(0)) - 0.5*M_SQRT2*cos(q(0)))*sin(q(2)))*sin(q(4)))*sin(q(5)));
   out(1,3) = -L4*(-(0.5*M_SQRT2*sin(q(0)) + 0.5*M_SQRT2*cos(q(0)))*sin(q(3))*cos(q(1)) + ((-0.5*M_SQRT2*sin(q(0)) - 0.5*M_SQRT2*cos(q(0)))*sin(q(1))*cos(q(2)) - (0.5*M_SQRT2*sin(q(0)) - 0.5*M_SQRT2*cos(q(0)))*sin(q(2)))*cos(q(3))) + L5*((0.5*M_SQRT2*sin(q(0)) + 0.5*M_SQRT2*cos(q(0)))*cos(q(1))*cos(q(3)) - (-(-0.5*M_SQRT2*sin(q(0)) - 0.5*M_SQRT2*cos(q(0)))*sin(q(1))*cos(q(2)) + (0.5*M_SQRT2*sin(q(0)) - 0.5*M_SQRT2*cos(q(0)))*sin(q(2)))*sin(q(3)))*cos(q(4)) + L6*((-(-0.5*M_SQRT2*sin(q(0)) - 0.5*M_SQRT2*cos(q(0)))*sin(q(3))*cos(q(1)) + (-(-0.5*M_SQRT2*sin(q(0)) - 0.5*M_SQRT2*cos(q(0)))*sin(q(1))*cos(q(2)) + (0.5*M_SQRT2*sin(q(0)) - 0.5*M_SQRT2*cos(q(0)))*sin(q(2)))*cos(q(3)))*cos(q(5)) + ((0.5*M_SQRT2*sin(q(0)) + 0.5*M_SQRT2*cos(q(0)))*cos(q(1))*cos(q(3)) - (-(-0.5*M_SQRT2*sin(q(0)) - 0.5*M_SQRT2*cos(q(0)))*sin(q(1))*cos(q(2)) + (0.5*M_SQRT2*sin(q(0)) - 0.5*M_SQRT2*cos(q(0)))*sin(q(2)))*sin(q(3)))*sin(q(5))*cos(q(4)));
   out(1,4) = L5*(((-0.5*M_SQRT2*sin(q(0)) - 0.5*M_SQRT2*cos(q(0)))*sin(q(1))*sin(q(2)) + (0.5*M_SQRT2*sin(q(0)) - 0.5*M_SQRT2*cos(q(0)))*cos(q(2)))*cos(q(4)) - (-(-0.5*M_SQRT2*sin(q(0)) - 0.5*M_SQRT2*cos(q(0)))*sin(q(3))*cos(q(1)) + (-(-0.5*M_SQRT2*sin(q(0)) - 0.5*M_SQRT2*cos(q(0)))*sin(q(1))*cos(q(2)) + (0.5*M_SQRT2*sin(q(0)) - 0.5*M_SQRT2*cos(q(0)))*sin(q(2)))*cos(q(3)))*sin(q(4))) + L6*(((-0.5*M_SQRT2*sin(q(0)) - 0.5*M_SQRT2*cos(q(0)))*sin(q(1))*sin(q(2)) + (0.5*M_SQRT2*sin(q(0)) - 0.5*M_SQRT2*cos(q(0)))*cos(q(2)))*cos(q(4)) - (-(-0.5*M_SQRT2*sin(q(0)) - 0.5*M_SQRT2*cos(q(0)))*sin(q(3))*cos(q(1)) + (-(-0.5*M_SQRT2*sin(q(0)) - 0.5*M_SQRT2*cos(q(0)))*sin(q(1))*cos(q(2)) + (0.5*M_SQRT2*sin(q(0)) - 0.5*M_SQRT2*cos(q(0)))*sin(q(2)))*cos(q(3)))*sin(q(4)))*sin(q(5));
   out(1,5) = L6*((((-0.5*M_SQRT2*sin(q(0)) - 0.5*M_SQRT2*cos(q(0)))*sin(q(1))*sin(q(2)) + (0.5*M_SQRT2*sin(q(0)) - 0.5*M_SQRT2*cos(q(0)))*cos(q(2)))*sin(q(4)) + (-(-0.5*M_SQRT2*sin(q(0)) - 0.5*M_SQRT2*cos(q(0)))*sin(q(3))*cos(q(1)) + (-(-0.5*M_SQRT2*sin(q(0)) - 0.5*M_SQRT2*cos(q(0)))*sin(q(1))*cos(q(2)) + (0.5*M_SQRT2*sin(q(0)) - 0.5*M_SQRT2*cos(q(0)))*sin(q(2)))*cos(q(3)))*cos(q(4)))*cos(q(5)) - ((-0.5*M_SQRT2*sin(q(0)) - 0.5*M_SQRT2*cos(q(0)))*cos(q(1))*cos(q(3)) + (-(-0.5*M_SQRT2*sin(q(0)) - 0.5*M_SQRT2*cos(q(0)))*sin(q(1))*cos(q(2)) + (0.5*M_SQRT2*sin(q(0)) - 0.5*M_SQRT2*cos(q(0)))*sin(q(2)))*sin(q(3)))*sin(q(5)));
   out(1,6) = 0;
   out(2,0) = 0;
   out(2,1) = -L2*cos(q(1)) + L3*sin(q(1))*cos(q(2)) - L4*(-sin(q(1))*sin(q(3))*cos(q(2)) + cos(q(1))*cos(q(3))) + L5*((sin(q(1))*cos(q(2))*cos(q(3)) + sin(q(3))*cos(q(1)))*cos(q(4)) - sin(q(1))*sin(q(2))*sin(q(4))) + L6*(((sin(q(1))*cos(q(2))*cos(q(3)) + sin(q(3))*cos(q(1)))*cos(q(4)) - sin(q(1))*sin(q(2))*sin(q(4)))*sin(q(5)) + (sin(q(1))*sin(q(3))*cos(q(2)) - cos(q(1))*cos(q(3)))*cos(q(5)));
   out(2,2) = L3*sin(q(2))*cos(q(1)) + L4*sin(q(2))*sin(q(3))*cos(q(1)) + L5*(sin(q(2))*cos(q(1))*cos(q(3))*cos(q(4)) + sin(q(4))*cos(q(1))*cos(q(2))) + L6*((sin(q(2))*cos(q(1))*cos(q(3))*cos(q(4)) + sin(q(4))*cos(q(1))*cos(q(2)))*sin(q(5)) + sin(q(2))*sin(q(3))*cos(q(1))*cos(q(5)));
   out(2,3) = -L4*(-sin(q(1))*sin(q(3)) + cos(q(1))*cos(q(2))*cos(q(3))) + L5*(sin(q(1))*cos(q(3)) + sin(q(3))*cos(q(1))*cos(q(2)))*cos(q(4)) + L6*((sin(q(1))*sin(q(3)) - cos(q(1))*cos(q(2))*cos(q(3)))*cos(q(5)) + (sin(q(1))*cos(q(3)) + sin(q(3))*cos(q(1))*cos(q(2)))*sin(q(5))*cos(q(4)));
   out(2,4) = L5*(-(sin(q(1))*sin(q(3)) - cos(q(1))*cos(q(2))*cos(q(3)))*sin(q(4)) + sin(q(2))*cos(q(1))*cos(q(4))) + L6*(-(sin(q(1))*sin(q(3)) - cos(q(1))*cos(q(2))*cos(q(3)))*sin(q(4)) + sin(q(2))*cos(q(1))*cos(q(4)))*sin(q(5));
   out(2,5) = L6*(((sin(q(1))*sin(q(3)) - cos(q(1))*cos(q(2))*cos(q(3)))*cos(q(4)) + sin(q(2))*sin(q(4))*cos(q(1)))*cos(q(5)) - (-sin(q(1))*cos(q(3)) - sin(q(3))*cos(q(1))*cos(q(2)))*sin(q(5)));
   out(2,6) = 0;

}
