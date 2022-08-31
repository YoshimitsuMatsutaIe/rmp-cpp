#include "../include/simulator.hpp"



std::string simulator::gen_save_dir_name(void)
{
    using std::setw;
    using std::setfill;

    time_t t = time(nullptr);
    const tm* localTime = localtime(&t);
    std::stringstream s;
    s << localTime->tm_year + 1900 << "_";
    s << setw(2) << setfill('0') << localTime->tm_mon + 1 << "_";
    s << setw(2) << setfill('0') << localTime->tm_mday << "_";
    s << setw(2) << setfill('0') << localTime->tm_hour << "_";
    s << setw(2) << setfill('0') << localTime->tm_min << "_";
    s << setw(2) << setfill('0') << localTime->tm_sec;
    return s.str();
}



void simulator::RMP_Simulator::add_goal(
    string type,
    unordered_map<string, double> param
)
{
    VectorXd v;
    if (type == "static"){
        if (param.count("z") == 0){
            v = VectorXd::Zero(2);
            this->goal_velosity.push_back(v);

            v << param["x"], param["y"];
            this->goal_position.push_back(v);
        }
        else{
            v = VectorXd::Zero(3);
            this->goal_velosity.push_back(v);

            v << param["x"], param["y"], param["z"];
            this->goal_position.push_back(v);
        }
    }
}


void simulator::RMP_Simulator::add_obstacle(
    string type,
    unordered_map<string, double> param
)
{
    if (type == "sphere"){
        if (param.count("z") == 0){
            simulator::set_sphere(
                param["n"], param["r"], param["x"], param["y"],
                this->obstacle_position
            );
        }
        else{
            simulator::set_sphere(
                param["n"], param["r"], param["x"], param["y"], param["z"],
                this->obstacle_position
            );
        }
    }
    else if (type == "cylinder"){
        simulator::set_cylinder(
            param["n"], param["r"], param["L"], param["x"], param["y"], param["z"], 
            param["alpha"], param["beta"], param["gamma"],
            this->obstacle_position
        );
    }
}

void simulator::RMP_Simulator::set_zero_velosity(void)
{
    VectorXd v;
    auto dim = this->goal_position.back().rows();

    v = VectorXd::Zero(dim);
    this->goal_velosity.push_back(v);

    for (auto _ : this->obstacle_position){
        this->obstacle_velosity.push_back(v);
    }
}



void simulator::RMP_Simulator::set_initial_value(string json_path)
{
    std::ifstream param_json(json_path);
    auto j = nlohmann::json::parse(param_json);

    this->time_span = j["time_span"].get<double>();
    this->time_interval = j["time_interval"].get<double>();

    auto goal_param = j["env_param"]["goal"];
    this->add_goal(goal_param["type"].get<string>(), goal_param["param"]);

    for (auto type_and_param: j["env_param"]["obstacle"]){
        this->add_obstacle(type_and_param["type"].get<string>(), type_and_param["param"]);
    }

    this->set_zero_velosity();


    // ツリー構築
    rmp_flow::Root root = this->root;
    rmp_flow::Nodes_and_Maps nms;
    rmp_flow::rmp_tree_constructor(
        j["robot_name"].get<std::string>(),
        j["rmp_param"],
        this->goal_position,
        this->goal_velosity,
        this->obstacle_position,
        this->obstacle_velosity,
        this->root,
        this->nms
    );


    this->set_debug(false);
}



void simulator::RMP_Simulator::update_environment()
{
    // 後から実装．センサー値から障害物位置などを変更
}




// void simulator::RMP_Simulator::one_step_euler()
// {

// }


void simulator::RMP_Simulator::run(string json_path, string method)
{

    this->set_initial_value(json_path);

    auto dir_ = gen_save_dir_name();
    std::filesystem::path save_dir_path = "../../../rmp-cpp_result/" + dir_;

    //データ保存先のフォルダ作成
    bool result = std::filesystem::create_directory(save_dir_path);

    // 設定jsonをコピー
    std::filesystem::path json_ = json_path;
    auto json_file_name = json_.filename();
    std::cout << "jname =" << json_file_name.string() << std::endl;
    auto cm = "cp " + json_path + " " + save_dir_path.string() + "/" + json_file_name.string();;
    std::system(cm.c_str());

    const int total_step = this->time_span / this->time_interval;
    double t = 0.0;  //時刻


    std::ofstream file_Q(save_dir_path.string() + "/configration.csv");  //配置
    std::ofstream file_X(save_dir_path.string() + "/task.csv");  //タスク

    //csvのヘッダー作成

    auto dim = this->root.self_dim;

    file_Q << "t";
    for (int i=0; i<dim; ++i){
        file_Q <<  ",x" + std::to_string(i);
    }
    for (int i=0; i<dim; ++i){
        file_Q <<  ",dx" + std::to_string(i);
    }
    file_Q << std::endl;

    file_X << "t";
    for (int i=0; i<dim; ++i){
        file_X <<  ",x" + std::to_string(i);
    }
    for (int i=0; i<dim; ++i){
        file_X <<  ",dx" + std::to_string(i);
    }
    file_X << std::endl;



    //初期値書き込み
    file_Q << t;
    for (int i=0; i<dim; ++i){
        file_Q << "," << this->root.x[i];
    }
    for (int i=0; i<dim; ++i){
        file_Q << "," << this->root.x_dot[i];
    }
    file_Q << std::endl;

    this->root.pushforward();  //初期値で全ノードデータを更新


    VectorXd X(dim*2);  //状態ベクトル
    VectorXd K1(dim*2), K2(dim*2), K3(dim*2), K4(dim*2);

    auto dt = this->time_interval;

    std::chrono::system_clock::time_point  start_time, end_time;
    start_time = std::chrono::system_clock::now();

    // メインループ
    for (int i=0; i<total_step; ++i){
        t += this->time_interval;
        if (is_debug){std::cout << "\ni = " << i << std::endl;}

        if (method == "euler"){
            //オイラー法
            X.head(dim) = this->root.x;
            X.tail(dim) = this->root.x_dot;
            //std::cout << X << std::endl;
            this->root.solve(X, K1);
            X += dt * K1;
            this->root.set_state(X.head(dim), X.tail(dim));
        }
        else if (method == "rk"){
            //RK法
            X.head(dim) = this->root.x;
            X.tail(dim) = this->root.x_dot;

            //std::cout << X << std::endl;

            this->root.solve(X, K1);
            this->root.solve(X + 0.5*dt*K1, K2);
            this->root.solve(X + 0.5*dt*K2, K3);
            this->root.solve(X + dt*K3, K4);
            X += dt/6.0 *(K1 + 2.0*K2 + 2.0*K3 + K4);

            this->root.set_state(X.head(dim), X.tail(dim));
        }
        else {
            break;
        }


        if (std::isnan(X(dim+1))){
            std::cout << "\n発散" << std::endl;
            break;
        }
        
        root.print_state_all_node();

        // csv書き込み
        file_Q << t;
        for (int i=0; i<dim; ++i){
            file_Q << "," << this->root.x[i];
        }
        for (int i=0; i<dim; ++i){
            file_Q << "," << this->root.x_dot[i];
        }
        file_Q << std::endl;


    }


    end_time = std::chrono::system_clock::now();
    double elapsed = std::chrono::duration_cast<std::chrono::milliseconds>(end_time-start_time).count(); //処理に要した時間をミリ秒に変換
    std::cout << "time = " << elapsed/1000.0 << "[sec]" << std::endl;
}



void simulator::RMP_Simulator::set_debug(bool is_debug)
{
    this->is_debug = is_debug;
    this->root.set_debug(is_debug);
}