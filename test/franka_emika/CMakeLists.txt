cmake_minimum_required(VERSION 3.13)
project(solution)
set(CMAKE_CXX_STANDARD 17)

file(GLOB SRC_ ../../src/*.cpp)
message(${SRC_})

file(GLOB BAXTER_ ../../robot_model_franka_emika/src/*.cpp)
message(${BAXTER_})


add_executable(
    main main.cpp
    ${SRC_}
    ${BAXTER_}
)
target_compile_options(main PUBLIC -O2 -Wall)