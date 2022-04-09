#ifndef RMP__H
#define RMP__H

#include <iostream>

#include "/usr/include/eigen3/Eigen/Core"

#include "./node.hpp"

namespace rmp_base
{
    class Is_Not_Leaf : public rmp_node::Node
    {
    public:
        using rmp_node::Node::Node;
        void calc_natural_form() override;
    };
}


namespace rmp2
{
    class Goal_Attractor : public rmp_node::Node
    {
    private:
        //double max_speed;
        double gain;
        double damp;
        double f_alpha;
        double sigma_alpha;
        double sigma_gamma;
        double wu;
        double wl;
        double alpha;
        double epsilon;

        double soft_max(const double alpha, const double s);

        void calc_grad_potential2(const Eigen::VectorXd& z, Eigen::VectorXd& out);
        void calc_inertia_matrix(const Eigen::VectorXd& z, const Eigen::VectorXd& z_dot, Eigen::MatrixXd& out);
        void calc_force(const Eigen::VectorXd& z, const Eigen::VectorXd& z_dot, Eigen::VectorXd& out);


    public:
        using rmp_node::Node::Node;
        Goal_Attractor(
            double max_speed,
            double gain,
            double f_alpha,
            double sigma_alpha,
            double sigma_gamma,
            double wu,
            double wl,
            double alpha,
            double epsilon
        );

        void calc_natural_form(
            const Eigen::VectorXd& x0, const Eigen::VectorXd& x0_dot
        ) override;

    };


    class Obstacle_Avoidance : public rmp_node::Node
    {
    private:
        double gain;
    


    public:
        using rmp_node::Node::Node;
        Obstacle_Avoidance(double gain);
    };



    class Joint_Limit_Avoidance : public rmp_node::Node
    {
    private:
        double jl_upper;
    

    public:
        using rmp_node::Node::Node;
        Joint_Limit_Avoidance();
    };
};


#endif