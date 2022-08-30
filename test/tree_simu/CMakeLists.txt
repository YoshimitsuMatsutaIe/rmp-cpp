cmake_minimum_required(VERSION 3.13)
project(solution)
set(CMAKE_CXX_STANDARD 17)

file(GLOB SRC_ ../../src/*.cpp)
message(${SRC_})

file(GLOB SICE ../../robot_model_sice/src/*.cpp)
message(${SICE})
file(GLOB FRANKA_EMIKA ../../robot_model_franka_emika/src/*.cpp)
message(${FRANKA_EMIKA})

add_executable(
    main main.cpp
    ${SRC_}
    ${SICE}
    ${FRANKA_EMIKA}
)
target_compile_options(main PUBLIC -O2 -Wall)