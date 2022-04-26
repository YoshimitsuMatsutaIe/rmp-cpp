#ifndef RMP_NODE__H
#define RMP_NODE__H

#include "/usr/include/eigen3/Eigen/Core"
#include <string>
#include <vector>

#include "./mappings.hpp"



namespace rmp_node{

    using Eigen::VectorXd;
    using Eigen::MatrixXd;
    class Node
    {
    public:
        bool is_debug = true;  //falseのときコメント切る

        int self_dim;
        int parent_dim;
        int node_type = 2;  //0:root, 1::leaf
        bool is_cpoint;
        std::string name;

        class Node* parent;
        std::vector<class Node*> children;

        VectorXd x;
        VectorXd x_dot;
        MatrixXd J;
        MatrixXd J_dot;
        VectorXd f;  //所望の力
        MatrixXd M;  //慣性行列

        class mapping_base::Identity* mappings;
        bool have_rmp_func=false;

        Node(void);
        Node(
            int self_dim,
            int parent_dim,
            std::string name,
            mapping_base::Identity* mapping
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
        VectorXd q_ddot;  //指令値
        Root(
            int self_dim, int parent_dim, std::string name, mapping_base::Identity* mappings
        );
        void set_state(
            const VectorXd &q, const VectorXd &q_dot
        );
        void pushforward(void) override;
        void pullback(void) override;
        void resolve(void);
        void solve(const VectorXd& q, const VectorXd& q_dot, VectorXd& out_q_ddot);
    };


    class Leaf_Base : public Node
    {
    public:
        Leaf_Base(
            int self_dim, int parent_dim, std::string name, mapping_base::Identity* mappings
        );
        virtual void calc_natural_form(void);
        void pullback(void) override;
        void set_debug(bool is_debug) override;
    };

};




namespace rmp_tree
{
    using Eigen::VectorXd;
    using Eigen::MatrixXd;
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

        //void one_step(void);
        void run(
            double time_span, double time_interval,
            std::string method="euler",
            std::string save_dir_path="result"
        );
        void set_debug(bool is_debug);

    };
};



#endif