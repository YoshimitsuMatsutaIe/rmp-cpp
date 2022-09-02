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


    this->robot_name = j["robot_name"].get<string>();
    this->time_span = j["time_span"].get<double>();
    this->time_interval = j["time_interval"].get<double>();

    auto goal_param = j["env_param"]["goal"];
    this->add_goal(goal_param["type"].get<string>(), goal_param["param"]);

    for (auto type_and_param: j["env_param"]["obstacle"]){
        this->add_obstacle(type_and_param["type"].get<string>(), type_and_param["param"]);
    }

    this->set_zero_velosity();

    this->rmp_param = j["rmp_param"].get<unordered_map<string, unordered_map<string, double>>>();

    if (this->robot_name=="sice"){
        namespace rm = sice;
        this->c_dim = rm::Kinematics::c_dim;
        this->t_dim = rm::Kinematics::t_dim;
        rm::Kinematics::set_q_neutral(this->q_neutral);
        rm::Kinematics::set_q_max(this->q_max);
        rm::Kinematics::set_q_min(this->q_min);
        this->model_struct = rm::Control_Point::calc_points_mapping();
        this->ee_index = rm::Kinematics::get_ee_id();
    }
    else if (this->robot_name=="franka_emika"){
        namespace rm = franka_emika;
        this->c_dim = rm::Kinematics::c_dim;
        this->t_dim = rm::Kinematics::t_dim;
        rm::Kinematics::set_q_neutral(this->q_neutral);
        rm::Kinematics::set_q_max(this->q_max);
        rm::Kinematics::set_q_min(this->q_min);
        this->model_struct = rm::Control_Point::calc_points_mapping();
        this->ee_index = rm::Kinematics::get_ee_id();
    }
    else {
        cout << "not exit" << endl;
    }


    this->cpoint_num = 0;
    for (int s: this->model_struct){
        this->cpoint_num += s;
    }



}



void simulator::RMP_Simulator::update_environment()
{
    // 後から実装．センサー値から障害物位置などを変更
}



// namespace {
//     void _solve(const Eigen::VectorXd* parent_x, const Eigen::VectorXd* parent_x_dot, Eigen::VectorXd* out_f, Eigen::MatrixXd* out_M)
//     {

//     }
// }


void simulator::RMP_Simulator::solve_multi(
    const VectorXd& X, VectorXd& out_X_dot,
    const std::unordered_map<std::string, std::unordered_map<std::string, double>> rmp_param
)
{
    std::vector<rmp_flow::Node> cpoint_node_s(this->cpoint_num);
    std::vector<rmp_flow::Nodes_and_Maps> nm_s(this->cpoint_num);
    

    std::vector<VectorXd> fs(this->cpoint_num);
    std::vector<VectorXd> Ms(this->cpoint_num);


    vector<std::thread> thrs;

    auto dim = this->c_dim;
    VectorXd q = X.head(dim);
    VectorXd q_dot = X.tail(dim);

    int k = 0;  // カウンター
    for (int i=0; i<this->model_struct.size(); ++i){
        for (int j=0; j<model_struct[i]; ++j){
            rmp_flow::rmp_tree_constructor(
                i, j, this->robot_name, rmp_param,
                this->goal_position,
                this->goal_velosity,
                this->obstacle_position,
                this->obstacle_velosity,
                cpoint_node_s[k],
                nm_s[k]
            );
            thrs.push_back(
                std::thread(
                    sol, &cpoint_node_s[k],
                    &q, &q_dot, &fs[k], &Ms[k]
                )
            );

            ++k;
        }
    }

    for (auto& thr : thrs){
        thr.join();
    }

    // ジョイント制限は毎回作成
    auto jl_param = rmp_param.at("joint_limit_avoidance");
    mapping_base::Identity id;
    rmp2::Joint_Limit_Avoidance jl(
        this->c_dim, root.self_dim, "jl-avoidance", &id,
        jl_param["gamma_p"],
        jl_param["gamma_d"],
        jl_param["lam"],
        jl_param["sigma"],
        this->q_max, this->q_min, this->q_neutral
    );
    jl.set_state(X.head(this->c_dim), X.tail(this->c_dim));
    jl.calc_natural_form();



    VectorXd summed_f = Eigen::VectorXd::Zero(this->c_dim);
    MatrixXd summed_M = Eigen::MatrixXd::Zero(this->c_dim, this->c_dim);

    for (int i=0; i<this->cpoint_num; ++i){
        summed_f += fs[i];
        summed_M += Ms[i];
    }

    summed_f += jl.f;
    summed_M += jl.M;

    out_X_dot.head(this->c_dim) = X.tail(this->c_dim);
    out_X_dot.tail(this->c_dim) = summed_M.completeOrthogonalDecomposition().pseudoInverse() * summed_f;
}



void simulator::sol(
    rmp_flow::Node* node,
    const VectorXd* q, const VectorXd* q_dot,
    VectorXd* f, MatrixXd* M
)
{
    node->solve(q, q_dot, f, M);
}

void simulator::RMP_Simulator::run(string json_path, string method)
{

    const static Eigen::IOFormat CSVFormat(Eigen::StreamPrecision, Eigen::DontAlignCols, ",", "\n");

    this->set_initial_value(json_path);
    // ツリー構築
    rmp_flow::rmp_tree_constructor(
        this->robot_name,
        this->rmp_param,
        this->goal_position,
        this->goal_velosity,
        this->obstacle_position,
        this->obstacle_velosity,
        this->c_dim, this->t_dim,
        this->q_neutral, this->q_max, this->q_min,
        this->model_struct,
        this->ee_index,
        this->root,
        this->nms
    );


    this->set_debug(false);

    auto dir_ = gen_save_dir_name();
    std::filesystem::path save_dir_path = "../../../rmp-cpp_result/" + dir_;

    //データ保存先のフォルダ作成
    std::filesystem::create_directory(save_dir_path);
    std::filesystem::create_directory(save_dir_path.string() + "/task");
    std::filesystem::create_directory(save_dir_path.string() + "/control_points");
    std::filesystem::create_directory(save_dir_path.string() + "/environment");


    // 設定jsonをコピー
    std::filesystem::path json_ = json_path;
    auto json_file_name = json_.filename();
    std::cout << "param-json name =" << json_file_name.string() << std::endl;
    auto cm = "cp " + json_path + " " + save_dir_path.string() + "/" + json_file_name.string();;
    std::system(cm.c_str());

    const int total_step = this->time_span / this->time_interval;
    this->t = 0.0;  //時刻
    auto dim = this->root.self_dim;
    this->root.pushforward();  //初期値で全ノードデータを更新
    
    root.add_out_file_all(save_dir_path);



    VectorXd X(dim*2);  //状態ベクトル
    VectorXd K1(dim*2), K2(dim*2), K3(dim*2), K4(dim*2);

    auto dt = this->time_interval;

    std::chrono::system_clock::time_point  start_time, end_time;
    start_time = std::chrono::system_clock::now();

    // メインループ
    if (method == "euler"){
        for (int i=0; i<total_step; ++i){
            this->t += this->time_interval;
            if (is_debug){std::cout << "\ni = " << i << std::endl;}
            
            X.head(dim) = this->root.x;
            X.tail(dim) = this->root.x_dot;
            this->root.solve(X, K1);
            X += dt * K1;
            this->root.set_state(X.head(dim), X.tail(dim));
            
            if (std::isnan(X(dim+1))){
                std::cout << "\n発散" << std::endl;
                break;
            }
            root.save_state(this->t, CSVFormat);
        }
    }
    else if (method == "rk"){
        for (int i=0; i<total_step; ++i){
            this->t += this->time_interval;
            if (is_debug){std::cout << "\ni = " << i << std::endl;}
            
            X.head(dim) = this->root.x;
            X.tail(dim) = this->root.x_dot;
            this->root.solve(X, K1);
            this->root.solve(X + 0.5*dt*K1, K2);
            this->root.solve(X + 0.5*dt*K2, K3);
            this->root.solve(X + dt*K3, K4);
            X += dt/6.0 *(K1 + 2.0*K2 + 2.0*K3 + K4);
            this->root.set_state(X.head(dim), X.tail(dim));
            
            if (std::isnan(X(dim+1))){
                std::cout << "\n発散" << std::endl;
                break;
            }
            root.save_state(this->t, CSVFormat);
        }
    }
    else{
        return;
    }


    end_time = std::chrono::system_clock::now();
    double elapsed = std::chrono::duration_cast<std::chrono::milliseconds>(end_time-start_time).count(); //処理に要した時間をミリ秒に変換
    std::cout << "time = " << elapsed/1000.0 << "[sec]" << std::endl;




    // 環境情報保存
    std::ofstream file_goal(save_dir_path.string() + "/environment/goal.csv");
    std::ofstream file_obs(save_dir_path.string() + "/environment/obstacle.csv"); 

    int t_dim = goal_position.back().rows();
    
    if (t_dim == 2){
        file_goal << "x,y" << std::endl;
        file_obs <<  "x,y" << std::endl;
    }
    else if (t_dim == 3){
        file_goal << "x,y,z" << std::endl;
        file_obs <<  "x,y,z" << std::endl;
    }
    else {
        // pass
    }
    
    
    for (auto goal: goal_position){
        file_goal << goal.transpose().format(CSVFormat) << std::endl;;
    }

    for (auto obs: obstacle_position){
        file_obs << obs.transpose().format(CSVFormat) << std::endl;;
    }



}






void simulator::RMP_Simulator::run_multi(string json_path, string method)
{

    const static Eigen::IOFormat CSVFormat(Eigen::StreamPrecision, Eigen::DontAlignCols, ",", "\n");

    this->set_initial_value(json_path);

    auto dir_ = gen_save_dir_name();
    std::filesystem::path save_dir_path = "../../../rmp-cpp_result/" + dir_;

    //データ保存先のフォルダ作成
    std::filesystem::create_directory(save_dir_path);
    std::filesystem::create_directory(save_dir_path.string() + "/task");
    std::filesystem::create_directory(save_dir_path.string() + "/control_points");
    std::filesystem::create_directory(save_dir_path.string() + "/environment");


    // 設定jsonをコピー
    std::filesystem::path json_ = json_path;
    auto json_file_name = json_.filename();
    std::cout << "param-json name =" << json_file_name.string() << std::endl;
    auto cm = "cp " + json_path + " " + save_dir_path.string() + "/" + json_file_name.string();;
    std::system(cm.c_str());

    const int total_step = this->time_span / this->time_interval;
    this->t = 0.0;  //時刻
    auto dim = this->root.self_dim;



    VectorXd X(dim*2);  //状態ベクトル
    VectorXd K1(dim*2), K2(dim*2), K3(dim*2), K4(dim*2);

    auto dt = this->time_interval;

    std::chrono::system_clock::time_point  start_time, end_time;
    start_time = std::chrono::system_clock::now();

    // メインループ
    if (method == "euler"){
        for (int i=0; i<total_step; ++i){
            this->t += this->time_interval;
            if (is_debug){std::cout << "\ni = " << i << std::endl;}
            
            X.head(dim) = this->root.x;
            X.tail(dim) = this->root.x_dot;
            this->solve_multi(X, K1, this->rmp_param);
            X += dt * K1;
            this->root.set_state(X.head(dim), X.tail(dim));
            
            if (std::isnan(X(dim+1))){
                std::cout << "\n発散" << std::endl;
                break;
            }
            root.save_state(this->t, CSVFormat);
        }
    }
    else if (method == "rk"){
        for (int i=0; i<total_step; ++i){
            this->t += this->time_interval;
            if (is_debug){std::cout << "\ni = " << i << std::endl;}
            
            X.head(dim) = this->root.x;
            X.tail(dim) = this->root.x_dot;
            this->root.solve(X, K1);
            this->root.solve(X + 0.5*dt*K1, K2);
            this->root.solve(X + 0.5*dt*K2, K3);
            this->root.solve(X + dt*K3, K4);
            X += dt/6.0 *(K1 + 2.0*K2 + 2.0*K3 + K4);
            this->root.set_state(X.head(dim), X.tail(dim));
            
            if (std::isnan(X(dim+1))){
                std::cout << "\n発散" << std::endl;
                break;
            }
            root.save_state(this->t, CSVFormat);
        }
    }
    else{
        return;
    }


    end_time = std::chrono::system_clock::now();
    double elapsed = std::chrono::duration_cast<std::chrono::milliseconds>(end_time-start_time).count(); //処理に要した時間をミリ秒に変換
    std::cout << "time = " << elapsed/1000.0 << "[sec]" << std::endl;




    // 環境情報保存
    std::ofstream file_goal(save_dir_path.string() + "/environment/goal.csv");
    std::ofstream file_obs(save_dir_path.string() + "/environment/obstacle.csv"); 

    int t_dim = goal_position.back().rows();
    
    if (t_dim == 2){
        file_goal << "x,y" << std::endl;
        file_obs <<  "x,y" << std::endl;
    }
    else if (t_dim == 3){
        file_goal << "x,y,z" << std::endl;
        file_obs <<  "x,y,z" << std::endl;
    }
    else {
        // pass
    }
    
    
    for (auto goal: goal_position){
        file_goal << goal.transpose().format(CSVFormat) << std::endl;;
    }

    for (auto obs: obstacle_position){
        file_obs << obs.transpose().format(CSVFormat) << std::endl;;
    }



}












void simulator::RMP_Simulator::set_debug(bool is_debug)
{
    this->is_debug = is_debug;
    this->root.set_debug(is_debug);
}