#ifndef ENVIRONMENT__HPP
#define ENVIRONMENT__HPP

#include <eigen3/Eigen/Core>
#include <vector>
#include <cmath>
#include <random>

#include "simulator.hpp"

namespace simulator
{
    using std::cos;
    using std::sin;
    using std::vector;
    using Eigen::VectorXd;
    using Eigen::MatrixXd;

    void rotate(double alpha, Eigen::Matrix2d &out);

    /**
     * @brief 3次元回転行列（度で指定）
     * 
     * @param alpha 
     * @param beta 
     * @param gamma 
     * @param out 
     */
    void rotate(double alpha, double beta, double gamma, Eigen::Matrix3d& out);

    /**
     * @brief Set the sphere object
     */
    void set_sphere(int n, double r, double x, double y, double z, vector<VectorXd>& out);
    void set_sphere(int n, double r, double x, double y, vector<Eigen::VectorXd>& out);

    /**
     * @brief Set the cylinder object
     */
    void set_cylinder(
        int n, double r, double L, double x, double y, double z,
        double alpha, double beta, double gamma,
        vector<VectorXd>& out
    );

    /**
     * @brief Set the field object
     */
    void set_field(
        int n, double lx, double ly, double x, double y, double z,
        double alpha, double beta, double gamma,
        vector<VectorXd>& out
    );



}


#endif