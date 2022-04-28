#include "../../include/mappings.hpp"
#include "../../baxter/include/baxter.hpp"

#include <eigen3/Eigen/Core>
#include <iostream>

int main()
{
    std::cout << "running...\n" << std::endl;


    using namespace baxter;

    Baxter hoge;

    std::cout << hoge.o_ee << std::endl;

    
    hoge.print_all();

    std::cout << "done all!" << std::endl;
}