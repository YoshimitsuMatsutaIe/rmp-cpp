#include <iostream>
#include <filesystem>
#include <fstream>


#include <vector>

#include <eigen3/Eigen/Core>
#include <nlohmann/json.hpp>

#include "../../include/rmp_tree.hpp"
#include "../../include/environment.hpp"



int main()
{
    using std::cout;
    using std::endl;
    using nlohmann::json;


    std::ifstream param_json("../../config/sice.json");

    auto j = json::parse(param_json);


    std::vector<Eigen::VectorXd> g;
    std::vector<Eigen::VectorXd> g_dot;
    std::vector<Eigen::VectorXd> o;
    std::vector<Eigen::VectorXd> o_dot;

    auto obs_paran = j["env_param"]["obstacle"];
    auto o_param = obs_paran[0];

    //cout << o_param << endl;
    // std::vector<Eigen::VectorXd&> o_;

    simulator::set_sphere(
        o_param["param"]["n"].get<int>(),
        o_param["param"]["r"].get<double>(),
        o_param["param"]["x"].get<double>(),
        o_param["param"]["y"].get<double>(),
        o
    );

    Eigen::VectorXd temp(2);
    temp <<
    j["env_param"]["goal"]["param"]["x"].get<double>(),
    j["env_param"]["goal"]["param"]["y"].get<double>();
    g.push_back(temp);

    temp = Eigen::VectorXd::Zero(2);
    g_dot.push_back(temp);

    for (auto s: o){
        temp = Eigen::VectorXd::Zero(2);
        o_dot.push_back(temp);
    }

    // auto [root, nms] = rmp_flow::rmp_tree_constructor(
    //     j["robot_name"].get<std::string>(),
    //     j["rmp_param"],
    //     g, g_dot, o, o_dot
    // );



    rmp_flow::Root root;
    rmp_flow::Nodes_and_Maps nms;
    rmp_flow::rmp_tree_constructor(
        j["robot_name"].get<std::string>(),
        j["rmp_param"],
        g, g_dot, o, o_dot,
        root, nms
    );
    // cout << "map_id_num =   " << nms.map_id_s.size() << endl;
    // cout << "map_dis_num =  " << nms.map_dis_s.size() << endl;
    // cout << "map_sice_num = " << nms.map_sice_cp_s.size() << endl;
    // cout << "map_fe_num =   " << nms.map_fe_cp_s.size() << endl;
    // cout << "node_num =     " << nms.node_s.size() << endl;
    // cout << "node_jl_num =  " << nms.rmp2_node_jl.size() << endl;
    // cout << "node_at_num =  " << nms.rmp2_node_at_s.size() << endl;
    // cout << "node_obs_num = " << nms.rmp2_node_obs_s.size() << endl;

    // for (auto s: nms.rmp2_node_obs_s){
    //     cout << s.name << endl;
    // }


    // cout << "hoge\n" << endl;

    // for(auto itr = nms.rmp2_node_obs_s.begin(); itr != nms.rmp2_node_obs_s.end(); ++itr) {
    //     cout << itr->name << "\n";
    // }
    // cout << "\nparent name" << endl;
    // for(auto itr = nms.rmp2_node_obs_s.begin(); itr != nms.rmp2_node_obs_s.end(); ++itr) {
    //     cout << itr->parent->name << "\n";
    // }

    //cout << "at name" << root.children.back()->children[0]->parent->name << endl;

    // cout << "root & = " << &root << endl;
    // cout << "\ncp00 child num = " << endl;;
    // for (auto c: root.children[1]->children){
    //     cout << c->name << endl;
    // }




    cout << "\nsimulation start..." << endl;
    //root.print_tree_structure();

    // cout << endl;
    // root.print_state_all_node();
    // root.pushforward();

    rmp_flow::RMP_Tree tree(&root, "test_tree");
    tree.set_debug(false);
    cout << "simulation running..." << endl;
    tree.run(j["time_span"].get<double>(), j["time_interval"].get<double>());
    cout << "finish!\n" << endl;




    cout << "done!" << endl;
}