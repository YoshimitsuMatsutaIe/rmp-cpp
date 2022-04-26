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
#include <vector>
#include <array>
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


    /**
     * @brief 
     * 
     */
    class Baxter
    {
    
    public:
        double L, h, H, L0, L1, L2, L3, L4, L5, L6;
        Baxter(void);

        std::array<VectorXd, 2> static_os;
        std::array<VectorXd, 2> static_rxs;
        std::array<VectorXd, 2> static_rys;
        std::array<VectorXd, 2> static_rzs;
        std::array<MatrixXd, 2> static_jos;
        std::array<MatrixXd, 2> static_jrxs;
        std::array<MatrixXd, 2> static_jrys;
        std::array<MatrixXd, 2> static_jrzs;
        std::array<MatrixXd, 2> static_jo_dots;
        std::array<MatrixXd, 2> static_jrx_dots;
        std::array<MatrixXd, 2> static_jry_dots;
        std::array<MatrixXd, 2> static_jrz_dots;

        std::array<VectorXd, 7> os;
        std::array<VectorXd, 7> rxs;
        std::array<VectorXd, 7> rys;
        std::array<VectorXd, 7> rzs;
        std::array<MatrixXd, 7> jos;
        std::array<MatrixXd, 7> jrxs;
        std::array<MatrixXd, 7> jrys;
        std::array<MatrixXd, 7> jrzs;
        std::array<MatrixXd, 7> jo_dots;
        std::array<MatrixXd, 7> jrx_dots;
        std::array<MatrixXd, 7> jry_dots;
        std::array<MatrixXd, 7> jrz_dots;

        VectorXd o_ee;
        VectorXd rx_ee;
        VectorXd ry_ee;
        VectorXd rz_ee;
        MatrixXd jo_ee;
        MatrixXd jrx_ee;
        MatrixXd jry_ee;
        MatrixXd jrz_ee;
        MatrixXd jo_dot_ee;
        MatrixXd jrx_dot_ee;
        MatrixXd jry_dot_ee;
        MatrixXd jrz_dot_ee;

        void calc_all(const VectorXd& q, const VectorXd& q_dot);

        void Rx_W0(const VectorXd& q, VectorXd& out);
        void Rx_BR(const VectorXd& q, VectorXd& out);
        void Rx_0(const VectorXd& q, VectorXd& out);
        void Rx_1(const VectorXd& q, VectorXd& out);
        void Rx_2(const VectorXd& q, VectorXd& out);
        void Rx_3(const VectorXd& q, VectorXd& out);
        void Rx_4(const VectorXd& q, VectorXd& out);
        void Rx_5(const VectorXd& q, VectorXd& out);
        void Rx_6(const VectorXd& q, VectorXd& out);
        void Rx_ee(const VectorXd& q, VectorXd& out);

        void Ry_W0(const VectorXd& q, VectorXd& out);
        void Ry_BR(const VectorXd& q, VectorXd& out);
        void Ry_0(const VectorXd& q, VectorXd& out);
        void Ry_1(const VectorXd& q, VectorXd& out);
        void Ry_2(const VectorXd& q, VectorXd& out);
        void Ry_3(const VectorXd& q, VectorXd& out);
        void Ry_4(const VectorXd& q, VectorXd& out);
        void Ry_5(const VectorXd& q, VectorXd& out);
        void Ry_6(const VectorXd& q, VectorXd& out);
        void Ry_ee(const VectorXd& q, VectorXd& out);

        void Rz_W0(const VectorXd& q, VectorXd& out);
        void Rz_BR(const VectorXd& q, VectorXd& out);
        void Rz_0(const VectorXd& q, VectorXd& out);
        void Rz_1(const VectorXd& q, VectorXd& out);
        void Rz_2(const VectorXd& q, VectorXd& out);
        void Rz_3(const VectorXd& q, VectorXd& out);
        void Rz_4(const VectorXd& q, VectorXd& out);
        void Rz_5(const VectorXd& q, VectorXd& out);
        void Rz_6(const VectorXd& q, VectorXd& out);
        void Rz_ee(const VectorXd& q, VectorXd& out);

        void phi_W0(const VectorXd& q, VectorXd& out);
        void phi_BR(const VectorXd& q, VectorXd& out);
        void phi_0(const VectorXd& q, VectorXd& out);
        void phi_1(const VectorXd& q, VectorXd& out);
        void phi_2(const VectorXd& q, VectorXd& out);
        void phi_3(const VectorXd& q, VectorXd& out);
        void phi_4(const VectorXd& q, VectorXd& out);
        void phi_5(const VectorXd& q, VectorXd& out);
        void phi_6(const VectorXd& q, VectorXd& out);
        void phi_ee(const VectorXd& q, VectorXd& out);

        void JRx_W0(const VectorXd& q, MatrixXd& out);
        void JRx_BR(const VectorXd& q, MatrixXd& out);
        void JRx_0(const VectorXd& q, MatrixXd& out);
        void JRx_1(const VectorXd& q, MatrixXd& out);
        void JRx_2(const VectorXd& q, MatrixXd& out);
        void JRx_3(const VectorXd& q, MatrixXd& out);
        void JRx_4(const VectorXd& q, MatrixXd& out);
        void JRx_5(const VectorXd& q, MatrixXd& out);
        void JRx_6(const VectorXd& q, MatrixXd& out);
        void JRx_ee(const VectorXd& q, MatrixXd& out);

        void JRy_W0(const VectorXd& q, MatrixXd& out);
        void JRy_BR(const VectorXd& q, MatrixXd& out);
        void JRy_0(const VectorXd& q, MatrixXd& out);
        void JRy_1(const VectorXd& q, MatrixXd& out);
        void JRy_2(const VectorXd& q, MatrixXd& out);
        void JRy_3(const VectorXd& q, MatrixXd& out);
        void JRy_4(const VectorXd& q, MatrixXd& out);
        void JRy_5(const VectorXd& q, MatrixXd& out);
        void JRy_6(const VectorXd& q, MatrixXd& out);
        void JRy_ee(const VectorXd& q, MatrixXd& out);

        void JRz_W0(const VectorXd& q, MatrixXd& out);
        void JRz_BR(const VectorXd& q, MatrixXd& out);
        void JRz_0(const VectorXd& q, MatrixXd& out);
        void JRz_1(const VectorXd& q, MatrixXd& out);
        void JRz_2(const VectorXd& q, MatrixXd& out);
        void JRz_3(const VectorXd& q, MatrixXd& out);
        void JRz_4(const VectorXd& q, MatrixXd& out);
        void JRz_5(const VectorXd& q, MatrixXd& out);
        void JRz_6(const VectorXd& q, MatrixXd& out);
        void JRz_ee(const VectorXd& q, MatrixXd& out);

        void Jo_W0(const VectorXd& q, MatrixXd& out);
        void Jo_BR(const VectorXd& q, MatrixXd& out);
        void Jo_0(const VectorXd& q, MatrixXd& out);
        void Jo_1(const VectorXd& q, MatrixXd& out);
        void Jo_2(const VectorXd& q, MatrixXd& out);
        void Jo_3(const VectorXd& q, MatrixXd& out);
        void Jo_4(const VectorXd& q, MatrixXd& out);
        void Jo_5(const VectorXd& q, MatrixXd& out);
        void Jo_6(const VectorXd& q, MatrixXd& out);
        void Jo_ee(const VectorXd& q, MatrixXd& out);

        void JRx_dot_W0(const VectorXd& dq, const VectorXd& q, MatrixXd& out);
        void JRx_dot_BR(const VectorXd& dq, const VectorXd& q, MatrixXd& out);
        void JRx_dot_0(const VectorXd& dq, const VectorXd& q, MatrixXd& out);
        void JRx_dot_1(const VectorXd& dq, const VectorXd& q, MatrixXd& out);
        void JRx_dot_2(const VectorXd& dq, const VectorXd& q, MatrixXd& out);
        void JRx_dot_3(const VectorXd& dq, const VectorXd& q, MatrixXd& out);
        void JRx_dot_4(const VectorXd& dq, const VectorXd& q, MatrixXd& out);
        void JRx_dot_5(const VectorXd& dq, const VectorXd& q, MatrixXd& out);
        void JRx_dot_6(const VectorXd& dq, const VectorXd& q, MatrixXd& out);
        void JRx_dot_ee(const VectorXd& dq, const VectorXd& q, MatrixXd& out);

        void JRy_dot_W0(const VectorXd& dq, const VectorXd& q, MatrixXd& out);
        void JRy_dot_BR(const VectorXd& dq, const VectorXd& q, MatrixXd& out);
        void JRy_dot_0(const VectorXd& dq, const VectorXd& q, MatrixXd& out);
        void JRy_dot_1(const VectorXd& dq, const VectorXd& q, MatrixXd& out);
        void JRy_dot_2(const VectorXd& dq, const VectorXd& q, MatrixXd& out);
        void JRy_dot_3(const VectorXd& dq, const VectorXd& q, MatrixXd& out);
        void JRy_dot_4(const VectorXd& dq, const VectorXd& q, MatrixXd& out);
        void JRy_dot_5(const VectorXd& dq, const VectorXd& q, MatrixXd& out);
        void JRy_dot_6(const VectorXd& dq, const VectorXd& q, MatrixXd& out);
        void JRy_dot_ee(const VectorXd& dq, const VectorXd& q, MatrixXd& out);

        void JRz_dot_W0(const VectorXd& dq, const VectorXd& q, MatrixXd& out);
        void JRz_dot_BR(const VectorXd& dq, const VectorXd& q, MatrixXd& out);
        void JRz_dot_0(const VectorXd& dq, const VectorXd& q, MatrixXd& out);
        void JRz_dot_1(const VectorXd& dq, const VectorXd& q, MatrixXd& out);
        void JRz_dot_2(const VectorXd& dq, const VectorXd& q, MatrixXd& out);
        void JRz_dot_3(const VectorXd& dq, const VectorXd& q, MatrixXd& out);
        void JRz_dot_4(const VectorXd& dq, const VectorXd& q, MatrixXd& out);
        void JRz_dot_5(const VectorXd& dq, const VectorXd& q, MatrixXd& out);
        void JRz_dot_6(const VectorXd& dq, const VectorXd& q, MatrixXd& out);
        void JRz_dot_ee(const VectorXd& dq, const VectorXd& q, MatrixXd& out);

        void Jo_dot_W0(const VectorXd& dq, const VectorXd& q, MatrixXd& out);
        void Jo_dot_BR(const VectorXd& dq, const VectorXd& q, MatrixXd& out);
        void Jo_dot_0(const VectorXd& dq, const VectorXd& q, MatrixXd& out);
        void Jo_dot_1(const VectorXd& dq, const VectorXd& q, MatrixXd& out);
        void Jo_dot_2(const VectorXd& dq, const VectorXd& q, MatrixXd& out);
        void Jo_dot_3(const VectorXd& dq, const VectorXd& q, MatrixXd& out);
        void Jo_dot_4(const VectorXd& dq, const VectorXd& q, MatrixXd& out);
        void Jo_dot_5(const VectorXd& dq, const VectorXd& q, MatrixXd& out);
        void Jo_dot_6(const VectorXd& dq, const VectorXd& q, MatrixXd& out);
        void Jo_dot_ee(const VectorXd& dq, const VectorXd& q, MatrixXd& out);


    };

};
#endif

