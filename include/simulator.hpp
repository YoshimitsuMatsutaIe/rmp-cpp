#ifndef SIMULATOR__HPP
#define SIMULATOR__HPP

#include <iostream>
#include <iomanip>
#include <filesystem>
#include <fstream>
#include <unordered_map>

#include <eigen3/Eigen/Core>
#include <boost/numeric/odeint.hpp>
#include <nlohmann/json.hpp>


#include "rmp_node.hpp"
#include "environment.hpp"
#include "rmp_tree.hpp"



namespace simulator
{
    using Eigen::VectorXd;
    using std::unordered_map;
    using std::string;
    using std::vector;

    // 日付取得
    string gen_save_dir_name(void);

    class RMP_Simulator
    {
    private:
        double time_span;
        double time_interval;
        bool is_debug=true;
        void update_environment(void);
        void add_goal(string type, unordered_map<string, double> param);
        void add_obstacle(string type, unordered_map<string, double> param);
        
        // 目標と障害物の速度をゼロにする
        void set_zero_velosity(void);

        void one_step_euler(VectorXd& q, VectorXd& q_dot);
        void one_step_rk(VectorXd& q, VectorXd& q_dot);


    public:
        RMP_Simulator(void){};
        rmp_flow::Root root;  //ルートノード
        rmp_flow::Nodes_and_Maps nms;
        string tree_name = "nameless";

        vector<VectorXd> goal_position;
        vector<VectorXd> goal_velosity;
        vector<VectorXd> obstacle_position;
        vector<VectorXd> obstacle_velosity;

        void set_initial_value(string json_path);

        //void one_step(void);
        
        void run(string json_path, string method="euler");
        void set_debug(bool is_debug);

    };


    // struct System
    // {
    //     public:
    //     using state = std::array<double, 3>;
    //     double p;
    //     double r;
    //     double b;
    //     System(double p_, double r_, double b_):p(p_), r(r_), b(b_){};

    //     void operator()(const state& x, state& dx, double t)
    //     {
    //         dx[0] = -p*x[0] + p*x[1];
    //         dx[1] = -x[0]*x[2] + r*x[0] - x[1];
    //         dx[2] = x[0]*x[1] - b*x[2];
    //     }
    // };

    // struct csv_observer
    // {
    //     using state = System::state;
    //     std::ofstream fout;
    //     csv_observer(const std::string& FileName) :fout(FileName){};
    //     void operator()(const state& x, double t)
    //     {
    //         fout << t << "," << x[0] << "," << x[1] << "," << x[2] << std::endl;
    //     }
    // };




    // int main()
    // {
    //     std::cout << "running..." << std::endl;

    //     //ルンゲクッタ法
    //     System sys(10.0, 28.0, 8/3);
    //     System::state State = {0.0, 4.0, 28.0};
    //     boost::numeric::odeint::runge_kutta_cash_karp54<System::state> Stepper;
    //     csv_observer Observer("rk.csv");
    //     boost::numeric::odeint::integrate_const(
    //         Stepper, sys, State, 0.0, 50.0, 0.01, std::ref(Observer)
    //     );

    //     std::cout << "done!" << std::endl;
    // }
};




#endif