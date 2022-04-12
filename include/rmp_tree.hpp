#ifndef RMP_TREE__H
#define RMP_TREE__H

#include <string>
#include <map> 
#include <fstream>

// #include "/usr/include/libxml2/libxml/xmlmemory.h"
// #include </usr/include/libxml2/libxml/parser.h>
#include <boost/property_tree/xml_parser.hpp>



#include "../include/rmp_leaf.hpp"
#include "../include/rmp_node.hpp"
#include "../include/mappings.hpp"


namespace rmp_tree
{
    class RMP_Tree
    {
    private:
        void update_environment();

    public:
        RMP_Tree(rmp_node::Root* root, std::string tree_name);
        //RMP_Tree(std::map<> tree_param);
        rmp_node::Root* root;
        std::string tree_name = "nameless";
        double time_span;
        double time_interval;

        void one_step(void);
        void run(double time_span, double time_interval);

    };
}





#endif