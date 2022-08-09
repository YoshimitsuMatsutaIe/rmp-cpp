#include "../../include/rmp_node.hpp"
#include "../../robot_model_franka_emika/include/franka_emika.hpp"
#include "../../include/rmp_leaf.hpp"
#include "../../include/mappings.hpp"
#include "../../include/rmp_node.hpp"

#include <omp.h>
#include <eigen3/Eigen/Core>
#include <iostream>
#include <vector>
#include <string>


int main()
{
    using std::cout;
    using std::endl;
    using Eigen::VectorXd;
    using std::vector;

    cout << "running...\n" << endl;


    using franka_emika::Control_Point;

    Control_Point c(7, 0);

    c.print_state();




    cout << "done!!" << endl;
}