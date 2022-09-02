cmake_minimum_required(VERSION 3.13)
project(main)
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_THREAD_PREFER_PTHREAD ON)
set(THREADS_PREFER_PTHREAD_FLAG ON)
find_package(Threads REQUIRED)

file(GLOB SRC_ ../../src/*.cpp)
message(${SRC_})

file(GLOB FRANKA_EMIKA ../../robot_model_franka_emika/src/*.cpp)
message(${FRANKA_EMIKA})
file(GLOB SICE ../../robot_model_sice/src/*.cpp)
message(${SICE})


add_executable(
    main main.cpp
    ${SRC_}
    ${FRANKA_EMIKA}
    ${SICE}
)
target_compile_options(main PUBLIC -O2 -Wall "-pthread")
target_link_libraries(main Threads::Threads)