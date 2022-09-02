cmake_minimum_required(VERSION 3.13)
project(main)
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_THREAD_PREFER_PTHREAD ON)                                                                                                                                                                                                           
set(THREADS_PREFER_PTHREAD_FLAG ON) 
find_package(Threads REQUIRED)   
add_executable(
    main main.cpp
)
target_compile_options(main PUBLIC -O2 -Wall "-pthread")
target_link_libraries(main Threads::Threads)