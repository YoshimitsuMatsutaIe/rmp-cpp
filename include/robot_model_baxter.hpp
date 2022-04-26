#ifndef ROBOT_MODEL_BAXTER__H
#define ROBOT_MODEL_BAXTER__H

#include "/usr/include/eigen3/Eigen/Core"

#include "./mappings.hpp"


namespace robot_model_baxter
{
    using Eigen::VectorXd;
    using Eigen::MatrixXd;
    struct Joint_limitation
    {
        VectorXd q_max;
        VectorXd q_min;
        VectorXd q_neutral;
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
        void phi(const VectorXd &q, VectorXd &out) override;
        void jacobian(const VectorXd &q, MatrixXd &out) override;
        void jacobian_dot(const VectorXd &q, const VectorXd &q_dot, MatrixXd &out) override;
    };

    class X1 : public Base, public mapping_base::Identity
    {
    public:
        using Base::Base;
        void phi(const VectorXd &q, VectorXd &out) override;
        void jacobian(const VectorXd &q, MatrixXd &out) override;
        void jacobian_dot(const VectorXd &q, const VectorXd &q_dot, MatrixXd &out) override;
    };

    class X2 : public Base, public mapping_base::Identity
    {
    public:
        using Base::Base;
        void phi(const VectorXd &q, VectorXd &out) override;
        void jacobian(const VectorXd &q, MatrixXd &out) override;
        void jacobian_dot(const VectorXd &q, const VectorXd &q_dot, MatrixXd &out) override;
    };

    class X3 : public Base, public mapping_base::Identity
    {
    public:
        using Base::Base;
        void phi(const VectorXd &q, VectorXd &out) override;
        void jacobian(const VectorXd &q, MatrixXd &out) override;
        void jacobian_dot(const VectorXd &q, const VectorXd &q_dot, MatrixXd &out) override;
    };

    class X4 : public Base, public mapping_base::Identity
    {
    public:
        using Base::Base;
        void phi(const VectorXd &q, VectorXd &out) override;
        void jacobian(const VectorXd &q, MatrixXd &out) override;
        void jacobian_dot(const VectorXd &q, const VectorXd &q_dot, MatrixXd &out) override;
    };

    class X5 : public Base, public mapping_base::Identity
    {
    public:
        using Base::Base;
        void phi(const VectorXd &q, VectorXd &out) override;
        void jacobian(const VectorXd &q, MatrixXd &out) override;
        void jacobian_dot(const VectorXd &q, const VectorXd &q_dot, MatrixXd &out) override;
    };

    class X6 : public Base, public mapping_base::Identity
    {
    public:
        using Base::Base;
        void phi(const VectorXd &q, VectorXd &out) override;
        void jacobian(const VectorXd &q, MatrixXd &out) override;
        void jacobian_dot(const VectorXd &q, const VectorXd &q_dot, MatrixXd &out) override;
    };

    class EE : public Base, public mapping_base::Identity
    {
    public:
        using Base::Base;
        void phi(const VectorXd &q, VectorXd &out) override;
        void jacobian(const VectorXd &q, MatrixXd &out) override;
        void jacobian_dot(const VectorXd &q, const VectorXd &q_dot, MatrixXd &out) override;
    };


};


#endif