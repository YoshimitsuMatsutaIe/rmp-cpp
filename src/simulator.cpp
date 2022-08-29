#include "../include/simulator.hpp"

void simulator::RMP_Simulator::add_goal(
    string type,
    unordered_map<string, double> param
)
{
    VectorXd v;
    if (type == "static"){
        if (param.count("z") == 0){
            v = VectorXd::Zero(2);
            this->g_dot.push_back(v);

            v << param["x"], param["y"];
            this->g.push_back(v);
        }
        else{
            v = VectorXd::Zero(3);
            this->g_dot.push_back(v);

            v << param["x"], param["y"], param["z"];
            this->g.push_back(v);
        }
    }
}


void simulator::RMP_Simulator::add_obstacle(
    string type,
    unordered_map<string, double> param
)
{
    vector<VectorXd> temp_obs_s;

    if (type == "sphere"){
        if (param.count("z") == 0){
            simulator::set_sphere(
                param["n"], param["r"], param["x"], param["y"], temp_obs_s
            );
        }
        else{
            simulator::set_sphere(
                param["n"], param["r"], param["x"], param["y"], param["z"], temp_obs_s
            );
        }
    }
    else if (type == "cylinder"){
        simulator::set_cylinder(
            param["n"], param["r"], param["L"], param["x"], param["y"], param["z"], 
            param["alpha"], param["beta"], param["gamma"], temp_obs_s
        );
    }

    for (auto o_: temp_obs_s){
        this->o.push_back(o_);
    }
}


void simulator::RMP_Simulator::set_initial_value(string json_path)
{
    std::ifstream param_json(json_path);
    auto j = nlohmann::json::parse(param_json);

    auto goal_param = j["env_param"]["goal"];
    this->add_goal(goal_param["type"], goal_param["param"]);


}


simulator::RMP_Simulator::RMP_Simulator(rmp_flow::Root* root, std::string tree_name)
{
    this->root = root;
    this->tree_name = tree_name;
}

void simulator::RMP_Simulator::update_environment()
{
    // 後から実装．センサー値から障害物位置などを変更
}




void simulator::RMP_Simulator::run(
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



void simulator::RMP_Simulator::set_debug(bool is_debug)
{
    this->is_debug = is_debug;
    this->root->set_debug(is_debug);
}