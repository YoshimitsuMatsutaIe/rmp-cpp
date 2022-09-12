#include "../include/rmp_multi.hpp"


void rmp_multi::solve(
    const VectorXd& state,
    const vector<mapping_base::Identity*> mappings,
    rmp2::goal_attractor_natural_form& attractor,
    rmp2::obs_avoidance_natural_form& obs_avoidance,
    rmp2::jl_avoidance_natural_form& jl_avoidance,
    const VectorXd& g, const VectorXd& g_dot,
    const std::vector<VectorXd>& o_s, const std::vector<VectorXd>& o_dot_s,
    const int ee_num, const int cpoint_num, const int c_dim, const int t_dim,
    VectorXd& state_dot
)
{
    //cout << "ee_num = " << ee_num << endl;
    VectorXd q = state.head(c_dim);
    VectorXd q_dot = state.tail(c_dim);

    VectorXd x(t_dim), x_dot(t_dim), f(t_dim), temp_f(t_dim);
    MatrixXd J(t_dim, c_dim), J_dot(t_dim, c_dim), M(t_dim, t_dim), temp_M(t_dim, t_dim);

    VectorXd root_f = VectorXd::Zero(c_dim);
    MatrixXd root_M = MatrixXd::Zero(c_dim, c_dim);



    //cout << "jl done!" << endl;
    
    int i, j;
    
    #pragma omp declare reduction(+ : Eigen::MatrixXd : omp_out=omp_out+omp_in) initializer(omp_priv = omp_orig)
    #pragma omp declare reduction(+ : Eigen::VectorXd : omp_out=omp_out+omp_in) initializer(omp_priv = omp_orig)
    #pragma omp parallel
    {
        #pragma omp parallel for \
            reduction(+: root_f) reduction(+: root_M) \
            private(x, x_dot, J, J_dot)
        for (i=0; i<cpoint_num; ++i){
            mappings[i]->phi(q, x);
            mappings[i]->jacobian(q, J);
            mappings[i]->jacobian_dot(q, q_dot, J_dot);
            mappings[i]->velovity(q_dot, J, x_dot);
            
            f = VectorXd::Zero(t_dim);
            M = MatrixXd::Zero(t_dim, t_dim);

            #pragma omp parallel for \
                reduction(+: f) reduction(+: M) \
                private(i, j, temp_f, temp_M)
            for (j=0; j<o_s.size(); ++j){
                obs_avoidance(x, x_dot, o_s[j], o_dot_s[j], temp_f, temp_M);
                f += temp_f;
                M += temp_M;
            }

            if (i == ee_num){
                attractor(x, x_dot, g, g_dot, temp_f, temp_M);
                f += temp_f;
                M += temp_M;
            }
            root_f += J.transpose() * (f - (M * J_dot * q_dot));
            root_M += J.transpose() * M * J;
        }
    }

    VectorXd f_jl(c_dim);
    MatrixXd M_jl(c_dim, c_dim);
    jl_avoidance(q, q_dot, f_jl, M_jl);
    root_f += f_jl;
    root_M += M_jl;
    
    
    //cout << "root_f = \n" << root_f << endl;
    state_dot.head(c_dim) = q_dot;
    state_dot.tail(c_dim) = rmp_flow::pseudoInverse(root_M) * root_f;
    //state_dot.tail(c_dim) = root_M.completeOrthogonalDecomposition().pseudoInverse() * root_f;
    //cout << "done!!!" << endl;
}





// void rmp_multi::solve(
//     const VectorXd& state,
//     const vector<mapping_base::Identity*> mappings,
//     rmp2::goal_attractor_natural_form& attractor,
//     rmp2::obs_avoidance_natural_form& obs_avoidance,
//     rmp2::jl_avoidance_natural_form& jl_avoidance,
//     const VectorXd& g, const VectorXd& g_dot,
//     const std::vector<VectorXd>& o_s, const std::vector<VectorXd>& o_dot_s,
//     const int ee_num, const int cpoint_num, const int c_dim, const int t_dim,
//     VectorXd& state_dot
// )
// {
//     /* 実験 */
//     //cout << "ee_num = " << ee_num << endl;
//     VectorXd q = state.head(c_dim);
//     VectorXd q_dot = state.tail(c_dim);

//     VectorXd temp_f(t_dim);
//     MatrixXd temp_M(t_dim, t_dim);

//     VectorXd root_f = VectorXd::Zero(c_dim);
//     MatrixXd root_M = MatrixXd::Zero(c_dim, c_dim);

    
//     int i, j, k;
    
//     vector<VectorXd> xs(cpoint_num), x_dots(cpoint_num);
//     vector<MatrixXd> Js(cpoint_num), J_dots(cpoint_num);
    
//     //#pragma omp parallel for private(i)
//     for (k=0; k<cpoint_num; ++k){
//         cout << k << endl;
//         mappings[k]->phi(q, xs[k]);
//         mappings[k]->jacobian(q, Js[k]);
//         mappings[k]->jacobian_dot(q, q_dot, J_dots[k]);
//         mappings[k]->velovity(q_dot, Js[i], x_dots[k]);
//     }



//     #pragma omp declare reduction(+ : Eigen::MatrixXd : omp_out=omp_out+omp_in) initializer(omp_priv = omp_orig)
//     #pragma omp declare reduction(+ : Eigen::VectorXd : omp_out=omp_out+omp_in) initializer(omp_priv = omp_orig)
//     #pragma omp parallel
//     {
//         for (i=0; i<cpoint_num; ++i){
//             cout << "  i = " << i << endl;
//             #pragma omp for reduction(+: root_f) reduction(+: root_M) private(i, j, temp_f, temp_M)
//             for (j=0; j<o_s.size(); ++j){
//                 cout << "    j = " << j << endl;
//                 obs_avoidance(xs[i], x_dots[i], o_s[j], o_dot_s[j], temp_f, temp_M);
//                 root_f += Js[i].transpose() * (temp_f - (temp_M * J_dots[i] * q_dot));
//                 root_M += Js[i].transpose() * temp_M * Js[i];
//             }

//             if (i == ee_num){
//                 attractor(xs[i], x_dots[i], g, g_dot, temp_f, temp_M);
//                 root_f += Js[i].transpose() * (temp_f - (temp_M * J_dots[i] * q_dot));
//                 root_M += Js[i].transpose() * temp_M * Js[i];
//             }
//         }
//     }

//     VectorXd f_jl(c_dim);
//     MatrixXd M_jl(c_dim, c_dim);
//     jl_avoidance(q, q_dot, f_jl, M_jl);
//     root_f += f_jl;
//     root_M += M_jl;
    
    
//     //cout << "root_f = \n" << root_f << endl;
//     state_dot.head(c_dim) = q_dot;
//     state_dot.tail(c_dim) = rmp_flow::pseudoInverse(root_M) * root_f;
//     //state_dot.tail(c_dim) = root_M.completeOrthogonalDecomposition().pseudoInverse() * root_f;
//     //cout << "done!!!" << endl;
// }




std::tuple<rmp2::goal_attractor_natural_form, rmp2::obs_avoidance_natural_form, rmp2::jl_avoidance_natural_form>
rmp_multi::make_rmp_natural_form(
    const std::unordered_map<std::string, std::unordered_map<std::string, double>>& rmp_param,
    int t_dim, std::string robot_model
)
{
    auto ap = rmp_param.at("goal_attractor");
    rmp2::goal_attractor_natural_form at(
        t_dim,
        ap["max_speed"],
        ap["gain"],
        ap["sigma_alpha"],
        ap["sigma_gamma"],
        ap["wu"],
        ap["wl"],
        ap["alpha"],
        ap["epsilon"]
    );

    cout << "at" << endl;
    auto op = rmp_param.at("obstacle_avoidance");
    cout << op["scale_rep"] << endl;
    rmp2::obs_avoidance_natural_form obs(
        op["scale_rep"],
        op["scale_damp"],
        op["gain"],
        op["sigma"],
        op["rw"]
    );

    cout << "obs" << endl;
    VectorXd q_neutoral, q_max, q_min;
    if (robot_model == "sice"){
        namespace rm = sice;
        q_neutoral = rm::Kinematics::q_neutral();
        q_max = rm::Kinematics::q_max();
        q_min = rm::Kinematics::q_min();
    }
    else if (robot_model == "franka_emika"){
        namespace rm = franka_emika;
        q_neutoral = rm::Kinematics::q_neutral();
        q_max = rm::Kinematics::q_max();
        q_min = rm::Kinematics::q_min();
    }
    else {
        assert(false);
    }

    cout << "q_ne = " << q_neutoral.transpose() << endl;
    auto jp = rmp_param.at("joint_limit_avoidance");
    rmp2::jl_avoidance_natural_form jl(
        jp["gamma_p"],
        jp["gamma_d"],
        jp["lam"],
        jp["sigma"],
        q_max, q_min, q_neutoral
    );

    cout << "done" << endl;
    return {at, obs, jl};
}