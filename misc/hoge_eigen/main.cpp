#include "/usr/include/eigen3/Eigen/Core"
#include <iostream>


int main()
{
    Eigen::MatrixXd m(2, 2);
    m(0) = 1;
    m(1) = 2;
    m(2) = 3;
    m(3) = 4;

    Eigen::VectorXd f(2);
    f << 1, 2;

    std::cout << m << std::endl;
}