#ifndef RMP_NODE__H
#define RMP_NODE__H

#include "/usr/include/eigen3/Eigen/Core"
#include <string>
#include <vector>

#include "./mappings.hpp"



namespace rmp_node{


    class Node
    {
    public:
        bool is_debug = true;  //falseのときコメント切る

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
        Node(
            int self_dim,
            int parent_dim,
            std::string name,
            mapping_base::Base* mapping
        );

        
        
        void initialize_rmp_natural_form(void);
        const void print_state(void);
        const void print_state_all_node(void);

        void add_child(Node *child);
        virtual void pushforward(void);
        virtual void pullback(void);
        
        virtual void set_debug(bool is_debug);
    };


    class Root : public Node
    {
    public:
        Eigen::VectorXd q_ddot;  //指令値
        Root(
            int self_dim, int parent_dim, std::string name, mapping_base::Base* mappings
        );
        void set_state(
            const Eigen::VectorXd &q, const Eigen::VectorXd &q_dot
        );
        void pushforward(void) override;
        void pullback(void) override;
        void resolve(void);
        void solve(const Eigen::VectorXd& q, const Eigen::VectorXd& q_dot, Eigen::VectorXd& out_q_ddot);
    };


    class Leaf_Base : public Node
    {
    public:
        Leaf_Base(
            int self_dim, int parent_dim, std::string name, mapping_base::Base* mappings
        );
        virtual void calc_natural_form(void);
        void pullback(void) override;
        void set_debug(bool is_debug) override;
    };

};




namespace rmp_tree
{
    class RMP_Tree
    {
    private:
        bool is_debug=true;
        void update_environment();

    public:
        RMP_Tree(rmp_node::Root* root, std::string tree_name);
        //RMP_Tree(std::map<> tree_param);
        rmp_node::Root* root;
        std::string tree_name = "nameless";
        double time_span;
        double time_interval;

        void one_step(void);
        void run(double time_span, double time_interval, std::string save_path="test.csv");
        void set_debug(bool is_debug);

    };
};



#endif