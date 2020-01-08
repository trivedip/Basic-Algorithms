cmake_minimum_required(VERSION 3.15)
project(cpp)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)

add_executable(cpp
        driver.cpp
        exp.cpp
        exp.h
        peak_finding.cpp
        peak_finding.h
        sort.cpp
        sort.h
        utility.cpp
        utility.h)
