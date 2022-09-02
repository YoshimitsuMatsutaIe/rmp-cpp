#include "../include/rmp_tree.hpp"

rmp_flow::Nodes_and_Maps::Nodes_and_Maps(void){/*pass*/}


void rmp_flow::rmp_tree_constructor(
    const std::string robot_name,
    const std::unordered_map<std::string, std::unordered_map<std::string, double>> rmp_param,
    const vector<VectorXd>& goal_position,
    const vector<VectorXd>& goal_velosity,
    const vector<VectorXd>& obs_position,
    const vector<VectorXd>& obs_velocity,
    int c_dim, int t_dim,
    const VectorXd& q_neutral, const VectorXd& q_max, const VectorXd& q_min,
    vector<size_t> model_struct,
    tuple<int, int> ee_index,
    Root& root,
    Nodes_and_Maps& nms
)
{
    cout << "construct root" << endl;


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


    auto [ee_frame_num, ee_num] = ee_index;

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
            nms.map_t_s.push_back(mapping_base::Translation(goal_position[0], goal_velosity[0]));
            if (i == ee_frame_num && j == ee_num){
                nms.rmp2_node_at_s.push_back(rmp2::Goal_Attractor(
                    t_dim, t_dim, "ee-attractor", &nms.map_t_s.back(),
                    at_param["max_speed"],
                    at_param["gain"],
                    at_param["sigma_alpha"],
                    at_param["sigma_gamma"],
                    at_param["wu"],
                    at_param["wl"],
                    at_param["alpha"],
                    at_param["epsilon"]
                ));
                root.children.back()->add_child(&nms.rmp2_node_at_s.back());
            }

            // obs
            for (int k=0; k<obs_position.size(); ++k){
                nms.map_dis_s.push_back(mapping_base::Distance(obs_position[k], obs_velocity[k]));
                nms.rmp2_node_obs_s.push_back(rmp2::Obstacle_Avoidance(
                    1, t_dim, name + ":obs-num-" + std::to_string(k), &nms.map_dis_s.back(), 
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

    //root.print_state_all_node();

    cout << "tree construction done\n" << endl;
}




void rmp_flow::rmp_tree_constructor(
    int frame_num, int index_num,
    const std::string robot_name,
    const std::unordered_map<std::string, std::unordered_map<std::string, double>> rmp_param,
    const vector<VectorXd>& goal_position,
    const vector<VectorXd>& goal_velosity,
    const vector<VectorXd>& obs_position,
    const vector<VectorXd>& obs_velocity,
    Node& cpoint_node,
    Nodes_and_Maps& nms
)
{
    cout << "construct cp node" << endl;

    int c_dim, t_dim;
    std::vector<size_t> model_struct;
    int ee_frame_num, ee_num;
    
    if (robot_name=="sice"){
        namespace rm = sice;
        c_dim = rm::Kinematics::c_dim;
        t_dim = rm::Kinematics::t_dim;
        model_struct = rm::Control_Point::calc_points_mapping();
        auto [a, b] = rm::Kinematics::get_ee_id();
        ee_frame_num = a;
        ee_num = b;
    }
    else if (robot_name=="franka_emika"){
        namespace rm = franka_emika;
        c_dim = rm::Kinematics::c_dim;
        t_dim = rm::Kinematics::t_dim;
        model_struct = rm::Control_Point::calc_points_mapping();
        auto [a, b] = rm::Kinematics::get_ee_id();
        ee_frame_num = a;
        ee_num = b;
    }
    else {
        cout << "not exit" << endl;
    }

    std::string name;
    if (frame_num == ee_frame_num && index_num == ee_num){
        name = "ee";
    }
    else{
        name = "cpoints_" + std::to_string(frame_num) + "-" + std::to_string(index_num);
    }
    
    if (robot_name=="sice"){
        nms.map_sice_cp_s.push_back(sice::Control_Point(index_num, frame_num));
        cpoint_node = Node(t_dim, c_dim, name, &nms.map_sice_cp_s.back());
        
    }
    else if(robot_name=="franka_emika"){
        nms.map_fe_cp_s.push_back(franka_emika::Control_Point(index_num, frame_num));
        cpoint_node = Node(t_dim, c_dim, name, &nms.map_fe_cp_s.back());
        
    }

    //cout << "root make" << endl;
    //cout << param << endl;


    auto at_param = rmp_param.at("goal_attractor");
    auto obs_param = rmp_param.at("obstacle_avoidance");

    // goal-attractor
    nms.map_t_s.push_back(mapping_base::Translation(goal_position[0], goal_velosity[0]));
    if (frame_num == ee_frame_num && index_num == ee_num){
        nms.rmp2_node_at_s.push_back(rmp2::Goal_Attractor(
            t_dim, t_dim, "ee-attractor", &nms.map_t_s.back(),
            at_param["max_speed"],
            at_param["gain"],
            at_param["sigma_alpha"],
            at_param["sigma_gamma"],
            at_param["wu"],
            at_param["wl"],
            at_param["alpha"],
            at_param["epsilon"]
        ));
        cpoint_node.add_child(&nms.rmp2_node_at_s.back());
    }

    // obs
    for (int k=0; k<obs_position.size(); ++k){
        nms.map_dis_s.push_back(mapping_base::Distance(obs_position[k], obs_velocity[k]));
        nms.rmp2_node_obs_s.push_back(rmp2::Obstacle_Avoidance(
            1, t_dim, name + ":obs-num-" + std::to_string(k), &nms.map_dis_s.back(), 
            obs_param["scale_rep"],
            obs_param["scale_damp"],
            obs_param["gain"],
            obs_param["sigma"],
            obs_param["rw"]
        ));
        cpoint_node.add_child(&nms.rmp2_node_obs_s.back());
    }




    //root.print_state_all_node();

    cout << "tree construction done\n" << endl;
}







