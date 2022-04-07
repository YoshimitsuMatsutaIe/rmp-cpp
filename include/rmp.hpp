#ifndef RMP
#define RMP

#include <iostream>

#include "/usr/include/eigen3/Eigen/Core"

#include "./node.hpp"

namespace rmp_base
{
    class Is_Not_Leaf : public rmp_node::Node
    {
    public:
        using rmp_node::Node::Node;
        void calc_natural_form();
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


        void calc_grad_potential2(
            const Eigen::VectorXd &x, Eigen::VectorXd& out
        );

        void calc_curvature(Eigen::VectorXd& out);

        void calc_inertia_matrix();
        void calc_force();


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

        void calc_natural_form();

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