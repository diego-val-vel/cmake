# Versión mínima requerida de CMake
cmake_minimum_required(VERSION 3.15)

# Nombre y versión del proyecto
project(MathUtils VERSION 1.0 LANGUAGES CXX)

# Configura el estándar C++17
set(CMAKE_CXX_STANDARD 17)

# Directorios de inclusión de la biblioteca
include_directories(include)

# Añade la biblioteca
add_library(math_utils STATIC src/math_operations.cpp)

# Especifica los directorios públicos de inclusión
target_include_directories(math_utils PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/include)
