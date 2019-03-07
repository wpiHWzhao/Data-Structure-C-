cmake_minimum_required(VERSION 3.13)

project(Stack)

set(CMAKE_CXX_STANDARD 11)

add_executable(Stack src/stack.h main.cpp src/stack_list.h src/stack_vector.cpp)