#include <eigen3/Eigen/Core>
#include <vector>
#include <iostream>

void wow(const Eigen::VectorXd& in, Eigen::VectorXd& out)
{
    out = in * 2.0;
}

void foo(std::vector<Eigen::VectorXd>& out)
{
    Eigen::VectorXd o(3);
    o << 1, 2, 3;
    out.push_back(o);
    //out[0] = o;

    o << 4, 5, 6;
    wow(o, o);
    out.push_back(o);
    //out[1] = o;

    for (auto x: out){

        std::cout << x << ",\n" << std::endl;
    }

}


int main()
{
    using namespace std;


    vector<Eigen::VectorXd> hoge(2);

    foo(hoge);

    for (auto x: hoge){
        cout << x << ", " << endl;
    }


    cout << "done!" << endl;
}
