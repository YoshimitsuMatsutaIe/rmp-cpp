#ifndef NODE
#define NODE

#include "/usr/include/eigen3/Eigen/Core"
#include <string>
#include <vector>

namespace rmp_node{

    class Node
    {
    public:
        double dt;  //刻み時間
        int self_dim;
        int parent_dim;
        int node_type;  //0:root, 1::leaf
        std::string name;

        class Node* parent;
        std::vector<class Node*> children;

        Eigen::VectorXd x;
        Eigen::VectorXd x_dot;
        Eigen::MatrixXd J;
        Eigen::MatrixXd J_dot;
        Eigen::VectorXd f;  //所望の力
        Eigen::MatrixXd M;  //慣性行列

        Eigen::VectorXd q_ddot;  //指令値

        // 写像
        void(*calc_x)(const Eigen::VectorXd &y, Eigen::VectorXd &x);  //phi
        void(*calc_J)(const Eigen::VectorXd &y, Eigen::MatrixXd &J);  //phiのヤコビ行列
        void(*calc_J_dot)(const Eigen::VectorXd &y, const Eigen::VectorXd &y_dot, Eigen::MatrixXd &J_dot);
        

        Node();
        Node(int self_dim, int parent_dim, int node_type, std::string name, double dt);

        virtual void calc_natural_form() = 0;

        

        void set_mappings(
            void(*calc_x)(const Eigen::VectorXd &y, Eigen::VectorXd &x),
            void(*calc_J)(const Eigen::VectorXd &y, Eigen::MatrixXd &J),
            void(*calc_J_dot)(const Eigen::VectorXd &y, const Eigen::VectorXd &y_dot, Eigen::MatrixXd &J_dot)
        );
        void set_mappings();
        void set_initial_state(
            const Eigen::VectorXd &q, const Eigen::VectorXd &q_dot
        );

        const void print_state();
        const void print_state_all_node();

        void add_child(Node *child);
        void pushforward();
        void pullback();
        void resolve();
    };
}


#endif