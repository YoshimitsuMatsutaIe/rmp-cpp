#ifndef SICE__H
#define SICE__H

#include "/usr/include/eigen3/Eigen/Core"
#include <cmath>

#include "../../include/mappings.hpp"


namespace robot_model_sice
{
    using Eigen::VectorXd;
    using Eigen::MatrixXd;
    using std::cos;
    using std::sin;

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
        double l1, l2, l3, l4;
        Base(double l1, double l2, double l3, double l4);
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
};


#endif