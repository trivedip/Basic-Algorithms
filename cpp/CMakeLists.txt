cmake_minimum_required(VERSION 3.15)
project(cpp)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)
file(GLOB all_header "algo/*.h")
add_executable(cpp driver.cpp ${all_header})
