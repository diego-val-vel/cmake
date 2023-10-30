add_executable(MyApp main.cpp)

target_link_libraries(MyApp PRIVATE MathLib)
target_include_directories(MyApp PRIVATE ../lib ${CMAKE_BINARY_DIR}/generated)
