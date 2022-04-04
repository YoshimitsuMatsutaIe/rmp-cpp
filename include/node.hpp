#include "/usr/include/eigen3/Eigen/Core"
#include <string>
#include <vector>

namespace rmp_node{
    
    class Node
    {
    public:
        double dt;  //刻み時間
        int dim;  //次元
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
        void(*calc_x)(const Eigen::VectorXd &y, Eigen::VectorXd *x);  //phi
        void(*calc_J)(const Eigen::VectorXd &y, Eigen::MatrixXd *J);  //phiのヤコビ行列
        void(*calc_J_dot)(const Eigen::VectorXd &y, Eigen::MatrixXd *J_dot);
        void(*calc_rmp_func)(
            const Eigen::VectorXd &x,
            const Eigen::VectorXd &x_dot,
            Eigen::VectorXd *f, Eigen::MatrixXd *M
        );

        Node(int dim, std::string name);

        void set_dim(int dim);
        void set_mappings(
            void(*calc_x)(const Eigen::VectorXd &y, Eigen::VectorXd *x),
            void(*calc_J)(const Eigen::VectorXd &y, Eigen::MatrixXd *J),
            void(*calc_J_dot)(const Eigen::VectorXd &y,  Eigen::MatrixXd *J_dot),
            void(*calc_rmp_func)(
                const Eigen::VectorXd &x,
                const Eigen::VectorXd &x_dot,
                Eigen::VectorXd *f, Eigen::MatrixXd *M
            )
        );
        void set_initial_state(
            const Eigen::VectorXd &q, const Eigen::VectorXd &q_dot
        );

        void print_state();

        void add_child(Node *child);
        void pushforward();
        void pullback();
        void resolve();
    };



}