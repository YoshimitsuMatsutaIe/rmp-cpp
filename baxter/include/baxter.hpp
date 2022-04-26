/******************************************************************************
 *                       Code generated with sympy 1.9                        *
 *                                                                            *
 *              See http://www.sympy.org/ for more information.               *
 *                                                                            *
 *                    This file is part of 'phi_W0project'                    *
 ******************************************************************************/


#ifndef BAXTER__HPP
#define BAXTER__HPP

#include <cmath>
#include "/usr/include/eigen3/Eigen/Core"

/**
 * @brief バクスター関係
 * 
 */
namespace baxter
{
    using Eigen::VectorXd;
    using Eigen::MatrixXd;
    using std::cos;
    using std::sin;

    void Rx_W0(VectorXd& out);
    void Rx_BR(VectorXd& out);
    void Rx_0(const VectorXd& q, VectorXd& out);
    void Rx_1(const VectorXd& q, VectorXd& out);
    void Rx_2(const VectorXd& q, VectorXd& out);
    void Rx_3(const VectorXd& q, VectorXd& out);
    void Rx_4(const VectorXd& q, VectorXd& out);
    void Rx_5(const VectorXd& q, VectorXd& out);
    void Rx_6(const VectorXd& q, VectorXd& out);
    void Rx_ee(const VectorXd& q, VectorXd& out);

    void Ry_W0(VectorXd& out);
    void Ry_BR(VectorXd& out);
    void Ry_0(const VectorXd& q, VectorXd& out);
    void Ry_1(const VectorXd& q, VectorXd& out);
    void Ry_2(const VectorXd& q, VectorXd& out);
    void Ry_3(const VectorXd& q, VectorXd& out);
    void Ry_4(const VectorXd& q, VectorXd& out);
    void Ry_5(const VectorXd& q, VectorXd& out);
    void Ry_6(const VectorXd& q, VectorXd& out);
    void Ry_ee(const VectorXd& q, VectorXd& out);

    void Rz_W0(VectorXd& out);
    void Rz_BR(VectorXd& out);
    void Rz_0(const VectorXd& q, VectorXd& out);
    void Rz_1(const VectorXd& q, VectorXd& out);
    void Rz_2(const VectorXd& q, VectorXd& out);
    void Rz_3(const VectorXd& q, VectorXd& out);
    void Rz_4(const VectorXd& q, VectorXd& out);
    void Rz_5(const VectorXd& q, VectorXd& out);
    void Rz_6(const VectorXd& q, VectorXd& out);
    void Rz_ee(const VectorXd& q, VectorXd& out);

    void phi_W0(double H, double L, double h, VectorXd& out);
    void phi_BR(double H, double L, double L0, double h, VectorXd& out);
    void phi_0(double H, double L, double L0, double h, VectorXd& out);
    void phi_1(double H, double L, double L0, double L1, double h, const VectorXd& q, VectorXd& out);
    void phi_2(double H, double L, double L0, double L1, double L2, double h, const VectorXd& q, VectorXd& out);
    void phi_3(double H, double L, double L0, double L1, double L2, double L3, double h, const VectorXd& q, VectorXd& out);
    void phi_4(double H, double L, double L0, double L1, double L2, double L3, double L4, double h, const VectorXd& q, VectorXd& out);
    void phi_5(double H, double L, double L0, double L1, double L2, double L3, double L4, double L5, double h, const VectorXd& q, VectorXd& out);
    void phi_6(double H, double L, double L0, double L1, double L2, double L3, double L4, double L5, double h, const VectorXd& q, VectorXd& out);
    void phi_ee(double H, double L, double L0, double L1, double L2, double L3, double L4, double L5, double L6, double h, const VectorXd& q, VectorXd& out);

    void JRx_W0(MatrixXd& out);
    void JRx_BR(MatrixXd& out);
    void JRx_0(const VectorXd& q, MatrixXd& out);
    void JRx_1(const VectorXd& q, MatrixXd& out);
    void JRx_2(const VectorXd& q, MatrixXd& out);
    void JRx_3(const VectorXd& q, MatrixXd& out);
    void JRx_4(const VectorXd& q, MatrixXd& out);
    void JRx_5(const VectorXd& q, MatrixXd& out);
    void JRx_6(const VectorXd& q, MatrixXd& out);
    void JRx_ee(const VectorXd& q, MatrixXd& out);

    void JRy_W0(MatrixXd& out);
    void JRy_BR(MatrixXd& out);
    void JRy_0(const VectorXd& q, MatrixXd& out);
    void JRy_1(const VectorXd& q, MatrixXd& out);
    void JRy_2(const VectorXd& q, MatrixXd& out);
    void JRy_3(const VectorXd& q, MatrixXd& out);
    void JRy_4(const VectorXd& q, MatrixXd& out);
    void JRy_5(const VectorXd& q, MatrixXd& out);
    void JRy_6(const VectorXd& q, MatrixXd& out);
    void JRy_ee(const VectorXd& q, MatrixXd& out);

    void JRz_W0(MatrixXd& out);
    void JRz_BR(MatrixXd& out);
    void JRz_0(MatrixXd& out);
    void JRz_1(const VectorXd& q, MatrixXd& out);
    void JRz_2(const VectorXd& q, MatrixXd& out);
    void JRz_3(const VectorXd& q, MatrixXd& out);
    void JRz_4(const VectorXd& q, MatrixXd& out);
    void JRz_5(const VectorXd& q, MatrixXd& out);
    void JRz_6(const VectorXd& q, MatrixXd& out);
    void JRz_ee(const VectorXd& q, MatrixXd& out);

    void Jo_W0(MatrixXd& out);
    void Jo_BR(MatrixXd& out);
    void Jo_0(MatrixXd& out);
    void Jo_1(double L1, const VectorXd& q, MatrixXd& out);
    void Jo_2(double L1, double L2, const VectorXd& q, MatrixXd& out);
    void Jo_3(double L1, double L2, double L3, const VectorXd& q, MatrixXd& out);
    void Jo_4(double L1, double L2, double L3, double L4, const VectorXd& q, MatrixXd& out);
    void Jo_5(double L1, double L2, double L3, double L4, double L5, const VectorXd& q, MatrixXd& out);
    void Jo_6(double L1, double L2, double L3, double L4, double L5, const VectorXd& q, MatrixXd& out);
    void Jo_ee(double L1, double L2, double L3, double L4, double L5, double L6, const VectorXd& q, MatrixXd& out);

    void JRx_dot_W0(MatrixXd& out);
    void JRx_dot_BR(MatrixXd& out);
    void JRx_dot_0(const VectorXd& dq, const VectorXd& q, MatrixXd& out);
    void JRx_dot_1(const VectorXd& dq, const VectorXd& q, MatrixXd& out);
    void JRx_dot_2(const VectorXd& dq, const VectorXd& q, MatrixXd& out);
    void JRx_dot_3(const VectorXd& dq, const VectorXd& q, MatrixXd& out);
    void JRx_dot_4(const VectorXd& dq, const VectorXd& q, MatrixXd& out);
    void JRx_dot_5(const VectorXd& dq, const VectorXd& q, MatrixXd& out);
    void JRx_dot_6(const VectorXd& dq, const VectorXd& q, MatrixXd& out);
    void JRx_dot_ee(const VectorXd& dq, const VectorXd& q, MatrixXd& out);

    void JRy_dot_W0(MatrixXd& out);
    void JRy_dot_BR(MatrixXd& out);
    void JRy_dot_0(const VectorXd& dq, const VectorXd& q, MatrixXd& out);
    void JRy_dot_1(const VectorXd& dq, const VectorXd& q, MatrixXd& out);
    void JRy_dot_2(const VectorXd& dq, const VectorXd& q, MatrixXd& out);
    void JRy_dot_3(const VectorXd& dq, const VectorXd& q, MatrixXd& out);
    void JRy_dot_4(const VectorXd& dq, const VectorXd& q, MatrixXd& out);
    void JRy_dot_5(const VectorXd& dq, const VectorXd& q, MatrixXd& out);
    void JRy_dot_6(const VectorXd& dq, const VectorXd& q, MatrixXd& out);
    void JRy_dot_ee(const VectorXd& dq, const VectorXd& q, MatrixXd& out);

    void JRz_dot_W0(MatrixXd& out);
    void JRz_dot_BR(MatrixXd& out);
    void JRz_dot_0(MatrixXd& out);
    void JRz_dot_1(const VectorXd& dq, const VectorXd& q, MatrixXd& out);
    void JRz_dot_2(const VectorXd& dq, const VectorXd& q, MatrixXd& out);
    void JRz_dot_3(const VectorXd& dq, const VectorXd& q, MatrixXd& out);
    void JRz_dot_4(const VectorXd& dq, const VectorXd& q, MatrixXd& out);
    void JRz_dot_5(const VectorXd& dq, const VectorXd& q, MatrixXd& out);
    void JRz_dot_6(const VectorXd& dq, const VectorXd& q, MatrixXd& out);
    void JRz_dot_ee(const VectorXd& dq, const VectorXd& q, MatrixXd& out);
    
    void Jo_dot_W0(MatrixXd& out);
    void Jo_dot_BR(MatrixXd& out);
    void Jo_dot_0(MatrixXd& out);
    void Jo_dot_1(double L1, const VectorXd& dq, const VectorXd& q, MatrixXd& out);
    void Jo_dot_2(double L1, double L2, const VectorXd& dq, const VectorXd& q, MatrixXd& out);
    void Jo_dot_3(double L1, double L2, double L3, const VectorXd& dq, const VectorXd& q, MatrixXd& out);
    void Jo_dot_4(double L1, double L2, double L3, double L4, const VectorXd& dq, const VectorXd& q, MatrixXd& out);
    void Jo_dot_5(double L1, double L2, double L3, double L4, double L5, const VectorXd& dq, const VectorXd& q, MatrixXd& out);
    void Jo_dot_6(double L1, double L2, double L3, double L4, double L5, const VectorXd& dq, const VectorXd& q, MatrixXd& out);
    void Jo_dot_ee(double L1, double L2, double L3, double L4, double L5, double L6, const VectorXd& dq, const VectorXd& q, MatrixXd& out);


};
#endif

