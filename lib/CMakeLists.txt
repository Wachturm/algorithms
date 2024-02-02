cmake_minimum_required(VERSION 3.5)

project(algorithms-lib LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_INCLUDE_CURRENT_DIR ON)

set(SOURCES
    lib.hpp
    sum_of_unique.cpp
    sum_of_unique.hpp
    )

add_library(algorithms-lib ${SOURCES})

add_library(Algo::Lib ALIAS algorithms-lib)

