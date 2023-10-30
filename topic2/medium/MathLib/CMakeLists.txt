add_library(MathLib math_functions.cpp math_functions.h)
target_include_directories(MathLib PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})
