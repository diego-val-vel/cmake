add_library(MathLib MathOperations.cpp MathOperations.h)

target_include_directories(MathLib PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})
