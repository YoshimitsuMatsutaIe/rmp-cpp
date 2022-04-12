cmake_minimum_required(VERSION 3.13)
project(solution)
#set(CMAKE_CXX_FLAGS "-j 11")
add_executable(
    test test.cpp
    ../src/rmp_node.cpp
    ../src/robot_model_sice.cpp
    ../src/rmp_leaf.cpp
    ../src/rmp2_attractor_xi.cpp
    ../src/mappings.cpp
    ../src/rmp_tree.cpp
)