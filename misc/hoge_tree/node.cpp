#include "node.hpp"
#include <string>  
#include <iostream>

void Node::print_value()
{
    std::cout << this << " value = " << value << std::endl;
}

void Node::print_info()
{
    std::cout << "ptr : " << this << std::endl;
    std::cout << "\tname = " << name << std::endl;
    std::cout << "\tvalue = " << value << std::endl;
    std::cout << "\tvalue2 = " << value2 << std::endl;
    // std::cout << "\tparent = " << parent << std::endl;
    // std::cout << "\tchildren = " << std::endl;
    // for (auto itr = children.begin(); itr!=children.end(); ++itr)
    // {
    //     std::cout << "\t\t" << *itr << std::endl;
    // }
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

Node::Node(int value, std::string name)
{
    this->value = value;
    this->name = name;
}

int Node::sum_value()
{
    int summed_value = 0;

    summed_value += this->value;
    //std::cout << "name = " << this->name << std::endl;
    if (children[0] != nullptr)
    {
        for (Node* child : children)
        {
            summed_value += child->sum_value();
        }
    }
    else
    {
        
    }

    return summed_value;
}


/**
 * @brief value2にchildrenのvalueの合計を代入
 */
void Node::pullback_value2()
{
    std::cout << "name = " << this->name << std::endl;

    this->value2 += this->value;

    if (this->children[0] == nullptr)
    {
        this->parent->value2 += this->value;
    }
    else if (this->parent == nullptr)
    {
        for (Node* child : children)
        {
            child->pullback_value2();
        }
    }
    else
    {
        for (Node* child : children)
        {
            child->pullback_value2();
            this->parent->value2 += this->value2;
        }
    }

}

