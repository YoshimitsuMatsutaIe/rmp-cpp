#include "/usr/include/eigen3/Eigen/Core"


namespace rmp_node{

    class Node
    {
    public:
        int dim;  // ノードの次元
        
        Eigen::VectorXd x;
        Eigen::VectorXd x_dot;
        Eigen::VectorXd f;  // 所望の力
        Eigen::MatrixXd M;  // 慣性行列

        void(*phi)();
        void(*J)();
        void(*J_dot)();
        void(*rmp_func)();

        Node(int dim);

        void set_dim(int dim);

        void print_state();
        void pushforward();
        void pullback();
    };


    class Root : Node
    {
    private:
        double dt;  // 刻み時間
    public:
        Eigen::VectorXd& q = x;
        Eigen::VectorXd& q_dot = x_dot;
        Eigen::VectorXd q_ddot;
        
        void resolve();
    };


    class Leaf : Node
    {
    public:
        
    };
}