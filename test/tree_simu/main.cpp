#include <iostream>

#include "../../include/simulator.hpp"


int main()
{
    using namespace std;


    cout << "start" << endl;



    simulator::RMP_Simulator sim;

    //sim.run("../../config/sice.json", "rk");

    sim.run("../../config/franka_sphere.json", "rk");


    cout << "done!" << endl;
}