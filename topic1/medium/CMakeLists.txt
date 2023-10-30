cmake_minimum_required(VERSION 3.10)

project(MathLibrary VERSION 1.0)

# Establecer el estándar C++11.
set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED True)

# Añadir los subdirectorios para la librería y las pruebas.
add_subdirectory(libmath)
add_subdirectory(tests)
