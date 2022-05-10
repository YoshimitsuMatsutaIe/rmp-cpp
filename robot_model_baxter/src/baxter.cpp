#include "../include/baxter.hpp"



const double baxter::Control_Point::L = 278e-3;
const double baxter::Control_Point::h = 64e-3;
const double baxter::Control_Point::H = 1104e-3;
const double baxter::Control_Point::L0 = 270.35e-3;
const double baxter::Control_Point::L1 = 69e-3;
const double baxter::Control_Point::L2 = 364.35e-3;
const double baxter::Control_Point::L3 = 69e-3;
const double baxter::Control_Point::L4 = 374.29e-3;
const double baxter::Control_Point::L5 = 10e-3;
const double baxter::Control_Point::L6 = 368.3e-3;
const double baxter::Control_Point::R = 0.05;


void baxter::Control_Point::set_q_neutral(VectorXd& out)
{
    out = VectorXd::Zero(7);
    out << 
        0.0,
        -31.0*M_PI/180,
        0.0,
        43.0*M_PI/180,
        0.0,
        72.0*M_PI/180,
        0.0;
}

void baxter::Control_Point::set_q_max(VectorXd& out)
{
    out = VectorXd::Zero(7);
    out << 
        51.0*M_PI/180,
        60.0*M_PI/180,
        173.0*M_PI/180,
        150.0*M_PI/180,
        175.0*M_PI/180,
        120.0*M_PI/180,
        175.0*M_PI/180;
}

void baxter::Control_Point::set_q_min(VectorXd& out)
{
    out = VectorXd::Zero(7);
    out << 
        -141.0*M_PI/180,
        -123.0*M_PI/180,
        -173.0*M_PI/180,
        -3.0*M_PI/180,
        -175.0*M_PI/180,
        -90.0*M_PI/180,
        -175.0*M_PI/180;
}


const std::vector<std::size_t> baxter::Control_Point::calc_points_mapping(void)
{
    std::cout << "calc_points_mapping start." << std::endl;
    std::size_t frame_num = baxter::Control_Point::R_BARS_ALL.size();
    vector<std::size_t> s;
    for (int i=0; i<frame_num; ++i){
        //std::cout << "i = " << i << std::endl;
        //std::cout << "    num = " << baxter::Control_Point::R_BARS_ALL[i].size() << std::endl;
        s.push_back(baxter::Control_Point::R_BARS_ALL[i].size());
    }
    std::cout << "done!" << std::endl;
    return s;
}


const std::vector<std::vector<double>> baxter::Control_Point::r_bars_0{
    {0, L1/2, -L0/2, 1},
    {0, -L1/2, -L0/2, 1},
    {L1/2, 0, -L0/2, 1},
    {-L1/2, 0, -L0/2, 1}
};

const std::vector<std::vector<double>> baxter::Control_Point::r_bars_1{
    {0, 0, L3/2, 1},
    {0, 0, -L3/2, 1}
};

const std::vector<std::vector<double>> baxter::Control_Point::r_bars_2{
    {0, L3/2, -L2*2/3, 1},
    {0, -L3/2, -L2*2/3, 1},
    {L3/2, 0, -L2*2/3, 1},
    {-L3/2, 0, -L2*2/3, 1},
    {0, L3/2, -L2*1/3, 1},
    {0, -L3/2, -L2*1/3, 1},
    {L3/2, 0, -L2*1/3, 1},
    {-L3/2, 0, -L2*1/3, 1}
};
const std::vector<std::vector<double>> baxter::Control_Point::r_bars_3{
    {0, 0, L3/2, 1},
    {0, 0, -L3/2, 1}
};
const std::vector<std::vector<double>> baxter::Control_Point::r_bars_4{
    {0, R/2, -L4/3, 1},
    {0, -R/2, -L4/3, 1},
    {R/2, 0, -L4/3, 1},
    {-R/2, 0, -L4/3, 1},
    {0, R/2, -L4/3*2, 1},
    {0, -R/2, -L4/3*2, 1},
    {R/2, 0, -L4/3*2, 1},
    {-R/2, 0, -L4/3*2, 1}
};
const std::vector<std::vector<double>> baxter::Control_Point::r_bars_5{
    {0, 0, L5/2, 1},
    {0, 0, -L5/2, 1}
};
const std::vector<std::vector<double>> baxter::Control_Point::r_bars_6{
    {0, R/2, L6/2, 1},
    {0, -R/2, L6/2, 1},
    {R/2, 0, L6/2, 1},
    {-R/2, 0, L6/2, 1}
};
const std::vector<std::vector<double>> baxter::Control_Point::r_bars_ee{
    {0, 0, 0, 1}
};
const std::vector<std::vector<std::vector<double>>> baxter::Control_Point::R_BARS_ALL{
    r_bars_0, r_bars_1, r_bars_2, r_bars_3, r_bars_4, r_bars_5, r_bars_6, r_bars_ee
};



std::vector<baxter::func_q_vecout> baxter::Control_Point::Os =  {&o_0, &o_1, &o_2, &o_3, &o_4, &o_5, &o_6, &o_ee};
std::vector<baxter::func_q_vecout> baxter::Control_Point::RXs = {&rx_0, &rx_1, &rx_2, &rx_3, &rx_4, &rx_5, &rx_6, &rx_ee};
std::vector<baxter::func_q_vecout> baxter::Control_Point::RYs = {&ry_0, &ry_1, &ry_2, &ry_3, &ry_4, &ry_5, &ry_6, &ry_ee};
std::vector<baxter::func_q_vecout> baxter::Control_Point::RZs = {&rz_0, &rz_1, &rz_2, &rz_3, &rz_4, &rz_5, &rz_6, &rz_ee};
std::vector<baxter::func_q_matout> baxter::Control_Point::HTMs = {&htm_0, &htm_1, &htm_2, &htm_3, &htm_4, &htm_5, &htm_6, &htm_ee};
std::vector<baxter::func_q_matout> baxter::Control_Point::JOs =  {&jo_0, &jo_1, &jo_2, &jo_3, &jo_4, &jo_5, &jo_6, &jo_ee};
std::vector<baxter::func_q_matout> baxter::Control_Point::JRXs = {&jrx_0, &jrx_1, &jrx_2, &jrx_3, &jrx_4, &jrx_5, &jrx_6, &jrx_ee};
std::vector<baxter::func_q_matout> baxter::Control_Point::JRYs = {&jry_0, &jry_1, &jry_2, &jry_3, &jry_4, &jry_5, &jry_6, &jry_ee};
std::vector<baxter::func_q_matout> baxter::Control_Point::JRZs = {&jrz_0, &jrz_1, &jrz_2, &jrz_3, &jrz_4, &jrz_5, &jrz_6, &jrz_ee};
std::vector<baxter::func_q_dq_matout> baxter::Control_Point::JOs_dot =  {&jo_0_dot, &jo_1_dot, &jo_2_dot, &jo_3_dot, &jo_4_dot, &jo_5_dot, &jo_6_dot, &jo_ee_dot};
std::vector<baxter::func_q_dq_matout> baxter::Control_Point::JRXs_dot = {&jrx_0_dot, &jrx_1_dot, &jrx_2_dot, &jrx_3_dot, &jrx_4_dot, &jrx_5_dot, &jrx_6_dot, &jrx_ee_dot};
std::vector<baxter::func_q_dq_matout> baxter::Control_Point::JRYs_dot = {&jry_0_dot, &jry_1_dot, &jry_2_dot, &jry_3_dot, &jry_4_dot, &jry_5_dot, &jry_6_dot, &jry_ee_dot};
std::vector<baxter::func_q_dq_matout> baxter::Control_Point::JRZs_dot = {&jrz_0_dot, &jrz_1_dot, &jrz_2_dot, &jrz_3_dot, &jrz_4_dot, &jrz_5_dot, &jrz_6_dot, &jrz_ee_dot};






baxter::Control_Point::Control_Point(int frame, int index)
{
    this->name = "baxter control point at frame=" + std::to_string(frame) + ", index=" + std::to_string(index);
    this->r_bar = VectorXd::Zero(4);
    this->r_bar << this->R_BARS_ALL[frame][index][0], R_BARS_ALL[frame][index][1], R_BARS_ALL[frame][index][2], 1.0;
    this->calc_htm = HTMs[frame];
    this->calc_jo = this->JOs[frame];
    this->calc_jrx = JRXs[frame];
    this->calc_jry = JRYs[frame];
    this->calc_jrz = JRZs[frame];
    this->calc_jo_dot = JOs_dot[frame];
    this->calc_jrx_dot = JRXs_dot[frame];
    this->calc_jry_dot = JRYs_dot[frame];
    this->calc_jrz_dot = JRZs_dot[frame];
    this->htm = MatrixXd::Zero(4, 4);
    this->jo = MatrixXd::Zero(3, 7);
    this->jrx = MatrixXd::Zero(3, 7);
    this->jry = MatrixXd::Zero(3, 7);
    this->jrz = MatrixXd::Zero(3, 7);
    this->jo_dot = MatrixXd::Zero(3, 7);
    this->jrx_dot = MatrixXd::Zero(3, 7);
    this->jry_dot = MatrixXd::Zero(3, 7);
    this->jrz_dot = MatrixXd::Zero(3, 7);
}


void baxter::Control_Point::phi(const VectorXd &q, VectorXd &out)
{
    std::cout << "calcing phi..." << std::endl;
    this->calc_htm(q, L, h, H, L0, L1, L2, L3, L4, L5, L6, this->htm);
    out = this->htm * this->r_bar;
}


void baxter::Control_Point::jacobian(const VectorXd &q, MatrixXd &out)
{
    this->calc_jo(q, L, h, H, L0, L1, L2, L3, L4, L5, L6, jo);
    this->calc_jrx(q, L, h, H, L0, L1, L2, L3, L4, L5, L6, jrx);
    this->calc_jry(q, L, h, H, L0, L1, L2, L3, L4, L5, L6, jry);
    this->calc_jrz(q, L, h, H, L0, L1, L2, L3, L4, L5, L6, jrz);
    out = jrx*r_bar(0) + jry*r_bar(1) + jrz*r_bar(2) + jo;
}


void baxter::Control_Point::jacobian_dot(const VectorXd &q, const VectorXd &q_dot, MatrixXd &out)
{
    this->calc_jo_dot(q, q_dot, L, h, H, L0, L1, L2, L3, L4, L5, L6, jo_dot);
    this->calc_jrx_dot(q, q_dot, L, h, H, L0, L1, L2, L3, L4, L5, L6, jrx_dot);
    this->calc_jry_dot(q, q_dot, L, h, H, L0, L1, L2, L3, L4, L5, L6, jry_dot);
    this->calc_jrz_dot(q, q_dot, L, h, H, L0, L1, L2, L3, L4, L5, L6, jrz_dot);
    out = jrx_dot*r_bar(0) + jry_dot*r_bar(1) + jrz_dot*r_bar(2) + jo_dot;
}


const void baxter::Control_Point::print_state(void)
{
    using std::cout;
    using std::endl;

    cout << "htm = \n" << this->htm     << endl;
    cout << "jo = \n" << this->jo      << endl;
    cout << "jrx = \n" << this->jrx     << endl;
    cout << "jry = \n" << this->jry     << endl;
    cout << "jrz = \n" << this->jrz     << endl;
    cout << "jo_dot = \n" << this->jo_dot  << endl;
    cout << "jrx_dot = \n" << this->jrx_dot << endl;
    cout << "jry_dot = \n" << this->jry_dot << endl;
    cout << "jrz_dot = \n" << this->jrz_dot << endl;

}