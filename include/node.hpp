#ifndef NODE__H
#define NODE__H

#include "/usr/include/eigen3/Eigen/Core"
#include <string>
#include <vector>

#include "./mappings.hpp"



namespace rmp_node{


    class Node
    {
    public:
        int self_dim;
        int parent_dim;
        int node_type = 2;  //0:root, 1::leaf
        std::string name;

        class Node* parent;
        std::vector<class Node*> children;

        Eigen::VectorXd x;
        Eigen::VectorXd x_dot;
        Eigen::MatrixXd J;
        Eigen::MatrixXd J_dot;
        Eigen::VectorXd f;  //所望の力
        Eigen::MatrixXd M;  //慣性行列

        class mapping_base::Base* mappings;
        bool have_rmp_func=false;

        Node(void);
        Node(int self_dim, int parent_dim, std::string name, mapping_base::Base* mapping);

        virtual void calc_natural_form(void);
        
        void initialize_rmp_natural_form(void);
        const void print_state(void);
        const void print_state_all_node(void);

        void add_child(Node *child);
        virtual void pushforward(void);
        virtual void pullback(void);
    };


    class Root : public Node
    {
    public:
        double dt;  //刻み時間
        Eigen::VectorXd q_ddot;  //指令値
        Root(
            int self_dim, int parent_dim, std::string name, mapping_base::Base* mappings,
            double dt
        );
        void set_initial_state(
            const Eigen::VectorXd &q, const Eigen::VectorXd &q_dot
        );
        void pushforward(void) override;
        void pullback(void) override;
        void resolve(void);
    };


    class Leaf_Base : public Node
    {
    public:
        Leaf_Base(
            int self_dim, int parent_dim, std::string name, mapping_base::Base* mappings
        );
        void pullback(void) override;
    };

}


#endif