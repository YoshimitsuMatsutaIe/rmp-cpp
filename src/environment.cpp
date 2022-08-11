#include "../include/environment.hpp"

/**
 * @brief 3次元回転行列
 * 
 * @param alpha 
 * @param beta 
 * @param gamma 
 * @param out 
 */
void simulator::rotate(float alpha, float beta, float gamma, Eigen::Matrix3d& out)
{
    using std::cos;
    using std::sin;
    Eigen::Matrix3d Rx;
    Eigen::Matrix3d Ry;
    Eigen::Matrix3d Rz;

    Rx << 1, 0, 0,
    0, cos(alpha), -sin(alpha),
    0, sin(alpha), cos(alpha);
    
    Ry << cos(beta), 0, sin(beta),
    0, 1, 0,
    -sin(beta), 0, cos(beta);
    
    Rz << cos(gamma), -sin(gamma), 0,
    sin(gamma), cos(gamma), 0,
    0, 0, 1;

    out = Rx * Ry * Rz;
}


void simulator::set_sphere(int n, float r, float x, float y, float z, std::vector<Eigen::VectorXd&> out)
{
    Eigen::Vector3d q;
    for (int i=0; i<n; i++){
        q = Eigen::MatrixXd::Random(3, 1);
        
        VectorXd o(3);
        o << rand
        out.push_back()
    }
}
