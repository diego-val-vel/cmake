# Define la versión mínima requerida de CMake para este proyecto.
cmake_minimum_required(VERSION 3.10)

# Define el nombre del proyecto y el lenguaje utilizado.
project(CalculatorProject LANGUAGES CXX)

# Establece el estándar C++ requerido.
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# Incluye los directorios donde están los archivos de cabecera.
include_directories(include)

# Añade los archivos fuente que serán compilados.
