cmake_minimum_required(VERSION 3.14)
project(851_900)

set(CMAKE_CXX_STANDARD 14)

include_directories(${CMAKE_INCLUDE_CURRENT_DIR})

SET(SRC
        problem863.cpp
        problem865.cpp
        problem887.cpp
        problem896.cpp
        main.cpp)

add_executable(851_900 ${SRC})

