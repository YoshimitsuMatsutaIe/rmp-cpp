cmake_minimum_required(VERSION 3.13)
project(solution)
#set(CMAKE_CXX_FLAGS "-j 11")
set(CMAKE_CXX_STANDARD 17)


file(GLOB SRC_ ../../src/*.cpp)
message(${SRC_})

file(GLOB SICE_ ../../robot_model_sice/src/*.cpp)
message(${SICE_})



add_executable(
    test test.cpp
    ${SRC_}
    ${SICE_}
)
target_compile_options(test PUBLIC -O2 -Wall)