cmake_minimum_required(VERSION 3.15)

project(MyProject VERSION 1.0 LANGUAGES CXX)

# Configuración de la versión del proyecto
configure_file(include/config.h.in ${CMAKE_BINARY_DIR}/config.h)

# Establecer estándar de C++
set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED True)

# Agregar subdirectorios
add_subdirectory(src)
