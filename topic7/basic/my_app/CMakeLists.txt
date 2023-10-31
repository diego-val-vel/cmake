# Definir la versión mínima requerida de CMake
cmake_minimum_required(VERSION 3.10)

# Definir el nombre del proyecto y el lenguaje utilizado
project(MyApp VERSION 1.0 LANGUAGES CXX)

# Especificar el estándar C++ requerido
set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED True)

# Añadir definiciones de compilación
add_compile_definitions(USE_FUNCTION)

# Añadir el ejecutable del programa
add_executable(my_app main.cpp)

# Imprimir mensaje dependiendo del sistema operativo
if(WIN32)
  message(STATUS "Compilando en Windows")
elseif(UNIX)
  message(STATUS "Compilando en UNIX/Linux")
endif()
