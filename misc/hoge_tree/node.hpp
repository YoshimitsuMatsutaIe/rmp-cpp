#include <string>  
#include <vector>

class Node
{
public:

    int value;
    int value2 = 0;
    std::string name;
    class Node* parent;
    //class Node* children;

    std::vector<class Node*> children;


    Node(int value, std::string name);
    void print_value();
    void print_info();

    void add_children(class Node* child);

    int sum_value();

    void show_children_info();


    void pullback_value2();
};

