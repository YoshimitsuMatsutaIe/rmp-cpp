#include <iostream>
#include <vector>
#include <eigen3/Eigen/Core>

#include "../../include/environment.hpp"


int main()
{
    std::cout << "hello" << std::endl;

    std::vector<Eigen::VectorXd> Os;

    simulator::set_sphere(3000, 1, 1, 2, 3, Os);

    int a=0;
    for (auto o : Os){
        std::cout << "n = " << a << std::endl;
        a++;
        //std::cout << o << std::endl;
    }


    std::cout << "done!" << std::endl;

}