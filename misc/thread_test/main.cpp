#include <iostream>
#include <thread>
#include <vector>
#include <chrono>
#include <eigen3/Eigen/Core>

using namespace std;

//# スレッドの中で呼び出す関数
void hoge(const Eigen::VectorXd* Z, int thrNo, Eigen::VectorXd* out)
{
    cout<<"### THREAD#"<<thrNo<<" START : " << endl;

    double j;
    for (int i=0; i<10000000000; ++i){
        j = i*i / i*100l/10;
    }

    *out = *Z * 2;
}

int main()
{
    int N = 100;
    vector<Eigen::VectorXd> in;

    Eigen::VectorXd v(3);
    for (int i=0; i<N; ++i){
        v << i, 2*i, 3*i;
        in.push_back(v);
    }

    vector<Eigen::VectorXd> out(N);
    for (int i=0; i<N; ++i){
        v << 0, 0, 0;
        out[i] = v;
    }

    for (auto s : in){
        cout << s << ",";
    }
    cout << endl;

    //# スレッド起動（関数ポインタをCallableとして起動）

    // vector<std::thread> thrs(3);

    // int i = 0;
    // for (auto& thr : thrs){
    //     thr = thread((hoge, i, i, &o[i]));
    //     ++i;
    // }
    
    vector<std::thread> thrs;
    for (int i=0; i<in.size(); ++i){
        thrs.push_back(thread(hoge, &in[i], i, &out[i]));
    }

    // std::thread thr1(hoge, 10, 1, &o[0]);
    // std::thread thr2(hoge, 20, 2, &o[1]);
    // std::thread thr3(hoge, 30, 3, &o[2]);
    
    //# thNの完了を待つ
    for (auto& thr: thrs){
        thr.join();
    }

    // thr1.join();
    // thr2.join();
    // thr3.join();


    // for (auto s : out){
    //     cout << s << ",";
    // }
    // cout << endl;

    cout << "done!" << endl;
}

