#include "../include/baxter.hpp"


#include <iostream>

int main()
{
    using std::cout;
    using std::endl;

    std::cout << "running..." << std::endl;



    baxter::Control_Point hoge(0,0);

    cout << hoge.name << endl;







    std::cout << "done!" << std::endl;
}