cmake_minimum_required(VERSION 3.15)

# Nombre del proyecto y configuración del lenguaje
project(App VERSION 1.0 LANGUAGES CXX)

# Especifica el estándar C++17
set(CMAKE_CXX_STANDARD 17)

# Incluye directorios de encabezados
include_directories(${CMAKE_SOURCE_DIR}/advanced_library/include)

# Añade un ejecutable al proyecto
add_executable(main_app src/main.cpp)

# Vincula la biblioteca al ejecutable
target_link_libraries(main_app PRIVATE advanced_library)
