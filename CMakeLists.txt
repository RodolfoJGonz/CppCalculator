cmake_minimum_required(VERSION 3.26)
project(CppCalculator)

set(CMAKE_CXX_STANDARD 17)

add_executable(CppCalculator main.cpp
        operations.cpp
        operations.h)
