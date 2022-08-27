#include "../include/rmp_tree.hpp"



rmp_flow::Nodes_and_Maps::Nodes_and_Maps(void){
    /*pass*/
}




std::tuple<rmp_flow::Root, rmp_flow::Nodes_and_Maps> rmp_flow::rmp_tree_constructor(
    const std::string robot_name,
    const nlohmann::json param,
    const std::vector<VectorXd&> goal_position,
    const std::vector<VectorXd&> goal_velosity,
    const std::vector<VectorXd&> obs_position,
    const std::vector<VectorXd&> obs_velocity
)
{
    cout << "construct root" << endl;
    
    Nodes_and_Maps nms;

    int c_dim, t_dim;
    VectorXd q_neutral, q_max, q_min;
    std::vector<size_t> model_struct;
    int ee_frame_num, ee_num;
    
    if (robot_name=="sice"){
        c_dim = sice::Kinematics::c_dim;
        t_dim = sice::Kinematics::t_dim;
        sice::Kinematics::set_q_neutral(q_neutral);
        sice::Kinematics::set_q_max(q_max);
        sice::Kinematics::set_q_min(q_min);
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
    
    Root root(c_dim, "root");

    nlohmann::json jl_param = param["Joint_limit_avoidance"];
    nlohmann::json at_param = param["goal_attractor"];
    nlohmann::json obs_param = param["obstacle_avoidance"];
    
    // joint limit
    nms.map_id_s.push_back(mapping_base::Identity());
    nms.rmp2_node_jl.push_back(
        rmp2::Joint_Limit_Avoidance(
            root.self_dim, root.self_dim, "jl-avoidance", &nms.map_id_s.back(),
            jl_param["gamma_p"], jl_param["gamma_d"], jl_param["lam"], jl_param["sigma"],
            q_max, q_min, q_neutral
        )
    );
    root.add_child(&nms.rmp2_node_jl.back());


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
            }
            else if(robot_name=="franka_emika"){
                nms.map_fe_cp_s.push_back(franka_emika::Control_Point(i, j));
            }
            nms.node_s.push_back(
                Node(t_dim, root.self_dim, name, &nms.map_fe_cp_s.back())
            );

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
            for (int k=0; k<obs_param.size(); ++k){
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

    return std::forward_as_tuple(root, nms);
}









rmp_flow::RMP_Tree::RMP_Tree(Root* root, std::string tree_name)
{
    this->root = root;
    this->tree_name = tree_name;
}

void rmp_flow::RMP_Tree::update_environment()
{
    // 後から実装．センサー値から障害物位置などを変更
}




void rmp_flow::RMP_Tree::run(
    double time_span, double time_interval,
    std::string method,
    std::string save_dir_path
)
{
    std::chrono::system_clock::time_point  start_time, end_time; // 型は auto で可
    start_time = std::chrono::system_clock::now();


    //フォルダ作成
    bool result = std::filesystem::create_directory(save_dir_path);

    const int total_step = time_span / time_interval;
    double t = 0.0;  //時刻


    std::ofstream file_Q(save_dir_path+"/configration.csv");  //配置
    std::ofstream file_X(save_dir_path+"/task.csv");  //配置

    //csvのヘッダー作成
    file_Q << "t";
    for (int i=0; i<root->self_dim; ++i){
        file_Q <<  ",x" + std::to_string(i);
    }
    for (int i=0; i<root->self_dim; ++i){
        file_Q <<  ",dx" + std::to_string(i);
    }
    file_Q << std::endl;

    file_X << "t";
    for (int i=0; i<root->self_dim; ++i){
        file_X <<  ",x" + std::to_string(i);
    }
    for (int i=0; i<root->self_dim; ++i){
        file_X <<  ",dx" + std::to_string(i);
    }
    file_X << std::endl;



    //初期値書き込み
    file_Q << t;
    for (int i=0; i<root->self_dim; ++i){
        file_Q << "," << root->x[i];
    }
    for (int i=0; i<root->self_dim; ++i){
        file_Q << "," << root->x_dot[i];
    }
    file_Q << std::endl;

    root->pushforward();  //初期値で全ノードデータを更新
    // file_X << t;
    // for (int i=0; i<root->self_dim; ++i){
    //     file_X << "," << root->x[i];
    // }
    // for (int i=0; i<root->self_dim; ++i){
    //     file_Q << "," << root->x_dot[i];
    // }
    // file_Q << std::endl;


    VectorXd q(this->root->self_dim);
    VectorXd q_dot(this->root->self_dim);
    VectorXd q_ddot(this->root->self_dim);
    
    q = this->root->x;
    q_dot = this->root->x_dot;


    // VectorXd X(this->root->self_dim*2);
    // VectorXd K1(this->root->self_dim*2);
    // VectorXd k2(this->root->self_dim*2);
    // VectorXd k3(this->root->self_dim*2);
    // VectorXd k4(this->root->self_dim*2);

    

    // メインループ
    for (int i=0; i<total_step; ++i)
    {
        t += time_interval;
        if (is_debug){std::cout << "\ni = " << i << std::endl;}


        //オイラー法
        this->root->solve(this->root->x, this->root->x_dot, q_ddot);
        q += q_dot * time_interval;
        q_dot += q_ddot * time_interval;


        // //RK法
        // X.head(root->self_dim) = root->x;
        // X.tail(root->self_dim) = root->x_dot;

        // this->root->solve(X.head(root->self_dim), X.tail(root->self_dim), q_ddot);
        


        if (std::isnan(q_ddot[0]))
        {
            std::cout << "\n発散" << std::endl;
            break;
        }
        
        root->print_state_all_node();

        file_Q << t;
        for (int i=0; i<root->self_dim; ++i){
            file_Q << "," << q[i];
        }
        for (int i=0; i<root->self_dim; ++i){
            file_Q << "," << q_dot[i];
        }
        file_Q << std::endl;

        this->root->set_state(q, q_dot);
    }


    end_time = std::chrono::system_clock::now();
    double elapsed = std::chrono::duration_cast<std::chrono::milliseconds>(end_time-start_time).count(); //処理に要した時間をミリ秒に変換
    std::cout << "time = " << elapsed/1000.0 << "[sec]" << std::endl;
}




void rmp_flow::RMP_Tree::set_debug(bool is_debug)
{
    this->is_debug = is_debug;
    this->root->set_debug(is_debug);
}