cmake_minimum_required(VERSION 3.8)
project(Assignment5)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES main.cpp header.hpp functions.cpp)
add_executable(Assignment5 ${SOURCE_FILES} header.hpp functions.cpp)