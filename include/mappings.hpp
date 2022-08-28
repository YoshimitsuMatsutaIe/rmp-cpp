#ifndef MAPPINGS__HPP
#define MAPPINGS__HPP

#include <string>

#include "/usr/include/eigen3/Eigen/Core"

namespace mapping_base
{
    using Eigen::VectorXd;
    using Eigen::MatrixXd;

    /**
     * @brief 恒等写像
     * 
     */
    class Identity
    {
    public:
        std::string name;
        Identity(void);
        virtual void phi(const VectorXd &x, VectorXd &out);
        virtual void jacobian(const VectorXd &x, MatrixXd &out);
        virtual void jacobian_dot(const VectorXd &x, const VectorXd &x_dot, MatrixXd &out);
    };



    /**
     * @brief 障害物用
     * 
     */
    class Distance : public Identity
    {
    private:
        VectorXd o;
        VectorXd o_dot;
    public:
        Distance(const VectorXd& o, const VectorXd& o_dot);
        void phi(const VectorXd &x, VectorXd &out) override;
        void jacobian(const VectorXd &x, MatrixXd &out) override;
        void jacobian_dot(const VectorXd &x, const VectorXd &x_dot, MatrixXd &out) override;
    };
};





#endif