cmake_minimum_required(VERSION 3.15)

# Define el proyecto de la biblioteca y el lenguaje usado
project(AdvancedLibrary VERSION 1.0 LANGUAGES CXX)

# Especifica el estándar C++17
set(CMAKE_CXX_STANDARD 17)

# Crea una biblioteca estática con el código fuente
add_library(advanced_library STATIC src/advanced_math.cpp)

# Especifica los directorios de encabezados para la biblioteca y los proyectos que la consumen
target_include_directories(advanced_library PUBLIC include)
