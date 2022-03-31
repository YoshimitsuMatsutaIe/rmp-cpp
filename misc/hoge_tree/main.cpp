#include <iostream>

#include "node.hpp"




int main()
{
    Node A(0);
    A.parent = nullptr;
    Node B_0(1);
    Node B_0_0(2);
    B_0_0.children.push_back(nullptr);

    Node B_0_1(3);
    B_0_1.children.push_back(nullptr);


    Node B_1(4);
    B_1.children.push_back(nullptr);

    A.add_children(&B_0);
    A.add_children(&B_1);
    B_0.add_children(&B_0_0);
    B_0.add_children(&B_0_1);


    A.print_info();
    B_0.print_info();
    B_1.print_info();
    B_0_0.print_info();
    B_0_1.print_info();

    //B.show_children_info();

    std::cout << "全体の和 = " << A.sum_value() << std::endl;
}