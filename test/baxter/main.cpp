#include "../../include/mappings.hpp"
#include "../../baxter/include/baxter.hpp"

#include <eigen3/Eigen/Core>
#include <iostream>

int main()
{
    std::cout << "running...\n" << std::endl;


    using namespace baxter;

    Eigen::VectorXd hoge(3);
    Rx_W0(hoge);
    std::cout << hoge << std::endl;


    std::cout << "done all!" << std::endl;
}