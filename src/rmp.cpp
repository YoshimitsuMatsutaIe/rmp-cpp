#include <iostream>
#include <cmath>

#include "/usr/include/eigen3/Eigen/Core"

#include "../include/rmp.hpp"

double rmp2::goal_attractor::soft_max(
    const double alpha, const double s)
{
    return s + 1/alpha * std::log(1 + std::exp(-2 * alpha * s));
}

