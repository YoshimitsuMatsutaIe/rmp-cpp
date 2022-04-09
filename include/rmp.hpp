#ifndef RMP__H
#define RMP__H

#include <iostream>

#include "/usr/include/eigen3/Eigen/Core"

#include "./node.hpp"

/*rmp-flow

*/
namespace rmp2
{
    class Goal_Attractor : public rmp_node::Node
    {
    private:
        double gain;
        double damp;
        double f_alpha;
        double sigma_alpha;
        double sigma_gamma;
        double wu;
        double wl;
        double alpha;
        double epsilon;

        Eigen::VectorXd& x0;  //goal point's position
        Eigen::VectorXd& x0_dot;  //goal point's velo

        void calc_grad_potential2(const Eigen::VectorXd& z, Eigen::VectorXd& out);
        void calc_inertia_matrix(const Eigen::VectorXd& z, const Eigen::VectorXd& z_dot, Eigen::MatrixXd& out);
        void calc_force(const Eigen::VectorXd& z, const Eigen::VectorXd& z_dot, Eigen::VectorXd& out);


    public:
        Goal_Attractor(
            int self_dim, int parent_dim, int node_type, std::string name,
            double max_speed,
            double gain,
            double f_alpha,
            double sigma_alpha,
            double sigma_gamma,
            double wu,
            double wl,
            double alpha,
            double epsilon,
            Eigen::VectorXd& z0, Eigen::VectorXd& z0_dot
        );

        void pushforward() override;

        //void set_goal_point_ref(Eigen::VectorXd& z0, Eigen::VectorXd& z0_dot);
        void calc_natural_form() override;
    };


    class Obstacle_Avoidance : public rmp_node::Node
    {
    private:
        double scale_rep;
        double scale_damp;
        double ratio;
        double rep_gain;
        double r;
    
        Eigen::VectorXd& x0;  //obstacle point's position
        Eigen::VectorXd& x0_dot;  //obstacle point's velo

    public:
        Obstacle_Avoidance(
            int self_dim, int parent_dim, int node_type, std::string name,
            double scale_rep,
            double scale_damp,
            double ratio,
            double rep_gain,
            double r,
            Eigen::VectorXd& z0, Eigen::VectorXd& z0_dot
        );

        void calc_natural_form() override;
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