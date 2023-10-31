# test/CMakeLists.txt
add_executable(test_operations main.cpp)
target_link_libraries(test_operations PRIVATE advanced_math_operations)
