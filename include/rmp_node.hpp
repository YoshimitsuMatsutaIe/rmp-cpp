#ifndef RMP_NODE__HPP
#define RMP_NODE__HPP

#include <eigen3/Eigen/Core>
#include <string>
#include <vector>
#include <iostream>
#include <fstream>

#include "./mappings.hpp"



namespace rmp_flow
{
    using std::vector;
    using Eigen::VectorXd;
    using Eigen::MatrixXd;

    using std::cout;
    using std::endl;


    /**
     * @brief 基底
     * 
     */
    class Node
    {
    public:
        bool is_debug = true;  //falseのときコメント切る

        int self_dim;
        int parent_dim;
        int node_type;  //0:root, 1:leaf, 2:node
        bool is_cpoint;
        std::string name;

        Node* parent;
        vector<Node*> children;

        VectorXd x;
        VectorXd x_dot;
        MatrixXd J;
        MatrixXd J_dot;
        VectorXd f;  //所望の力
        MatrixXd M;  //慣性行列


        std::ofstream out_file;

        mapping_base::Identity* mappings;
        bool have_rmp_func=false;

        Node(void);
        Node(
            int self_dim,
            int parent_dim,
            std::string name,
            mapping_base::Identity *mapping
        );

        bool is_save = false;
        virtual void add_out_file_all(std::string dir_path);
        virtual void add_out_file(std::string path);
        virtual void save_state(double t);

        void initialize_rmp_natural_form(void);
        const void print_self_state(void);
        const void print_state_all_node(void);
        const void print_tree_structure(void);

        virtual void add_child(Node *child);
        virtual void pushforward(void);
        virtual void pullback(void);
        
        virtual void set_debug(bool is_debug);
    };


    /**
     * @brief 
     * 
     */
    class Root : public Node
    {
    public:
        VectorXd q_ddot;  //指令値
        Root(void);
        Root(int self_dim, std::string name);
        void set_state(
            const VectorXd &q, const VectorXd &q_dot
        );

        void add_out_file_all(std::string dir_path) override;

        void pushforward(void) override;
        void pullback(void) override;
        void resolve(void);
        
        void solve(
            const VectorXd& q, const VectorXd& q_dot,
            VectorXd& out_q_ddot
        );

        void solve(const VectorXd& X, VectorXd& X_dot);
    };


    /**
     * @brief リーフノード。子ノードなくて大丈夫
     * 
     */
    class Leaf_Base : public Node
    {
    public:
        Leaf_Base(void);
        Leaf_Base(
            int self_dim, int parent_dim, std::string name, mapping_base::Identity* mappings
        );

        virtual void calc_natural_form(void);
        void pullback(void) override;
        void set_debug(bool is_debug) override;
        void add_child(Node *child) override;
    };

};



#endif