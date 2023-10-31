cmake_minimum_required(VERSION 3.15)

project(StringUtils VERSION 1.0 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)

include_directories(include)

add_library(string_utils STATIC src/string_operations.cpp)

target_include_directories(string_utils PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/include)
