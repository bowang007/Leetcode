cmake_minimum_required(VERSION 3.14)
project(751_800)

set(CMAKE_CXX_STANDARD 14)

include_directories(${CMAKE_INCLUDE_CURRENT_DIR})

SET(SRC
        problem763.cpp
        problem766.cpp
        problem767.cpp
        problem785.cpp
        problem787.cpp
        main.cpp)

add_executable(751_800 ${SRC})