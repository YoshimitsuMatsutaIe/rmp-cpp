



#include "../include/baxter.hpp"




baxter::Baxter::Baxter(void)
{
    this->L = 278e-3;
    this->h = 64e-3;
    this->H = 1104e-3;
    this->L0 = 270.35e-3;
    this->L1 = 69e-3;
    this->L2 = 364.35e-3;
    this->L3 = 69e-3;
    this->L4 = 374.29e-3;
    this->L5 = 10e-3;
    this->L6 = 368.3e-3;

    this->q_neutral = VectorXd::Zero(7);
    this->q_max = VectorXd::Zero(7);
    this->q_min = VectorXd::Zero(7);
    this->q_neutral << 0.0, -31.0, 0.0, 43.0, 0.0, 72.0, 0.0;
    this->q_max << 51.0, 60.0, 173.0, 150.0, 175.0, 120.0, 175.0;
    this->q_min << -141.0, -123.0, -173.0, -3.0, -175.0, -90.0, -175.0;

    this->q_neutral *= M_PI / 180.;
    this->q_max *= M_PI / 180.;
    this->q_min *= M_PI / 180.;

    std::cout << "hoge!" << std::endl;

    for (int i=0; i<2; ++i){
        this->static_os[i] = VectorXd::Zero(3);
        this->static_rxs[i] = VectorXd::Zero(3);
        this->static_rys[i] = VectorXd::Zero(3);
        this->static_rzs[i] = VectorXd::Zero(3);
        this->static_jos[i] = MatrixXd::Zero(3,7);
        this->static_jrxs[i] = MatrixXd::Zero(3,7);
        this->static_jrys[i] = MatrixXd::Zero(3,7);
        this->static_jrzs[i] = MatrixXd::Zero(3,7);
        this->static_jo_dots[i] = MatrixXd::Zero(3,7);
        this->static_jrx_dots[i] = MatrixXd::Zero(3,7);
        this->static_jry_dots[i] = MatrixXd::Zero(3,7);
        this->static_jrz_dots[i] = MatrixXd::Zero(3,7);
    }
    for (int i=0; i<7; ++i){
        this->os[i] = VectorXd::Zero(3);
        this->rxs[i] = VectorXd::Zero(3);
        this->rys[i] = VectorXd::Zero(3);
        this->rzs[i] = VectorXd::Zero(3);
        this->jos[i] = MatrixXd::Zero(3,7);
        this->jrxs[i] = MatrixXd::Zero(3,7);
        this->jrys[i] = MatrixXd::Zero(3,7);
        this->jrzs[i] = MatrixXd::Zero(3,7);
        this->jo_dots[i] = MatrixXd::Zero(3,7);
        this->jrx_dots[i] = MatrixXd::Zero(3,7);
        this->jry_dots[i] = MatrixXd::Zero(3,7);
        this->jrz_dots[i] = MatrixXd::Zero(3,7);
    }

    this->o_ee = VectorXd::Zero(3);
    this->rx_ee = VectorXd::Zero(3);
    this->ry_ee = VectorXd::Zero(3);
    this->rz_ee = VectorXd::Zero(3);
    this->jo_ee = MatrixXd::Zero(3,7);
    this->jrx_ee = MatrixXd::Zero(3,7);
    this->jry_ee = MatrixXd::Zero(3,7);
    this->jrz_ee = MatrixXd::Zero(3,7);
    this->jo_dot_ee = MatrixXd::Zero(3,7);
    this->jrx_dot_ee = MatrixXd::Zero(3,7);
    this->jry_dot_ee = MatrixXd::Zero(3,7);
    this->jrz_dot_ee = MatrixXd::Zero(3,7);

    this->phi_W0(this->q_neutral, this->static_os[0]);
    this->phi_BR(this->q_neutral, this->static_os[1]);
    this->Rx_W0(this->q_neutral, this->static_rxs[0]);
    this->Rx_BR(this->q_neutral, this->static_rxs[1]);
    this->Ry_W0(this->q_neutral, this->static_rys[0]);
    this->Ry_BR(this->q_neutral, this->static_rys[1]);
    this->Rz_W0(this->q_neutral, this->static_rzs[0]);
    this->Rz_BR(this->q_neutral, this->static_rzs[1]);

    this->Jo_W0(this->q_neutral, this->static_jos[0]);
    this->Jo_BR(this->q_neutral, this->static_jos[1]);
    this->JRx_W0(this->q_neutral, this->static_jrxs[0]);
    this->JRx_BR(this->q_neutral, this->static_jrxs[1]);
    this->JRy_W0(this->q_neutral, this->static_jrys[0]);
    this->JRy_BR(this->q_neutral, this->static_jrys[1]);
    this->JRz_W0(this->q_neutral, this->static_jrzs[0]);
    this->JRz_BR(this->q_neutral, this->static_jrzs[1]);

    this->Jo_dot_W0(this->q_neutral, Vector7d::Zero(7), this->static_jo_dots[0]);
    this->Jo_dot_BR(this->q_neutral, Vector7d::Zero(7), this->static_jo_dots[1]);
    this->JRx_dot_W0(this->q_neutral, Vector7d::Zero(7), this->static_jrx_dots[0]);
    this->JRx_dot_BR(this->q_neutral, Vector7d::Zero(7), this->static_jrx_dots[1]);
    this->JRy_dot_W0(this->q_neutral, Vector7d::Zero(7), this->static_jry_dots[0]);
    this->JRy_dot_BR(this->q_neutral, Vector7d::Zero(7), this->static_jry_dots[1]);
    this->JRz_dot_W0(this->q_neutral, Vector7d::Zero(7), this->static_jrz_dots[0]);
    this->JRz_dot_BR(this->q_neutral, Vector7d::Zero(7), this->static_jrz_dots[1]);

    this->calc_all(this->q_neutral, Vector7d::Zero(7));

}


void baxter::Baxter::calc_all(const Vector7d& q, const Vector7d& q_dot)
{
    std::cout << "hoge4" << std::endl;
    this->phi_0(q, this->os[0]);
    this->phi_1(q, this->os[1]);
    this->phi_2(q, this->os[2]);
    this->phi_3(q, this->os[3]);
    std::cout << "hoge4.5" << std::endl;
    this->phi_4(q, this->os[4]);
    this->phi_5(q, this->os[5]);
    this->phi_6(q, this->os[6]);
    this->phi_ee(q, this->o_ee);

    std::cout << "hoge5" << std::endl;
    this->Rx_0(q, this->rxs[0]);
    this->Rx_1(q, this->rxs[1]);
    this->Rx_2(q, this->rxs[2]);
    this->Rx_3(q, this->rxs[3]);
    this->Rx_4(q, this->rxs[4]);
    this->Rx_5(q, this->rxs[5]);
    this->Rx_6(q, this->rxs[6]);
    this->Rx_ee(q, this->rx_ee);

    this->Ry_0(q, this->rys[0]);
    this->Ry_1(q, this->rys[1]);
    this->Ry_2(q, this->rys[2]);
    this->Ry_3(q, this->rys[3]);
    this->Ry_4(q, this->rys[4]);
    this->Ry_5(q, this->rys[5]);
    this->Ry_6(q, this->rys[6]);
    this->Ry_ee(q, this->ry_ee);

    this->Rz_0(q, this->rzs[0]);
    this->Rz_1(q, this->rzs[1]);
    this->Rz_2(q, this->rzs[2]);
    this->Rz_3(q, this->rzs[3]);
    this->Rz_4(q, this->rzs[4]);
    this->Rz_5(q, this->rzs[5]);
    this->Rz_6(q, this->rzs[6]);
    this->Rz_ee(q, this->rz_ee);


    this->Jo_0(q, this->jos[0]);
    this->Jo_1(q, this->jos[1]);
    this->Jo_2(q, this->jos[2]);
    this->Jo_3(q, this->jos[3]);
    this->Jo_4(q, this->jos[4]);
    this->Jo_5(q, this->jos[5]);
    this->Jo_6(q, this->jos[6]);
    this->Jo_ee(q, this->jo_ee);

    this->JRx_0(q, this->jrxs[0]);
    this->JRx_1(q, this->jrxs[1]);
    this->JRx_2(q, this->jrxs[2]);
    this->JRx_3(q, this->jrxs[3]);
    this->JRx_4(q, this->jrxs[4]);
    this->JRx_5(q, this->jrxs[5]);
    this->JRx_6(q, this->jrxs[6]);
    this->JRx_ee(q, this->jrx_ee);

    this->JRy_0(q, this->jrys[0]);
    this->JRy_1(q, this->jrys[1]);
    this->JRy_2(q, this->jrys[2]);
    this->JRy_3(q, this->jrys[3]);
    this->JRy_4(q, this->jrys[4]);
    this->JRy_5(q, this->jrys[5]);
    this->JRy_6(q, this->jrys[6]);
    this->JRy_ee(q, this->jry_ee);

    this->JRz_0(q, this->jrzs[0]);
    this->JRz_1(q, this->jrzs[1]);
    this->JRz_2(q, this->jrzs[2]);
    this->JRz_3(q, this->jrzs[3]);
    this->JRz_4(q, this->jrzs[4]);
    this->JRz_5(q, this->jrzs[5]);
    this->JRz_6(q, this->jrzs[6]);
    this->JRz_ee(q, this->jrz_ee);

    this->Jo_dot_0(q, q_dot, this->jo_dots[0]);
    this->Jo_dot_1(q, q_dot, this->jo_dots[1]);
    this->Jo_dot_2(q, q_dot, this->jo_dots[2]);
    this->Jo_dot_3(q, q_dot, this->jo_dots[3]);
    this->Jo_dot_4(q, q_dot, this->jo_dots[4]);
    this->Jo_dot_5(q, q_dot, this->jo_dots[5]);
    this->Jo_dot_6(q, q_dot, this->jo_dots[6]);
    this->Jo_dot_ee(q, q_dot, this->jo_dot_ee);

    this->JRx_dot_0(q, q_dot, this->jrx_dots[0]);
    this->JRx_dot_1(q, q_dot, this->jrx_dots[1]);
    this->JRx_dot_2(q, q_dot, this->jrx_dots[2]);
    this->JRx_dot_3(q, q_dot, this->jrx_dots[3]);
    this->JRx_dot_4(q, q_dot, this->jrx_dots[4]);
    this->JRx_dot_5(q, q_dot, this->jrx_dots[5]);
    this->JRx_dot_6(q, q_dot, this->jrx_dots[6]);
    this->JRx_dot_ee(q, q_dot, this->jrx_dot_ee);

    this->JRy_dot_0(q, q_dot, this->jry_dots[0]);
    this->JRy_dot_1(q, q_dot, this->jry_dots[1]);
    this->JRy_dot_2(q, q_dot, this->jry_dots[2]);
    this->JRy_dot_3(q, q_dot, this->jry_dots[3]);
    this->JRy_dot_4(q, q_dot, this->jry_dots[4]);
    this->JRy_dot_5(q, q_dot, this->jry_dots[5]);
    this->JRy_dot_6(q, q_dot, this->jry_dots[6]);
    this->JRy_dot_ee(q, q_dot, this->jry_dot_ee);

    this->JRz_dot_0(q, q_dot, this->jrz_dots[0]);
    this->JRz_dot_1(q, q_dot, this->jrz_dots[1]);
    this->JRz_dot_2(q, q_dot, this->jrz_dots[2]);
    this->JRz_dot_3(q, q_dot, this->jrz_dots[3]);
    this->JRz_dot_4(q, q_dot, this->jrz_dots[4]);
    this->JRz_dot_5(q, q_dot, this->jrz_dots[5]);
    this->JRz_dot_6(q, q_dot, this->jrz_dots[6]);
    this->JRz_dot_ee(q, q_dot, this->jrz_dot_ee);

}



const void baxter::Baxter::print_all(void)
{
    std::cout << "\nnow states ..." << std::endl;
    
    for (int i=0; i<2; ++i){
        std::cout << "static_o_" << i << " = " << std::endl;
        std::cout << static_os[i] << std::endl;
    }
    for (int i=0; i<7; ++i){
        std::cout << "o_" << i << " = " << std::endl;
        std::cout << os[i] << std::endl;
    }
    std::cout << "o_ee" << " = " << std::endl;
    std::cout << o_ee << "\n" << std::endl;

    for (int i=0; i<2; ++i){
        std::cout << "static_Rx_" << i << " = " << std::endl;
        std::cout << static_rxs[i] << std::endl;
    }
    for (int i=0; i<7; ++i){
        std::cout << "rx_" << i << " = " << std::endl;
        std::cout << rxs[i] << std::endl;
    }
    std::cout << "rx_ee" << " = " << std::endl;
    std::cout << rx_ee << "\n" << std::endl;

    for (int i=0; i<2; ++i){
        std::cout << "static_Ry_" << i << " = " << std::endl;
        std::cout << static_rys[i] << std::endl;
    }
    for (int i=0; i<7; ++i){
        std::cout << "ry_" << i << " = " << std::endl;
        std::cout << rys[i] << std::endl;
    }
    std::cout << "ry_ee" << " = " << std::endl;
    std::cout << ry_ee << "\n" << std::endl;

    for (int i=0; i<2; ++i){
        std::cout << "static_Rz_" << i << " = " << std::endl;
        std::cout << static_rzs[i] << std::endl;
    }
    for (int i=0; i<7; ++i){
        std::cout << "rz_" << i << " = " << std::endl;
        std::cout << rzs[i] << std::endl;
    }
    std::cout << "rz_ee" << " = " << std::endl;
    std::cout << rz_ee << "\n" << std::endl;


    for (int i=0; i<2; ++i){
        std::cout << "static_jo_" << i << " = " << std::endl;
        std::cout << static_jos[i] << std::endl;
    }
    for (int i=0; i<7; ++i){
        std::cout << "jo_" << i << " = " << std::endl;
        std::cout << jos[i] << std::endl;
    }
    std::cout << "jo_ee" << " = " << std::endl;
    std::cout << jo_ee << "\n" << std::endl;

    for (int i=0; i<2; ++i){
        std::cout << "static_jRx_" << i << " = " << std::endl;
        std::cout << static_jrxs[i] << std::endl;
    }
    for (int i=0; i<7; ++i){
        std::cout << "jrx_" << i << " = " << std::endl;
        std::cout << jrxs[i] << std::endl;
    }
    std::cout << "jrx_ee" << " = " << std::endl;
    std::cout << jrx_ee << "\n" << std::endl;

    for (int i=0; i<2; ++i){
        std::cout << "static_jRy_" << i << " = " << std::endl;
        std::cout << static_jrys[i] << std::endl;
    }
    for (int i=0; i<7; ++i){
        std::cout << "jry_" << i << " = " << std::endl;
        std::cout << jrys[i] << std::endl;
    }
    std::cout << "jry_ee" << " = " << std::endl;
    std::cout << jry_ee << "\n" << std::endl;

    for (int i=0; i<2; ++i){
        std::cout << "static_jRz_" << i << " = " << std::endl;
        std::cout << static_jrzs[i] << std::endl;
    }
    for (int i=0; i<7; ++i){
        std::cout << "jrz_" << i << " = " << std::endl;
        std::cout << jrzs[i] << std::endl;
    }
    std::cout << "jrz_ee" << " = " << std::endl;
    std::cout << jrz_ee << "\n" << std::endl;


    for (int i=0; i<2; ++i){
        std::cout << "static_jo_dot_" << i << " = " << std::endl;
        std::cout << static_jo_dots[i] << std::endl;
    }
    for (int i=0; i<7; ++i){
        std::cout << "jo_dot_" << i << " = " << std::endl;
        std::cout << jo_dots[i] << std::endl;
    }
    std::cout << "jo_dot_ee" << " = " << std::endl;
    std::cout << jo_dot_ee << "\n" << std::endl;

    for (int i=0; i<2; ++i){
        std::cout << "static_jRx_dot_" << i << " = " << std::endl;
        std::cout << static_jrx_dots[i] << std::endl;
    }
    for (int i=0; i<7; ++i){
        std::cout << "jrx_dot_" << i << " = " << std::endl;
        std::cout << jrx_dots[i] << std::endl;
    }
    std::cout << "jrx_dot_ee" << " = " << std::endl;
    std::cout << jrx_dot_ee << "\n" << std::endl;

    for (int i=0; i<2; ++i){
        std::cout << "static_jRy_dot_" << i << " = " << std::endl;
        std::cout << static_jry_dots[i] << std::endl;
    }
    for (int i=0; i<7; ++i){
        std::cout << "jry_dot_" << i << " = " << std::endl;
        std::cout << jry_dots[i] << std::endl;
    }
    std::cout << "jry_dot_ee" << " = " << std::endl;
    std::cout << jry_dot_ee << "\n" << std::endl;

    for (int i=0; i<2; ++i){
        std::cout << "static_jRz_dot_" << i << " = " << std::endl;
        std::cout << static_jrz_dots[i] << std::endl;
    }
    for (int i=0; i<7; ++i){
        std::cout << "jrz_dot_" << i << " = " << std::endl;
        std::cout << jrz_dots[i] << std::endl;
    }
    std::cout << "jrz_dot_ee" << " = " << std::endl;
    std::cout << jrz_dot_ee << "\n" << std::endl;



    // std::for_each(
    //     this->static_os.begin(),
    //     this->static_os.end(),
    //     [](Vector3d x)
    //     {
    //         std::cout << x << std::endl;
    //     }
    // );
}