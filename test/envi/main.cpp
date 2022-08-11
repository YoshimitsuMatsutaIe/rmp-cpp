#include <iostream>
#include <vector>
#include <eigen3/Eigen/Core>

#include "../../include/environment.hpp"


int main()
{
    std::cout << "hello" << std::endl;

    std::vector<Eigen::VectorXd &> Os;

    simulator::set_sphere(10, 1, 1, 2, 3, Os);

}