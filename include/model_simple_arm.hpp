#include "/usr/include/eigen3/Eigen/Core"


namespace model_simple_arm
{
    class Kinematics_Model
    {
    private:
        double l1;
        double l2;
        double l3;
        double l4;
    
    public:
        Kinematics_Model(double l1, double l2, double l3, double l4);

        static void x0(const Eigen::VectorXd &q, Eigen::VectorXd &x);
        void x1(const Eigen::VectorXd &q, Eigen::VectorXd &x);
        void x2(const Eigen::VectorXd &q, Eigen::VectorXd &x);
        void x3(const Eigen::VectorXd &q, Eigen::VectorXd &x);
        
        void J0(const Eigen::VectorXd &q, Eigen::MatrixXd &J);
        void J1(const Eigen::VectorXd &q, Eigen::MatrixXd &J);
        void J2(const Eigen::VectorXd &q, Eigen::MatrixXd &J);
        void J3(const Eigen::VectorXd &q, Eigen::MatrixXd &J);

        void J0_dot(const Eigen::VectorXd &q, Eigen::MatrixXd &J_dot);
        void J1_dot(const Eigen::VectorXd &q, Eigen::MatrixXd &J_dot);
        void J2_dot(const Eigen::VectorXd &q, Eigen::MatrixXd &J_dot);
        void J3_dot(const Eigen::VectorXd &q, Eigen::MatrixXd &J_dot);


    };
};