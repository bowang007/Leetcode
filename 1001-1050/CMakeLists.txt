cmake_minimum_required(VERSION 3.14)
project(1001_1050)

set(CMAKE_CXX_STANDARD 14)

include_directories(${CMAKE_INCLUDE_CURRENT_DIR})

SET(SRC
        problem1004.cpp
        problem1027.cpp
        main.cpp)

add_executable(1001_1050 ${SRC})