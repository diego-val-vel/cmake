# CMakeLists.txt
# Indica la versión mínima requerida de CMake.
cmake_minimum_required(VERSION 3.10)

# Define el nombre del proyecto y la versión.
project(BasicApp VERSION 1.0)

# Establece el estándar de C++ requerido.
set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED True)

# Añade un ejecutable basado en el archivo fuente.
add_executable(BasicApp src/main.cpp)
