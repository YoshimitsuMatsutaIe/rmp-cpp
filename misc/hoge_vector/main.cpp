#include <iostream>
#include <vector>



int main()
{
    using std::cout;
    using std::endl;
    using std::vector;


    cout << "running..." << endl;


    vector<vector<int>> V(3);

    for (int i=0; i<3; ++i){
        vector<int >temp_(5);
        for (int j=0; j<5; ++j){
            temp_[j] = i * j;
        }
        V[i] = temp_;
    }


    // vector<int> v1{1, 2, 3, 4, 5};
    // vector<int> v2{1, 2, 3, 4, 5};
    // vector<int> v3{1, 2, 3, 4, 5};

    // V


    cout << "V is " << endl;
    for (auto v: V){
        for (auto v_: v){
            cout << v_ << ", ";
        }
        cout << endl;
    }


    cout << "done!" << endl;
}