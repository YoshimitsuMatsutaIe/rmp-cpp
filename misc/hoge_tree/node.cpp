#include "node.hpp"

#include <iostream>

void Node::print_value()
{
    std::cout << this << " value = " << value << std::endl;
}

void Node::print_info()
{
    std::cout << "ptr : " << this << std::endl;
    std::cout << "\tvalue = " << value << std::endl;
    std::cout << "\tparent = " << parent << std::endl;
    std::cout << "\tchildren = " << std::endl;
    for (auto itr = children.begin(); itr!=children.end(); ++itr)
    {
        std::cout << "\t\t" << *itr << std::endl;
    }
}


void Node::show_children_info()
{
    children[0]->print_info();
}


void Node::add_children(class Node* child)
{
    this->children.push_back(child);
    child->parent = this;
}

Node::Node(int value)
{
    this->value = value;
}

int Node::sum_value()
{
    int summed_value = 0;

    summed_value += this->value;
    if (children[0] != nullptr)
    {
        for (Node* child : children)
        {
            std::cout << "child ptr = " << child << std::endl;
            summed_value += child->sum_value();
        }
    }

    return summed_value;
}