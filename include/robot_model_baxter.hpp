#ifndef ROBOT_MODEL_BAXTER__H
#define ROBOT_MODEL_BAXTER__H

#include "/usr/include/eigen3/Eigen/Core"

#include "./mappings.hpp"


namespace robot_model_baxter
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
        double L, h, H, L0, L1, L2, L3, L4, L5, L6;
        Base(void);
    };

    class X0 : public Base, public mapping_base::Identity
    {
    public:
        using Base::Base;
        void phi(const Eigen::VectorXd &q, Eigen::VectorXd &out) override;
        void jacobian(const Eigen::VectorXd &q, Eigen::MatrixXd &out) override;
        void jacobian_dot(const Eigen::VectorXd &q, const Eigen::VectorXd &q_dot, Eigen::MatrixXd &out) override;
    };

    class X1 : public Base, public mapping_base::Identity
    {
    public:
        using Base::Base;
        void phi(const Eigen::VectorXd &q, Eigen::VectorXd &out) override;
        void jacobian(const Eigen::VectorXd &q, Eigen::MatrixXd &out) override;
        void jacobian_dot(const Eigen::VectorXd &q, const Eigen::VectorXd &q_dot, Eigen::MatrixXd &out) override;
    };

    class X2 : public Base, public mapping_base::Identity
    {
    public:
        using Base::Base;
        void phi(const Eigen::VectorXd &q, Eigen::VectorXd &out) override;
        void jacobian(const Eigen::VectorXd &q, Eigen::MatrixXd &out) override;
        void jacobian_dot(const Eigen::VectorXd &q, const Eigen::VectorXd &q_dot, Eigen::MatrixXd &out) override;
    };

    class X3 : public Base, public mapping_base::Identity
    {
    public:
        using Base::Base;
        void phi(const Eigen::VectorXd &q, Eigen::VectorXd &out) override;
        void jacobian(const Eigen::VectorXd &q, Eigen::MatrixXd &out) override;
        void jacobian_dot(const Eigen::VectorXd &q, const Eigen::VectorXd &q_dot, Eigen::MatrixXd &out) override;
    };

    class X4 : public Base, public mapping_base::Identity
    {
    public:
        using Base::Base;
        void phi(const Eigen::VectorXd &q, Eigen::VectorXd &out) override;
        void jacobian(const Eigen::VectorXd &q, Eigen::MatrixXd &out) override;
        void jacobian_dot(const Eigen::VectorXd &q, const Eigen::VectorXd &q_dot, Eigen::MatrixXd &out) override;
    };

    class X5 : public Base, public mapping_base::Identity
    {
    public:
        using Base::Base;
        void phi(const Eigen::VectorXd &q, Eigen::VectorXd &out) override;
        void jacobian(const Eigen::VectorXd &q, Eigen::MatrixXd &out) override;
        void jacobian_dot(const Eigen::VectorXd &q, const Eigen::VectorXd &q_dot, Eigen::MatrixXd &out) override;
    };

    class X6 : public Base, public mapping_base::Identity
    {
    public:
        using Base::Base;
        void phi(const Eigen::VectorXd &q, Eigen::VectorXd &out) override;
        void jacobian(const Eigen::VectorXd &q, Eigen::MatrixXd &out) override;
        void jacobian_dot(const Eigen::VectorXd &q, const Eigen::VectorXd &q_dot, Eigen::MatrixXd &out) override;
    };

    class EE : public Base, public mapping_base::Identity
    {
    public:
        using Base::Base;
        void phi(const Eigen::VectorXd &q, Eigen::VectorXd &out) override;
        void jacobian(const Eigen::VectorXd &q, Eigen::MatrixXd &out) override;
        void jacobian_dot(const Eigen::VectorXd &q, const Eigen::VectorXd &q_dot, Eigen::MatrixXd &out) override;
    };


};


#endif