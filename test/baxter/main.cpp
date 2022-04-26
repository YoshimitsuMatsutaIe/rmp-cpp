#include "../../include/mappings.hpp"
#include "../../baxter/include/baxter.hpp"

#include <eigen3/Eigen/Core>
#include <iostream>

int main()
{
    std::cout << "running...\n" << std::endl;


    using namespace baxter;

    double hoge[3];
    Rx_W0(hoge);
    std::cout << hoge[0] << std::endl;


    std::cout << "done all!" << std::endl;
}