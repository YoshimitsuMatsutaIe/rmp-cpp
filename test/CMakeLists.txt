cmake_minimum_required(VERSION 3.13)
project(solution)
#set(CMAKE_CXX_FLAGS "-j 11")
add_executable(test test.cpp ../src/node.cpp ../src/model_simple_arm.cpp ../src/rmp.cpp ../src/rmp2_attractor_xi.cpp)