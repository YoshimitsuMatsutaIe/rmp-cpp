#include "../../include/mappings.hpp"
#include "../../include/baxter/wrapper.hpp"

#include <eigen3/Eigen/Core>
#include <iostream>

int main()
{
    std::cout << "running...\n" << std::endl;


    using namespace baxter;

    Eigen::VectorXd q(7);
    q << 0, 0, 0, 0, 0, 0, 0;
    Eigen::VectorXd x(3);

    o_W0(q, x);

    std::cout << x << std::endl;


    std::cout << "done all!" << std::endl;
}