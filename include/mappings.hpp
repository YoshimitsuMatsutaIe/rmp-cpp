#ifndef MAPPINGS__H
#define MAPPINGS__H

#include <string>

#include "/usr/include/eigen3/Eigen/Core"

namespace mapping_base
{
    class Base
    {
    public:
        std::string name;
        Base(void);
        virtual void phi(const Eigen::VectorXd &x, Eigen::VectorXd &out) = 0;
        virtual void jacobian(const Eigen::VectorXd &x, Eigen::MatrixXd &out) = 0;
        virtual void jacobian_dot(const Eigen::VectorXd &x, const Eigen::VectorXd &x_dot, Eigen::MatrixXd &out) = 0;
    };



    class Distance : public Base
    {
    private:
        Eigen::VectorXd& o;
        Eigen::VectorXd& o_dot;
    public:
        Distance(Eigen::VectorXd& o, Eigen::VectorXd& o_dot);
        void phi(const Eigen::VectorXd &x, Eigen::VectorXd &out) override;
        void jacobian(const Eigen::VectorXd &x, Eigen::MatrixXd &out) override;
        void jacobian_dot(const Eigen::VectorXd &x, const Eigen::VectorXd &x_dot, Eigen::MatrixXd &out) override;
    };
};





#endif