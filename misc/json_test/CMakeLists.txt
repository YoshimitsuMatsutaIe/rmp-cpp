cmake_minimum_required(VERSION 3.13)
project(solution)
set(CMAKE_CXX_STANDARD 17)

add_executable(
    main main.cpp
)
target_compile_options(main PUBLIC -O2 -Wall)