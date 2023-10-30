cmake_minimum_required(VERSION 3.10)
# Especifica la versión mínima de CMake requerida para construir este proyecto.
# Es importante asegurarse de que la versión especificada sea compatible con las funciones de CMake que se van a utilizar.

project(HelloCMake)
# Define el nombre del proyecto. En este caso, el proyecto se llama "HelloCMake".

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED True)
#Establece el estándar C++ requerido para este proyecto. En este caso, se utiliza C++11. CMAKE_CXX_STANDARD_REQUIRED indica que el estándar especificado es obligatorio.

add_executable(HelloCMake main.cpp)
# Define un ejecutable llamado "HelloCMake" y especifica que se construirá a partir del archivo "main.cpp".
