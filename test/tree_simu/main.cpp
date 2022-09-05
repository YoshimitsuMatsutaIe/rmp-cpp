#include <iostream>

#include "../../include/simulator.hpp"


int main()
{
    using namespace std;


    cout << "start" << endl;



    simulator::RMP_Simulator sim;

    //sim.run("../../config/sice.json", "rk");

    //sim.run("../../config/franka_sphere.json", "rk");


    sim.run_multi("../../config/sice.json", "rk");

    cout << "done!" << endl;
}