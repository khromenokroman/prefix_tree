cmake_minimum_required(VERSION 3.28)
project(prefix_tree)

set(CMAKE_CXX_STANDARD 17)

add_executable(${PROJECT_NAME} main.cpp prefix_tree.cpp)
