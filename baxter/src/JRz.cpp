/******************************************************************************
 *                       Code generated with sympy 1.9                        *
 *                                                                            *
 *              See http://www.sympy.org/ for more information.               *
 *                                                                            *
 *                    This file is part of 'JRz_W0project'                    *
 ******************************************************************************/
#include "../include/baxter.hpp"


void baxter::Baxter::JRz_W0(const VectorXd& q, MatrixXd& out) {

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

void baxter::Baxter::JRz_BR(const VectorXd& q, MatrixXd& out) {

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
void baxter::Baxter::JRz_0(const VectorXd& q, MatrixXd& out) {

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
void baxter::Baxter::JRz_1(const VectorXd& q, MatrixXd& out) {

   out(0) = -0.5*M_SQRT2*sin(q(0)) + 0.5*M_SQRT2*cos(q(0));
   out(1) = 0;
   out(2) = 0;
   out(3) = 0;
   out(4) = 0;
   out(5) = 0;
   out(6) = 0;
   out(7) = 0.5*M_SQRT2*sin(q(0)) + 0.5*M_SQRT2*cos(q(0));
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

void baxter::Baxter::JRz_2(const VectorXd& q, MatrixXd& out) {

   out(0) = (0.5*M_SQRT2*sin(q(0)) + 0.5*M_SQRT2*cos(q(0)))*cos(q(1));
   out(1) = -(0.5*M_SQRT2*sin(q(0)) - 0.5*M_SQRT2*cos(q(0)))*sin(q(1));
   out(2) = 0;
   out(3) = 0;
   out(4) = 0;
   out(5) = 0;
   out(6) = 0;
   out(7) = (0.5*M_SQRT2*sin(q(0)) - 0.5*M_SQRT2*cos(q(0)))*cos(q(1));
   out(8) = -(-0.5*M_SQRT2*sin(q(0)) - 0.5*M_SQRT2*cos(q(0)))*sin(q(1));
   out(9) = 0;
   out(10) = 0;
   out(11) = 0;
   out(12) = 0;
   out(13) = 0;
   out(14) = 0;
   out(15) = -cos(q(1));
   out(16) = 0;
   out(17) = 0;
   out(18) = 0;
   out(19) = 0;
   out(20) = 0;

}

void baxter::Baxter::JRz_3(const VectorXd& q, MatrixXd& out) {

   out(0) = (-0.5*M_SQRT2*sin(q(0)) + 0.5*M_SQRT2*cos(q(0)))*cos(q(2)) + (0.5*M_SQRT2*sin(q(0)) + 0.5*M_SQRT2*cos(q(0)))*sin(q(1))*sin(q(2));
   out(1) = (0.5*M_SQRT2*sin(q(0)) - 0.5*M_SQRT2*cos(q(0)))*sin(q(2))*cos(q(1));
   out(2) = (0.5*M_SQRT2*sin(q(0)) - 0.5*M_SQRT2*cos(q(0)))*sin(q(1))*cos(q(2)) - (0.5*M_SQRT2*sin(q(0)) + 0.5*M_SQRT2*cos(q(0)))*sin(q(2));
   out(3) = 0;
   out(4) = 0;
   out(5) = 0;
   out(6) = 0;
   out(7) = (0.5*M_SQRT2*sin(q(0)) - 0.5*M_SQRT2*cos(q(0)))*sin(q(1))*sin(q(2)) + (0.5*M_SQRT2*sin(q(0)) + 0.5*M_SQRT2*cos(q(0)))*cos(q(2));
   out(8) = (-0.5*M_SQRT2*sin(q(0)) - 0.5*M_SQRT2*cos(q(0)))*sin(q(2))*cos(q(1));
   out(9) = (-0.5*M_SQRT2*sin(q(0)) - 0.5*M_SQRT2*cos(q(0)))*sin(q(1))*cos(q(2)) - (0.5*M_SQRT2*sin(q(0)) - 0.5*M_SQRT2*cos(q(0)))*sin(q(2));
   out(10) = 0;
   out(11) = 0;
   out(12) = 0;
   out(13) = 0;
   out(14) = 0;
   out(15) = -sin(q(1))*sin(q(2));
   out(16) = cos(q(1))*cos(q(2));
   out(17) = 0;
   out(18) = 0;
   out(19) = 0;
   out(20) = 0;

}

void baxter::Baxter::JRz_4(const VectorXd& q, MatrixXd& out) {

   out(0) = (0.5*M_SQRT2*sin(q(0)) + 0.5*M_SQRT2*cos(q(0)))*cos(q(1))*cos(q(3)) + ((-0.5*M_SQRT2*sin(q(0)) - 0.5*M_SQRT2*cos(q(0)))*sin(q(1))*cos(q(2)) + (-0.5*M_SQRT2*sin(q(0)) + 0.5*M_SQRT2*cos(q(0)))*sin(q(2)))*sin(q(3));
   out(1) = (-0.5*M_SQRT2*sin(q(0)) + 0.5*M_SQRT2*cos(q(0)))*sin(q(3))*cos(q(1))*cos(q(2)) - (0.5*M_SQRT2*sin(q(0)) - 0.5*M_SQRT2*cos(q(0)))*sin(q(1))*cos(q(3));
   out(2) = (-(-0.5*M_SQRT2*sin(q(0)) + 0.5*M_SQRT2*cos(q(0)))*sin(q(1))*sin(q(2)) + (0.5*M_SQRT2*sin(q(0)) + 0.5*M_SQRT2*cos(q(0)))*cos(q(2)))*sin(q(3));
   out(3) = -(0.5*M_SQRT2*sin(q(0)) - 0.5*M_SQRT2*cos(q(0)))*sin(q(3))*cos(q(1)) + (-(0.5*M_SQRT2*sin(q(0)) - 0.5*M_SQRT2*cos(q(0)))*sin(q(1))*cos(q(2)) + (0.5*M_SQRT2*sin(q(0)) + 0.5*M_SQRT2*cos(q(0)))*sin(q(2)))*cos(q(3));
   out(4) = 0;
   out(5) = 0;
   out(6) = 0;
   out(7) = (0.5*M_SQRT2*sin(q(0)) - 0.5*M_SQRT2*cos(q(0)))*cos(q(1))*cos(q(3)) + ((-0.5*M_SQRT2*sin(q(0)) + 0.5*M_SQRT2*cos(q(0)))*sin(q(1))*cos(q(2)) + (0.5*M_SQRT2*sin(q(0)) + 0.5*M_SQRT2*cos(q(0)))*sin(q(2)))*sin(q(3));
   out(8) = -(-0.5*M_SQRT2*sin(q(0)) - 0.5*M_SQRT2*cos(q(0)))*sin(q(1))*cos(q(3)) + (0.5*M_SQRT2*sin(q(0)) + 0.5*M_SQRT2*cos(q(0)))*sin(q(3))*cos(q(1))*cos(q(2));
   out(9) = ((0.5*M_SQRT2*sin(q(0)) - 0.5*M_SQRT2*cos(q(0)))*cos(q(2)) - (0.5*M_SQRT2*sin(q(0)) + 0.5*M_SQRT2*cos(q(0)))*sin(q(1))*sin(q(2)))*sin(q(3));
   out(10) = -(-0.5*M_SQRT2*sin(q(0)) - 0.5*M_SQRT2*cos(q(0)))*sin(q(3))*cos(q(1)) + (-(-0.5*M_SQRT2*sin(q(0)) - 0.5*M_SQRT2*cos(q(0)))*sin(q(1))*cos(q(2)) + (0.5*M_SQRT2*sin(q(0)) - 0.5*M_SQRT2*cos(q(0)))*sin(q(2)))*cos(q(3));
   out(11) = 0;
   out(12) = 0;
   out(13) = 0;
   out(14) = 0;
   out(15) = sin(q(1))*sin(q(3))*cos(q(2)) - cos(q(1))*cos(q(3));
   out(16) = sin(q(2))*sin(q(3))*cos(q(1));
   out(17) = sin(q(1))*sin(q(3)) - cos(q(1))*cos(q(2))*cos(q(3));
   out(18) = 0;
   out(19) = 0;
   out(20) = 0;

}

void baxter::Baxter::JRz_5(const VectorXd& q, MatrixXd& out) {

   out(0) = ((-0.5*M_SQRT2*sin(q(0)) + 0.5*M_SQRT2*cos(q(0)))*cos(q(2)) + (0.5*M_SQRT2*sin(q(0)) + 0.5*M_SQRT2*cos(q(0)))*sin(q(1))*sin(q(2)))*cos(q(4)) + (-(-0.5*M_SQRT2*sin(q(0)) - 0.5*M_SQRT2*cos(q(0)))*sin(q(3))*cos(q(1)) - ((-0.5*M_SQRT2*sin(q(0)) - 0.5*M_SQRT2*cos(q(0)))*sin(q(1))*cos(q(2)) + (-0.5*M_SQRT2*sin(q(0)) + 0.5*M_SQRT2*cos(q(0)))*sin(q(2)))*cos(q(3)))*sin(q(4));
   out(1) = (0.5*M_SQRT2*sin(q(0)) - 0.5*M_SQRT2*cos(q(0)))*sin(q(2))*cos(q(1))*cos(q(4)) + ((-0.5*M_SQRT2*sin(q(0)) + 0.5*M_SQRT2*cos(q(0)))*sin(q(1))*sin(q(3)) - (-0.5*M_SQRT2*sin(q(0)) + 0.5*M_SQRT2*cos(q(0)))*cos(q(1))*cos(q(2))*cos(q(3)))*sin(q(4));
   out(2) = -(-(-0.5*M_SQRT2*sin(q(0)) + 0.5*M_SQRT2*cos(q(0)))*sin(q(1))*sin(q(2)) + (0.5*M_SQRT2*sin(q(0)) + 0.5*M_SQRT2*cos(q(0)))*cos(q(2)))*sin(q(4))*cos(q(3)) + ((0.5*M_SQRT2*sin(q(0)) - 0.5*M_SQRT2*cos(q(0)))*sin(q(1))*cos(q(2)) - (0.5*M_SQRT2*sin(q(0)) + 0.5*M_SQRT2*cos(q(0)))*sin(q(2)))*cos(q(4));
   out(3) = (-(-0.5*M_SQRT2*sin(q(0)) + 0.5*M_SQRT2*cos(q(0)))*cos(q(1))*cos(q(3)) + (-(0.5*M_SQRT2*sin(q(0)) - 0.5*M_SQRT2*cos(q(0)))*sin(q(1))*cos(q(2)) + (0.5*M_SQRT2*sin(q(0)) + 0.5*M_SQRT2*cos(q(0)))*sin(q(2)))*sin(q(3)))*sin(q(4));
   out(4) = -((0.5*M_SQRT2*sin(q(0)) - 0.5*M_SQRT2*cos(q(0)))*sin(q(1))*sin(q(2)) + (0.5*M_SQRT2*sin(q(0)) + 0.5*M_SQRT2*cos(q(0)))*cos(q(2)))*sin(q(4)) + ((0.5*M_SQRT2*sin(q(0)) - 0.5*M_SQRT2*cos(q(0)))*sin(q(3))*cos(q(1)) - (-(0.5*M_SQRT2*sin(q(0)) - 0.5*M_SQRT2*cos(q(0)))*sin(q(1))*cos(q(2)) + (0.5*M_SQRT2*sin(q(0)) + 0.5*M_SQRT2*cos(q(0)))*sin(q(2)))*cos(q(3)))*cos(q(4));
   out(5) = 0;
   out(6) = 0;
   out(7) = (-(-0.5*M_SQRT2*sin(q(0)) + 0.5*M_SQRT2*cos(q(0)))*sin(q(3))*cos(q(1)) - ((-0.5*M_SQRT2*sin(q(0)) + 0.5*M_SQRT2*cos(q(0)))*sin(q(1))*cos(q(2)) + (0.5*M_SQRT2*sin(q(0)) + 0.5*M_SQRT2*cos(q(0)))*sin(q(2)))*cos(q(3)))*sin(q(4)) + ((0.5*M_SQRT2*sin(q(0)) - 0.5*M_SQRT2*cos(q(0)))*sin(q(1))*sin(q(2)) + (0.5*M_SQRT2*sin(q(0)) + 0.5*M_SQRT2*cos(q(0)))*cos(q(2)))*cos(q(4));
   out(8) = (-0.5*M_SQRT2*sin(q(0)) - 0.5*M_SQRT2*cos(q(0)))*sin(q(2))*cos(q(1))*cos(q(4)) + ((0.5*M_SQRT2*sin(q(0)) + 0.5*M_SQRT2*cos(q(0)))*sin(q(1))*sin(q(3)) - (0.5*M_SQRT2*sin(q(0)) + 0.5*M_SQRT2*cos(q(0)))*cos(q(1))*cos(q(2))*cos(q(3)))*sin(q(4));
   out(9) = -((0.5*M_SQRT2*sin(q(0)) - 0.5*M_SQRT2*cos(q(0)))*cos(q(2)) - (0.5*M_SQRT2*sin(q(0)) + 0.5*M_SQRT2*cos(q(0)))*sin(q(1))*sin(q(2)))*sin(q(4))*cos(q(3)) + ((-0.5*M_SQRT2*sin(q(0)) - 0.5*M_SQRT2*cos(q(0)))*sin(q(1))*cos(q(2)) - (0.5*M_SQRT2*sin(q(0)) - 0.5*M_SQRT2*cos(q(0)))*sin(q(2)))*cos(q(4));
   out(10) = (-(0.5*M_SQRT2*sin(q(0)) + 0.5*M_SQRT2*cos(q(0)))*cos(q(1))*cos(q(3)) + (-(-0.5*M_SQRT2*sin(q(0)) - 0.5*M_SQRT2*cos(q(0)))*sin(q(1))*cos(q(2)) + (0.5*M_SQRT2*sin(q(0)) - 0.5*M_SQRT2*cos(q(0)))*sin(q(2)))*sin(q(3)))*sin(q(4));
   out(11) = -((-0.5*M_SQRT2*sin(q(0)) - 0.5*M_SQRT2*cos(q(0)))*sin(q(1))*sin(q(2)) + (0.5*M_SQRT2*sin(q(0)) - 0.5*M_SQRT2*cos(q(0)))*cos(q(2)))*sin(q(4)) + ((-0.5*M_SQRT2*sin(q(0)) - 0.5*M_SQRT2*cos(q(0)))*sin(q(3))*cos(q(1)) - (-(-0.5*M_SQRT2*sin(q(0)) - 0.5*M_SQRT2*cos(q(0)))*sin(q(1))*cos(q(2)) + (0.5*M_SQRT2*sin(q(0)) - 0.5*M_SQRT2*cos(q(0)))*sin(q(2)))*cos(q(3)))*cos(q(4));
   out(12) = 0;
   out(13) = 0;
   out(14) = 0;
   out(15) = (-sin(q(1))*cos(q(2))*cos(q(3)) - sin(q(3))*cos(q(1)))*sin(q(4)) - sin(q(1))*sin(q(2))*cos(q(4));
   out(16) = -sin(q(2))*sin(q(4))*cos(q(1))*cos(q(3)) + cos(q(1))*cos(q(2))*cos(q(4));
   out(17) = (-sin(q(1))*cos(q(3)) - sin(q(3))*cos(q(1))*cos(q(2)))*sin(q(4));
   out(18) = (-sin(q(1))*sin(q(3)) + cos(q(1))*cos(q(2))*cos(q(3)))*cos(q(4)) - sin(q(2))*sin(q(4))*cos(q(1));
   out(19) = 0;
   out(20) = 0;

}

void baxter::Baxter::JRz_6(const VectorXd& q, MatrixXd& out) {

   out(0) = (((-0.5*M_SQRT2*sin(q(0)) + 0.5*M_SQRT2*cos(q(0)))*cos(q(2)) + (0.5*M_SQRT2*sin(q(0)) + 0.5*M_SQRT2*cos(q(0)))*sin(q(1))*sin(q(2)))*sin(q(4)) + ((-0.5*M_SQRT2*sin(q(0)) - 0.5*M_SQRT2*cos(q(0)))*sin(q(3))*cos(q(1)) + ((-0.5*M_SQRT2*sin(q(0)) - 0.5*M_SQRT2*cos(q(0)))*sin(q(1))*cos(q(2)) + (-0.5*M_SQRT2*sin(q(0)) + 0.5*M_SQRT2*cos(q(0)))*sin(q(2)))*cos(q(3)))*cos(q(4)))*sin(q(5)) + ((0.5*M_SQRT2*sin(q(0)) + 0.5*M_SQRT2*cos(q(0)))*cos(q(1))*cos(q(3)) + ((-0.5*M_SQRT2*sin(q(0)) - 0.5*M_SQRT2*cos(q(0)))*sin(q(1))*cos(q(2)) + (-0.5*M_SQRT2*sin(q(0)) + 0.5*M_SQRT2*cos(q(0)))*sin(q(2)))*sin(q(3)))*cos(q(5));
   out(1) = ((-0.5*M_SQRT2*sin(q(0)) + 0.5*M_SQRT2*cos(q(0)))*sin(q(3))*cos(q(1))*cos(q(2)) - (0.5*M_SQRT2*sin(q(0)) - 0.5*M_SQRT2*cos(q(0)))*sin(q(1))*cos(q(3)))*cos(q(5)) + ((0.5*M_SQRT2*sin(q(0)) - 0.5*M_SQRT2*cos(q(0)))*sin(q(2))*sin(q(4))*cos(q(1)) + (-(-0.5*M_SQRT2*sin(q(0)) + 0.5*M_SQRT2*cos(q(0)))*sin(q(1))*sin(q(3)) + (-0.5*M_SQRT2*sin(q(0)) + 0.5*M_SQRT2*cos(q(0)))*cos(q(1))*cos(q(2))*cos(q(3)))*cos(q(4)))*sin(q(5));
   out(2) = (-(-0.5*M_SQRT2*sin(q(0)) + 0.5*M_SQRT2*cos(q(0)))*sin(q(1))*sin(q(2)) + (0.5*M_SQRT2*sin(q(0)) + 0.5*M_SQRT2*cos(q(0)))*cos(q(2)))*sin(q(3))*cos(q(5)) + ((-(-0.5*M_SQRT2*sin(q(0)) + 0.5*M_SQRT2*cos(q(0)))*sin(q(1))*sin(q(2)) + (0.5*M_SQRT2*sin(q(0)) + 0.5*M_SQRT2*cos(q(0)))*cos(q(2)))*cos(q(3))*cos(q(4)) + ((0.5*M_SQRT2*sin(q(0)) - 0.5*M_SQRT2*cos(q(0)))*sin(q(1))*cos(q(2)) - (0.5*M_SQRT2*sin(q(0)) + 0.5*M_SQRT2*cos(q(0)))*sin(q(2)))*sin(q(4)))*sin(q(5));
   out(3) = ((-0.5*M_SQRT2*sin(q(0)) + 0.5*M_SQRT2*cos(q(0)))*cos(q(1))*cos(q(3)) - (-(0.5*M_SQRT2*sin(q(0)) - 0.5*M_SQRT2*cos(q(0)))*sin(q(1))*cos(q(2)) + (0.5*M_SQRT2*sin(q(0)) + 0.5*M_SQRT2*cos(q(0)))*sin(q(2)))*sin(q(3)))*sin(q(5))*cos(q(4)) + (-(0.5*M_SQRT2*sin(q(0)) - 0.5*M_SQRT2*cos(q(0)))*sin(q(3))*cos(q(1)) + (-(0.5*M_SQRT2*sin(q(0)) - 0.5*M_SQRT2*cos(q(0)))*sin(q(1))*cos(q(2)) + (0.5*M_SQRT2*sin(q(0)) + 0.5*M_SQRT2*cos(q(0)))*sin(q(2)))*cos(q(3)))*cos(q(5));
   out(4) = (((0.5*M_SQRT2*sin(q(0)) - 0.5*M_SQRT2*cos(q(0)))*sin(q(1))*sin(q(2)) + (0.5*M_SQRT2*sin(q(0)) + 0.5*M_SQRT2*cos(q(0)))*cos(q(2)))*cos(q(4)) - (-(0.5*M_SQRT2*sin(q(0)) - 0.5*M_SQRT2*cos(q(0)))*sin(q(3))*cos(q(1)) + (-(0.5*M_SQRT2*sin(q(0)) - 0.5*M_SQRT2*cos(q(0)))*sin(q(1))*cos(q(2)) + (0.5*M_SQRT2*sin(q(0)) + 0.5*M_SQRT2*cos(q(0)))*sin(q(2)))*cos(q(3)))*sin(q(4)))*sin(q(5));
   out(5) = (((0.5*M_SQRT2*sin(q(0)) - 0.5*M_SQRT2*cos(q(0)))*sin(q(1))*sin(q(2)) + (0.5*M_SQRT2*sin(q(0)) + 0.5*M_SQRT2*cos(q(0)))*cos(q(2)))*sin(q(4)) + (-(0.5*M_SQRT2*sin(q(0)) - 0.5*M_SQRT2*cos(q(0)))*sin(q(3))*cos(q(1)) + (-(0.5*M_SQRT2*sin(q(0)) - 0.5*M_SQRT2*cos(q(0)))*sin(q(1))*cos(q(2)) + (0.5*M_SQRT2*sin(q(0)) + 0.5*M_SQRT2*cos(q(0)))*sin(q(2)))*cos(q(3)))*cos(q(4)))*cos(q(5)) - ((0.5*M_SQRT2*sin(q(0)) - 0.5*M_SQRT2*cos(q(0)))*cos(q(1))*cos(q(3)) + (-(0.5*M_SQRT2*sin(q(0)) - 0.5*M_SQRT2*cos(q(0)))*sin(q(1))*cos(q(2)) + (0.5*M_SQRT2*sin(q(0)) + 0.5*M_SQRT2*cos(q(0)))*sin(q(2)))*sin(q(3)))*sin(q(5));
   out(6) = 0;
   out(7) = (((-0.5*M_SQRT2*sin(q(0)) + 0.5*M_SQRT2*cos(q(0)))*sin(q(3))*cos(q(1)) + ((-0.5*M_SQRT2*sin(q(0)) + 0.5*M_SQRT2*cos(q(0)))*sin(q(1))*cos(q(2)) + (0.5*M_SQRT2*sin(q(0)) + 0.5*M_SQRT2*cos(q(0)))*sin(q(2)))*cos(q(3)))*cos(q(4)) + ((0.5*M_SQRT2*sin(q(0)) - 0.5*M_SQRT2*cos(q(0)))*sin(q(1))*sin(q(2)) + (0.5*M_SQRT2*sin(q(0)) + 0.5*M_SQRT2*cos(q(0)))*cos(q(2)))*sin(q(4)))*sin(q(5)) + ((0.5*M_SQRT2*sin(q(0)) - 0.5*M_SQRT2*cos(q(0)))*cos(q(1))*cos(q(3)) + ((-0.5*M_SQRT2*sin(q(0)) + 0.5*M_SQRT2*cos(q(0)))*sin(q(1))*cos(q(2)) + (0.5*M_SQRT2*sin(q(0)) + 0.5*M_SQRT2*cos(q(0)))*sin(q(2)))*sin(q(3)))*cos(q(5));
   out(8) = (-(-0.5*M_SQRT2*sin(q(0)) - 0.5*M_SQRT2*cos(q(0)))*sin(q(1))*cos(q(3)) + (0.5*M_SQRT2*sin(q(0)) + 0.5*M_SQRT2*cos(q(0)))*sin(q(3))*cos(q(1))*cos(q(2)))*cos(q(5)) + ((-0.5*M_SQRT2*sin(q(0)) - 0.5*M_SQRT2*cos(q(0)))*sin(q(2))*sin(q(4))*cos(q(1)) + (-(0.5*M_SQRT2*sin(q(0)) + 0.5*M_SQRT2*cos(q(0)))*sin(q(1))*sin(q(3)) + (0.5*M_SQRT2*sin(q(0)) + 0.5*M_SQRT2*cos(q(0)))*cos(q(1))*cos(q(2))*cos(q(3)))*cos(q(4)))*sin(q(5));
   out(9) = ((0.5*M_SQRT2*sin(q(0)) - 0.5*M_SQRT2*cos(q(0)))*cos(q(2)) - (0.5*M_SQRT2*sin(q(0)) + 0.5*M_SQRT2*cos(q(0)))*sin(q(1))*sin(q(2)))*sin(q(3))*cos(q(5)) + (((0.5*M_SQRT2*sin(q(0)) - 0.5*M_SQRT2*cos(q(0)))*cos(q(2)) - (0.5*M_SQRT2*sin(q(0)) + 0.5*M_SQRT2*cos(q(0)))*sin(q(1))*sin(q(2)))*cos(q(3))*cos(q(4)) + ((-0.5*M_SQRT2*sin(q(0)) - 0.5*M_SQRT2*cos(q(0)))*sin(q(1))*cos(q(2)) - (0.5*M_SQRT2*sin(q(0)) - 0.5*M_SQRT2*cos(q(0)))*sin(q(2)))*sin(q(4)))*sin(q(5));
   out(10) = (-(-0.5*M_SQRT2*sin(q(0)) - 0.5*M_SQRT2*cos(q(0)))*sin(q(3))*cos(q(1)) + (-(-0.5*M_SQRT2*sin(q(0)) - 0.5*M_SQRT2*cos(q(0)))*sin(q(1))*cos(q(2)) + (0.5*M_SQRT2*sin(q(0)) - 0.5*M_SQRT2*cos(q(0)))*sin(q(2)))*cos(q(3)))*cos(q(5)) + ((0.5*M_SQRT2*sin(q(0)) + 0.5*M_SQRT2*cos(q(0)))*cos(q(1))*cos(q(3)) - (-(-0.5*M_SQRT2*sin(q(0)) - 0.5*M_SQRT2*cos(q(0)))*sin(q(1))*cos(q(2)) + (0.5*M_SQRT2*sin(q(0)) - 0.5*M_SQRT2*cos(q(0)))*sin(q(2)))*sin(q(3)))*sin(q(5))*cos(q(4));
   out(11) = (((-0.5*M_SQRT2*sin(q(0)) - 0.5*M_SQRT2*cos(q(0)))*sin(q(1))*sin(q(2)) + (0.5*M_SQRT2*sin(q(0)) - 0.5*M_SQRT2*cos(q(0)))*cos(q(2)))*cos(q(4)) - (-(-0.5*M_SQRT2*sin(q(0)) - 0.5*M_SQRT2*cos(q(0)))*sin(q(3))*cos(q(1)) + (-(-0.5*M_SQRT2*sin(q(0)) - 0.5*M_SQRT2*cos(q(0)))*sin(q(1))*cos(q(2)) + (0.5*M_SQRT2*sin(q(0)) - 0.5*M_SQRT2*cos(q(0)))*sin(q(2)))*cos(q(3)))*sin(q(4)))*sin(q(5));
   out(12) = (((-0.5*M_SQRT2*sin(q(0)) - 0.5*M_SQRT2*cos(q(0)))*sin(q(1))*sin(q(2)) + (0.5*M_SQRT2*sin(q(0)) - 0.5*M_SQRT2*cos(q(0)))*cos(q(2)))*sin(q(4)) + (-(-0.5*M_SQRT2*sin(q(0)) - 0.5*M_SQRT2*cos(q(0)))*sin(q(3))*cos(q(1)) + (-(-0.5*M_SQRT2*sin(q(0)) - 0.5*M_SQRT2*cos(q(0)))*sin(q(1))*cos(q(2)) + (0.5*M_SQRT2*sin(q(0)) - 0.5*M_SQRT2*cos(q(0)))*sin(q(2)))*cos(q(3)))*cos(q(4)))*cos(q(5)) - ((-0.5*M_SQRT2*sin(q(0)) - 0.5*M_SQRT2*cos(q(0)))*cos(q(1))*cos(q(3)) + (-(-0.5*M_SQRT2*sin(q(0)) - 0.5*M_SQRT2*cos(q(0)))*sin(q(1))*cos(q(2)) + (0.5*M_SQRT2*sin(q(0)) - 0.5*M_SQRT2*cos(q(0)))*sin(q(2)))*sin(q(3)))*sin(q(5));
   out(13) = 0;
   out(14) = 0;
   out(15) = ((sin(q(1))*cos(q(2))*cos(q(3)) + sin(q(3))*cos(q(1)))*cos(q(4)) - sin(q(1))*sin(q(2))*sin(q(4)))*sin(q(5)) + (sin(q(1))*sin(q(3))*cos(q(2)) - cos(q(1))*cos(q(3)))*cos(q(5));
   out(16) = (sin(q(2))*cos(q(1))*cos(q(3))*cos(q(4)) + sin(q(4))*cos(q(1))*cos(q(2)))*sin(q(5)) + sin(q(2))*sin(q(3))*cos(q(1))*cos(q(5));
   out(17) = (sin(q(1))*sin(q(3)) - cos(q(1))*cos(q(2))*cos(q(3)))*cos(q(5)) + (sin(q(1))*cos(q(3)) + sin(q(3))*cos(q(1))*cos(q(2)))*sin(q(5))*cos(q(4));
   out(18) = (-(sin(q(1))*sin(q(3)) - cos(q(1))*cos(q(2))*cos(q(3)))*sin(q(4)) + sin(q(2))*cos(q(1))*cos(q(4)))*sin(q(5));
   out(19) = ((sin(q(1))*sin(q(3)) - cos(q(1))*cos(q(2))*cos(q(3)))*cos(q(4)) + sin(q(2))*sin(q(4))*cos(q(1)))*cos(q(5)) - (-sin(q(1))*cos(q(3)) - sin(q(3))*cos(q(1))*cos(q(2)))*sin(q(5));
   out(20) = 0;

}

void baxter::Baxter::JRz_ee(const VectorXd& q, MatrixXd& out) {

   out(0) = (((-0.5*M_SQRT2*sin(q(0)) + 0.5*M_SQRT2*cos(q(0)))*cos(q(2)) + (0.5*M_SQRT2*sin(q(0)) + 0.5*M_SQRT2*cos(q(0)))*sin(q(1))*sin(q(2)))*sin(q(4)) + ((-0.5*M_SQRT2*sin(q(0)) - 0.5*M_SQRT2*cos(q(0)))*sin(q(3))*cos(q(1)) + ((-0.5*M_SQRT2*sin(q(0)) - 0.5*M_SQRT2*cos(q(0)))*sin(q(1))*cos(q(2)) + (-0.5*M_SQRT2*sin(q(0)) + 0.5*M_SQRT2*cos(q(0)))*sin(q(2)))*cos(q(3)))*cos(q(4)))*sin(q(5)) + ((0.5*M_SQRT2*sin(q(0)) + 0.5*M_SQRT2*cos(q(0)))*cos(q(1))*cos(q(3)) + ((-0.5*M_SQRT2*sin(q(0)) - 0.5*M_SQRT2*cos(q(0)))*sin(q(1))*cos(q(2)) + (-0.5*M_SQRT2*sin(q(0)) + 0.5*M_SQRT2*cos(q(0)))*sin(q(2)))*sin(q(3)))*cos(q(5));
   out(1) = ((-0.5*M_SQRT2*sin(q(0)) + 0.5*M_SQRT2*cos(q(0)))*sin(q(3))*cos(q(1))*cos(q(2)) - (0.5*M_SQRT2*sin(q(0)) - 0.5*M_SQRT2*cos(q(0)))*sin(q(1))*cos(q(3)))*cos(q(5)) + ((0.5*M_SQRT2*sin(q(0)) - 0.5*M_SQRT2*cos(q(0)))*sin(q(2))*sin(q(4))*cos(q(1)) + (-(-0.5*M_SQRT2*sin(q(0)) + 0.5*M_SQRT2*cos(q(0)))*sin(q(1))*sin(q(3)) + (-0.5*M_SQRT2*sin(q(0)) + 0.5*M_SQRT2*cos(q(0)))*cos(q(1))*cos(q(2))*cos(q(3)))*cos(q(4)))*sin(q(5));
   out(2) = (-(-0.5*M_SQRT2*sin(q(0)) + 0.5*M_SQRT2*cos(q(0)))*sin(q(1))*sin(q(2)) + (0.5*M_SQRT2*sin(q(0)) + 0.5*M_SQRT2*cos(q(0)))*cos(q(2)))*sin(q(3))*cos(q(5)) + ((-(-0.5*M_SQRT2*sin(q(0)) + 0.5*M_SQRT2*cos(q(0)))*sin(q(1))*sin(q(2)) + (0.5*M_SQRT2*sin(q(0)) + 0.5*M_SQRT2*cos(q(0)))*cos(q(2)))*cos(q(3))*cos(q(4)) + ((0.5*M_SQRT2*sin(q(0)) - 0.5*M_SQRT2*cos(q(0)))*sin(q(1))*cos(q(2)) - (0.5*M_SQRT2*sin(q(0)) + 0.5*M_SQRT2*cos(q(0)))*sin(q(2)))*sin(q(4)))*sin(q(5));
   out(3) = ((-0.5*M_SQRT2*sin(q(0)) + 0.5*M_SQRT2*cos(q(0)))*cos(q(1))*cos(q(3)) - (-(0.5*M_SQRT2*sin(q(0)) - 0.5*M_SQRT2*cos(q(0)))*sin(q(1))*cos(q(2)) + (0.5*M_SQRT2*sin(q(0)) + 0.5*M_SQRT2*cos(q(0)))*sin(q(2)))*sin(q(3)))*sin(q(5))*cos(q(4)) + (-(0.5*M_SQRT2*sin(q(0)) - 0.5*M_SQRT2*cos(q(0)))*sin(q(3))*cos(q(1)) + (-(0.5*M_SQRT2*sin(q(0)) - 0.5*M_SQRT2*cos(q(0)))*sin(q(1))*cos(q(2)) + (0.5*M_SQRT2*sin(q(0)) + 0.5*M_SQRT2*cos(q(0)))*sin(q(2)))*cos(q(3)))*cos(q(5));
   out(4) = (((0.5*M_SQRT2*sin(q(0)) - 0.5*M_SQRT2*cos(q(0)))*sin(q(1))*sin(q(2)) + (0.5*M_SQRT2*sin(q(0)) + 0.5*M_SQRT2*cos(q(0)))*cos(q(2)))*cos(q(4)) - (-(0.5*M_SQRT2*sin(q(0)) - 0.5*M_SQRT2*cos(q(0)))*sin(q(3))*cos(q(1)) + (-(0.5*M_SQRT2*sin(q(0)) - 0.5*M_SQRT2*cos(q(0)))*sin(q(1))*cos(q(2)) + (0.5*M_SQRT2*sin(q(0)) + 0.5*M_SQRT2*cos(q(0)))*sin(q(2)))*cos(q(3)))*sin(q(4)))*sin(q(5));
   out(5) = (((0.5*M_SQRT2*sin(q(0)) - 0.5*M_SQRT2*cos(q(0)))*sin(q(1))*sin(q(2)) + (0.5*M_SQRT2*sin(q(0)) + 0.5*M_SQRT2*cos(q(0)))*cos(q(2)))*sin(q(4)) + (-(0.5*M_SQRT2*sin(q(0)) - 0.5*M_SQRT2*cos(q(0)))*sin(q(3))*cos(q(1)) + (-(0.5*M_SQRT2*sin(q(0)) - 0.5*M_SQRT2*cos(q(0)))*sin(q(1))*cos(q(2)) + (0.5*M_SQRT2*sin(q(0)) + 0.5*M_SQRT2*cos(q(0)))*sin(q(2)))*cos(q(3)))*cos(q(4)))*cos(q(5)) - ((0.5*M_SQRT2*sin(q(0)) - 0.5*M_SQRT2*cos(q(0)))*cos(q(1))*cos(q(3)) + (-(0.5*M_SQRT2*sin(q(0)) - 0.5*M_SQRT2*cos(q(0)))*sin(q(1))*cos(q(2)) + (0.5*M_SQRT2*sin(q(0)) + 0.5*M_SQRT2*cos(q(0)))*sin(q(2)))*sin(q(3)))*sin(q(5));
   out(6) = 0;
   out(7) = (((-0.5*M_SQRT2*sin(q(0)) + 0.5*M_SQRT2*cos(q(0)))*sin(q(3))*cos(q(1)) + ((-0.5*M_SQRT2*sin(q(0)) + 0.5*M_SQRT2*cos(q(0)))*sin(q(1))*cos(q(2)) + (0.5*M_SQRT2*sin(q(0)) + 0.5*M_SQRT2*cos(q(0)))*sin(q(2)))*cos(q(3)))*cos(q(4)) + ((0.5*M_SQRT2*sin(q(0)) - 0.5*M_SQRT2*cos(q(0)))*sin(q(1))*sin(q(2)) + (0.5*M_SQRT2*sin(q(0)) + 0.5*M_SQRT2*cos(q(0)))*cos(q(2)))*sin(q(4)))*sin(q(5)) + ((0.5*M_SQRT2*sin(q(0)) - 0.5*M_SQRT2*cos(q(0)))*cos(q(1))*cos(q(3)) + ((-0.5*M_SQRT2*sin(q(0)) + 0.5*M_SQRT2*cos(q(0)))*sin(q(1))*cos(q(2)) + (0.5*M_SQRT2*sin(q(0)) + 0.5*M_SQRT2*cos(q(0)))*sin(q(2)))*sin(q(3)))*cos(q(5));
   out(8) = (-(-0.5*M_SQRT2*sin(q(0)) - 0.5*M_SQRT2*cos(q(0)))*sin(q(1))*cos(q(3)) + (0.5*M_SQRT2*sin(q(0)) + 0.5*M_SQRT2*cos(q(0)))*sin(q(3))*cos(q(1))*cos(q(2)))*cos(q(5)) + ((-0.5*M_SQRT2*sin(q(0)) - 0.5*M_SQRT2*cos(q(0)))*sin(q(2))*sin(q(4))*cos(q(1)) + (-(0.5*M_SQRT2*sin(q(0)) + 0.5*M_SQRT2*cos(q(0)))*sin(q(1))*sin(q(3)) + (0.5*M_SQRT2*sin(q(0)) + 0.5*M_SQRT2*cos(q(0)))*cos(q(1))*cos(q(2))*cos(q(3)))*cos(q(4)))*sin(q(5));
   out(9) = ((0.5*M_SQRT2*sin(q(0)) - 0.5*M_SQRT2*cos(q(0)))*cos(q(2)) - (0.5*M_SQRT2*sin(q(0)) + 0.5*M_SQRT2*cos(q(0)))*sin(q(1))*sin(q(2)))*sin(q(3))*cos(q(5)) + (((0.5*M_SQRT2*sin(q(0)) - 0.5*M_SQRT2*cos(q(0)))*cos(q(2)) - (0.5*M_SQRT2*sin(q(0)) + 0.5*M_SQRT2*cos(q(0)))*sin(q(1))*sin(q(2)))*cos(q(3))*cos(q(4)) + ((-0.5*M_SQRT2*sin(q(0)) - 0.5*M_SQRT2*cos(q(0)))*sin(q(1))*cos(q(2)) - (0.5*M_SQRT2*sin(q(0)) - 0.5*M_SQRT2*cos(q(0)))*sin(q(2)))*sin(q(4)))*sin(q(5));
   out(10) = (-(-0.5*M_SQRT2*sin(q(0)) - 0.5*M_SQRT2*cos(q(0)))*sin(q(3))*cos(q(1)) + (-(-0.5*M_SQRT2*sin(q(0)) - 0.5*M_SQRT2*cos(q(0)))*sin(q(1))*cos(q(2)) + (0.5*M_SQRT2*sin(q(0)) - 0.5*M_SQRT2*cos(q(0)))*sin(q(2)))*cos(q(3)))*cos(q(5)) + ((0.5*M_SQRT2*sin(q(0)) + 0.5*M_SQRT2*cos(q(0)))*cos(q(1))*cos(q(3)) - (-(-0.5*M_SQRT2*sin(q(0)) - 0.5*M_SQRT2*cos(q(0)))*sin(q(1))*cos(q(2)) + (0.5*M_SQRT2*sin(q(0)) - 0.5*M_SQRT2*cos(q(0)))*sin(q(2)))*sin(q(3)))*sin(q(5))*cos(q(4));
   out(11) = (((-0.5*M_SQRT2*sin(q(0)) - 0.5*M_SQRT2*cos(q(0)))*sin(q(1))*sin(q(2)) + (0.5*M_SQRT2*sin(q(0)) - 0.5*M_SQRT2*cos(q(0)))*cos(q(2)))*cos(q(4)) - (-(-0.5*M_SQRT2*sin(q(0)) - 0.5*M_SQRT2*cos(q(0)))*sin(q(3))*cos(q(1)) + (-(-0.5*M_SQRT2*sin(q(0)) - 0.5*M_SQRT2*cos(q(0)))*sin(q(1))*cos(q(2)) + (0.5*M_SQRT2*sin(q(0)) - 0.5*M_SQRT2*cos(q(0)))*sin(q(2)))*cos(q(3)))*sin(q(4)))*sin(q(5));
   out(12) = (((-0.5*M_SQRT2*sin(q(0)) - 0.5*M_SQRT2*cos(q(0)))*sin(q(1))*sin(q(2)) + (0.5*M_SQRT2*sin(q(0)) - 0.5*M_SQRT2*cos(q(0)))*cos(q(2)))*sin(q(4)) + (-(-0.5*M_SQRT2*sin(q(0)) - 0.5*M_SQRT2*cos(q(0)))*sin(q(3))*cos(q(1)) + (-(-0.5*M_SQRT2*sin(q(0)) - 0.5*M_SQRT2*cos(q(0)))*sin(q(1))*cos(q(2)) + (0.5*M_SQRT2*sin(q(0)) - 0.5*M_SQRT2*cos(q(0)))*sin(q(2)))*cos(q(3)))*cos(q(4)))*cos(q(5)) - ((-0.5*M_SQRT2*sin(q(0)) - 0.5*M_SQRT2*cos(q(0)))*cos(q(1))*cos(q(3)) + (-(-0.5*M_SQRT2*sin(q(0)) - 0.5*M_SQRT2*cos(q(0)))*sin(q(1))*cos(q(2)) + (0.5*M_SQRT2*sin(q(0)) - 0.5*M_SQRT2*cos(q(0)))*sin(q(2)))*sin(q(3)))*sin(q(5));
   out(13) = 0;
   out(14) = 0;
   out(15) = ((sin(q(1))*cos(q(2))*cos(q(3)) + sin(q(3))*cos(q(1)))*cos(q(4)) - sin(q(1))*sin(q(2))*sin(q(4)))*sin(q(5)) + (sin(q(1))*sin(q(3))*cos(q(2)) - cos(q(1))*cos(q(3)))*cos(q(5));
   out(16) = (sin(q(2))*cos(q(1))*cos(q(3))*cos(q(4)) + sin(q(4))*cos(q(1))*cos(q(2)))*sin(q(5)) + sin(q(2))*sin(q(3))*cos(q(1))*cos(q(5));
   out(17) = (sin(q(1))*sin(q(3)) - cos(q(1))*cos(q(2))*cos(q(3)))*cos(q(5)) + (sin(q(1))*cos(q(3)) + sin(q(3))*cos(q(1))*cos(q(2)))*sin(q(5))*cos(q(4));
   out(18) = (-(sin(q(1))*sin(q(3)) - cos(q(1))*cos(q(2))*cos(q(3)))*sin(q(4)) + sin(q(2))*cos(q(1))*cos(q(4)))*sin(q(5));
   out(19) = ((sin(q(1))*sin(q(3)) - cos(q(1))*cos(q(2))*cos(q(3)))*cos(q(4)) + sin(q(2))*sin(q(4))*cos(q(1)))*cos(q(5)) - (-sin(q(1))*cos(q(3)) - sin(q(3))*cos(q(1))*cos(q(2)))*sin(q(5));
   out(20) = 0;

}
