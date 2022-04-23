#ifndef ROBOT_MODEL_SICE__H
#define ROBOT_MODEL_SICE__H

#include "/usr/include/eigen3/Eigen/Core"

#include "./mappings.hpp"


namespace robot_model_sice
{
    struct Joint_limitation
    {
        Eigen::VectorXd q_max;
        Eigen::VectorXd q_min;
        Eigen::VectorXd q_neutral;
        Joint_limitation(void);
    };


    class Base
    {
    public:
        double l1, l2, l3, l4;
        Base(double l1, double l2, double l3, double l4);
    };

    class X0 : public Base, public mapping_base::Identity
    {
    public:
        using Base::Base;
        void phi(const Eigen::VectorXd &x, Eigen::VectorXd &out) override;
        void jacobian(const Eigen::VectorXd &x, Eigen::MatrixXd &out) override;
        void jacobian_dot(const Eigen::VectorXd &x, const Eigen::VectorXd &x_dot, Eigen::MatrixXd &out) override;
    };

    class X1 : public Base, public mapping_base::Identity
    {
    public:
        using Base::Base;
        void phi(const Eigen::VectorXd &x, Eigen::VectorXd &out) override;
        void jacobian(const Eigen::VectorXd &x, Eigen::MatrixXd &out) override;
        void jacobian_dot(const Eigen::VectorXd &x, const Eigen::VectorXd &x_dot, Eigen::MatrixXd &out) override;
    };

    class X2 : public Base, public mapping_base::Identity
    {
    public:
        using Base::Base;
        void phi(const Eigen::VectorXd &x, Eigen::VectorXd &out) override;
        void jacobian(const Eigen::VectorXd &x, Eigen::MatrixXd &out) override;
        void jacobian_dot(const Eigen::VectorXd &x, const Eigen::VectorXd &x_dot, Eigen::MatrixXd &out) override;
    };

    class X3 : public Base, public mapping_base::Identity
    {
    public:
        using Base::Base;
        void phi(const Eigen::VectorXd &x, Eigen::VectorXd &out) override;
        void jacobian(const Eigen::VectorXd &x, Eigen::MatrixXd &out) override;
        void jacobian_dot(const Eigen::VectorXd &x, const Eigen::VectorXd &x_dot, Eigen::MatrixXd &out) override;
    };
};


#endif