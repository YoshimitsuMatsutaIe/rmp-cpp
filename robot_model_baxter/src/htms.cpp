
#include "../include/baxter.hpp"



#include <eigen3/Eigen/Core>


void baxter::htm_W0(const VectorXd& q, double L, double h, double H, double L0, double L1, double L2, double L3, double L4, double L5, double L6, MatrixXd& out)
{
    VectorXd temp = VectorXd::Zero(3);
    out(3, 0) = 0;
    out(3, 1) = 0;
    out(3, 2) = 0;
    out(3, 3) = 1;
    
    rx_W0(q, L, h, H, L0, L1, L2, L3, L4, L5, L6, temp);
    out(Eigen::seqN(0,2), Eigen::seqN(0,0)) = temp;

    ry_W0(q, L, h, H, L0, L1, L2, L3, L4, L5, L6, temp);
    out(Eigen::seqN(0,2), Eigen::seqN(1,1)) = temp;

    rz_W0(q, L, h, H, L0, L1, L2, L3, L4, L5, L6, temp);
    out(Eigen::seqN(0,2), Eigen::seqN(2,2)) = temp;

    o_W0(q, L, h, H, L0, L1, L2, L3, L4, L5, L6, temp);
    out(Eigen::seqN(0,2), Eigen::seqN(3,3)) = temp;
}

void baxter::htm_BR(const VectorXd& q, double L, double h, double H, double L0, double L1, double L2, double L3, double L4, double L5, double L6, MatrixXd& out)
{
    VectorXd temp = VectorXd::Zero(3);
    out(3, 0) = 0;
    out(3, 1) = 0;
    out(3, 2) = 0;
    out(3, 3) = 1;
    
    rx_BR(q, L, h, H, L0, L1, L2, L3, L4, L5, L6, temp);
    out(Eigen::seqN(0,2), Eigen::seqN(0,0)) = temp;

    ry_BR(q, L, h, H, L0, L1, L2, L3, L4, L5, L6, temp);
    out(Eigen::seqN(0,2), Eigen::seqN(1,1)) = temp;

    rz_BR(q, L, h, H, L0, L1, L2, L3, L4, L5, L6, temp);
    out(Eigen::seqN(0,2), Eigen::seqN(2,2)) = temp;

    o_BR(q, L, h, H, L0, L1, L2, L3, L4, L5, L6, temp);
    out(Eigen::seqN(0,2), Eigen::seqN(3,3)) = temp;
}

void baxter::htm_0(const VectorXd& q, double L, double h, double H, double L0, double L1, double L2, double L3, double L4, double L5, double L6, MatrixXd& out)
{
    VectorXd temp = VectorXd::Zero(3);
    out(3, 0) = 0;
    out(3, 1) = 0;
    out(3, 2) = 0;
    out(3, 3) = 1;
    
    rx_0(q, L, h, H, L0, L1, L2, L3, L4, L5, L6, temp);
    out(Eigen::seqN(0,2), Eigen::seqN(0,0)) = temp;

    ry_0(q, L, h, H, L0, L1, L2, L3, L4, L5, L6, temp);
    out(Eigen::seqN(0,2), Eigen::seqN(1,1)) = temp;

    rz_0(q, L, h, H, L0, L1, L2, L3, L4, L5, L6, temp);
    out(Eigen::seqN(0,2), Eigen::seqN(2,2)) = temp;

    o_0(q, L, h, H, L0, L1, L2, L3, L4, L5, L6, temp);
    out(Eigen::seqN(0,2), Eigen::seqN(3,3)) = temp;
}

void baxter::htm_1(const VectorXd& q, double L, double h, double H, double L0, double L1, double L2, double L3, double L4, double L5, double L6, MatrixXd& out)
{
    VectorXd temp = VectorXd::Zero(3);
    out(3, 0) = 0;
    out(3, 1) = 0;
    out(3, 2) = 0;
    out(3, 3) = 1;
    
    rx_1(q, L, h, H, L0, L1, L2, L3, L4, L5, L6, temp);
    out(Eigen::seqN(0,2), Eigen::seqN(0,0)) = temp;

    ry_1(q, L, h, H, L0, L1, L2, L3, L4, L5, L6, temp);
    out(Eigen::seqN(0,2), Eigen::seqN(1,1)) = temp;

    rz_1(q, L, h, H, L0, L1, L2, L3, L4, L5, L6, temp);
    out(Eigen::seqN(0,2), Eigen::seqN(2,2)) = temp;

    o_1(q, L, h, H, L0, L1, L2, L3, L4, L5, L6, temp);
    out(Eigen::seqN(0,2), Eigen::seqN(3,3)) = temp;
}

void baxter::htm_2(const VectorXd& q, double L, double h, double H, double L0, double L1, double L2, double L3, double L4, double L5, double L6, MatrixXd& out)
{
    VectorXd temp = VectorXd::Zero(3);
    out(3, 0) = 0;
    out(3, 1) = 0;
    out(3, 2) = 0;
    out(3, 3) = 1;
    
    rx_2(q, L, h, H, L0, L1, L2, L3, L4, L5, L6, temp);
    out(Eigen::seqN(0,2), Eigen::seqN(0,0)) = temp;

    ry_2(q, L, h, H, L0, L1, L2, L3, L4, L5, L6, temp);
    out(Eigen::seqN(0,2), Eigen::seqN(1,1)) = temp;

    rz_2(q, L, h, H, L0, L1, L2, L3, L4, L5, L6, temp);
    out(Eigen::seqN(0,2), Eigen::seqN(2,2)) = temp;

    o_2(q, L, h, H, L0, L1, L2, L3, L4, L5, L6, temp);
    out(Eigen::seqN(0,2), Eigen::seqN(3,3)) = temp;
}

void baxter::htm_3(const VectorXd& q, double L, double h, double H, double L0, double L1, double L2, double L3, double L4, double L5, double L6, MatrixXd& out)
{
    VectorXd temp = VectorXd::Zero(3);
    out(3, 0) = 0;
    out(3, 1) = 0;
    out(3, 2) = 0;
    out(3, 3) = 1;
    
    rx_3(q, L, h, H, L0, L1, L2, L3, L4, L5, L6, temp);
    out(Eigen::seqN(0,2), Eigen::seqN(0,0)) = temp;

    ry_3(q, L, h, H, L0, L1, L2, L3, L4, L5, L6, temp);
    out(Eigen::seqN(0,2), Eigen::seqN(1,1)) = temp;

    rz_3(q, L, h, H, L0, L1, L2, L3, L4, L5, L6, temp);
    out(Eigen::seqN(0,2), Eigen::seqN(2,2)) = temp;

    o_3(q, L, h, H, L0, L1, L2, L3, L4, L5, L6, temp);
    out(Eigen::seqN(0,2), Eigen::seqN(3,3)) = temp;
}

void baxter::htm_4(const VectorXd& q, double L, double h, double H, double L0, double L1, double L2, double L3, double L4, double L5, double L6, MatrixXd& out)
{
    VectorXd temp = VectorXd::Zero(3);
    out(3, 0) = 0;
    out(3, 1) = 0;
    out(3, 2) = 0;
    out(3, 3) = 1;
    
    rx_4(q, L, h, H, L0, L1, L2, L3, L4, L5, L6, temp);
    out(Eigen::seqN(0,2), Eigen::seqN(0,0)) = temp;

    ry_4(q, L, h, H, L0, L1, L2, L3, L4, L5, L6, temp);
    out(Eigen::seqN(0,2), Eigen::seqN(1,1)) = temp;

    rz_4(q, L, h, H, L0, L1, L2, L3, L4, L5, L6, temp);
    out(Eigen::seqN(0,2), Eigen::seqN(2,2)) = temp;

    o_4(q, L, h, H, L0, L1, L2, L3, L4, L5, L6, temp);
    out(Eigen::seqN(0,2), Eigen::seqN(3,3)) = temp;
}

void baxter::htm_5(const VectorXd& q, double L, double h, double H, double L0, double L1, double L2, double L3, double L4, double L5, double L6, MatrixXd& out)
{
    VectorXd temp = VectorXd::Zero(3);
    out(3, 0) = 0;
    out(3, 1) = 0;
    out(3, 2) = 0;
    out(3, 3) = 1;
    
    rx_5(q, L, h, H, L0, L1, L2, L3, L4, L5, L6, temp);
    out(Eigen::seqN(0,2), Eigen::seqN(0,0)) = temp;

    ry_5(q, L, h, H, L0, L1, L2, L3, L4, L5, L6, temp);
    out(Eigen::seqN(0,2), Eigen::seqN(1,1)) = temp;

    rz_5(q, L, h, H, L0, L1, L2, L3, L4, L5, L6, temp);
    out(Eigen::seqN(0,2), Eigen::seqN(2,2)) = temp;

    o_5(q, L, h, H, L0, L1, L2, L3, L4, L5, L6, temp);
    out(Eigen::seqN(0,2), Eigen::seqN(3,3)) = temp;
}

void baxter::htm_6(const VectorXd& q, double L, double h, double H, double L0, double L1, double L2, double L3, double L4, double L5, double L6, MatrixXd& out)
{
    VectorXd temp = VectorXd::Zero(3);
    out(3, 0) = 0;
    out(3, 1) = 0;
    out(3, 2) = 0;
    out(3, 3) = 1;
    
    rx_6(q, L, h, H, L0, L1, L2, L3, L4, L5, L6, temp);
    out(Eigen::seqN(0,2), Eigen::seqN(0,0)) = temp;

    ry_6(q, L, h, H, L0, L1, L2, L3, L4, L5, L6, temp);
    out(Eigen::seqN(0,2), Eigen::seqN(1,1)) = temp;

    rz_6(q, L, h, H, L0, L1, L2, L3, L4, L5, L6, temp);
    out(Eigen::seqN(0,2), Eigen::seqN(2,2)) = temp;

    o_6(q, L, h, H, L0, L1, L2, L3, L4, L5, L6, temp);
    out(Eigen::seqN(0,2), Eigen::seqN(3,3)) = temp;
}

void baxter::htm_ee(const VectorXd& q, double L, double h, double H, double L0, double L1, double L2, double L3, double L4, double L5, double L6, MatrixXd& out)
{
    VectorXd temp = VectorXd::Zero(3);
    out(3, 0) = 0;
    out(3, 1) = 0;
    out(3, 2) = 0;
    out(3, 3) = 1;
    
    rx_ee(q, L, h, H, L0, L1, L2, L3, L4, L5, L6, temp);
    out(Eigen::seqN(0,2), Eigen::seqN(0,0)) = temp;

    ry_ee(q, L, h, H, L0, L1, L2, L3, L4, L5, L6, temp);
    out(Eigen::seqN(0,2), Eigen::seqN(1,1)) = temp;

    rz_ee(q, L, h, H, L0, L1, L2, L3, L4, L5, L6, temp);
    out(Eigen::seqN(0,2), Eigen::seqN(2,2)) = temp;

    o_ee(q, L, h, H, L0, L1, L2, L3, L4, L5, L6, temp);
    out(Eigen::seqN(0,2), Eigen::seqN(3,3)) = temp;
}