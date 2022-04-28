#include "/usr/include/eigen3/Eigen/Core"
#include <iostream>


void func(const Eigen::Vector3d& a, Eigen::VectorXd& out)
{
    out = a;
}


template <typename T, typename U>
void func2(const T& a, U& out){
    out = a;
}

int main()
{
    Eigen::MatrixXd m(2, 2);
    m(0) = 1;
    m(1) = 2;
    m(2) = 3;
    m(3) = 4;

    Eigen::VectorXd f(3);
    f << 0., 0., 0.;

    Eigen::Vector3d f2;
    f2 << 0., 0., 0.;

    Eigen::VectorXd g(3);
    g << 1., 2., 3.;

    func2(g, f2);

    std::cout << f2 << std::endl;
}