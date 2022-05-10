#include "../include/baxter.hpp"
#include <eigen3/Eigen/Core>

#include <iostream>

int main()
{
    using std::cout;
    using std::endl;

    std::cout << "running..." << std::endl;



    baxter::Control_Point hoge(0,0);

    cout << hoge.name << endl;

    Eigen::VectorXd q0;
    baxter::Control_Point::set_q_neutral(q0);

    Eigen::VectorXd q0_dot(7);
    q0_dot << 0., 0,0,0,0,0,0;

    Eigen::VectorXd x(3);
    Eigen::VectorXd x_dot(3);
    Eigen::MatrixXd J(3, 7);
    Eigen::MatrixXd J_dot(3, 7);

    hoge.phi(q0, x);

    hoge.print_state();







    std::cout << "done!" << std::endl;
}