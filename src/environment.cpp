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


void simulator::set_sphere(int n, float r, float x, float y, float z, std::vector<Eigen::VectorXd>& out)
{
    std::random_device seed_gen;
    std::default_random_engine engine(seed_gen());
    std::uniform_real_distribution<> dist_alpha(-1.0, 1.0);
    std::uniform_real_distribution<> dist_beta(0, 2*M_PI);
    float alpha;
    float beta;

    for (int i=0; i<n; i++){
        //std::cout << i << std::endl;

        alpha = std::acos(dist_alpha(engine));
        beta = dist_beta(engine);
        
        VectorXd o(3);
        o << r * sin(alpha) * cos(beta) + x,
        r * sin(alpha) * sin(beta) + y,
        r * cos(alpha) + z;

        out.push_back(o);
    }

    //std::cout << "n = " << n << std::endl;
    //std::cout << "sp done!" << std::endl;
}
