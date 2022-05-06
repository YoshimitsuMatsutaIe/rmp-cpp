#ifndef BAXTER_HPP
#define BAXTER_HPP

#include<eigen3/Eigen/Core>

#include <vector>

#include "../../include/mappings.hpp"

namespace baxter
{
    using std::vector;
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
    static const double R = 0.05;  // 腕の太さの基準．不明

    vector<double> Q_NEUTRAL = {
        0.0, -31.0*M_PI/180, 0.0, 43.0*M_PI/180, 0.0, 72.0*M_PI/180, 0.0
    };
    vector<double> Q_MAX = {
        51.0*M_PI/180, 60.0*M_PI/180, 173.0*M_PI/180, 150.0*M_PI/180, 175.0*M_PI/180, 120.0*M_PI/180, 175.0*M_PI/180
    };
    vector<double> Q_MIN = {
        -141.0*M_PI/180, -123.0*M_PI/180, -173.0*M_PI/180, -3.0*M_PI/180, -175.0*M_PI/180, -90.0*M_PI/180, -175.0*M_PI/180
    };


    vector<vector<double>> r_bars_0{
        {0, L1/2, -L0/2, 1},
        {0, -L1/2, -L0/2, 1},
        {L1/2, 0, -L0/2, 1},
        {-L1/2, 0, -L0/2, 1}
    };
    vector<vector<double>> r_bars_1{
        {0, 0, L3/2, 1},
        {0, 0, -L3/2, 1}
    };
    vector<vector<double>> r_bars_2{
        {0, L3/2, -L2*2/3, 1},
        {0, -L3/2, -L2*2/3, 1},
        {L3/2, 0, -L2*2/3, 1},
        {-L3/2, 0, -L2*2/3, 1},
        {0, L3/2, -L2*1/3, 1},
        {0, -L3/2, -L2*1/3, 1},
        {L3/2, 0, -L2*1/3, 1},
        {-L3/2, 0, -L2*1/3, 1}
    };
    vector<vector<double>> r_bars_3{
        {0, 0, L3/2, 1},
        {0, 0, -L3/2, 1}
    };
    vector<vector<double>> r_bars_4{
        {0, R/2, -L4/3, 1},
        {0, -R/2, -L4/3, 1},
        {R/2, 0, -L4/3, 1},
        {-R/2, 0, -L4/3, 1},
        {0, R/2, -L4/3*2, 1},
        {0, -R/2, -L4/3*2, 1},
        {R/2, 0, -L4/3*2, 1},
        {-R/2, 0, -L4/3*2, 1}
    };
    vector<vector<double>> r_bars_5{
        {0, 0, L5/2, 1},
        {0, 0, -L5/2, 1}
    };
    vector<vector<double>> r_bars_6{
        {0, R/2, L6/2, 1},
        {0, -R/2, L6/2, 1},
        {R/2, 0, L6/2, 1},
        {-R/2, 0, L6/2, 1}
    };
    vector<vector<double>> r_bars_ee{
        {0, 0, 0, 1}
    };

    static vector<vector<vector<double>>> R_BARS_ALL{
        r_bars_0, r_bars_1, r_bars_2, r_bars_3, r_bars_4, r_bars_5, r_bars_6, r_bars_ee
    };

    void o_W0(const VectorXd& q, VectorXd& out);
    void o_BR(const VectorXd& q, VectorXd& out);
    void o_0(const VectorXd& q, VectorXd& out);
    void o_1(const VectorXd& q, VectorXd& out);
    void o_2(const VectorXd& q, VectorXd& out);
    void o_3(const VectorXd& q, VectorXd& out);
    void o_4(const VectorXd& q, VectorXd& out);
    void o_5(const VectorXd& q, VectorXd& out);
    void o_6(const VectorXd& q, VectorXd& out);
    void o_ee(const VectorXd& q, VectorXd& out);
    void rx_W0(const VectorXd& q, VectorXd& out);
    void rx_BR(const VectorXd& q, VectorXd& out);
    void rx_0(const VectorXd& q, VectorXd& out);
    void rx_1(const VectorXd& q, VectorXd& out);
    void rx_2(const VectorXd& q, VectorXd& out);
    void rx_3(const VectorXd& q, VectorXd& out);
    void rx_4(const VectorXd& q, VectorXd& out);
    void rx_5(const VectorXd& q, VectorXd& out);
    void rx_6(const VectorXd& q, VectorXd& out);
    void rx_ee(const VectorXd& q, VectorXd& out);
    void ry_W0(const VectorXd& q, VectorXd& out);
    void ry_BR(const VectorXd& q, VectorXd& out);
    void ry_0(const VectorXd& q, VectorXd& out);
    void ry_1(const VectorXd& q, VectorXd& out);
    void ry_2(const VectorXd& q, VectorXd& out);
    void ry_3(const VectorXd& q, VectorXd& out);
    void ry_4(const VectorXd& q, VectorXd& out);
    void ry_5(const VectorXd& q, VectorXd& out);
    void ry_6(const VectorXd& q, VectorXd& out);
    void ry_ee(const VectorXd& q, VectorXd& out);
    void rz_W0(const VectorXd& q, VectorXd& out);
    void rz_BR(const VectorXd& q, VectorXd& out);
    void rz_0(const VectorXd& q, VectorXd& out);
    void rz_1(const VectorXd& q, VectorXd& out);
    void rz_2(const VectorXd& q, VectorXd& out);
    void rz_3(const VectorXd& q, VectorXd& out);
    void rz_4(const VectorXd& q, VectorXd& out);
    void rz_5(const VectorXd& q, VectorXd& out);
    void rz_6(const VectorXd& q, VectorXd& out);
    void rz_ee(const VectorXd& q, VectorXd& out);
    void jo_W0(const VectorXd& q, MatrixXd& out);
    void jo_BR(const VectorXd& q, MatrixXd& out);
    void jo_0(const VectorXd& q, MatrixXd& out);
    void jo_1(const VectorXd& q, MatrixXd& out);
    void jo_2(const VectorXd& q, MatrixXd& out);
    void jo_3(const VectorXd& q, MatrixXd& out);
    void jo_4(const VectorXd& q, MatrixXd& out);
    void jo_5(const VectorXd& q, MatrixXd& out);
    void jo_6(const VectorXd& q, MatrixXd& out);
    void jo_ee(const VectorXd& q, MatrixXd& out);
    void jrx_W0(const VectorXd& q, MatrixXd& out);
    void jrx_BR(const VectorXd& q, MatrixXd& out);
    void jrx_0(const VectorXd& q, MatrixXd& out);
    void jrx_1(const VectorXd& q, MatrixXd& out);
    void jrx_2(const VectorXd& q, MatrixXd& out);
    void jrx_3(const VectorXd& q, MatrixXd& out);
    void jrx_4(const VectorXd& q, MatrixXd& out);
    void jrx_5(const VectorXd& q, MatrixXd& out);
    void jrx_6(const VectorXd& q, MatrixXd& out);
    void jrx_ee(const VectorXd& q, MatrixXd& out);
    void jry_W0(const VectorXd& q, MatrixXd& out);
    void jry_BR(const VectorXd& q, MatrixXd& out);
    void jry_0(const VectorXd& q, MatrixXd& out);
    void jry_1(const VectorXd& q, MatrixXd& out);
    void jry_2(const VectorXd& q, MatrixXd& out);
    void jry_3(const VectorXd& q, MatrixXd& out);
    void jry_4(const VectorXd& q, MatrixXd& out);
    void jry_5(const VectorXd& q, MatrixXd& out);
    void jry_6(const VectorXd& q, MatrixXd& out);
    void jry_ee(const VectorXd& q, MatrixXd& out);
    void jrz_W0(const VectorXd& q, MatrixXd& out);
    void jrz_BR(const VectorXd& q, MatrixXd& out);
    void jrz_0(const VectorXd& q, MatrixXd& out);
    void jrz_1(const VectorXd& q, MatrixXd& out);
    void jrz_2(const VectorXd& q, MatrixXd& out);
    void jrz_3(const VectorXd& q, MatrixXd& out);
    void jrz_4(const VectorXd& q, MatrixXd& out);
    void jrz_5(const VectorXd& q, MatrixXd& out);
    void jrz_6(const VectorXd& q, MatrixXd& out);
    void jrz_ee(const VectorXd& q, MatrixXd& out);
    void jo_W0_dot(const VectorXd& q, const VectorXd& q_dot, MatrixXd& out);
    void jo_BR_dot(const VectorXd& q, const VectorXd& q_dot, MatrixXd& out);
    void jo_0_dot(const VectorXd& q, const VectorXd& q_dot, MatrixXd& out);
    void jo_1_dot(const VectorXd& q, const VectorXd& q_dot, MatrixXd& out);
    void jo_2_dot(const VectorXd& q, const VectorXd& q_dot, MatrixXd& out);
    void jo_3_dot(const VectorXd& q, const VectorXd& q_dot, MatrixXd& out);
    void jo_4_dot(const VectorXd& q, const VectorXd& q_dot, MatrixXd& out);
    void jo_5_dot(const VectorXd& q, const VectorXd& q_dot, MatrixXd& out);
    void jo_6_dot(const VectorXd& q, const VectorXd& q_dot, MatrixXd& out);
    void jo_ee_dot(const VectorXd& q, const VectorXd& q_dot, MatrixXd& out);
    void jrx_W0_dot(const VectorXd& q, const VectorXd& q_dot, MatrixXd& out);
    void jrx_BR_dot(const VectorXd& q, const VectorXd& q_dot, MatrixXd& out);
    void jrx_0_dot(const VectorXd& q, const VectorXd& q_dot, MatrixXd& out);
    void jrx_1_dot(const VectorXd& q, const VectorXd& q_dot, MatrixXd& out);
    void jrx_2_dot(const VectorXd& q, const VectorXd& q_dot, MatrixXd& out);
    void jrx_3_dot(const VectorXd& q, const VectorXd& q_dot, MatrixXd& out);
    void jrx_4_dot(const VectorXd& q, const VectorXd& q_dot, MatrixXd& out);
    void jrx_5_dot(const VectorXd& q, const VectorXd& q_dot, MatrixXd& out);
    void jrx_6_dot(const VectorXd& q, const VectorXd& q_dot, MatrixXd& out);
    void jrx_ee_dot(const VectorXd& q, const VectorXd& q_dot, MatrixXd& out);
    void jry_W0_dot(const VectorXd& q, const VectorXd& q_dot, MatrixXd& out);
    void jry_BR_dot(const VectorXd& q, const VectorXd& q_dot, MatrixXd& out);
    void jry_0_dot(const VectorXd& q, const VectorXd& q_dot, MatrixXd& out);
    void jry_1_dot(const VectorXd& q, const VectorXd& q_dot, MatrixXd& out);
    void jry_2_dot(const VectorXd& q, const VectorXd& q_dot, MatrixXd& out);
    void jry_3_dot(const VectorXd& q, const VectorXd& q_dot, MatrixXd& out);
    void jry_4_dot(const VectorXd& q, const VectorXd& q_dot, MatrixXd& out);
    void jry_5_dot(const VectorXd& q, const VectorXd& q_dot, MatrixXd& out);
    void jry_6_dot(const VectorXd& q, const VectorXd& q_dot, MatrixXd& out);
    void jry_ee_dot(const VectorXd& q, const VectorXd& q_dot, MatrixXd& out);
    void jrz_W0_dot(const VectorXd& q, const VectorXd& q_dot, MatrixXd& out);
    void jrz_BR_dot(const VectorXd& q, const VectorXd& q_dot, MatrixXd& out);
    void jrz_0_dot(const VectorXd& q, const VectorXd& q_dot, MatrixXd& out);
    void jrz_1_dot(const VectorXd& q, const VectorXd& q_dot, MatrixXd& out);
    void jrz_2_dot(const VectorXd& q, const VectorXd& q_dot, MatrixXd& out);
    void jrz_3_dot(const VectorXd& q, const VectorXd& q_dot, MatrixXd& out);
    void jrz_4_dot(const VectorXd& q, const VectorXd& q_dot, MatrixXd& out);
    void jrz_5_dot(const VectorXd& q, const VectorXd& q_dot, MatrixXd& out);
    void jrz_6_dot(const VectorXd& q, const VectorXd& q_dot, MatrixXd& out);
    void jrz_ee_dot(const VectorXd& q, const VectorXd& q_dot, MatrixXd& out);



    void htm_W0(const VectorXd& q, MatrixXd& out);
    void htm_BR(const VectorXd& q, MatrixXd& out);
    void htm_0(const VectorXd& q, MatrixXd& out);
    void htm_1(const VectorXd& q, MatrixXd& out);
    void htm_2(const VectorXd& q, MatrixXd& out);
    void htm_3(const VectorXd& q, MatrixXd& out);
    void htm_4(const VectorXd& q, MatrixXd& out);
    void htm_5(const VectorXd& q, MatrixXd& out);
    void htm_6(const VectorXd& q, MatrixXd& out);
    void htm_ee(const VectorXd& q, MatrixXd& out);



    using func_q_vecout = void (*)(const VectorXd&, VectorXd&);
    vector<func_q_vecout> Os =  {&o_0, &o_1, &o_2, &o_3, &o_4, &o_5, &o_6, &o_ee};
    vector<func_q_vecout> RXs = {&rx_0, &rx_1, &rx_2, &rx_3, &rx_4, &rx_5, &rx_6, &rx_ee};
    vector<func_q_vecout> RYs = {&ry_0, &ry_1, &ry_2, &ry_3, &ry_4, &ry_5, &ry_6, &ry_ee};
    vector<func_q_vecout> RZs = {&rz_0, &rz_1, &rz_2, &rz_3, &rz_4, &rz_5, &rz_6, &rz_ee};


    using func_q_matout = void (*)(const VectorXd&, MatrixXd&);
    vector<func_q_matout> HTMs = {&htm_0, &htm_1, &htm_2, &htm_3, &htm_4, &htm_5, &htm_6, &htm_ee};
    vector<func_q_matout> JOs =  {&jo_0, &jo_1, &jo_2, &jo_3, &jo_4, &jo_5, &jo_6, &jo_ee};
    vector<func_q_matout> JRXs = {&jrx_0, &jrx_1, &jrx_2, &jrx_3, &jrx_4, &jrx_5, &jrx_6, &jrx_ee};
    vector<func_q_matout> JRYs = {&jry_0, &jry_1, &jry_2, &jry_3, &jry_4, &jry_5, &jry_6, &jry_ee};
    vector<func_q_matout> JRZs = {&jrz_0, &jrz_1, &jrz_2, &jrz_3, &jrz_4, &jrz_5, &jrz_6, &jrz_ee};

    using func_q_dq_matout = void (*)(const VectorXd&, const VectorXd&, MatrixXd&);
    vector<func_q_dq_matout> JOs_dot =  {&jo_0_dot, &jo_1_dot, &jo_2_dot, &jo_3_dot, &jo_4_dot, &jo_5_dot, &jo_6_dot, &jo_ee_dot};
    vector<func_q_dq_matout> JRXs_dot = {&jrx_0_dot, &jrx_1_dot, &jrx_2_dot, &jrx_3_dot, &jrx_4_dot, &jrx_5_dot, &jrx_6_dot, &jrx_ee_dot};
    vector<func_q_dq_matout> JRYs_dot = {&jry_0_dot, &jry_1_dot, &jry_2_dot, &jry_3_dot, &jry_4_dot, &jry_5_dot, &jry_6_dot, &jry_ee_dot};
    vector<func_q_dq_matout> JRZs_dot = {&jrz_0_dot, &jrz_1_dot, &jrz_2_dot, &jrz_3_dot, &jrz_4_dot, &jrz_5_dot, &jrz_6_dot, &jrz_ee_dot};


    class Control_Point : public mapping_base::Identity
    {
    private:
        VectorXd r_bar;
        func_q_matout calc_htm;
        func_q_matout calc_jo;
        func_q_matout calc_jrx;
        func_q_matout calc_jry;
        func_q_matout calc_jrz;
        func_q_dq_matout calc_jo_dot;
        func_q_dq_matout calc_jrx_dot;
        func_q_dq_matout calc_jry_dot;
        func_q_dq_matout calc_jrz_dot;

        MatrixXd htm;
        MatrixXd jo;
        MatrixXd jrx;
        MatrixXd jry;
        MatrixXd jrz;
        MatrixXd jo_dot;
        MatrixXd jrx_dot;
        MatrixXd jry_dot;
        MatrixXd jrz_dot;

    public:
        Control_Point(int frame, int index);
        void phi(const VectorXd &q, VectorXd &out) override;
        void jacobian(const VectorXd &q, MatrixXd &out) override;
        void jacobian_dot(const VectorXd &q, const VectorXd &q_dot, MatrixXd &out) override;
    };

};
#endif