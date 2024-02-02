cmake_minimum_required(VERSION 3.5)

project(algorithms VERSION 0.1 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_INCLUDE_CURRENT_DIR ON)

add_executable(algorithms main.cpp)

include_directories("${CMAKE_CURRENT_SOURCE_DIR}/lib/")
add_subdirectory(lib)

target_link_libraries(algorithms PRIVATE Algo::Lib)

