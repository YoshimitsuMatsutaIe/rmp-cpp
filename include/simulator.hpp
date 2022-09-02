#ifndef SIMULATOR__HPP
#define SIMULATOR__HPP

#include <iostream>
#include <iomanip>
#include <filesystem>
#include <fstream>
#include <unordered_map>
#include <array>
#include <thread>

#include <eigen3/Eigen/Core>
#include <eigen3/Eigen/QR>
#include <eigen3/Eigen/LU>
#include <eigen3/Eigen/Dense>

#include <boost/numeric/odeint.hpp>
#include <nlohmann/json.hpp>


#include "rmp_node.hpp"
#include "environment.hpp"
#include "rmp_tree.hpp"



namespace simulator
{
    using Eigen::VectorXd;
    using Eigen::MatrixXd;
    using std::unordered_map;
    using std::string;
    using std::vector;
    using std::cout;
    using std::endl;

    // 日付取得
    string gen_save_dir_name(void);

    class RMP_Simulator
    {
    private:
        double time_span;
        double time_interval;
        double t;
        std::array<int, 2> ee_id;
        bool is_debug=true;
        void update_environment(void);
        void add_goal(string type, unordered_map<string, double> param);
        void add_obstacle(string type, unordered_map<string, double> param);
        
        // 目標と障害物の速度をゼロにする
        void set_zero_velosity(void);

        vector<size_t> model_struct;




    public:
        RMP_Simulator(void){};
        rmp_flow::Root root;  //ルートノード
        rmp_flow::Nodes_and_Maps nms;
        string tree_name = "nameless";
        string robot_name;
        unordered_map<string, unordered_map<string, double>> rmp_param;
        vector<VectorXd> goal_position;
        vector<VectorXd> goal_velosity;
        vector<VectorXd> obstacle_position;
        vector<VectorXd> obstacle_velosity;
        int c_dim, t_dim;
        int cpoint_num;  //制御点の総数
        VectorXd q_neutral, q_max, q_min;

        std::tuple<int, int> ee_index;
        void set_initial_value(string json_path);

        //void one_step(void);
        
        void run(string json_path, string method="rk");
        void run_multi(string json_path, string method="rk");

        void set_debug(bool is_debug);


        // マルチスレッドでsolve
        void solve_multi(
            const VectorXd& X, VectorXd& X_dot,
            const std::unordered_map<std::string, std::unordered_map<std::string, double>> rmp_param
        );


    };

    void sol(
        rmp_flow::Node* node,
        const VectorXd* q, const VectorXd* q_dot,
        VectorXd* f, MatrixXd* M
    );
};




#endif