cmake_minimum_required(VERSION 3.14)
project(251_300)

set(CMAKE_CXX_STANDARD 14)

include_directories(${CMAKE_INCLUDE_CURRENT_DIR})

SET(SRC
        main.cpp
        problem252.cpp
        problem253.cpp
        problem257.cpp
        problem269.cpp
        problem270.cpp
        problem273.cpp
        problem274.cpp
        problem275.cpp
        problem278.cpp
        problem282.cpp
        problem283.cpp
        problem286.cpp
        problem287.cpp
        problem295.cpp
        problem297.cpp
        problem300.cpp)

add_executable(251_300 ${SRC})