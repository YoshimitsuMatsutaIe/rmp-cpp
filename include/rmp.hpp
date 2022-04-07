#ifndef RMP
#define RMP

#include <iostream>

#include "/usr/include/eigen3/Eigen/Core"

#include "./node.hpp"



namespace rmp2
{
    class goal_attractor : public rmp_node::Node
    {
    private:
        double max_speed;
        double gain;
        double f_alpha;
        double sigma_alpha;
        double sigma_gamma;
        double wu;
        double wl;
        double alpha;
        double epsilon;

        double soft_max(const double alpha, const double s);
        // void soft_normal(const double aloha, Eigen::VectorXd& v);
        // void metric_stretches_space(
        //     const double alpha, const Eigen::VectorXd& v,
        //     Eigen::MatrixXd& M
        // );
        // void basiec_metric(
        //     const double alpha, const double beta, const Eigen::VectorXd& f,
        //     Eigen::MatrixXd& M
        // );

        void grad_potential2(
            const Eigen::VectorXd &x, Eigen::VectorXd& out
        );

        void inertia_matrix();
        void force();


    public:
        using rmp_node::Node::Node;
        // goal_attractor(
        //     double max_speed,
        //     double gain,
        //     double f_alpha,
        //     double sigma_alpha,
        //     double sigma_gamma,
        //     double wu,
        //     double wl,
        //     double alpha,
        //     double epsilon
        // );

        void calc_natural_form();

    };
};


#endif