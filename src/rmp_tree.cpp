#include "../include/rmp_tree.hpp"

rmp_flow::Nodes_and_Maps::Nodes_and_Maps(void){/*pass*/}


std::tuple<rmp_flow::Root, rmp_flow::Nodes_and_Maps> rmp_flow::rmp_tree_constructor(
    const std::string robot_name,
    const std::unordered_map<std::string, std::unordered_map<std::string, double>> rmp_param,
    const vector<VectorXd>& goal_position,
    const vector<VectorXd>& goal_velosity,
    const vector<VectorXd>& obs_position,
    const vector<VectorXd>& obs_velocity
)
{
    cout << "construct root" << endl;

    int c_dim, t_dim;
    VectorXd q_neutral, q_max, q_min;
    std::vector<size_t> model_struct;
    int ee_frame_num, ee_num;
    
    if (robot_name=="sice"){
        namespace rm = sice;
        cout << robot_name << endl;
        c_dim = rm::Kinematics::c_dim;
        t_dim = rm::Kinematics::t_dim;
        cout << 0.1 << endl;
        rm::Kinematics::set_q_neutral(q_neutral);
        rm::Kinematics::set_q_max(q_max);
        rm::Kinematics::set_q_min(q_min);
        cout << 0.5 << endl;
        model_struct = rm::Control_Point::calc_points_mapping();
        auto [a, b] = rm::Kinematics::get_ee_id();
        ee_frame_num = a;
        ee_num = b;
        cout << "wow" << endl;
    }
    else if (robot_name=="franka_emika"){
        namespace rm = franka_emika;
        cout << robot_name << endl;
        c_dim = rm::Kinematics::c_dim;
        t_dim = rm::Kinematics::t_dim;
        rm::Kinematics::set_q_neutral(q_neutral);
        rm::Kinematics::set_q_max(q_max);
        rm::Kinematics::set_q_min(q_min);
        model_struct = rm::Control_Point::calc_points_mapping();
        auto [a, b] = rm::Kinematics::get_ee_id();
        ee_frame_num = a;
        ee_num = b;
    }
    else {
        cout << "not exit" << endl;
    }
    
    Root root(c_dim, "root");

    cout << "root make" << endl;
    //cout << param << endl;

    auto jl_param = rmp_param.at("joint_limit_avoidance");
    auto at_param = rmp_param.at("goal_attractor");
    auto obs_param = rmp_param.at("obstacle_avoidance");
    

    Nodes_and_Maps nms;

    // joint limit
    nms.map_id_s.push_back(mapping_base::Identity());
    nms.rmp2_node_jl.push_back(
        rmp2::Joint_Limit_Avoidance(
            root.self_dim, root.self_dim, "jl-avoidance", &nms.map_id_s.back(),
            jl_param["gamma_p"],
            jl_param["gamma_d"],
            jl_param["lam"],
            jl_param["sigma"],
            q_max, q_min, q_neutral
        )
    );
    root.add_child(&nms.rmp2_node_jl.back());
    cout << "root&    =" << &root << endl;
    cout << "jl_par&  =" << &root.children.back()->parent << endl;



    cout << "obs and goal" << endl;
    auto frame_num = model_struct.size();
    //int cpoints_num = std::accumulate(model_struct.begin(), model_struct.end(), 0.0);

    std::string name;
    for (int i=0; i<model_struct.size(); ++i){
        for(int j=0; j<model_struct[i]; ++j){
            cout << "i, j = " << i << ", " << j << endl;
            if (i == ee_frame_num && j == ee_num){
                name = "ee";
            }
            else{
                name = "cpoints_" + std::to_string(i) + "-" + std::to_string(j);
            }
            
            if (robot_name=="sice"){
                nms.map_sice_cp_s.push_back(sice::Control_Point(i, j));
                nms.node_s.push_back(
                    Node(t_dim, root.self_dim, name, &nms.map_sice_cp_s.back())
                );
            }
            else if(robot_name=="franka_emika"){
                nms.map_fe_cp_s.push_back(franka_emika::Control_Point(i, j));
                nms.node_s.push_back(
                    Node(t_dim, root.self_dim, name, &nms.map_fe_cp_s.back())
                );
            }
            
            root.add_child(&nms.node_s.back());

            // goal-attractor
            if (i == ee_frame_num && j == ee_num){
                nms.map_id_s.push_back(mapping_base::Identity());
                nms.rmp2_node_at_s.push_back(rmp2::Goal_Attractor(
                    t_dim, t_dim, "ee-attractor", &nms.map_id_s.back(),
                    at_param["max_speed"],
                    at_param["gain"],
                    at_param["sigma_alpha"],
                    at_param["sigma_gamma"],
                    at_param["wu"],
                    at_param["wl"],
                    at_param["alpha"],
                    at_param["epsilon"],
                    goal_position[0], goal_velosity[0]
                ));
                root.children.back()->add_child(&nms.rmp2_node_at_s.back());
            }

            // obs
            for (int k=0; k<obs_position.size(); ++k){
                nms.map_dis_s.push_back(mapping_base::Distance(obs_position[k], obs_velocity[k]));
                nms.rmp2_node_obs_s.push_back(rmp2::Obstacle_Avoidance(
                    1, t_dim, name + ":obs-num-" + std::to_string(k),
                    &nms.map_dis_s.back(), 
                    obs_param["scale_rep"],
                    obs_param["scale_damp"],
                    obs_param["gain"],
                    obs_param["sigma"],
                    obs_param["rw"]
                ));
                root.children.back()->add_child(&nms.rmp2_node_obs_s.back());
            }
        }
    }


    cout << "tree construction done\n" << endl;
    root.print_tree_structure();



    // cout << "root & = " << &root << endl;

    // cout << "\ncp00 child num = " << endl;;
    // for (auto c: root.children[1]->children){
    //     cout << c->name << endl;
    // }

    //return std::forward_as_tuple(&root, &nms);
    return {root, nms};
}




void rmp_flow::rmp_tree_constructor(
    const std::string robot_name,
    const std::unordered_map<std::string, std::unordered_map<std::string, double>> rmp_param,
    const vector<VectorXd>& goal_position,
    const vector<VectorXd>& goal_velosity,
    const vector<VectorXd>& obs_position,
    const vector<VectorXd>& obs_velocity,
    Root& root,
    Nodes_and_Maps& nms
)
{
    cout << "construct root" << endl;

    int c_dim, t_dim;
    VectorXd q_neutral, q_max, q_min;
    std::vector<size_t> model_struct;
    int ee_frame_num, ee_num;
    
    if (robot_name=="sice"){
        cout << robot_name << endl;
        c_dim = sice::Kinematics::c_dim;
        t_dim = sice::Kinematics::t_dim;
        cout << 0.1 << endl;
        sice::Kinematics::set_q_neutral(q_neutral);
        sice::Kinematics::set_q_max(q_max);
        sice::Kinematics::set_q_min(q_min);
        cout << 0.5 << endl;
        model_struct = sice::Control_Point::calc_points_mapping();
        auto [a, b] = sice::Kinematics::get_ee_id();
        ee_frame_num = a;
        ee_num = b;
    }
    else if (robot_name=="franka_emika"){
        c_dim = franka_emika::Kinematics::c_dim;
        t_dim = franka_emika::Kinematics::t_dim;
        franka_emika::Kinematics::set_q_neutral(q_neutral);
        franka_emika::Kinematics::set_q_max(q_max);
        franka_emika::Kinematics::set_q_min(q_min);
        model_struct = franka_emika::Control_Point::calc_points_mapping();
        auto [a, b] = franka_emika::Kinematics::get_ee_id();
        ee_frame_num = a;
        ee_num = b;
    }
    else {
        cout << "not exit" << endl;
    }
    
    root = Root(c_dim, "root");

    //cout << "root make" << endl;
    //cout << param << endl;

    auto jl_param = rmp_param.at("joint_limit_avoidance");
    auto at_param = rmp_param.at("goal_attractor");
    auto obs_param = rmp_param.at("obstacle_avoidance");
    


    // joint limit
    nms.map_id_s.push_back(mapping_base::Identity());
    nms.rmp2_node_jl.push_back(
        rmp2::Joint_Limit_Avoidance(
            root.self_dim, root.self_dim, "jl-avoidance", &nms.map_id_s.back(),
            jl_param["gamma_p"],
            jl_param["gamma_d"],
            jl_param["lam"],
            jl_param["sigma"],
            q_max, q_min, q_neutral
        )
    );
    root.add_child(&nms.rmp2_node_jl.back());

    //cout << "obs and goal" << endl;
    auto frame_num = model_struct.size();
    //int cpoints_num = std::accumulate(model_struct.begin(), model_struct.end(), 0.0);

    std::string name;
    for (int i=0; i<model_struct.size(); ++i){
        for(int j=0; j<model_struct[i]; ++j){
            //cout << "i, j = " << i << ", " << j << endl;
            if (i == ee_frame_num && j == ee_num){
                name = "ee";
            }
            else{
                name = "cpoints_" + std::to_string(i) + "-" + std::to_string(j);
            }
            
            if (robot_name=="sice"){
                nms.map_sice_cp_s.push_back(sice::Control_Point(i, j));
                nms.node_s.push_back(
                    Node(t_dim, root.self_dim, name, &nms.map_sice_cp_s.back())
                );
            }
            else if(robot_name=="franka_emika"){
                nms.map_fe_cp_s.push_back(franka_emika::Control_Point(i, j));
                nms.node_s.push_back(
                    Node(t_dim, root.self_dim, name, &nms.map_fe_cp_s.back())
                );
            }
            
            root.add_child(&nms.node_s.back());

            // goal-attractor
            if (i == ee_frame_num && j == ee_num){
                nms.map_id_s.push_back(mapping_base::Identity());
                nms.rmp2_node_at_s.push_back(rmp2::Goal_Attractor(
                    t_dim, t_dim, "ee-attractor", &nms.map_id_s.back(),
                    at_param["max_speed"],
                    at_param["gain"],
                    at_param["sigma_alpha"],
                    at_param["sigma_gamma"],
                    at_param["wu"],
                    at_param["wl"],
                    at_param["alpha"],
                    at_param["epsilon"],
                    goal_position[0], goal_velosity[0]
                ));
                root.children.back()->add_child(&nms.rmp2_node_at_s.back());
            }

            // obs
            for (int k=0; k<obs_position.size(); ++k){
                nms.map_dis_s.push_back(mapping_base::Distance(obs_position[k], obs_velocity[k]));
                nms.rmp2_node_obs_s.push_back(rmp2::Obstacle_Avoidance(
                    1, t_dim, name + ":obs-num-" + std::to_string(k),
                    &nms.map_dis_s.back(), 
                    obs_param["scale_rep"],
                    obs_param["scale_damp"],
                    obs_param["gain"],
                    obs_param["sigma"],
                    obs_param["rw"]
                ));
                root.children.back()->add_child(&nms.rmp2_node_obs_s.back());
            }
        }
    }


    root.x = q_neutral;

    cout << "tree construction done\n" << endl;
}



