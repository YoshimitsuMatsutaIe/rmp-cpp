#include "../include/sice.hpp"

const double sice::Kinematics::l1 = 1.0;
const double sice::Kinematics::l2 = 1.0;
const double sice::Kinematics::l3 = 1.0;
const double sice::Kinematics::l4 = 1.0;
const int sice::Kinematics::c_dim = 4;
const int sice::Kinematics::t_dim = 2;

void sice::Kinematics::set_q_neutral(VectorXd& out)
{
    out = VectorXd::Zero(c_dim);
    std::cout << "q_n" << std::endl;
}

void sice::Kinematics::set_q_min(VectorXd& out)
{
    out = VectorXd::Zero(c_dim);
    out << -180.0, -180.0, -180.0, -180.0;
    out *= M_PI/180.0;
    std::cout << "q_min" << std::endl;
}

void sice::Kinematics::set_q_max(VectorXd& out)
{
    out = VectorXd::Zero(c_dim);
    out << 180.0, 180.0, 180.0, 180.0;
    out *= M_PI/180.0;
    std::cout << "q_max" << std::endl;
}

const std::vector<std::vector<double>> sice::Kinematics::r_bars_0{
    {0, 0, 1}
};
const std::vector<std::vector<double>> sice::Kinematics::r_bars_1{
    {0, 0, 1}
};
const std::vector<std::vector<double>> sice::Kinematics::r_bars_2{
    {0, 0, 1}
};
const std::vector<std::vector<double>> sice::Kinematics::r_bars_3{
    {0, 0, 1}
};
const std::vector<std::vector<double>> sice::Kinematics::r_bars_ee{
    {0, 0, 1}
};

const std::vector<std::vector<std::vector<double>>> sice::Kinematics::R_BARS_ALL{
    r_bars_0, r_bars_1, r_bars_2, r_bars_3, r_bars_ee
};

const std::tuple<int, int> sice::Kinematics::get_ee_id()
{
    return {4, 0};
}

std::vector<sice::func_q_vecout> sice::Kinematics::Os = {&o_0, &o_1, &o_2, &o_3, &o_ee};
std::vector<sice::func_q_vecout> sice::Kinematics::RXs = {&rx_0, &rx_1, &rx_2, &rx_3,&rx_ee};
std::vector<sice::func_q_vecout> sice::Kinematics::RYs = {&ry_0, &ry_1, &ry_2, &ry_3,&ry_ee};

std::vector<sice::func_q_matout> sice::Kinematics::HTMs = {&htm_0, &htm_1, &htm_2, &htm_3, &htm_ee};
std::vector<sice::func_q_matout> sice::Kinematics::JOs =  {&jo_0, &jo_1, &jo_2, &jo_3, &jo_ee};
std::vector<sice::func_q_matout> sice::Kinematics::JRXs = {&jrx_0, &jrx_1, &jrx_2, &jrx_3, &jrx_ee};
std::vector<sice::func_q_matout> sice::Kinematics::JRYs = {&jry_0, &jry_1, &jry_2, &jry_3, &jry_ee};

std::vector<sice::func_q_dq_matout> sice::Kinematics::JOs_dot =  {&jo_0_dot, &jo_1_dot, &jo_2_dot, &jo_3_dot, &jo_ee_dot};
std::vector<sice::func_q_dq_matout> sice::Kinematics::JRXs_dot = {&jrx_0_dot, &jrx_1_dot, &jrx_2_dot, &jrx_3_dot, &jrx_ee_dot};
std::vector<sice::func_q_dq_matout> sice::Kinematics::JRYs_dot = {&jry_0_dot, &jry_1_dot, &jry_2_dot, &jry_3_dot, &jry_ee_dot};



void sice::Kinematics::htm(int n, const VectorXd& q, MatrixXd& out)
{
    //std::cout << "huhuhuhuhuhu" << std::endl;
    VectorXd rx(t_dim);
    VectorXd ry(t_dim);
    VectorXd rz(t_dim);
    VectorXd o(t_dim);

    RXs[n](q, rx);
    RYs[n](q, ry);
    Os[n](q, o);

    //std::cout << "hoge" << std::endl;
    out(0,0) = rx(0);
    out(0,1) = ry(0);
    out(0,2) = o(0);
    //std::cout << "hoge2" << std::endl;
    out(1,0) = rx(1);
    out(1,1) = ry(1);
    out(1,2) = o(1);
    
    out(2,0) = 0;
    out(2,1) = 0;
    out(2,2) = 1;
}


void sice::Kinematics::htm_0(const VectorXd& q, MatrixXd& out){htm(0, q, out);}
void sice::Kinematics::htm_1(const VectorXd& q, MatrixXd& out){htm(1, q, out);}
void sice::Kinematics::htm_2(const VectorXd& q, MatrixXd& out){htm(2, q, out);}
void sice::Kinematics::htm_3(const VectorXd& q, MatrixXd& out){htm(3, q, out);}
void sice::Kinematics::htm_ee(const VectorXd& q, MatrixXd& out){htm(4, q, out);}


sice::Control_Point::Control_Point(int frame, int index)
{
    int c_dim = Kinematics::c_dim;
    int t_dim = Kinematics::t_dim;

    this->name = "sice control point at frame=" + std::to_string(frame) + ", index=" + std::to_string(index);
    this->r_bar = VectorXd::Zero(t_dim+1);
    this->r_bar << Kinematics::R_BARS_ALL[frame][index][0],
    Kinematics::R_BARS_ALL[frame][index][1],
    1.0;
    
    this->calc_htm = Kinematics::HTMs[frame];
    this->calc_jo = Kinematics::JOs[frame];
    this->calc_jrx = Kinematics::JRXs[frame];
    this->calc_jry = Kinematics::JRYs[frame];

    this->calc_jo_dot = Kinematics::JOs_dot[frame];
    this->calc_jrx_dot = Kinematics::JRXs_dot[frame];
    this->calc_jry_dot = Kinematics::JRYs_dot[frame];


    this->htm = MatrixXd::Zero(t_dim+1, t_dim+1);
    this->jo = MatrixXd::Zero(t_dim, c_dim);
    this->jrx = MatrixXd::Zero(t_dim, c_dim);
    this->jry = MatrixXd::Zero(t_dim, c_dim);

    this->jo_dot = MatrixXd::Zero(t_dim, c_dim);
    this->jrx_dot = MatrixXd::Zero(t_dim, c_dim);
    this->jry_dot = MatrixXd::Zero(t_dim, c_dim);

    std::cout << "map (name = " << this->name << ") is created!!!!!" << std::endl;
}


void sice::Control_Point::phi(const VectorXd &q, VectorXd &out)
{
    //std::cout << "map-name : " << this->name << " called." << std::endl;
    this->calc_htm(q, this->htm);
    //std::cout << "ufvhhfugfh" << std::endl;
    out = (this->htm * this->r_bar).head(Kinematics::t_dim);
}

void sice::Control_Point::velovity(
    const VectorXd &x_dot, const MatrixXd& J, VectorXd &out
)
{
    out = J * x_dot;
}

void sice::Control_Point::jacobian(const VectorXd &q, MatrixXd &out)
{
    this->calc_jrx(q, this->jrx);
    this->calc_jry(q, this->jry);
    this->calc_jo(q, this->jo);
    out = this->jrx*this->r_bar(0) + this->jry*this->r_bar(1) + this->jo;
}


void sice::Control_Point::jacobian_dot(const VectorXd &q, const VectorXd &q_dot, MatrixXd &out)
{
    this->calc_jo_dot(q, q_dot, this->jo_dot);
    this->calc_jrx_dot(q, q_dot, this->jrx_dot);
    this->calc_jry_dot(q, q_dot, this->jry_dot);

    out = this->jrx_dot*this->r_bar(0)
    + this->jry_dot*this->r_bar(1)
    + this->jo_dot;
}


const void sice::Control_Point::print_state(void)
{
    using std::cout;
    using std::endl;

    cout << "htm = \n" << this->htm << endl;
    cout << "jo = \n" << this->jo << endl;
    cout << "jrx = \n" << this->jrx << endl;
    cout << "jry = \n" << this->jry << endl;

    cout << "jo_dot = \n" << this->jo_dot  << endl;
    cout << "jrx_dot = \n" << this->jrx_dot << endl;
    cout << "jry_dot = \n" << this->jry_dot << endl;

}


const std::vector<std::size_t> sice::Control_Point::calc_points_mapping(void)
{
    std::cout << "calc_points_mapping start." << std::endl;
    std::size_t frame_num = sice::Kinematics::R_BARS_ALL.size();
    vector<std::size_t> s;
    for (int i=0; i<frame_num; ++i){
        //std::cout << "i = " << i << std::endl;
        //std::cout << "    num = " << baxter::Control_Point::R_BARS_ALL[i].size() << std::endl;
        s.push_back(sice::Kinematics::R_BARS_ALL[i].size());
    }
    std::cout << "done!" << std::endl;
    return s;
}