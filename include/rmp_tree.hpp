#ifndef RMP_TREE__HPP
#define RMP_TREE__HPP

#include <eigen3/Eigen/Core>
#include <iostream>
#include <chrono>
#include <fstream>
#include <filesystem>

#include "rmp_node.hpp"


namespace rmp_flow
{
    using Eigen::VectorXd;
    using Eigen::MatrixXd;


    class RMP_Tree
    {
    private:
        bool is_debug=true;
        void update_environment();

    public:
        RMP_Tree(Root* root, std::string tree_name);
        //RMP_Tree(std::map<> tree_param);
        Root* root;
        std::string tree_name = "nameless";

        //void one_step(void);
        void run(
            double time_span, double time_interval,
            std::string method="euler",
            std::string save_dir_path="result"
        );
        void set_debug(bool is_debug);

    };
};




#endif