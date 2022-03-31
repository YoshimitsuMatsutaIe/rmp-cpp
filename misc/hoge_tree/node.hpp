
#include <vector>

class Node
{
public:

    int value;
    class Node* parent;
    //class Node* children;

    std::vector<class Node*> children;


    Node(int value);
    void print_value();
    void print_info();

    void add_children(class Node* child);

    int sum_value();

    void show_children_info();
};

