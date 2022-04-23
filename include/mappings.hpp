#ifndef MAPPINGS__H
#define MAPPINGS__H

#include <string>

#include "/usr/include/eigen3/Eigen/Core"

namespace mapping_base
{
    /**
     * @brief 恒等写像
     * 
     */
    class Identity
    {
    public:
        std::string name;
        Identity(void);
        virtual void phi(const Eigen::VectorXd &x, Eigen::VectorXd &out);
        virtual void jacobian(const Eigen::VectorXd &x, Eigen::MatrixXd &out);
        virtual void jacobian_dot(const Eigen::VectorXd &x, const Eigen::VectorXd &x_dot, Eigen::MatrixXd &out);
    };



    /**
     * @brief 障害物用
     * 
     */
    class Distance : public Identity
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