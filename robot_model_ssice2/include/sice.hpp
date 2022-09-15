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

    struct Param
    {
        static const double l1;
        static const double l2;
        static const double l3;
        static const double l4;
    };

    struct o_0 : Param{using Param::Param;void operator()(const VectorXd& q, VectorXd& out);};
    struct o_1 : Param{using Param::Param;void operator()(const VectorXd& q, VectorXd& out);};
    struct o_2 : Param{using Param::Param;void operator()(const VectorXd& q, VectorXd& out);};
    struct o_3 : Param{using Param::Param;void operator()(const VectorXd& q, VectorXd& out);};
    struct o_ee : Param{using Param::Param;void operator()(const VectorXd& q, VectorXd& out);};

    struct rx_0 : Param{using Param::Param;void operator()(const VectorXd& q, VectorXd& out);};
    struct rx_1 : Param{using Param::Param;void operator()(const VectorXd& q, VectorXd& out);};
    struct rx_2 : Param{using Param::Param;void operator()(const VectorXd& q, VectorXd& out);};
    struct rx_3 : Param{using Param::Param;void operator()(const VectorXd& q, VectorXd& out);};
    struct rx_4 : Param{using Param::Param;void operator()(const VectorXd& q, VectorXd& out);};

    struct ry_0 : Param{using Param::Param;void operator()(const VectorXd& q, VectorXd& out);};
    struct ry_1 : Param{using Param::Param;void operator()(const VectorXd& q, VectorXd& out);};
    struct ry_2 : Param{using Param::Param;void operator()(const VectorXd& q, VectorXd& out);};
    struct ry_3 : Param{using Param::Param;void operator()(const VectorXd& q, VectorXd& out);};
    struct ry_4 : Param{using Param::Param;void operator()(const VectorXd& q, VectorXd& out);};

    struct jo_0 : Param{using Param::Param;void operator()(const VectorXd& q, MatrixXd& out);};
    struct jo_1 : Param{using Param::Param;void operator()(const VectorXd& q, MatrixXd& out);};
    struct jo_2 : Param{using Param::Param;void operator()(const VectorXd& q, MatrixXd& out);};
    struct jo_3 : Param{using Param::Param;void operator()(const VectorXd& q, MatrixXd& out);};
    struct jo_4 : Param{using Param::Param;void operator()(const VectorXd& q, MatrixXd& out);};
    struct jrx_0 : Param{using Param::Param;void operator()(const VectorXd& q, MatrixXd& out);};
    struct jrx_1 : Param{using Param::Param;void operator()(const VectorXd& q, MatrixXd& out);};
    struct jrx_2 : Param{using Param::Param;void operator()(const VectorXd& q, MatrixXd& out);};
    struct jrx_3 : Param{using Param::Param;void operator()(const VectorXd& q, MatrixXd& out);};
    struct jrx_4 : Param{using Param::Param;void operator()(const VectorXd& q, MatrixXd& out);};
    struct jry_0 : Param{using Param::Param;void operator()(const VectorXd& q, MatrixXd& out);};
    struct jry_1 : Param{using Param::Param;void operator()(const VectorXd& q, MatrixXd& out);};
    struct jry_2 : Param{using Param::Param;void operator()(const VectorXd& q, MatrixXd& out);};
    struct jry_3 : Param{using Param::Param;void operator()(const VectorXd& q, MatrixXd& out);};
    struct jry_4 : Param{using Param::Param;void operator()(const VectorXd& q, MatrixXd& out);};

    struct jo_0_dot : Param{using Param::Param;void operator()(const VectorXd& q, const VectorXd& q_dot, MatrixXd& out);};
    struct jo_1_dot : Param{using Param::Param;void operator()(const VectorXd& q, const VectorXd& q_dot, MatrixXd& out);};
    struct jo_2_dot : Param{using Param::Param;void operator()(const VectorXd& q, const VectorXd& q_dot, MatrixXd& out);};
    struct jo_3_dot : Param{using Param::Param;void operator()(const VectorXd& q, const VectorXd& q_dot, MatrixXd& out);};
    struct jo_4_dot : Param{using Param::Param;void operator()(const VectorXd& q, const VectorXd& q_dot, MatrixXd& out);};
    struct jrx_0_dot : Param{using Param::Param;void operator()(const VectorXd& q, const VectorXd& q_dot, MatrixXd& out);};
    struct jrx_1_dot : Param{using Param::Param;void operator()(const VectorXd& q, const VectorXd& q_dot, MatrixXd& out);};
    struct jrx_2_dot : Param{using Param::Param;void operator()(const VectorXd& q, const VectorXd& q_dot, MatrixXd& out);};
    struct jrx_3_dot : Param{using Param::Param;void operator()(const VectorXd& q, const VectorXd& q_dot, MatrixXd& out);};
    struct jrx_4_dot : Param{using Param::Param;void operator()(const VectorXd& q, const VectorXd& q_dot, MatrixXd& out);};
    struct jry_0_dot : Param{using Param::Param;void operator()(const VectorXd& q, const VectorXd& q_dot, MatrixXd& out);};
    struct jry_1_dot : Param{using Param::Param;void operator()(const VectorXd& q, const VectorXd& q_dot, MatrixXd& out);};
    struct jry_2_dot : Param{using Param::Param;void operator()(const VectorXd& q, const VectorXd& q_dot, MatrixXd& out);};
    struct jry_3_dot : Param{using Param::Param;void operator()(const VectorXd& q, const VectorXd& q_dot, MatrixXd& out);};
    struct jry_4_dot : Param{using Param::Param;void operator()(const VectorXd& q, const VectorXd& q_dot, MatrixXd& out);};



    static VectorXd q_neutral(void);
    static VectorXd q_max(void);
    static VectorXd q_min(void);
    static std::tuple<VectorXd, VectorXd, VectorXd> get_q_neutoral_max_min(void);


    static const int c_dim;
    static const int t_dim;

    static const std::tuple<int, int> get_ee_id();

    static const vector<vector<double>> r_bars_0;
    static const vector<vector<double>> r_bars_1;
    static const vector<vector<double>> r_bars_2;
    static const vector<vector<double>> r_bars_3;
    static const vector<vector<double>> r_bars_ee;
    static const vector<vector<vector<double>>> R_BARS_ALL;

    static const vector<std::size_t> calc_points_mapping(void);


    template
    struct Control_Point_Base : public mapping_base::Identity
    {
        VectorXd r_bar; //拡張位置ベクトル
        MatrixXd jo;
        MatrixXd jrx;
        MatrixXd jry;
        MatrixXd jo_dot;
        MatrixXd jrx_dot;
        MatrixXd jry_dot;
        
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
        void velovity(const VectorXd &x_dot, const MatrixXd& J, VectorXd &out) override;
        void jacobian_dot(const VectorXd &q, const VectorXd &q_dot, MatrixXd &out) override;
        const void print_state(void);
        
    };


    std::tuple<std::vector<sice::Control_Point>, int, int> make_cpoint_map(void);
}




#endif