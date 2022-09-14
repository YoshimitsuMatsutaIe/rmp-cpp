#include "../include/simulator.hpp"




// void simulator::RMP_Simulator::set_debug(bool is_debug)
// {
//     this->is_debug = is_debug;
//     this->root.set_debug(is_debug);
// }

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
    else {
        assert(false);
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
    else{
        assert(false);
    }
}

void simulator::RMP_Simulator::set_zero_velosity(void)
{
    auto dim = this->goal_position.back().rows();

    VectorXd v = VectorXd::Zero(dim);
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
        this->q_neutral = rm::Kinematics::q_neutral();
        this->q_max = rm::Kinematics::q_max();
        this->q_min = rm::Kinematics::q_min();
        this->model_struct = rm::Control_Point::calc_points_mapping();
        this->ee_index = rm::Kinematics::get_ee_id();
    }
    else if (this->robot_name=="franka_emika"){
        namespace rm = franka_emika;
        this->c_dim = rm::Kinematics::c_dim;
        this->t_dim = rm::Kinematics::t_dim;
        this->q_neutral = rm::Kinematics::q_neutral();
        this->q_max = rm::Kinematics::q_max();
        this->q_min = rm::Kinematics::q_min();
        this->model_struct = rm::Control_Point::calc_points_mapping();
        this->ee_index = rm::Kinematics::get_ee_id();
    }
    else {
        assert(false);
    }


    int n = 0;
    for (int s: this->model_struct){
        n += s;
    }
    this->cpoint_num = n;

}


const void simulator::RMP_Simulator::make_data_dir(string json_path)
{
    auto dir_ = gen_save_dir_name();
    std::filesystem::path save_dir_path = "../../../rmp_result/rmp-cpp_result/" + dir_;
    this->save_dir_path_str = save_dir_path.string();

    //データ保存先のフォルダ作成
    std::filesystem::create_directory(this->save_dir_path_str);
    std::filesystem::create_directory(this->save_dir_path_str + "/task");
    std::filesystem::create_directory(this->save_dir_path_str + "/control_points");
    std::filesystem::create_directory(this->save_dir_path_str + "/environment");


    // 設定jsonをコピー
    std::filesystem::path json_ = json_path;
    auto json_file_name = json_.filename();
    //std::cout << "param-json name =" << json_file_name.string() << std::endl;
    auto cm = "cp " + json_path + " " + this->save_dir_path_str + "/" + json_file_name.string();;
    int status = std::system(cm.c_str());
    assert(status == 0);


    // グラフ化のipynbをコピー
    std::filesystem::path note_ = "../../notebook/basic_plot.ipynb";
    auto note_file_name = note_.filename();
    //std::cout << "param-json name =" << json_file_name.string() << std::endl;
    cm = "cp " + note_.string() + " " + this->save_dir_path_str + "/" + note_file_name.string();;
    status = std::system(cm.c_str());
    assert(status == 0);
}


const void simulator::RMP_Simulator::save_environment(Eigen::IOFormat CSVFormat)
{
    std::ofstream file_goal(this->save_dir_path_str + "/environment/goal.csv");
    std::ofstream file_obs(this->save_dir_path_str + "/environment/obstacle.csv"); 

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
        assert(false);
    }
    
    
    for (auto goal: goal_position){
        file_goal << goal.transpose().format(CSVFormat) << std::endl;;
    }

    for (auto obs: obstacle_position){
        file_obs << obs.transpose().format(CSVFormat) << std::endl;;
    }
}


const void simulator::RMP_Simulator::save_message(
    string solver_name, string method, string result, double time
)
{
    std::ofstream f;
    f.open(this->save_dir_path_str + "/message.txt", std::ios::out);

    f << "solver-name : " << solver_name << endl;
    f << "method :      " << method << endl;
    f << "result :      " << result << endl;
    f << "time :        " << time << " [sec]" << endl;
}


void simulator::RMP_Simulator::update_environment()
{
    // 後から実装．センサー値から障害物位置などを変更
}



void simulator::RMP_Simulator::run(string json_path, string method)
{
    const static Eigen::IOFormat CSVFormat(Eigen::StreamPrecision, Eigen::DontAlignCols, ",", "\n");
    std::chrono::system_clock::time_point  start_time, end_time;
    start_time = std::chrono::system_clock::now();

    this->set_initial_value(json_path);
    this->make_data_dir(json_path);

    // ツリー構築
    rmp_flow::Root root;
    rmp_flow::Nodes_and_Maps nms;

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
        root,
        nms
    );


    const int total_step = this->time_span / this->time_interval;
    
    auto dim = root.self_dim;
    root.pushforward();  //初期値で全ノードデータを更新
    root.add_out_file_all(this->save_dir_path_str);


    string result;

    // メインループ
    boost::progress_display show_progress(total_step);
    if (method == "euler"){
        VectorXd X(dim*2);  //状態ベクトル
        VectorXd K1(dim*2), K2(dim*2), K3(dim*2), K4(dim*2);

        // 初期値書き込み
        X.head(this->c_dim) = this->q_neutral;
        X.tail(this->c_dim) = VectorXd::Zero(this->c_dim);

        auto dt = this->time_interval;
        double t = 0.0;  //時刻
        result = "is not divergent";

        for (int i=0; i<total_step; ++i){
            t += dt;
            //if (is_debug){std::cout << "\ni = " << i << std::endl;}
            
            X.head(dim) = root.x;
            X.tail(dim) = root.x_dot;
            root.solve(X, K1);
            X += dt * K1;
            root.set_state(X.head(dim), X.tail(dim));
            
            if (std::isnan(X(dim+1))){
                std::cout << "\n発散" << std::endl;
                result = "divergent";
                break;
            }
            root.save_state(t, CSVFormat);
            ++show_progress;
        }
    }
    else if (method == "rk"){
        VectorXd X(dim*2);  //状態ベクトル
        VectorXd K1(dim*2), K2(dim*2), K3(dim*2), K4(dim*2);

        // 初期値書き込み
        X.head(this->c_dim) = this->q_neutral;
        X.tail(this->c_dim) = VectorXd::Zero(this->c_dim);

        auto dt = this->time_interval;
        double t = 0.0;  //時刻
        result = "is not divergent";

        for (int i=0; i<total_step; ++i){
            t += time_interval;
            //cout << "\ni = " << i << endl;
            
            X.head(dim) = root.x;
            X.tail(dim) = root.x_dot;
            root.solve(X, K1);
            root.solve(X + 0.5*dt*K1, K2);
            root.solve(X + 0.5*dt*K2, K3);
            root.solve(X + dt*K3, K4);
            X += dt/6.0 *(K1 + 2.0*K2 + 2.0*K3 + K4);
            root.set_state(X.head(dim), X.tail(dim));
            
            if (std::isnan(X(dim+1))){
                std::cout << "\n発散" << std::endl;
                result = "divergent";
                break;
            }
            root.save_state(t, CSVFormat);
            ++show_progress;
        }
    }
    else if (method == "ode45"){

        VectorXd X(dim*2);  //状態ベクトル

        // 初期値書き込み
        X.head(this->c_dim) = this->q_neutral;
        X.tail(this->c_dim) = VectorXd::Zero(this->c_dim);

        if (this->c_dim = 4){
            static const int N_cdim = 4;
            auto sys = System_Single<N_cdim>(&root);
            auto observer = CSV_Observer<N_cdim>(&root);
            std::array<double, N_cdim*2> array_X;
            for (int s=0; s<array_X.size(); ++s){
                array_X[s] = X(s);
            }
            auto stepper = odeint::make_controlled<odeint::runge_kutta_dopri5<
            System_Single<N_cdim>::state
            >>(0.0001,0.0001);
            
            odeint::integrate_const(
                stepper, sys, array_X, 0.0, this->time_span, this->time_interval, std::ref(observer)
            );
        }
        else if (this->c_dim = 7){
            static const int N_cdim = 7;
            auto sys = System_Single<N_cdim>(&root);
            auto observer = CSV_Observer<N_cdim>(&root);
            std::array<double, N_cdim*2> array_X;
            for (int s=0; s<array_X.size(); ++s){
                array_X[s] = X(s);
            }
            auto stepper = odeint::make_controlled<odeint::runge_kutta_dopri5<
            System_Single<N_cdim>::state
            >>(0.0001,0.0001);
            
            odeint::integrate_const(
                stepper, sys, array_X, 0.0, this->time_span, this->time_interval, std::ref(observer)
            );
        }
        else {
            assert(false);
        }
    }
    else{
        assert(false);
    }

    // 環境情報保存
    this->save_environment(CSVFormat);
    


    end_time = std::chrono::system_clock::now();
    double elapsed = std::chrono::duration_cast<std::chrono::milliseconds>(end_time-start_time).count(); //処理に要した時間をミリ秒に変換
    std::cout << "time = " << elapsed/1000.0 << "[sec]" << std::endl;
    this->save_message("single", method, result, elapsed/1000.0);
}




void simulator::RMP_Simulator::solve_multi(
    const VectorXd& X, VectorXd& out_X_dot,
    const std::unordered_map<std::string, std::unordered_map<std::string, double>> rmp_param
)
{
    std::vector<rmp_flow::Node> cpoint_node_s(this->cpoint_num);
    std::vector<rmp_flow::Nodes_and_Maps> nm_s(this->cpoint_num);
    
    std::vector<VectorXd> fs(this->cpoint_num);
    std::vector<MatrixXd> Ms(this->cpoint_num);

    for (int i=0; i<this->cpoint_num; ++i){
        fs[i] = VectorXd::Zero(this->c_dim);
        Ms[i] = MatrixXd::Zero(this->c_dim, this->c_dim);
    }

    vector<std::thread> thrs(this->cpoint_num);  //スレッドたち

    auto dim = this->c_dim;
    VectorXd q = X.head(dim);
    VectorXd q_dot = X.tail(dim);

    VectorXd a, b, c;
    MatrixXd d;
    
    int s = 0;  // カウンター
    for (std::size_t i=0; i<this->model_struct.size(); ++i){
        for (std::size_t j=0; j<model_struct[i]; ++j){
            //cout << "i, j = "  << i << ", " << j << endl;
            rmp_flow::rmp_tree_constructor(
                i, j, this->robot_name, rmp_param,
                this->goal_position,
                this->goal_velosity,
                this->obstacle_position,
                this->obstacle_velosity,
                cpoint_node_s[s],
                nm_s[s]
            );

            thrs.push_back(
                std::thread(
                    sol, &cpoint_node_s[s],
                    &q, &q_dot, &fs[s], &Ms[s]
                )
            );
            
            //cout << "s = " << s <<thrs.back().joinable() << endl;

            thrs.back().join();

            ++s;
        }
    }

    //cout << "before join" << endl;

    // std::this_thread::sleep_for(std::chrono::milliseconds(2000));
    // for (auto f: fs){
    //     cout << f << "," << endl;
    // }

    // std::this_thread::sleep_for(std::chrono::milliseconds(2000));
    // s = 0;
    // for (auto& thr : thrs){
    //     cout << "join s = " << s << endl;
    //     assert(thr.joinable());
    //     std::this_thread::sleep_for(std::chrono::milliseconds(2000));
    //     thr.join();
    //     ++s;
    // }

    // s = 0;
    // for (int i=0; i<this->cpoint_num; ++i){
    //     cout << "join s = " << i << endl;
    //     thrs[i].join();
    // }

    //cout << "after join" << endl;

    // ジョイント制限は毎回作成
    auto jl_param = rmp_param.at("joint_limit_avoidance");
    mapping_base::Identity id;
    rmp2::Joint_Limit_Avoidance jl(
        this->c_dim, this->c_dim, "jl-avoidance", &id,
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
    VectorXd* q, VectorXd* q_dot,
    VectorXd* out_f, MatrixXd* out_M
)
{
    //std::this_thread::sleep_for(std::chrono::milliseconds(3000));
    node->solve(q, q_dot, out_f, out_M);
    //cout << "node "<< node->name <<" ------- done!!!" << endl;
}




void simulator::RMP_Simulator::run_multi(string json_path, string method)
{
    const static Eigen::IOFormat CSVFormat(Eigen::StreamPrecision, Eigen::DontAlignCols, ",", "\n");
    std::chrono::system_clock::time_point  start_time, end_time;
    start_time = std::chrono::system_clock::now();

    this->set_initial_value(json_path);

    rmp_flow::Root root;
    rmp_flow::Nodes_and_Maps nms;

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
        root,
        nms
    );

    
    this->make_data_dir(json_path);


    const int total_step = this->time_span / this->time_interval;
    double t = 0.0;  //時刻
    auto dim = root.self_dim;

    VectorXd X(dim*2);  //状態ベクトル
    VectorXd K1(dim*2), K2(dim*2), K3(dim*2), K4(dim*2);

    auto dt = this->time_interval;


    string result = "is not divergent";

    // メインループ
    if (method == "euler"){
        for (int i=0; i<total_step; ++i){
            t += dt;

            X.head(dim) = root.x;
            X.tail(dim) = root.x_dot;
            this->solve_multi(X, K1, this->rmp_param);
            X += dt * K1;
            //this->root.set_state(X.head(dim), X.tail(dim));
            
            if (std::isnan(X(dim+1))){
                std::cout << "\n発散" << std::endl;
                result = "divergent";
                break;
            }

            root.pushforward();
            root.save_state(t, CSVFormat);
        }
    }
    else if (method == "rk"){
        for (int i=0; i<total_step; ++i){
            t += dt;
            //if (is_debug){std::cout << "\ni = " << i << std::endl;}
            
            X.head(dim) = root.x;
            X.tail(dim) = root.x_dot;
            this->solve_multi(X, K1, this->rmp_param);
            this->solve_multi(X + 0.5*dt*K1, K2, this->rmp_param);
            this->solve_multi(X + 0.5*dt*K2, K3, this->rmp_param);
            this->solve_multi(X + dt*K3, K4, this->rmp_param);
            X += dt/6.0 *(K1 + 2.0*K2 + 2.0*K3 + K4);
            root.set_state(X.head(dim), X.tail(dim));
            
            if (std::isnan(X(dim+1))){
                std::cout << "\n発散" << std::endl;
                result = "divergent";
                break;
            }

            root.pushforward();
            root.save_state(t, CSVFormat);
        }
    }
    else{
        return;
    }


    // 環境情報保存
    this->save_environment(CSVFormat);


    end_time = std::chrono::system_clock::now();
    double elapsed = std::chrono::duration_cast<std::chrono::milliseconds>(end_time-start_time).count(); //処理に要した時間をミリ秒に変換
    std::cout << "time = " << elapsed/1000.0 << "[sec]" << std::endl;
    this->save_message("multi (std::thread)", method, result, elapsed/1000.0);
}




void simulator::RMP_Simulator::run_multi2(string json_path, string method)
{
    const static Eigen::IOFormat CSVFormat(Eigen::StreamPrecision, Eigen::DontAlignCols, ",", "\n");
    std::chrono::system_clock::time_point start_time, end_time;
    start_time = std::chrono::system_clock::now();

    this->set_initial_value(json_path);
    this->make_data_dir(json_path);
    
    rmp_flow::Root root;
    rmp_flow::Nodes_and_Maps nms;

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
        root,
        nms
    );


    const int total_step = this->time_span / this->time_interval;
    double t = 0.0;  //時刻
    auto dim = root.self_dim;
    root.pushforward();  //初期値で全ノードデータを更新
    root.add_out_file_all(this->save_dir_path_str);



    VectorXd X(dim*2);  //状態ベクトル
    VectorXd K1(dim*2), K2(dim*2), K3(dim*2), K4(dim*2);

    // 初期値書き込み
    X.head(this->c_dim) = this->q_neutral;
    X.tail(this->c_dim) = VectorXd::Zero(this->c_dim);

    auto dt = this->time_interval;


    auto [goal_at, obs_av, jl_av] = rmp_multi::make_rmp_natural_form(this->rmp_param, this->t_dim, this->robot_name);

    vector<sice::Control_Point> map_sice;
    vector<franka_emika::Control_Point> map_fe;
    vector<mapping_base::Identity*> maps(this->cpoint_num);
    int ee_num;
    if (this->robot_name == "sice"){
        auto [map, _, b] = sice::make_cpoint_map();
        map_sice = map;
        ee_num = b;

        for (int i=0; i<this->cpoint_num; ++i){
            maps[i] = &map_sice[i];
        }
    }
    else if (this->robot_name == "franka_emika"){
        auto [map, _, b] = franka_emika::make_cpoint_map();
        map_fe = map;
        ee_num = b;

        for (int i=0; i<this->cpoint_num; ++i){
            maps[i] = &map_fe[i];
        }
    }
    else {
        assert(false);
    }

    string result = "is not divergent";
    cout << "main loop" << endl;

    // メインループ
    boost::progress_display show_progress(total_step);
    if (method == "euler"){
        for (int i=0; i<total_step; ++i){
            t += dt;
            //if (is_debug){std::cout << "\ni = " << i << std::endl;}
            
            rmp_multi::solve(
                X,
                maps, goal_at, obs_av, jl_av,
                this->goal_position[0], this->goal_velosity[0], 
                this->obstacle_position, this->obstacle_velosity,
                ee_num, this->cpoint_num, this->c_dim, this->t_dim,
                K1
            );
            X += dt * K1;
            
            
            if (std::isnan(X(dim+1))){
                std::cout << "\n発散" << std::endl;
                result = "divergent";
                break;
            }
            root.set_state(X.head(dim), X.tail(dim));
            root.pushforward();
            root.save_state(t, CSVFormat);
            ++show_progress;
        }
    }
    else if (method == "rk"){
        for (int i=0; i<total_step; ++i){
            t += dt;
            //cout << "\ni = " << i << endl;
            
            rmp_multi::solve(
                X,
                maps, goal_at, obs_av, jl_av,
                this->goal_position[0], this->goal_velosity[0], 
                this->obstacle_position, this->obstacle_velosity,
                ee_num, this->cpoint_num, this->c_dim, this->t_dim,
                K1
            );
            rmp_multi::solve(
                X + 0.5*dt*K1,
                maps, goal_at, obs_av, jl_av,
                this->goal_position[0], this->goal_velosity[0], 
                this->obstacle_position, this->obstacle_velosity,
                ee_num, this->cpoint_num, this->c_dim, this->t_dim,
                K2
            );
            rmp_multi::solve(
                X + 0.5*dt*K2,
                maps, goal_at, obs_av, jl_av,
                this->goal_position[0], this->goal_velosity[0], 
                this->obstacle_position, this->obstacle_velosity,
                ee_num, this->cpoint_num, this->c_dim, this->t_dim,
                K3
            );
            rmp_multi::solve(
                X + dt*K3,
                maps, goal_at, obs_av, jl_av,
                this->goal_position[0], this->goal_velosity[0], 
                this->obstacle_position, this->obstacle_velosity,
                ee_num, this->cpoint_num, this->c_dim, this->t_dim,
                K4
            );

            X += dt/6.0 *(K1 + 2.0*K2 + 2.0*K3 + K4);
            
            if (std::isnan(X(dim+1))){
                std::cout << "\n発散" << std::endl;
                result = "divergent";
                break;
            }
            root.set_state(X.head(dim), X.tail(dim));
            root.pushforward();
            root.save_state(t, CSVFormat);
            ++show_progress;
        }
    }
    else{
        assert(false);
    }



    // 環境情報保存
    this->save_environment(CSVFormat);



    end_time = std::chrono::system_clock::now();
    double elapsed = std::chrono::duration_cast<std::chrono::milliseconds>(end_time-start_time).count(); //処理に要した時間をミリ秒に変換
    std::cout << "time = " << elapsed/1000.0 << "[sec]" << std::endl;
    this->save_message("multi (openMP)", method, result, elapsed/1000.0);
}





