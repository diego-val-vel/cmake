cmake_minimum_required(VERSION 3.15)
project(SumApp VERSION 1.0 LANGUAGES CXX)

# Opción para controlar la impresión del resultado
option(PRINT_RESULT "Imprime el resultado en la consola" OFF)

# Configurar un archivo de cabecera para pasar las opciones de CMake a C++
configure_file(config.h.in config.h)

# Especificar el directorio de archivos de cabecera generados
include_directories(${CMAKE_CURRENT_BINARY_DIR})

# Añadir los archivos fuente al ejecutable
add_executable(SumApp src/main.cpp src/sum.cpp)

# Instalar el ejecutable
install(TARGETS SumApp DESTINATION bin)
