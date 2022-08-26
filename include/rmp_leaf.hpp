#ifndef RMP_LEAF__H
#define RMP_LEAF__H

#include <iostream>

#include "/usr/include/eigen3/Eigen/Core"

#include "./rmp_node.hpp"
#include "./mappings.hpp"

/*rmp-flow

*/
namespace rmp2
{
    using Eigen::VectorXd;
    using Eigen::MatrixXd;
    using std::pow;
    using std::exp;
    using std::cout;
    using std::endl;


    class Goal_Attractor : public rmp_flow::Leaf_Base
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

        VectorXd& x0;  //goal point's position
        VectorXd& x0_dot;  //goal point's velo

        void calc_grad_potential2(const VectorXd& z, VectorXd& out);
        void calc_inertia_matrix(const VectorXd& z, const VectorXd& z_dot, MatrixXd& out);
        void calc_force(const VectorXd& z, const VectorXd& z_dot, VectorXd& out);


    public:
        Goal_Attractor(
            int self_dim, int parent_dim, std::string name, mapping_base::Identity* mappings,
            double max_speed,
            double gain,
            double f_alpha,
            double sigma_alpha,
            double sigma_gamma,
            double wu,
            double wl,
            double alpha,
            double epsilon,
            VectorXd& z0, VectorXd& z0_dot
        );

        void calc_natural_form(void) override;
    };



    class Obstacle_Avoidance : public rmp_flow::Leaf_Base
    {
    private:
        double scale_rep;
        double scale_damp;
        double gain;
        double sigma;
        double rw;

        double calc_inertia_matrix(double s, double s_dot);
        double calc_force(double s, double s_dot);

        double w2(double s);
        double w2_dot(double s);
        double u2(double s_dot);
        double u2_dot(double s_dot);
        double delta(double s, double s_dot);
        double xi(double s, double s_dot);
        double grad_phi1(double s);

    public:
        Obstacle_Avoidance(void);
        Obstacle_Avoidance(
            int self_dim, int parent_dim, std::string name, mapping_base::Identity* mappings,
            double scale_rep,
            double scale_damp,
            double gain,
            double sigma,
            double rw
        );

        void calc_natural_form(void) override;
    };



    class Joint_Limit_Avoidance : public rmp_flow::Leaf_Base
    {
    private:
        double gamma_p;
        double gamma_d;
        double lambda;
        double sigma;
        VectorXd q_max;
        VectorXd q_min;
        VectorXd q_neutral;

        double alpha_upper(double q_dot);
        double alpha_lower(double q_dot);
        double s(double q, double qu, double ql);
        double s_dot(double q, double qu, double ql);
        double d(double s);
        double d_dot(double s, double s_dot);
        double b(double q, double q_dot, double qu, double ql);
        double b_dot(double q, double q_dot, double qu, double ql);
        double a(double q, double q_dot, double qu, double ql);
        double a_dot(double q, double q_dot, double qu, double ql);

        void calc_inertia_matrix(MatrixXd& out);
        void xi(VectorXd& out);
        void calc_force(VectorXd& out);
    

    public:
        Joint_Limit_Avoidance(
            int self_dim, int parent_dim, std::string name, mapping_base::Identity* mappings,
            double gamma_p,
            double gamma_d,
            double lambda,
            double sigma,
            VectorXd& q_max,
            VectorXd& q_min,
            VectorXd& q_neutral
        );

        void calc_natural_form(void) override;
    };
};


#endif