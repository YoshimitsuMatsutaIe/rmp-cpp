cmake_minimum_required(VERSION 3.13)
project(solution)

set(CMAKE_CXX_STANDARD 20)


file(GLOB SRC_ ../../src/*.cpp)
message(${SRC_})

file(GLOB SICE_ ../../robot_model_sice/src/*.cpp)
message(${SICE_})



add_executable(
    main main.cpp
    ${SRC_}
    ${SICE_}
)
target_compile_options(main PUBLIC -O2 -Wall -g)