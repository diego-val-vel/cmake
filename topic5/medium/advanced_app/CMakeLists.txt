cmake_minimum_required(VERSION 3.15)

project(AdvancedApp VERSION 1.0 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)

add_executable(advanced_app src/main.cpp)

# Vincula las bibliotecas al ejecutable
target_link_libraries(advanced_app PRIVATE math_utils string_utils)
