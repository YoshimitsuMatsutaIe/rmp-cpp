/******************************************************************************
 *                       Code generated with sympy 1.9                        *
 *                                                                            *
 *              See http://www.sympy.org/ for more information.               *
 *                                                                            *
 *                    This file is part of 'phi_W0project'                    *
 ******************************************************************************/


#ifndef BAXTER__HPP
#define BAXTER__HPP

#include <iostream>
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

    using Eigen::Vector3d;


    //joint vector
    using Vector7d = Eigen::Matrix<double, 7, 1>;
    using Matrix_3_7_d = Eigen::Matrix<double, 3, 7>;

    using std::cos;
    using std::sin;


    /**
     * @brief 
     * 
     */
    class Baxter
    {
    private:

    public:
        double L, h, H, L0, L1, L2, L3, L4, L5, L6;
        Vector7d q_max;
        Vector7d q_min;
        Vector7d q_neutral; 
        Baxter(void);
        const void print_all(void);
        std::array<Vector3d, 2> static_os;
        std::array<Vector3d, 2> static_rxs;
        std::array<Vector3d, 2> static_rys;
        std::array<Vector3d, 2> static_rzs;
        std::array<Matrix_3_7_d, 2> static_jos;
        std::array<Matrix_3_7_d, 2> static_jrxs;
        std::array<Matrix_3_7_d, 2> static_jrys;
        std::array<Matrix_3_7_d, 2> static_jrzs;
        std::array<Matrix_3_7_d, 2> static_jo_dots;
        std::array<Matrix_3_7_d, 2> static_jrx_dots;
        std::array<Matrix_3_7_d, 2> static_jry_dots;
        std::array<Matrix_3_7_d, 2> static_jrz_dots;

        std::array<Vector3d, 7> os;
        std::array<Vector3d, 7> rxs;
        std::array<Vector3d, 7> rys;
        std::array<Vector3d, 7> rzs;
        std::array<Matrix_3_7_d, 7> jos;
        std::array<Matrix_3_7_d, 7> jrxs;
        std::array<Matrix_3_7_d, 7> jrys;
        std::array<Matrix_3_7_d, 7> jrzs;
        std::array<Matrix_3_7_d, 7> jo_dots;
        std::array<Matrix_3_7_d, 7> jrx_dots;
        std::array<Matrix_3_7_d, 7> jry_dots;
        std::array<Matrix_3_7_d, 7> jrz_dots;

        Vector3d o_ee;
        Vector3d rx_ee;
        Vector3d ry_ee;
        Vector3d rz_ee;
        Matrix_3_7_d jo_ee;
        Matrix_3_7_d jrx_ee;
        Matrix_3_7_d jry_ee;
        Matrix_3_7_d jrz_ee;
        Matrix_3_7_d jo_dot_ee;
        Matrix_3_7_d jrx_dot_ee;
        Matrix_3_7_d jry_dot_ee;
        Matrix_3_7_d jrz_dot_ee;

        void calc_all(const Vector7d& q, const Vector7d& q_dot);

        void Rx_W0(const Vector7d& q, Vector3d& out);
        void Rx_BR(const Vector7d& q, Vector3d& out);
        void Rx_0(const Vector7d& q, Vector3d& out);
        void Rx_1(const Vector7d& q, Vector3d& out);
        void Rx_2(const Vector7d& q, Vector3d& out);
        void Rx_3(const Vector7d& q, Vector3d& out);
        void Rx_4(const Vector7d& q, Vector3d& out);
        void Rx_5(const Vector7d& q, Vector3d& out);
        void Rx_6(const Vector7d& q, Vector3d& out);
        void Rx_ee(const Vector7d& q, Vector3d& out);

        void Ry_W0(const Vector7d& q, Vector3d& out);
        void Ry_BR(const Vector7d& q, Vector3d& out);
        void Ry_0(const Vector7d& q, Vector3d& out);
        void Ry_1(const Vector7d& q, Vector3d& out);
        void Ry_2(const Vector7d& q, Vector3d& out);
        void Ry_3(const Vector7d& q, Vector3d& out);
        void Ry_4(const Vector7d& q, Vector3d& out);
        void Ry_5(const Vector7d& q, Vector3d& out);
        void Ry_6(const Vector7d& q, Vector3d& out);
        void Ry_ee(const Vector7d& q, Vector3d& out);

        void Rz_W0(const Vector7d& q, Vector3d& out);
        void Rz_BR(const Vector7d& q, Vector3d& out);
        void Rz_0(const Vector7d& q, Vector3d& out);
        void Rz_1(const Vector7d& q, Vector3d& out);
        void Rz_2(const Vector7d& q, Vector3d& out);
        void Rz_3(const Vector7d& q, Vector3d& out);
        void Rz_4(const Vector7d& q, Vector3d& out);
        void Rz_5(const Vector7d& q, Vector3d& out);
        void Rz_6(const Vector7d& q, Vector3d& out);
        void Rz_ee(const Vector7d& q, Vector3d& out);

        void phi_W0(const Vector7d& q, Vector3d& out);
        void phi_BR(const Vector7d& q, Vector3d& out);
        void phi_0(const Vector7d& q, Vector3d& out);
        void phi_1(const Vector7d& q, Vector3d& out);
        void phi_2(const Vector7d& q, Vector3d& out);
        void phi_3(const Vector7d& q, Vector3d& out);
        void phi_4(const Vector7d& q, Vector3d& out);
        void phi_5(const Vector7d& q, Vector3d& out);
        void phi_6(const Vector7d& q, Vector3d& out);
        void phi_ee(const Vector7d& q, Vector3d& out);

        void JRx_W0(const Vector7d& q, Matrix_3_7_d& out);
        void JRx_BR(const Vector7d& q, Matrix_3_7_d& out);
        void JRx_0(const Vector7d& q, Matrix_3_7_d& out);
        void JRx_1(const Vector7d& q, Matrix_3_7_d& out);
        void JRx_2(const Vector7d& q, Matrix_3_7_d& out);
        void JRx_3(const Vector7d& q, Matrix_3_7_d& out);
        void JRx_4(const Vector7d& q, Matrix_3_7_d& out);
        void JRx_5(const Vector7d& q, Matrix_3_7_d& out);
        void JRx_6(const Vector7d& q, Matrix_3_7_d& out);
        void JRx_ee(const Vector7d& q, Matrix_3_7_d& out);

        void JRy_W0(const Vector7d& q, Matrix_3_7_d& out);
        void JRy_BR(const Vector7d& q, Matrix_3_7_d& out);
        void JRy_0(const Vector7d& q, Matrix_3_7_d& out);
        void JRy_1(const Vector7d& q, Matrix_3_7_d& out);
        void JRy_2(const Vector7d& q, Matrix_3_7_d& out);
        void JRy_3(const Vector7d& q, Matrix_3_7_d& out);
        void JRy_4(const Vector7d& q, Matrix_3_7_d& out);
        void JRy_5(const Vector7d& q, Matrix_3_7_d& out);
        void JRy_6(const Vector7d& q, Matrix_3_7_d& out);
        void JRy_ee(const Vector7d& q, Matrix_3_7_d& out);

        void JRz_W0(const Vector7d& q, Matrix_3_7_d& out);
        void JRz_BR(const Vector7d& q, Matrix_3_7_d& out);
        void JRz_0(const Vector7d& q, Matrix_3_7_d& out);
        void JRz_1(const Vector7d& q, Matrix_3_7_d& out);
        void JRz_2(const Vector7d& q, Matrix_3_7_d& out);
        void JRz_3(const Vector7d& q, Matrix_3_7_d& out);
        void JRz_4(const Vector7d& q, Matrix_3_7_d& out);
        void JRz_5(const Vector7d& q, Matrix_3_7_d& out);
        void JRz_6(const Vector7d& q, Matrix_3_7_d& out);
        void JRz_ee(const Vector7d& q, Matrix_3_7_d& out);

        void Jo_W0(const Vector7d& q, Matrix_3_7_d& out);
        void Jo_BR(const Vector7d& q, Matrix_3_7_d& out);
        void Jo_0(const Vector7d& q, Matrix_3_7_d& out);
        void Jo_1(const Vector7d& q, Matrix_3_7_d& out);
        void Jo_2(const Vector7d& q, Matrix_3_7_d& out);
        void Jo_3(const Vector7d& q, Matrix_3_7_d& out);
        void Jo_4(const Vector7d& q, Matrix_3_7_d& out);
        void Jo_5(const Vector7d& q, Matrix_3_7_d& out);
        void Jo_6(const Vector7d& q, Matrix_3_7_d& out);
        void Jo_ee(const Vector7d& q, Matrix_3_7_d& out);

        void JRx_dot_W0(const Vector7d& dq, const Vector7d& q, Matrix_3_7_d& out);
        void JRx_dot_BR(const Vector7d& dq, const Vector7d& q, Matrix_3_7_d& out);
        void JRx_dot_0(const Vector7d& dq, const Vector7d& q, Matrix_3_7_d& out);
        void JRx_dot_1(const Vector7d& dq, const Vector7d& q, Matrix_3_7_d& out);
        void JRx_dot_2(const Vector7d& dq, const Vector7d& q, Matrix_3_7_d& out);
        void JRx_dot_3(const Vector7d& dq, const Vector7d& q, Matrix_3_7_d& out);
        void JRx_dot_4(const Vector7d& dq, const Vector7d& q, Matrix_3_7_d& out);
        void JRx_dot_5(const Vector7d& dq, const Vector7d& q, Matrix_3_7_d& out);
        void JRx_dot_6(const Vector7d& dq, const Vector7d& q, Matrix_3_7_d& out);
        void JRx_dot_ee(const Vector7d& dq, const Vector7d& q, Matrix_3_7_d& out);

        void JRy_dot_W0(const Vector7d& dq, const Vector7d& q, Matrix_3_7_d& out);
        void JRy_dot_BR(const Vector7d& dq, const Vector7d& q, Matrix_3_7_d& out);
        void JRy_dot_0(const Vector7d& dq, const Vector7d& q, Matrix_3_7_d& out);
        void JRy_dot_1(const Vector7d& dq, const Vector7d& q, Matrix_3_7_d& out);
        void JRy_dot_2(const Vector7d& dq, const Vector7d& q, Matrix_3_7_d& out);
        void JRy_dot_3(const Vector7d& dq, const Vector7d& q, Matrix_3_7_d& out);
        void JRy_dot_4(const Vector7d& dq, const Vector7d& q, Matrix_3_7_d& out);
        void JRy_dot_5(const Vector7d& dq, const Vector7d& q, Matrix_3_7_d& out);
        void JRy_dot_6(const Vector7d& dq, const Vector7d& q, Matrix_3_7_d& out);
        void JRy_dot_ee(const Vector7d& dq, const Vector7d& q, Matrix_3_7_d& out);

        void JRz_dot_W0(const Vector7d& dq, const Vector7d& q, Matrix_3_7_d& out);
        void JRz_dot_BR(const Vector7d& dq, const Vector7d& q, Matrix_3_7_d& out);
        void JRz_dot_0(const Vector7d& dq, const Vector7d& q, Matrix_3_7_d& out);
        void JRz_dot_1(const Vector7d& dq, const Vector7d& q, Matrix_3_7_d& out);
        void JRz_dot_2(const Vector7d& dq, const Vector7d& q, Matrix_3_7_d& out);
        void JRz_dot_3(const Vector7d& dq, const Vector7d& q, Matrix_3_7_d& out);
        void JRz_dot_4(const Vector7d& dq, const Vector7d& q, Matrix_3_7_d& out);
        void JRz_dot_5(const Vector7d& dq, const Vector7d& q, Matrix_3_7_d& out);
        void JRz_dot_6(const Vector7d& dq, const Vector7d& q, Matrix_3_7_d& out);
        void JRz_dot_ee(const Vector7d& dq, const Vector7d& q, Matrix_3_7_d& out);

        void Jo_dot_W0(const Vector7d& dq, const Vector7d& q, Matrix_3_7_d& out);
        void Jo_dot_BR(const Vector7d& dq, const Vector7d& q, Matrix_3_7_d& out);
        void Jo_dot_0(const Vector7d& dq, const Vector7d& q, Matrix_3_7_d& out);
        void Jo_dot_1(const Vector7d& dq, const Vector7d& q, Matrix_3_7_d& out);
        void Jo_dot_2(const Vector7d& dq, const Vector7d& q, Matrix_3_7_d& out);
        void Jo_dot_3(const Vector7d& dq, const Vector7d& q, Matrix_3_7_d& out);
        void Jo_dot_4(const Vector7d& dq, const Vector7d& q, Matrix_3_7_d& out);
        void Jo_dot_5(const Vector7d& dq, const Vector7d& q, Matrix_3_7_d& out);
        void Jo_dot_6(const Vector7d& dq, const Vector7d& q, Matrix_3_7_d& out);
        void Jo_dot_ee(const Vector7d& dq, const Vector7d& q, Matrix_3_7_d& out);


    };

};
#endif

