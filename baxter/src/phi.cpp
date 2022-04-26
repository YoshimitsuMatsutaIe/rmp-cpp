/******************************************************************************
 *                       Code generated with sympy 1.9                        *
 *                                                                            *
 *              See http://www.sympy.org/ for more information.               *
 *                                                                            *
 *                    This file is part of 'phi_W0project'                    *
 ******************************************************************************/
#include "../include/baxter.hpp"


void baxter::Baxter::phi_W0(const VectorXd& q, VectorXd& out) {

   out(0) = -L;
   out(1) = -h;
   out(2) = H;

}
void baxter::Baxter::phi_BR(const VectorXd& q, VectorXd& out) {

   out(0) = -L;
   out(1) = -h;
   out(2) = H + L0;

}

void baxter::Baxter::phi_0(const VectorXd& q, VectorXd& out) {

   out(0) = -L;
   out(1) = -h;
   out(2) = H + L0;

}

void baxter::Baxter::phi_1(const VectorXd& q, VectorXd& out) {

   out(0) = -L + L1*(0.5*M_SQRT2*sin(q(0)) - 0.5*M_SQRT2*cos(q(0)));
   out(1) = L1*(-0.5*M_SQRT2*sin(q(0)) - 0.5*M_SQRT2*cos(q(0))) - h;
   out(2) = H + L0;

}

void baxter::Baxter::phi_2(const VectorXd& q, VectorXd& out) {

   out(0) = -L + L1*(0.5*M_SQRT2*sin(q(0)) - 0.5*M_SQRT2*cos(q(0))) + L2*(0.5*M_SQRT2*sin(q(0)) - 0.5*M_SQRT2*cos(q(0)))*cos(q(1));
   out(1) = L1*(-0.5*M_SQRT2*sin(q(0)) - 0.5*M_SQRT2*cos(q(0))) + L2*(-0.5*M_SQRT2*sin(q(0)) - 0.5*M_SQRT2*cos(q(0)))*cos(q(1)) - h;
   out(2) = H + L0 - L2*sin(q(1));

}

void baxter::Baxter::phi_3(const VectorXd& q, VectorXd& out) {

   out(0) = -L + L1*(0.5*M_SQRT2*sin(q(0)) - 0.5*M_SQRT2*cos(q(0))) + L2*(0.5*M_SQRT2*sin(q(0)) - 0.5*M_SQRT2*cos(q(0)))*cos(q(1)) + L3*(-(0.5*M_SQRT2*sin(q(0)) - 0.5*M_SQRT2*cos(q(0)))*sin(q(1))*cos(q(2)) + (0.5*M_SQRT2*sin(q(0)) + 0.5*M_SQRT2*cos(q(0)))*sin(q(2)));
   out(1) = L1*(-0.5*M_SQRT2*sin(q(0)) - 0.5*M_SQRT2*cos(q(0))) + L2*(-0.5*M_SQRT2*sin(q(0)) - 0.5*M_SQRT2*cos(q(0)))*cos(q(1)) + L3*(-(-0.5*M_SQRT2*sin(q(0)) - 0.5*M_SQRT2*cos(q(0)))*sin(q(1))*cos(q(2)) + (0.5*M_SQRT2*sin(q(0)) - 0.5*M_SQRT2*cos(q(0)))*sin(q(2))) - h;
   out(2) = H + L0 - L2*sin(q(1)) - L3*cos(q(1))*cos(q(2));

}

void baxter::Baxter::phi_4(const VectorXd& q, VectorXd& out) {

   out(0) = -L + L1*(0.5*M_SQRT2*sin(q(0)) - 0.5*M_SQRT2*cos(q(0))) + L2*(0.5*M_SQRT2*sin(q(0)) - 0.5*M_SQRT2*cos(q(0)))*cos(q(1)) + L3*(-(0.5*M_SQRT2*sin(q(0)) - 0.5*M_SQRT2*cos(q(0)))*sin(q(1))*cos(q(2)) + (0.5*M_SQRT2*sin(q(0)) + 0.5*M_SQRT2*cos(q(0)))*sin(q(2))) - L4*(-(0.5*M_SQRT2*sin(q(0)) - 0.5*M_SQRT2*cos(q(0)))*cos(q(1))*cos(q[3]) - (-(0.5*M_SQRT2*sin(q(0)) - 0.5*M_SQRT2*cos(q(0)))*sin(q(1))*cos(q(2)) + (0.5*M_SQRT2*sin(q(0)) + 0.5*M_SQRT2*cos(q(0)))*sin(q(2)))*sin(q[3]));
   out(1) = L1*(-0.5*M_SQRT2*sin(q(0)) - 0.5*M_SQRT2*cos(q(0))) + L2*(-0.5*M_SQRT2*sin(q(0)) - 0.5*M_SQRT2*cos(q(0)))*cos(q(1)) + L3*(-(-0.5*M_SQRT2*sin(q(0)) - 0.5*M_SQRT2*cos(q(0)))*sin(q(1))*cos(q(2)) + (0.5*M_SQRT2*sin(q(0)) - 0.5*M_SQRT2*cos(q(0)))*sin(q(2))) - L4*(-(-0.5*M_SQRT2*sin(q(0)) - 0.5*M_SQRT2*cos(q(0)))*cos(q(1))*cos(q[3]) - (-(-0.5*M_SQRT2*sin(q(0)) - 0.5*M_SQRT2*cos(q(0)))*sin(q(1))*cos(q(2)) + (0.5*M_SQRT2*sin(q(0)) - 0.5*M_SQRT2*cos(q(0)))*sin(q(2)))*sin(q[3])) - h;
   out(2) = H + L0 - L2*sin(q(1)) - L3*cos(q(1))*cos(q(2)) - L4*(sin(q(1))*cos(q[3]) + sin(q[3])*cos(q(1))*cos(q(2)));

}

void baxter::Baxter::phi_5(const VectorXd& q, VectorXd& out) {

   out(0) = -L + L1*(0.5*M_SQRT2*sin(q(0)) - 0.5*M_SQRT2*cos(q(0))) + L2*(0.5*M_SQRT2*sin(q(0)) - 0.5*M_SQRT2*cos(q(0)))*cos(q(1)) + L3*(-(0.5*M_SQRT2*sin(q(0)) - 0.5*M_SQRT2*cos(q(0)))*sin(q(1))*cos(q(2)) + (0.5*M_SQRT2*sin(q(0)) + 0.5*M_SQRT2*cos(q(0)))*sin(q(2))) - L4*(-(0.5*M_SQRT2*sin(q(0)) - 0.5*M_SQRT2*cos(q(0)))*cos(q(1))*cos(q[3]) - (-(0.5*M_SQRT2*sin(q(0)) - 0.5*M_SQRT2*cos(q(0)))*sin(q(1))*cos(q(2)) + (0.5*M_SQRT2*sin(q(0)) + 0.5*M_SQRT2*cos(q(0)))*sin(q(2)))*sin(q[3])) + L5*(((0.5*M_SQRT2*sin(q(0)) - 0.5*M_SQRT2*cos(q(0)))*sin(q(1))*sin(q(2)) + (0.5*M_SQRT2*sin(q(0)) + 0.5*M_SQRT2*cos(q(0)))*cos(q(2)))*sin(q[4]) + (-(0.5*M_SQRT2*sin(q(0)) - 0.5*M_SQRT2*cos(q(0)))*sin(q[3])*cos(q(1)) + (-(0.5*M_SQRT2*sin(q(0)) - 0.5*M_SQRT2*cos(q(0)))*sin(q(1))*cos(q(2)) + (0.5*M_SQRT2*sin(q(0)) + 0.5*M_SQRT2*cos(q(0)))*sin(q(2)))*cos(q[3]))*cos(q[4]));
   out(1) = L1*(-0.5*M_SQRT2*sin(q(0)) - 0.5*M_SQRT2*cos(q(0))) + L2*(-0.5*M_SQRT2*sin(q(0)) - 0.5*M_SQRT2*cos(q(0)))*cos(q(1)) + L3*(-(-0.5*M_SQRT2*sin(q(0)) - 0.5*M_SQRT2*cos(q(0)))*sin(q(1))*cos(q(2)) + (0.5*M_SQRT2*sin(q(0)) - 0.5*M_SQRT2*cos(q(0)))*sin(q(2))) - L4*(-(-0.5*M_SQRT2*sin(q(0)) - 0.5*M_SQRT2*cos(q(0)))*cos(q(1))*cos(q[3]) - (-(-0.5*M_SQRT2*sin(q(0)) - 0.5*M_SQRT2*cos(q(0)))*sin(q(1))*cos(q(2)) + (0.5*M_SQRT2*sin(q(0)) - 0.5*M_SQRT2*cos(q(0)))*sin(q(2)))*sin(q[3])) + L5*(((-0.5*M_SQRT2*sin(q(0)) - 0.5*M_SQRT2*cos(q(0)))*sin(q(1))*sin(q(2)) + (0.5*M_SQRT2*sin(q(0)) - 0.5*M_SQRT2*cos(q(0)))*cos(q(2)))*sin(q[4]) + (-(-0.5*M_SQRT2*sin(q(0)) - 0.5*M_SQRT2*cos(q(0)))*sin(q[3])*cos(q(1)) + (-(-0.5*M_SQRT2*sin(q(0)) - 0.5*M_SQRT2*cos(q(0)))*sin(q(1))*cos(q(2)) + (0.5*M_SQRT2*sin(q(0)) - 0.5*M_SQRT2*cos(q(0)))*sin(q(2)))*cos(q[3]))*cos(q[4])) - h;
   out(2) = H + L0 - L2*sin(q(1)) - L3*cos(q(1))*cos(q(2)) - L4*(sin(q(1))*cos(q[3]) + sin(q[3])*cos(q(1))*cos(q(2))) + L5*((sin(q(1))*sin(q[3]) - cos(q(1))*cos(q(2))*cos(q[3]))*cos(q[4]) + sin(q(2))*sin(q[4])*cos(q(1)));

}

void baxter::Baxter::phi_6(const VectorXd& q, VectorXd& out) {

   out(0) = -L + L1*(0.5*M_SQRT2*sin(q(0)) - 0.5*M_SQRT2*cos(q(0))) + L2*(0.5*M_SQRT2*sin(q(0)) - 0.5*M_SQRT2*cos(q(0)))*cos(q(1)) + L3*(-(0.5*M_SQRT2*sin(q(0)) - 0.5*M_SQRT2*cos(q(0)))*sin(q(1))*cos(q(2)) + (0.5*M_SQRT2*sin(q(0)) + 0.5*M_SQRT2*cos(q(0)))*sin(q(2))) - L4*(-(0.5*M_SQRT2*sin(q(0)) - 0.5*M_SQRT2*cos(q(0)))*cos(q(1))*cos(q[3]) - (-(0.5*M_SQRT2*sin(q(0)) - 0.5*M_SQRT2*cos(q(0)))*sin(q(1))*cos(q(2)) + (0.5*M_SQRT2*sin(q(0)) + 0.5*M_SQRT2*cos(q(0)))*sin(q(2)))*sin(q[3])) + L5*(((0.5*M_SQRT2*sin(q(0)) - 0.5*M_SQRT2*cos(q(0)))*sin(q(1))*sin(q(2)) + (0.5*M_SQRT2*sin(q(0)) + 0.5*M_SQRT2*cos(q(0)))*cos(q(2)))*sin(q[4]) + (-(0.5*M_SQRT2*sin(q(0)) - 0.5*M_SQRT2*cos(q(0)))*sin(q[3])*cos(q(1)) + (-(0.5*M_SQRT2*sin(q(0)) - 0.5*M_SQRT2*cos(q(0)))*sin(q(1))*cos(q(2)) + (0.5*M_SQRT2*sin(q(0)) + 0.5*M_SQRT2*cos(q(0)))*sin(q(2)))*cos(q[3]))*cos(q[4]));
   out(1) = L1*(-0.5*M_SQRT2*sin(q(0)) - 0.5*M_SQRT2*cos(q(0))) + L2*(-0.5*M_SQRT2*sin(q(0)) - 0.5*M_SQRT2*cos(q(0)))*cos(q(1)) + L3*(-(-0.5*M_SQRT2*sin(q(0)) - 0.5*M_SQRT2*cos(q(0)))*sin(q(1))*cos(q(2)) + (0.5*M_SQRT2*sin(q(0)) - 0.5*M_SQRT2*cos(q(0)))*sin(q(2))) - L4*(-(-0.5*M_SQRT2*sin(q(0)) - 0.5*M_SQRT2*cos(q(0)))*cos(q(1))*cos(q[3]) - (-(-0.5*M_SQRT2*sin(q(0)) - 0.5*M_SQRT2*cos(q(0)))*sin(q(1))*cos(q(2)) + (0.5*M_SQRT2*sin(q(0)) - 0.5*M_SQRT2*cos(q(0)))*sin(q(2)))*sin(q[3])) + L5*(((-0.5*M_SQRT2*sin(q(0)) - 0.5*M_SQRT2*cos(q(0)))*sin(q(1))*sin(q(2)) + (0.5*M_SQRT2*sin(q(0)) - 0.5*M_SQRT2*cos(q(0)))*cos(q(2)))*sin(q[4]) + (-(-0.5*M_SQRT2*sin(q(0)) - 0.5*M_SQRT2*cos(q(0)))*sin(q[3])*cos(q(1)) + (-(-0.5*M_SQRT2*sin(q(0)) - 0.5*M_SQRT2*cos(q(0)))*sin(q(1))*cos(q(2)) + (0.5*M_SQRT2*sin(q(0)) - 0.5*M_SQRT2*cos(q(0)))*sin(q(2)))*cos(q[3]))*cos(q[4])) - h;
   out(2) = H + L0 - L2*sin(q(1)) - L3*cos(q(1))*cos(q(2)) - L4*(sin(q(1))*cos(q[3]) + sin(q[3])*cos(q(1))*cos(q(2))) + L5*((sin(q(1))*sin(q[3]) - cos(q(1))*cos(q(2))*cos(q[3]))*cos(q[4]) + sin(q(2))*sin(q[4])*cos(q(1)));

}

void baxter::Baxter::phi_ee(const VectorXd& q, VectorXd& out) {

   out(0) = -L + L1*(0.5*M_SQRT2*sin(q(0)) - 0.5*M_SQRT2*cos(q(0))) + L2*(0.5*M_SQRT2*sin(q(0)) - 0.5*M_SQRT2*cos(q(0)))*cos(q(1)) + L3*(-(0.5*M_SQRT2*sin(q(0)) - 0.5*M_SQRT2*cos(q(0)))*sin(q(1))*cos(q(2)) + (0.5*M_SQRT2*sin(q(0)) + 0.5*M_SQRT2*cos(q(0)))*sin(q(2))) - L4*(-(0.5*M_SQRT2*sin(q(0)) - 0.5*M_SQRT2*cos(q(0)))*cos(q(1))*cos(q[3]) - (-(0.5*M_SQRT2*sin(q(0)) - 0.5*M_SQRT2*cos(q(0)))*sin(q(1))*cos(q(2)) + (0.5*M_SQRT2*sin(q(0)) + 0.5*M_SQRT2*cos(q(0)))*sin(q(2)))*sin(q[3])) + L5*(((0.5*M_SQRT2*sin(q(0)) - 0.5*M_SQRT2*cos(q(0)))*sin(q(1))*sin(q(2)) + (0.5*M_SQRT2*sin(q(0)) + 0.5*M_SQRT2*cos(q(0)))*cos(q(2)))*sin(q[4]) + (-(0.5*M_SQRT2*sin(q(0)) - 0.5*M_SQRT2*cos(q(0)))*sin(q[3])*cos(q(1)) + (-(0.5*M_SQRT2*sin(q(0)) - 0.5*M_SQRT2*cos(q(0)))*sin(q(1))*cos(q(2)) + (0.5*M_SQRT2*sin(q(0)) + 0.5*M_SQRT2*cos(q(0)))*sin(q(2)))*cos(q[3]))*cos(q[4])) + L6*((((0.5*M_SQRT2*sin(q(0)) - 0.5*M_SQRT2*cos(q(0)))*sin(q(1))*sin(q(2)) + (0.5*M_SQRT2*sin(q(0)) + 0.5*M_SQRT2*cos(q(0)))*cos(q(2)))*sin(q[4]) + (-(0.5*M_SQRT2*sin(q(0)) - 0.5*M_SQRT2*cos(q(0)))*sin(q[3])*cos(q(1)) + (-(0.5*M_SQRT2*sin(q(0)) - 0.5*M_SQRT2*cos(q(0)))*sin(q(1))*cos(q(2)) + (0.5*M_SQRT2*sin(q(0)) + 0.5*M_SQRT2*cos(q(0)))*sin(q(2)))*cos(q[3]))*cos(q[4]))*sin(q[5]) + ((0.5*M_SQRT2*sin(q(0)) - 0.5*M_SQRT2*cos(q(0)))*cos(q(1))*cos(q[3]) + (-(0.5*M_SQRT2*sin(q(0)) - 0.5*M_SQRT2*cos(q(0)))*sin(q(1))*cos(q(2)) + (0.5*M_SQRT2*sin(q(0)) + 0.5*M_SQRT2*cos(q(0)))*sin(q(2)))*sin(q[3]))*cos(q[5]));
   out(1) = L1*(-0.5*M_SQRT2*sin(q(0)) - 0.5*M_SQRT2*cos(q(0))) + L2*(-0.5*M_SQRT2*sin(q(0)) - 0.5*M_SQRT2*cos(q(0)))*cos(q(1)) + L3*(-(-0.5*M_SQRT2*sin(q(0)) - 0.5*M_SQRT2*cos(q(0)))*sin(q(1))*cos(q(2)) + (0.5*M_SQRT2*sin(q(0)) - 0.5*M_SQRT2*cos(q(0)))*sin(q(2))) - L4*(-(-0.5*M_SQRT2*sin(q(0)) - 0.5*M_SQRT2*cos(q(0)))*cos(q(1))*cos(q[3]) - (-(-0.5*M_SQRT2*sin(q(0)) - 0.5*M_SQRT2*cos(q(0)))*sin(q(1))*cos(q(2)) + (0.5*M_SQRT2*sin(q(0)) - 0.5*M_SQRT2*cos(q(0)))*sin(q(2)))*sin(q[3])) + L5*(((-0.5*M_SQRT2*sin(q(0)) - 0.5*M_SQRT2*cos(q(0)))*sin(q(1))*sin(q(2)) + (0.5*M_SQRT2*sin(q(0)) - 0.5*M_SQRT2*cos(q(0)))*cos(q(2)))*sin(q[4]) + (-(-0.5*M_SQRT2*sin(q(0)) - 0.5*M_SQRT2*cos(q(0)))*sin(q[3])*cos(q(1)) + (-(-0.5*M_SQRT2*sin(q(0)) - 0.5*M_SQRT2*cos(q(0)))*sin(q(1))*cos(q(2)) + (0.5*M_SQRT2*sin(q(0)) - 0.5*M_SQRT2*cos(q(0)))*sin(q(2)))*cos(q[3]))*cos(q[4])) + L6*((((-0.5*M_SQRT2*sin(q(0)) - 0.5*M_SQRT2*cos(q(0)))*sin(q(1))*sin(q(2)) + (0.5*M_SQRT2*sin(q(0)) - 0.5*M_SQRT2*cos(q(0)))*cos(q(2)))*sin(q[4]) + (-(-0.5*M_SQRT2*sin(q(0)) - 0.5*M_SQRT2*cos(q(0)))*sin(q[3])*cos(q(1)) + (-(-0.5*M_SQRT2*sin(q(0)) - 0.5*M_SQRT2*cos(q(0)))*sin(q(1))*cos(q(2)) + (0.5*M_SQRT2*sin(q(0)) - 0.5*M_SQRT2*cos(q(0)))*sin(q(2)))*cos(q[3]))*cos(q[4]))*sin(q[5]) + ((-0.5*M_SQRT2*sin(q(0)) - 0.5*M_SQRT2*cos(q(0)))*cos(q(1))*cos(q[3]) + (-(-0.5*M_SQRT2*sin(q(0)) - 0.5*M_SQRT2*cos(q(0)))*sin(q(1))*cos(q(2)) + (0.5*M_SQRT2*sin(q(0)) - 0.5*M_SQRT2*cos(q(0)))*sin(q(2)))*sin(q[3]))*cos(q[5])) - h;
   out(2) = H + L0 - L2*sin(q(1)) - L3*cos(q(1))*cos(q(2)) - L4*(sin(q(1))*cos(q[3]) + sin(q[3])*cos(q(1))*cos(q(2))) + L5*((sin(q(1))*sin(q[3]) - cos(q(1))*cos(q(2))*cos(q[3]))*cos(q[4]) + sin(q(2))*sin(q[4])*cos(q(1))) + L6*(((sin(q(1))*sin(q[3]) - cos(q(1))*cos(q(2))*cos(q[3]))*cos(q[4]) + sin(q(2))*sin(q[4])*cos(q(1)))*sin(q[5]) + (-sin(q(1))*cos(q[3]) - sin(q[3])*cos(q(1))*cos(q(2)))*cos(q[5]));

}
