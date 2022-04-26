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

/**
 * @brief バクスター関係
 * 
 */
namespace baxter
{
    using std::cos;
    using std::sin;

    void Rx_W0(double *out);
    void Rx_BR(double *out);
    void Rx_0(double *q, double *out);
    void Rx_1(double *q, double *out);
    void Rx_2(double *q, double *out);
    void Rx_3(double *q, double *out);
    void Rx_4(double *q, double *out);
    void Rx_5(double *q, double *out);
    void Rx_6(double *q, double *out);
    void Rx_ee(double *q, double *out_5464674584903591323);

    void Ry_W0(double *out_4073745579097218488);
    void Ry_BR(double *out_4073745579097218488);
    void Ry_0(double *q, double *out);
    void Ry_1(double *q, double *out);
    void Ry_2(double *q, double *out);
    void Ry_3(double *q, double *out);
    void Ry_4(double *q, double *out);
    void Ry_5(double *q, double *out);
    void Ry_6(double *q, double *out);
    void Ry_ee(double *q, double *out_5464674584903591323);

    void Rz_W0(double *out_4073745579097218488);
    void Rz_BR(double *out_4073745579097218488);
    void Rz_0(double *q, double *out);
    void Rz_1(double *q, double *out);
    void Rz_2(double *q, double *out);
    void Rz_3(double *q, double *out);
    void Rz_4(double *q, double *out);
    void Rz_5(double *q, double *out);
    void Rz_6(double *q, double *out);
    void Rz_ee(double *q, double *out_5464674584903591323);

    void phi_W0(double H, double L, double h, double *out);
    void phi_BR(double H, double L, double L0, double h, double *out);
    void phi_0(double H, double L, double L0, double h, double *out);
    void phi_1(double H, double L, double L0, double L1, double h, double *q, double *out);
    void phi_2(double H, double L, double L0, double L1, double L2, double h, double *q, double *out);
    void phi_3(double H, double L, double L0, double L1, double L2, double L3, double h, double *q, double *out_4426068935170423273);
    void phi_4(double H, double L, double L0, double L1, double L2, double L3, double L4, double h, double *q, double *out_3501485789089808471);
    void phi_5(double H, double L, double L0, double L1, double L2, double L3, double L4, double L5, double h, double *q, double *out_959321617727542820);
    void phi_6(double H, double L, double L0, double L1, double L2, double L3, double L4, double L5, double h, double *q, double *out_959321617727542820);
    void phi_ee(double H, double L, double L0, double L1, double L2, double L3, double L4, double L5, double L6, double h, double *q, double *out_8671931335566817116);
    void JRx_W0(double *out);
    void JRx_BR(double *out);
    void JRx_0(double *q, double *out);
    void JRx_1(double *q, double *out);
    void JRx_2(double *q, double *out);
    void JRx_3(double *q, double *out);
    void JRx_4(double *q, double *out);
    void JRx_5(double *q, double *out);
    void JRx_6(double *q, double *out);
    void JRx_ee(double *q, double *out_7293199710271101292);
    void JRy_W0(double *out);
    void JRy_BR(double *out);
    void JRy_0(double *q, double *out);
    void JRy_1(double *q, double *out);
    void JRy_2(double *q, double *out);
    void JRy_3(double *q, double *out);
    void JRy_4(double *q, double *out);
    void JRy_5(double *q, double *out);
    void JRy_6(double *q, double *out);
    void JRy_ee(double *q, double *out);
    void JRz_W0(double *out);
    void JRz_BR(double *out);
    void JRz_0(double *out);
    void JRz_1(double *q, double *out);
    void JRz_2(double *q, double *out);
    void JRz_3(double *q, double *out);
    void JRz_4(double *q, double *out);
    void JRz_5(double *q, double *out);
    void JRz_6(double *q, double *out);
    void JRz_ee(double *q, double *out_5238212238148511478);
    void Jo_W0(double *out);
    void Jo_BR(double *out);
    void Jo_0(double *out);
    void Jo_1(double L1, double *q, double *out_1320776834828809369);
    void Jo_2(double L1, double L2, double *q, double *out_9172016387374046643);
    void Jo_3(double L1, double L2, double L3, double *q, double *out_1717051972807094754);
    void Jo_4(double L1, double L2, double L3, double L4, double *q, double *out_2323389054714775258);
    void Jo_5(double L1, double L2, double L3, double L4, double L5, double *q, double *out_7406736178574535206);
    void Jo_6(double L1, double L2, double L3, double L4, double L5, double *q, double *out_7406736178574535206);
    void Jo_ee(double L1, double L2, double L3, double L4, double L5, double L6, double *q, double *out_161451432710629729);
    void JRx_dot_W0(double *out);
    void JRx_dot_BR(double *out);
    void JRx_dot_0(double *dq, double *q, double *out);
    void JRx_dot_1(double *dq, double *q, double *out);
    void JRx_dot_2(double *dq, double *q, double *out);
    void JRx_dot_3(double *dq, double *q, double *out);
    void JRx_dot_4(double *dq, double *q, double *out_883452857400907236);
    void JRx_dot_5(double *dq, double *q, double *out);
    void JRx_dot_6(double *dq, double *q, double *out);
    void JRx_dot_ee(double *dq, double *q, double *out_4563030442133424121);
    void JRy_dot_W0(double *out);
    void JRy_dot_BR(double *out);
    void JRy_dot_0(double *dq, double *q, double *out);
    void JRy_dot_1(double *dq, double *q, double *out);
    void JRy_dot_2(double *dq, double *q, double *out);
    void JRy_dot_3(double *dq, double *q, double *out_370712822070884613);
    void JRy_dot_4(double *dq, double *q, double *out);
    void JRy_dot_5(double *dq, double *q, double *out);
    void JRy_dot_6(double *dq, double *q, double *out_552087226413428888);
    void JRy_dot_ee(double *dq, double *q, double *out_552087226413428888);
    void JRz_dot_W0(double *out);
    void JRz_dot_BR(double *out);
    void JRz_dot_0(double *out_5737084283969503882);
    void JRz_dot_1(double *dq, double *q, double *out);
    void JRz_dot_2(double *dq, double *q, double *out);
    void JRz_dot_3(double *dq, double *q, double *out);
    void JRz_dot_4(double *dq, double *q, double *out);
    void JRz_dot_5(double *dq, double *q, double *out);
    void JRz_dot_6(double *dq, double *q, double *out);
    void JRz_dot_ee(double *dq, double *q, double *out_6844000671886751470);
    void Jo_dot_W0(double *out);
    void Jo_dot_BR(double *out);
    void Jo_dot_0(double *out);
    void Jo_dot_1(double L1, double *dq, double *q, double *out_6770014790615472501);
    void Jo_dot_2(double L1, double L2, double *dq, double *q, double *out_8189675336619972739);
    void Jo_dot_3(double L1, double L2, double L3, double *dq, double *q, double *out_3545977738159695851);
    void Jo_dot_4(double L1, double L2, double L3, double L4, double *dq, double *q, double *out_5387426098267817562);
    void Jo_dot_5(double L1, double L2, double L3, double L4, double L5, double *dq, double *q, double *out_6421492231831610488);
    void Jo_dot_6(double L1, double L2, double L3, double L4, double L5, double *dq, double *q, double *out_6421492231831610488);
    void Jo_dot_ee(double L1, double L2, double L3, double L4, double L5, double L6, double *dq, double *q, double *out_4965078137243261459);


};
#endif

