#include "/usr/include/eigen3/Eigen/Core"


namespace rmp_test{

    class Node
    {
    public:
    Eigen::MatrixXd x;
    Eigen::MatrixXd x_dot;
    Eigen::MatrixXd f;
    Eigen::MatrixXd M;

    void do_any();
    };
}