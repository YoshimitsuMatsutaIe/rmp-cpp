#ifndef SIMULATOR__HPP
#define SIMULATOR__HPP

#include <iostream>
#include <filesystem>
#include <fstream>
#include <unordered_map>

#include <eigen3/Eigen/Core>
#include <boost/numeric/odeint.hpp>
#include <nlohmann/json.hpp>


#include "rmp_node.hpp"

namespace simulator
{

    using Eigen::VectorXd;
    using std::unordered_map;
    using std::string;


    class RMP_Simulator
    {
    private:
        bool is_debug=true;
        void update_environment(void);
        void set_goal(string type, unordered_map<string, double> param);

    public:
        RMP_Simulator(void){};
        //RMP_Simulator(rmp_flow::Root* root, std::string tree_name);
        //RMP_Tree(std::map<> tree_param);
        rmp_flow::Root* root;
        std::string tree_name = "nameless";

        std::vector<Eigen::VectorXd> g;
        std::vector<Eigen::VectorXd> g_dot;
        std::vector<Eigen::VectorXd> o;
        std::vector<Eigen::VectorXd> o_dot;

        void set_initial_value(std::string json_path);

        //void one_step(void);
        void run(
            double time_span, double time_interval,
            std::string method="euler",
            std::string save_dir_path="result"
        );
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