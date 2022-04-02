#include <iostream>

#include "node.hpp"




int main()
{
    Node A(0, "root");
    A.parent = nullptr;
    Node B_0(1, "child0");
    Node B_0_0(2, "child0-chid0");
    B_0_0.children.push_back(nullptr);

    Node B_0_1(3, "child0-child1");
    B_0_1.children.push_back(nullptr);


    Node B_1(4, "child1");
    B_1.children.push_back(nullptr);

    Node B_2(5, "child2");
    Node B_2_0(6, "child2-child0");
    Node B_2_0_0(7, "child2-child0-child0");
    B_2_0_0.children.push_back(nullptr);

    A.add_children(&B_0);
    A.add_children(&B_1);
    A.add_children(&B_2);
    B_0.add_children(&B_0_0);
    B_0.add_children(&B_0_1);
    B_2.add_children(&B_2_0);
    B_2_0.add_children(&B_2_0_0);


    A.print_info();
    B_0.print_info();
    B_1.print_info();
    B_0_0.print_info();
    B_0_1.print_info();
    B_2.print_info();
    B_2_0.print_info();
    B_2_0_0.print_info();

    //B.show_children_info();

    std::cout << "全体の和 = " << A.sum_value() << "\n" << std::endl;

    std::cout << "summed value2! " << std::endl;

    A.pullback_value2();

    A.print_info();
    B_0.print_info();
    B_1.print_info();
    B_0_0.print_info();
    B_0_1.print_info();
    B_2.print_info();
    B_2_0.print_info();
    B_2_0_0.print_info();
}