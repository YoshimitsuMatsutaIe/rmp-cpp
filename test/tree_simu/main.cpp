#include <iostream>

#include "../../include/simulator.hpp"


int main()
{
    using namespace std;


    cout << "start" << endl;



    simulator::RMP_Simulator sim;

    
    //sim.run("../../../rmp-py/config/franka_sphere.json", "ode45");
    sim.run_multi2("../../../rmp-py/config/franka_sphere.json", "rk");

    // simulator::RMP_Simulator sim2;
    // //sim2.run_multi("../../config/sice.json", "rk");
    // sim2.run_multi("../../config/franka_sphere.json", "rk");

    //sim.run_multi2("../../config/franka_sphere.json", "rk");
    
    //sim.run("../../config/sice.json", "rk");
    //sim.run_multi("../../config/sice.json", "rk");
    //sim.run_multi2("../../config/sice.json", "rk");

    
    //sim.run("../../config/sice.json", "rk");

    cout << "done!" << endl;
}