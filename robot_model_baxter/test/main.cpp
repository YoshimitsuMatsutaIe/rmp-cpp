#include "../include/baxter.hpp"
#include <eigen3/Eigen/Core>

#include <iostream>

int main()
{
    using std::cout;
    using std::endl;

    std::cout << "running..." << std::endl;



    baxter::Control_Point hoge(7,0);

    cout << hoge.name << endl;

    Eigen::VectorXd q;
    baxter::Control_Point::set_q_neutral(q);

    Eigen::VectorXd q_dot(7);
    q_dot << 0.0, 0,0,0,0,0,0;

    Eigen::VectorXd x(3);
    Eigen::VectorXd x_dot(3);
    Eigen::MatrixXd J(3, 7);
    Eigen::MatrixXd J_dot(3, 7);

    hoge.phi(q, x);
    hoge.jacobian(q, J);
    hoge.jacobian_dot(q, q_dot, J_dot);
    hoge.print_state();

    cout << "x = \n" << x << endl;
    cout << "J = \n" << J << endl;
    cout << "J_dot = \n" << J_dot << endl;




    std::cout << "done!" << std::endl;
}