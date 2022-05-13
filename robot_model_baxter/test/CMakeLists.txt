cmake_minimum_required(VERSION 3.13)
project(solution)
set(CMAKE_CXX_STANDARD 17)
file(GLOB BAXTER_NONE_CLASS ../src/*.cpp)
message(${BAXTER_NONE_CLASS})
add_executable(
    main main.cpp
    ../../src/mappings.cpp
    ${BAXTER_NONE_CLASS}
)
target_compile_options(main PUBLIC -O2 -Wall -fopenmp)