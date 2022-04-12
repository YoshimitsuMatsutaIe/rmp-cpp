#include <iostream>
#include <chrono>

#include "../include/rmp_leaf.hpp"
#include "../include/rmp_tree.hpp"
#include "../include/mappings.hpp"



rmp_tree::RMP_Tree::RMP_Tree(rmp_node::Root* root, std::string tree_name)
{
    this->root = root;
    this->tree_name = tree_name;
}

void rmp_tree::RMP_Tree::update_environment()
{
    // 後から実装．センサー値から障害物位置などを変更
}

void rmp_tree::RMP_Tree::one_step(void)
{
    this->root->pushforward();
    this->root->pullback();
    this->root->resolve();
}


void rmp_tree::RMP_Tree::run(double time_span, double time_interval)
{
    std::chrono::system_clock::time_point  start_time, end_time; // 型は auto で可
    start_time = std::chrono::system_clock::now();


    this->time_span = time_span;
    this->time_interval = time_interval;

    int total_step = time_span / time_interval;
    double t=0;  //時刻

    std::ofstream file("test2.csv");  //ここに書き出す

    //csvのヘッダー作成
    std::string csv_header="t";
    for (int i=0; i<root->self_dim; ++i)
    {
        csv_header += ",x" + std::to_string(i);
    }
    for (int i=0; i<root->self_dim; ++i)
    {
        csv_header += ",dx" + std::to_string(i);
    }
    file << csv_header << std::endl;

    //初期値書き込み
    file << t;
    for (int i=0; i<root->self_dim; ++i)
    {
        file << "," << root->x[i];
    }
    for (int i=0; i<root->self_dim; ++i)
    {
        file << "," << root->x_dot[i];
    }
    file << std::endl;

    root->print_state_all_node();

    // メインループ
    for (int i=0; i<total_step; ++i)
    {
        t += time_interval;
        std::cout << "\ni = " << i << std::endl;

        one_step();
        root->print_state_all_node();

        file << t;
        for (int i=0; i<root->self_dim; ++i)
        {
            file << "," << root->x[i];
        }
        for (int i=0; i<root->self_dim; ++i)
        {
            file << "," << root->x_dot[i];
        }
        file << std::endl;
    }


    end_time = std::chrono::system_clock::now();
    double elapsed = std::chrono::duration_cast<std::chrono::milliseconds>(end_time-start_time).count(); //処理に要した時間をミリ秒に変換
    std::cout << "time = " << elapsed/1000 << "[sec]" << std::endl;
}



