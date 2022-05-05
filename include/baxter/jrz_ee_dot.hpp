/******************************************************************************
 *                       Code generated with sympy 1.9                        *
 *                                                                            *
 *              See http://www.sympy.org/ for more information.               *
 *                                                                            *
 *                This file is part of 'jrz_ee_dot_BY_SYMPY_'                 *
 ******************************************************************************/


#ifndef JRZ_EE_DOT_BY_SYMPY___JRZ_EE_DOT__H
#define JRZ_EE_DOT_BY_SYMPY___JRZ_EE_DOT__H

#include<eigen3/Eigen/Core>
namespace baxter
{
using Eigen::VectorXd;
using Eigen::MatrixXd;
void jrz_ee_dot(const VectorXd& dq, const VectorXd& q, MatrixXd& out);
}


#endif

