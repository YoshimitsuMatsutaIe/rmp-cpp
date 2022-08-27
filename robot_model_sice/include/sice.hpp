#ifndef SICE__HPP
#define SICE__HPP


#include <eigen3/Eigen/Core>
#include <vector>
#include <tuple>
#include <iostream>

#include "../../include/mappings.hpp"


/**
 * @brief 平面 4-link arm
 * 
 */
namespace sice
{
    using Eigen::VectorXd;
    using Eigen::MatrixXd;
    using std::vector;
    using func_q_vecout = void (*)(const VectorXd&, VectorXd&);
    using func_q_matout = void (*)(const VectorXd&, MatrixXd&);
    using func_q_dq_matout = void (*)(const VectorXd&, const VectorXd&, MatrixXd&);

    class Kinematics
    {
    private:
        static const double l1;
        static const double l2;
        static const double l3;
        static const double l4;
        static void htm(int n, const VectorXd& q, MatrixXd& out);
        static void htm_0(const VectorXd& q, MatrixXd& out);
        static void htm_1(const VectorXd& q, MatrixXd& out);
        static void htm_2(const VectorXd& q, MatrixXd& out);
        static void htm_3(const VectorXd& q, MatrixXd& out);
        static void htm_ee(const VectorXd& q, MatrixXd& out);

        static void o_0(const VectorXd& q, VectorXd& out);
        static void o_1(const VectorXd& q, VectorXd& out);
        static void o_2(const VectorXd& q, VectorXd& out);
        static void o_3(const VectorXd& q, VectorXd& out);
        static void o_ee(const VectorXd& q, VectorXd& out);

        static void rx_0(const VectorXd& q, VectorXd& out);
        static void rx_1(const VectorXd& q, VectorXd& out);
        static void rx_2(const VectorXd& q, VectorXd& out);
        static void rx_3(const VectorXd& q, VectorXd& out);
        static void rx_ee(const VectorXd& q, VectorXd& out);

        static void ry_0(const VectorXd& q, VectorXd& out);
        static void ry_1(const VectorXd& q, VectorXd& out);
        static void ry_2(const VectorXd& q, VectorXd& out);
        static void ry_3(const VectorXd& q, VectorXd& out);
        static void ry_ee(const VectorXd& q, VectorXd& out);

        static void jo_0(const VectorXd& q, MatrixXd& out);
        static void jo_1(const VectorXd& q, MatrixXd& out);
        static void jo_2(const VectorXd& q, MatrixXd& out);
        static void jo_3(const VectorXd& q, MatrixXd& out);
        static void jo_ee(const VectorXd& q, MatrixXd& out);

        static void jrx_0(const VectorXd& q, MatrixXd& out);
        static void jrx_1(const VectorXd& q, MatrixXd& out);
        static void jrx_2(const VectorXd& q, MatrixXd& out);
        static void jrx_3(const VectorXd& q, MatrixXd& out);
        static void jrx_ee(const VectorXd& q, MatrixXd& out);

        static void jry_0(const VectorXd& q, MatrixXd& out);
        static void jry_1(const VectorXd& q, MatrixXd& out);
        static void jry_2(const VectorXd& q, MatrixXd& out);
        static void jry_3(const VectorXd& q, MatrixXd& out);
        static void jry_ee(const VectorXd& q, MatrixXd& out);

        static void jo_0_dot(const VectorXd& q, const VectorXd& q_dot, MatrixXd& out);
        static void jo_1_dot(const VectorXd& q, const VectorXd& q_dot, MatrixXd& out);
        static void jo_2_dot(const VectorXd& q, const VectorXd& q_dot, MatrixXd& out);
        static void jo_3_dot(const VectorXd& q, const VectorXd& q_dot, MatrixXd& out);
        static void jo_ee_dot(const VectorXd& q, const VectorXd& q_dot, MatrixXd& out);

        static void jrx_0_dot(const VectorXd& q, const VectorXd& q_dot, MatrixXd& out);
        static void jrx_1_dot(const VectorXd& q, const VectorXd& q_dot, MatrixXd& out);
        static void jrx_2_dot(const VectorXd& q, const VectorXd& q_dot, MatrixXd& out);
        static void jrx_3_dot(const VectorXd& q, const VectorXd& q_dot, MatrixXd& out);
        static void jrx_ee_dot(const VectorXd& q, const VectorXd& q_dot, MatrixXd& out);

        static void jry_0_dot(const VectorXd& q, const VectorXd& q_dot, MatrixXd& out);
        static void jry_1_dot(const VectorXd& q, const VectorXd& q_dot, MatrixXd& out);
        static void jry_2_dot(const VectorXd& q, const VectorXd& q_dot, MatrixXd& out);
        static void jry_3_dot(const VectorXd& q, const VectorXd& q_dot, MatrixXd& out);
        static void jry_ee_dot(const VectorXd& q, const VectorXd& q_dot, MatrixXd& out);

    
    public:
        static const int c_dim;
        static const int t_dim;
        static void set_q_max(VectorXd& out);
        static void set_q_min(VectorXd& out);
        static void set_q_neutral(VectorXd& out);
        static const vector<vector<double>> r_bars_0;
        static const vector<vector<double>> r_bars_1;
        static const vector<vector<double>> r_bars_2;
        static const vector<vector<double>> r_bars_3;
        static const vector<vector<double>> r_bars_ee;

        static vector<func_q_vecout> Os;
        static vector<func_q_vecout> RXs;
        static vector<func_q_vecout> RYs;
        static vector<func_q_matout> HTMs;
        static vector<func_q_matout> JOs;
        static vector<func_q_matout> JRXs;
        static vector<func_q_matout> JRYs;
        static vector<func_q_dq_matout> JOs_dot;
        static vector<func_q_dq_matout> JRXs_dot;
        static vector<func_q_dq_matout> JRYs_dot;

        static const vector<vector<vector<double>>> R_BARS_ALL;

        static const std::tuple<int, int> get_ee_id();
    };



    /**
     * @brief 制御点
     * 
     */
    class Control_Point : public mapping_base::Identity
    {
    private:
        VectorXd r_bar; //拡張位置ベクトル
        func_q_matout calc_htm;
        func_q_matout calc_jo;
        func_q_matout calc_jrx;
        func_q_matout calc_jry;

        func_q_dq_matout calc_jo_dot;
        func_q_dq_matout calc_jrx_dot;
        func_q_dq_matout calc_jry_dot;


        MatrixXd htm;  //同時変換行列
        MatrixXd jo;
        MatrixXd jrx;
        MatrixXd jry;

        MatrixXd jo_dot;
        MatrixXd jrx_dot;
        MatrixXd jry_dot;


    public:
        Control_Point(int frame, int index);
        void phi(const VectorXd &q, VectorXd &out) override;
        void jacobian(const VectorXd &q, MatrixXd &out) override;
        void jacobian_dot(const VectorXd &q, const VectorXd &q_dot, MatrixXd &out) override;
        const void print_state(void);
        static const vector<std::size_t> calc_points_mapping(void);
    };
};




#endif