#include "../include/franka_emika.hpp"


franka_emika::Control_Point::Control_Point(int frame, int index)
{
    this->name = "baxter control point at frame=" + std::to_string(frame) + ", index=" + std::to_string(index);
    this->r_bar = VectorXd::Zero(4);
    this->r_bar << Kinematics::R_BARS_ALL[frame][index][0],
    Kinematics::R_BARS_ALL[frame][index][1],
    Kinematics::R_BARS_ALL[frame][index][2],
    1.0;
    
    this->calc_htm = Kinematics::HTMs[frame];
    this->calc_jo = Kinematics::JOs[frame];
    this->calc_jrx = Kinematics::JRXs[frame];
    this->calc_jry = Kinematics::JRYs[frame];
    this->calc_jrz = Kinematics::JRZs[frame];
    this->calc_jo_dot = Kinematics::JOs_dot[frame];
    this->calc_jrx_dot = Kinematics::JRXs_dot[frame];
    this->calc_jry_dot = Kinematics::JRYs_dot[frame];
    this->calc_jrz_dot = Kinematics::JRZs_dot[frame];

    this->htm = MatrixXd::Zero(4, 4);
    this->jo = MatrixXd::Zero(3, 7);
    this->jrx = MatrixXd::Zero(3, 7);
    this->jry = MatrixXd::Zero(3, 7);
    this->jrz = MatrixXd::Zero(3, 7);
    this->jo_dot = MatrixXd::Zero(3, 7);
    this->jrx_dot = MatrixXd::Zero(3, 7);
    this->jry_dot = MatrixXd::Zero(3, 7);
    this->jrz_dot = MatrixXd::Zero(3, 7);

    std::cout << "map (name = " << this->name << ") is created!!!!!" << std::endl;
}


void franka_emika::Control_Point::phi(const VectorXd &q, VectorXd &out)
{
    this->calc_htm(q, this->htm);
    out = (this->htm * this->r_bar).head(3);
}


void franka_emika::Control_Point::jacobian(const VectorXd &q, MatrixXd &out)
{
    this->calc_jrx(q, this->jrx);
    this->calc_jry(q, this->jry);
    this->calc_jrz(q, this->jrz);
    this->calc_jo(q, this->jo);
    out = this->jrx*this->r_bar(0) + this->jry*this->r_bar(1) + this->jrz*this->r_bar(2) + this->jo;
}


void franka_emika::Control_Point::jacobian_dot(const VectorXd &q, const VectorXd &q_dot, MatrixXd &out)
{
    this->calc_jo_dot(q, q_dot, this->jo_dot);
    this->calc_jrx_dot(q, q_dot, this->jrx_dot);
    this->calc_jry_dot(q, q_dot, this->jry_dot);
    this->calc_jrz_dot(q, q_dot, this->jrz_dot);
    out = this->jrx_dot*this->r_bar(0)
    + this->jry_dot*this->r_bar(1)
    + this->jrz_dot*this->r_bar(2)
    + this->jo_dot;
}


const void franka_emika::Control_Point::print_state(void)
{
    using std::cout;
    using std::endl;

    cout << "htm = \n" << this->htm << endl;
    cout << "jo = \n" << this->jo << endl;
    cout << "jrx = \n" << this->jrx << endl;
    cout << "jry = \n" << this->jry << endl;
    cout << "jrz = \n" << this->jrz << endl;
    cout << "jo_dot = \n" << this->jo_dot  << endl;
    cout << "jrx_dot = \n" << this->jrx_dot << endl;
    cout << "jry_dot = \n" << this->jry_dot << endl;
    cout << "jrz_dot = \n" << this->jrz_dot << endl;
}


const std::vector<std::size_t> franka_emika::Control_Point::calc_points_mapping(void)
{
    std::cout << "calc_points_mapping start." << std::endl;
    std::size_t frame_num = franka_emika::Kinematics::R_BARS_ALL.size();
    vector<std::size_t> s;
    for (int i=0; i<frame_num; ++i){
        //std::cout << "i = " << i << std::endl;
        //std::cout << "    num = " << baxter::Control_Point::R_BARS_ALL[i].size() << std::endl;
        s.push_back(franka_emika::Kinematics::R_BARS_ALL[i].size());
    }
    std::cout << "done!" << std::endl;
    return s;
}