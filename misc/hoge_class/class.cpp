#include "classh.hpp"

#include <iostream>


Ship::Ship(double length, double width, double weight)
{
    this->length = length;
    this->width = width;
    this->weight = weight;
}

void Ship::hello()
{
    std::cout << "hello!" << std::endl;
}

void Ship::say_param()
{
    std::cout << "length = " << length << std::endl;
    std::cout << "width = " << width << std::endl;
    std::cout << "weight = " << weight << std::endl;
}


void Ship::thnak()
{
    std::cout << "thank!" << std::endl;
}

