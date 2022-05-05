#include "o_W0.hpp"
#include "o_BR.hpp"
#include "o_0.hpp"
#include "o_1.hpp"
#include "o_2.hpp"
#include "o_3.hpp"
#include "o_4.hpp"
#include "o_5.hpp"
#include "o_6.hpp"
#include "o_ee.hpp"
#include "rx_W0.hpp"
#include "rx_BR.hpp"
#include "rx_0.hpp"
#include "rx_1.hpp"
#include "rx_2.hpp"
#include "rx_3.hpp"
#include "rx_4.hpp"
#include "rx_5.hpp"
#include "rx_6.hpp"
#include "rx_ee.hpp"
#include "ry_W0.hpp"
#include "ry_BR.hpp"
#include "ry_0.hpp"
#include "ry_1.hpp"
#include "ry_2.hpp"
#include "ry_3.hpp"
#include "ry_4.hpp"
#include "ry_5.hpp"
#include "ry_6.hpp"
#include "ry_ee.hpp"
#include "rz_W0.hpp"
#include "rz_BR.hpp"
#include "rz_0.hpp"
#include "rz_1.hpp"
#include "rz_2.hpp"
#include "rz_3.hpp"
#include "rz_4.hpp"
#include "rz_5.hpp"
#include "rz_6.hpp"
#include "rz_ee.hpp"
#include "jo_W0.hpp"
#include "jo_BR.hpp"
#include "jo_0.hpp"
#include "jo_1.hpp"
#include "jo_2.hpp"
#include "jo_3.hpp"
#include "jo_4.hpp"
#include "jo_5.hpp"
#include "jo_6.hpp"
#include "jo_ee.hpp"
#include "jrx_W0.hpp"
#include "jrx_BR.hpp"
#include "jrx_0.hpp"
#include "jrx_1.hpp"
#include "jrx_2.hpp"
#include "jrx_3.hpp"
#include "jrx_4.hpp"
#include "jrx_5.hpp"
#include "jrx_6.hpp"
#include "jrx_ee.hpp"
#include "jry_W0.hpp"
#include "jry_BR.hpp"
#include "jry_0.hpp"
#include "jry_1.hpp"
#include "jry_2.hpp"
#include "jry_3.hpp"
#include "jry_4.hpp"
#include "jry_5.hpp"
#include "jry_6.hpp"
#include "jry_ee.hpp"
#include "jrz_W0.hpp"
#include "jrz_BR.hpp"
#include "jrz_0.hpp"
#include "jrz_1.hpp"
#include "jrz_2.hpp"
#include "jrz_3.hpp"
#include "jrz_4.hpp"
#include "jrz_5.hpp"
#include "jrz_6.hpp"
#include "jrz_ee.hpp"
#include "jo_W0_dot.hpp"
#include "jo_BR_dot.hpp"
#include "jo_0_dot.hpp"
#include "jo_1_dot.hpp"
#include "jo_2_dot.hpp"
#include "jo_3_dot.hpp"
#include "jo_4_dot.hpp"
#include "jo_5_dot.hpp"
#include "jo_6_dot.hpp"
#include "jo_ee_dot.hpp"
#include "jrx_W0_dot.hpp"
#include "jrx_BR_dot.hpp"
#include "jrx_0_dot.hpp"
#include "jrx_1_dot.hpp"
#include "jrx_2_dot.hpp"
#include "jrx_3_dot.hpp"
#include "jrx_4_dot.hpp"
#include "jrx_5_dot.hpp"
#include "jrx_6_dot.hpp"
#include "jrx_ee_dot.hpp"
#include "jry_W0_dot.hpp"
#include "jry_BR_dot.hpp"
#include "jry_0_dot.hpp"
#include "jry_1_dot.hpp"
#include "jry_2_dot.hpp"
#include "jry_3_dot.hpp"
#include "jry_4_dot.hpp"
#include "jry_5_dot.hpp"
#include "jry_6_dot.hpp"
#include "jry_ee_dot.hpp"
#include "jrz_W0_dot.hpp"
#include "jrz_BR_dot.hpp"
#include "jrz_0_dot.hpp"
#include "jrz_1_dot.hpp"
#include "jrz_2_dot.hpp"
#include "jrz_3_dot.hpp"
#include "jrz_4_dot.hpp"
#include "jrz_5_dot.hpp"
#include "jrz_6_dot.hpp"
#include "jrz_ee_dot.hpp"



#include <eigen3/Eigen/Core>
namespace baxter
{
    using Eigen::VectorXd;
    using Eigen::MatrixXd;

    static const double L = 278e-3;
    static const double h = 64e-3;
    static const double H = 1104e-3;
    static const double L0 = 270.35e-3;
    static const double L1 = 69e-3;
    static const double L2 = 364.35e-3;
    static const double L3 = 69e-3;
    static const double L4 = 374.29e-3;
    static const double L5 = 10e-3;
    static const double L6 = 368.3e-3;

    // void o_W0(const VectorXd& q, VectorXd& out);
    // void o_BR(const VectorXd& q, VectorXd& out);
    // void o_0(const VectorXd& q, VectorXd& out);
    // void o_1(const VectorXd& q, VectorXd& out);
    // void o_2(const VectorXd& q, VectorXd& out);
    // void o_3(const VectorXd& q, VectorXd& out);
    // void o_4(const VectorXd& q, VectorXd& out);
    // void o_5(const VectorXd& q, VectorXd& out);
    // void o_6(const VectorXd& q, VectorXd& out);
    // void o_ee(const VectorXd& q, VectorXd& out);
    // void rx_W0(const VectorXd& q, VectorXd& out);
    // void rx_BR(const VectorXd& q, VectorXd& out);
    // void rx_0(const VectorXd& q, VectorXd& out);
    // void rx_1(const VectorXd& q, VectorXd& out);
    // void rx_2(const VectorXd& q, VectorXd& out);
    // void rx_3(const VectorXd& q, VectorXd& out);
    // void rx_4(const VectorXd& q, VectorXd& out);
    // void rx_5(const VectorXd& q, VectorXd& out);
    // void rx_6(const VectorXd& q, VectorXd& out);
    // void rx_ee(const VectorXd& q, VectorXd& out);
    // void ry_W0(const VectorXd& q, VectorXd& out);
    // void ry_BR(const VectorXd& q, VectorXd& out);
    // void ry_0(const VectorXd& q, VectorXd& out);
    // void ry_1(const VectorXd& q, VectorXd& out);
    // void ry_2(const VectorXd& q, VectorXd& out);
    // void ry_3(const VectorXd& q, VectorXd& out);
    // void ry_4(const VectorXd& q, VectorXd& out);
    // void ry_5(const VectorXd& q, VectorXd& out);
    // void ry_6(const VectorXd& q, VectorXd& out);
    // void ry_ee(const VectorXd& q, VectorXd& out);
    // void jo_W0(const VectorXd& q, MatrixXd& out);
    // void jo_BR(const VectorXd& q, MatrixXd& out);
    // void jo_0(const VectorXd& q, MatrixXd& out);
    // void jo_1(const VectorXd& q, MatrixXd& out);
    // void jo_2(const VectorXd& q, MatrixXd& out);
    // void jo_3(const VectorXd& q, MatrixXd& out);
    // void jo_4(const VectorXd& q, MatrixXd& out);
    // void jo_5(const VectorXd& q, MatrixXd& out);
    // void jo_6(const VectorXd& q, MatrixXd& out);
    // void jo_ee(const VectorXd& q, MatrixXd& out);
    // void jrx_W0(const VectorXd& q, MatrixXd& out);
    // void jrx_BR(const VectorXd& q, MatrixXd& out);
    // void jrx_0(const VectorXd& q, MatrixXd& out);
    // void jrx_1(const VectorXd& q, MatrixXd& out);
    // void jrx_2(const VectorXd& q, MatrixXd& out);
    // void jrx_3(const VectorXd& q, MatrixXd& out);
    // void jrx_4(const VectorXd& q, MatrixXd& out);
    // void jrx_5(const VectorXd& q, MatrixXd& out);
    // void jrx_6(const VectorXd& q, MatrixXd& out);
    // void jrx_ee(const VectorXd& q, MatrixXd& out);
    // void jry_W0(const VectorXd& q, MatrixXd& out);
    // void jry_BR(const VectorXd& q, MatrixXd& out);
    // void jry_0(const VectorXd& q, MatrixXd& out);
    // void jry_1(const VectorXd& q, MatrixXd& out);
    // void jry_2(const VectorXd& q, MatrixXd& out);
    // void jry_3(const VectorXd& q, MatrixXd& out);
    // void jry_4(const VectorXd& q, MatrixXd& out);
    // void jry_5(const VectorXd& q, MatrixXd& out);
    // void jry_6(const VectorXd& q, MatrixXd& out);
    // void jry_ee(const VectorXd& q, MatrixXd& out);
    // void jo_W0_dot(const VectorXd& q, const VectorXd& q_dot, MatrixXd& out);
    // void jo_BR_dot(const VectorXd& q, const VectorXd& q_dot, MatrixXd& out);
    // void jo_0_dot(const VectorXd& q, const VectorXd& q_dot, MatrixXd& out);
    // void jo_1_dot(const VectorXd& q, const VectorXd& q_dot, MatrixXd& out);
    // void jo_2_dot(const VectorXd& q, const VectorXd& q_dot, MatrixXd& out);
    // void jo_3_dot(const VectorXd& q, const VectorXd& q_dot, MatrixXd& out);
    // void jo_4_dot(const VectorXd& q, const VectorXd& q_dot, MatrixXd& out);
    // void jo_5_dot(const VectorXd& q, const VectorXd& q_dot, MatrixXd& out);
    // void jo_6_dot(const VectorXd& q, const VectorXd& q_dot, MatrixXd& out);
    // void jo_ee_dot(const VectorXd& q, const VectorXd& q_dot, MatrixXd& out);
    // void jrx_W0_dot(const VectorXd& q, const VectorXd& q_dot, MatrixXd& out);
    // void jrx_BR_dot(const VectorXd& q, const VectorXd& q_dot, MatrixXd& out);
    // void jrx_0_dot(const VectorXd& q, const VectorXd& q_dot, MatrixXd& out);
    // void jrx_1_dot(const VectorXd& q, const VectorXd& q_dot, MatrixXd& out);
    // void jrx_2_dot(const VectorXd& q, const VectorXd& q_dot, MatrixXd& out);
    // void jrx_3_dot(const VectorXd& q, const VectorXd& q_dot, MatrixXd& out);
    // void jrx_4_dot(const VectorXd& q, const VectorXd& q_dot, MatrixXd& out);
    // void jrx_5_dot(const VectorXd& q, const VectorXd& q_dot, MatrixXd& out);
    // void jrx_6_dot(const VectorXd& q, const VectorXd& q_dot, MatrixXd& out);
    // void jrx_ee_dot(const VectorXd& q, const VectorXd& q_dot, MatrixXd& out);
    // void jry_W0_dot(const VectorXd& q, const VectorXd& q_dot, MatrixXd& out);
    // void jry_BR_dot(const VectorXd& q, const VectorXd& q_dot, MatrixXd& out);
    // void jry_0_dot(const VectorXd& q, const VectorXd& q_dot, MatrixXd& out);
    // void jry_1_dot(const VectorXd& q, const VectorXd& q_dot, MatrixXd& out);
    // void jry_2_dot(const VectorXd& q, const VectorXd& q_dot, MatrixXd& out);
    // void jry_3_dot(const VectorXd& q, const VectorXd& q_dot, MatrixXd& out);
    // void jry_4_dot(const VectorXd& q, const VectorXd& q_dot, MatrixXd& out);
    // void jry_5_dot(const VectorXd& q, const VectorXd& q_dot, MatrixXd& out);
    // void jry_6_dot(const VectorXd& q, const VectorXd& q_dot, MatrixXd& out);
    // void jry_ee_dot(const VectorXd& q, const VectorXd& q_dot, MatrixXd& out);

};