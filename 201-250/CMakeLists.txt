cmake_minimum_required(VERSION 3.14)
project(201_250)

set(CMAKE_CXX_STANDARD 14)

include_directories(${CMAKE_INCLUDE_CURRENT_DIR})

SET(SRC
        main.cpp
        problem206.cpp
        problem207.cpp
        problem208.cpp
        problem209.cpp
        problem210.cpp
        problem211.cpp
        problem212.cpp
        problem215.cpp
        problem217.cpp
        problem218.cpp
        problem219.cpp
        problem220.cpp
        problem221.cpp
        problem222.cpp
        problem224.cpp
        problem227.cpp
        problem229.cpp
        problem235.cpp
        problem236.cpp
        problem238.cpp
        problem239.cpp
        problem240.cpp
        problem242.cpp
        problem243.cpp
        problem244.cpp
        problem245.cpp
        problem246.cpp
        problem247.cpp)

add_executable(201_250 ${SRC})