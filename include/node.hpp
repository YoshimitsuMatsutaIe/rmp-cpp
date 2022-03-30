#include "/usr/include/eigen3/Eigen/Core"


namespace rmp{

    class Node
    {
    public:
    int dim;  // ノードの次元
    Eigen::VectorXd x;
    Eigen::VectorXd x_dot;
    Eigen::VectorXd f;  // 所望の力
    Eigen::MatrixXd M;  // 慣性行列

    Node(int dim);

    void set_dim(int dim);

    void print_state();

    void pullback();
    };


    class Root : Node
    {
    public:
    double dt;  // 刻み時間
    Eigen::VectorXd q_ddot;
    void resolve();
    };

}