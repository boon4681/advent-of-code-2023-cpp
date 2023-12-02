cmake_minimum_required(VERSION 3.26)
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
cmake_policy(SET CMP0091 NEW)

project(avc2023)
add_executable(d1 ./d1/main.cpp)
add_executable(d2 ./d2/main.cpp)