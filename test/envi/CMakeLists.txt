cmake_minimum_required(VERSION 3.13)
project(solution)
set(CMAKE_CXX_STANDARD 17)

file(GLOB SRC_ ../../src/environment.cpp)
message(${SRC_})




add_executable(
    main main.cpp
    ${SRC_}
)
target_compile_options(main PUBLIC -O2 -Wall)