cmake_minimum_required(VERSION 3.15)
project(basic_algorithms_cpp)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)

add_executable(
        basic_algorithms_cpp
        driver.cpp
        sort.cpp
        sort.h
        utility.cpp
        utility.h
        )
