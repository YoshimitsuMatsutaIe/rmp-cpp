cmake_minimum_required(VERSION 3.13)
project(solution)
#set(CMAKE_CXX_FLAGS "-j 11")
set(CMAKE_CXX_STANDARD 17)

file(GLOB BAXTER_SOURCE ../../baxter/src/*.cpp)
message(${BAXTER_SOURCE})
add_executable(
    main main.cpp
    ../../src/mappings.cpp
    #../../baxter/src/phi.cpp
    ${BAXTER_SOURCE}
)
target_compile_options(main PUBLIC -O2 -Wall)