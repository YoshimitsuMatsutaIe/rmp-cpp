#ifndef MODEL_SIMPLE_ARM
#define MODEL_SIMPLE_ARM

#include "/usr/include/eigen3/Eigen/Core"


namespace model_simple_arm
{
    const double l1 = 1.0;
    const double l2 = 1.0;
    const double l3 = 1.0;
    const double l4 = 1.0;

    void x0(const Eigen::VectorXd &q, Eigen::VectorXd &x);
    void x1(const Eigen::VectorXd &q, Eigen::VectorXd &x);
    void x2(const Eigen::VectorXd &q, Eigen::VectorXd &x);
    void x3(const Eigen::VectorXd &q, Eigen::VectorXd &x);
    
    void J0(const Eigen::VectorXd &q, Eigen::MatrixXd &J);
    void J1(const Eigen::VectorXd &q, Eigen::MatrixXd &J);
    void J2(const Eigen::VectorXd &q, Eigen::MatrixXd &J);
    void J3(const Eigen::VectorXd &q, Eigen::MatrixXd &J);

    void J0_dot(const Eigen::VectorXd &q, const Eigen::VectorXd &dq, Eigen::MatrixXd &J_dot);
    void J1_dot(const Eigen::VectorXd &q, const Eigen::VectorXd &dq, Eigen::MatrixXd &J_dot);
    void J2_dot(const Eigen::VectorXd &q, const Eigen::VectorXd &dq, Eigen::MatrixXd &J_dot);
    void J3_dot(const Eigen::VectorXd &q, const Eigen::VectorXd &dq, Eigen::MatrixXd &J_dot);


};


#endif