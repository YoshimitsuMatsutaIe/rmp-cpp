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
    using Eigen::MatrixXd;
    void rotate(float alpha, float beta, float gamma, Eigen::Matrix3d& out);
    void set_sphere(int n, float r, float x, float y, float z, vector<VectorXd>& out);
    void set_cylinder(
        int n, float r, float L, float x, float y, float z,
        float alpha, float beta, float gamma,
        vector<VectorXd>& out
    );
    void set_field(
        int n, float lx, float ly, float x, float y, float z,
        float alpha, float beta, float gamma,
        vector<VectorXd>& out
    );



}


#endif