#include <iostream>







void hello()
{
    std::cout << "hello!" << std::endl;
}

void thank()
{
    std::cout << "thank you!" << std::endl;
}

void good()
{
    std::cout << "good!" << std::endl;
}



void say_any(void(*func)())
{
    func();
}








int main()
{
    std::cout << "running..." << std::endl;


    say_any(&hello);



    std::cout << "done!" << std::endl;
}