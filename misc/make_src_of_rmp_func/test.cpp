#include <iostream>
#include "/usr/include/eigen3/Eigen/Core"

#include "hoge.hpp"


int main()
{
    std::cout << "running..." << std::endl;


    Eigen::VectorXd x(2);
    Eigen::VectorXd x_dot(2);
    Eigen::VectorXd xi(2);



    x << 1.0, 0.2;
    x_dot << 0.01, 0.0;
    xi << 0.0, 0.0;

    std::cout << "xi = \n" << xi << std::endl;
    f(1., 1e-10, 3., 4., 0.1, 0.2, x, x_dot, xi);

    std::cout << "xi = \n" << xi << std::endl;



    x[0] = 1.0;
    std::cout << "x = " << x << std::endl;

    std::cout << "done!" << std::endl;
}