#ifndef SIMULATOR__HPP
#define SIMULATOR__HPP

#include <iostream>
#include <iomanip>
#include <filesystem>
#include <fstream>
#include <unordered_map>
#include <array>
#include <thread>
#include <chrono>
#include <functional>

#include <eigen3/Eigen/Core>
#include <eigen3/Eigen/QR>
#include <eigen3/Eigen/LU>
#include <eigen3/Eigen/Dense>

#include <boost/progress.hpp>
#include <boost/numeric/odeint.hpp>
#include <nlohmann/json.hpp>


#include "rmp_node.hpp"
#include "environment.hpp"
#include "rmp_tree.hpp"
#include "rmp_multi.hpp"


namespace simulator
{
    using Eigen::VectorXd;
    using Eigen::MatrixXd;
    using std::unordered_map;
    using std::string;
    using std::vector;
    using std::cout;
    using std::endl;
    namespace odeint = boost::numeric::odeint;
    // 日付取得
    string gen_save_dir_name(void);

    class RMP_Simulator
    {
    private:
        double time_span;
        double time_interval;

        std::array<int, 2> ee_id;
        bool is_debug=true;
        void update_environment(void);
        void add_goal(string type, unordered_map<string, double> param);
        void add_obstacle(string type, unordered_map<string, double> param);
        
        // 目標と障害物の速度をゼロにする
        void set_zero_velosity(void);

        vector<size_t> model_struct;

        std::string save_dir_path_str;


    public:
        RMP_Simulator(void){};

        string tree_name = "nameless";
        string robot_name;
        unordered_map<string, unordered_map<string, double>> rmp_param;
        vector<VectorXd> goal_position;
        vector<VectorXd> goal_velosity;
        vector<VectorXd> obstacle_position;
        vector<VectorXd> obstacle_velosity;
        int c_dim;
        int t_dim;
        int cpoint_num;  //制御点の総数
        VectorXd q_neutral, q_max, q_min;

        std::tuple<int, int> ee_index;

        //パラメータjsonの展開など
        void set_initial_value(string json_path);

        //void one_step(void);
        
        // simgle thread
        void run(string json_path, string method="rk");
        
        // multi (std::thrad)
        void run_multi(string json_path, string method="rk");
        
        // multi (openMp)
        void run_multi2(string json_path, string method="rk");

        //void set_debug(bool is_debug);


        // マルチスレッドでsolve
        void solve_multi(
            const VectorXd& X, VectorXd& X_dot,
            const std::unordered_map<std::string, std::unordered_map<std::string, double>> rmp_param
        );

        // goalとobsをcsvに保存
        const void save_environment(Eigen::IOFormat CSVFormat);

        //データ保存先ディレクトリを作る等
        const void make_data_dir(string json_path);

        //シミュレーションの結果を保存
        const void save_message(
            string solver_name, string method, string result, double time
        );





    };

    void sol(
        rmp_flow::Node* node,
        VectorXd* q, VectorXd* q_dot,
        VectorXd* f, MatrixXd* M
    );

    template <int N>
    struct System_Single
    {
        using state = std::array<double, 2*N>;
        
        VectorXd vec_x;
        VectorXd vec_x_dot;
        rmp_flow::Root* root;
        System_Single(rmp_flow::Root* root)
        {
            this->root = root;
            this->vec_x = VectorXd(2*N);
            this->vec_x_dot = VectorXd(2*N);
        }

        void operator()(const state& x, state& x_dot, double t)
        {
            //vec_x = Eigen::Map<VectorXd>(&x[0], 2*N);
            for (int i=0; i<2*N; ++i){
                vec_x(i) = x[i];
            }
            this->root->solve(vec_x, vec_x_dot);
            
            for (int i=0; i<2*N; ++i){
                x_dot[i] = vec_x_dot(i);
            }
            //x_dot = state(vec_x_dot.data());
        }
    };

    template <int N>
    struct CSV_Observer
    {
        using state = std::array<double, 2*N>;
        rmp_flow::Root* root;
        Eigen::IOFormat CSVFormat;
        CSV_Observer(rmp_flow::Root* root)
        {
            this->root = root;
            this->CSVFormat = Eigen::IOFormat(Eigen::StreamPrecision, Eigen::DontAlignCols, ",", "\n");    
        }

        void operator()(const state& x, double t)
        {
            this->root->save_state(t, this->CSVFormat);
        }
    };


}




#endif