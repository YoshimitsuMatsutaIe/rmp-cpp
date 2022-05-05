/******************************************************************************
 *                       Code generated with sympy 1.9                        *
 *                                                                            *
 *              See http://www.sympy.org/ for more information.               *
 *                                                                            *
 *                This file is part of 'jry_ee_dot_BY_SYMPY_'                 *
 ******************************************************************************/


#ifndef JRY_EE_DOT_BY_SYMPY___JRY_EE_DOT__H
#define JRY_EE_DOT_BY_SYMPY___JRY_EE_DOT__H

#include<eigen3/Eigen/Core>
namespace baxter
{
using Eigen::VectorXd;
using Eigen::MatrixXd;
void jry_ee_dot(const VectorXd& dq, const VectorXd& q, MatrixXd& out);
}


#endif

