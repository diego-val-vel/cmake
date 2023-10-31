# Definir la versión mínima requerida de CMake
cmake_minimum_required(VERSION 3.10)

# Definir el nombre del proyecto y el lenguaje utilizado
project(MyAdvancedApp VERSION 1.0 DESCRIPTION "An advanced app example" LANGUAGES CXX)

# Especificar el estándar C++ requerido
set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED True)

# Configurar el directorio para los archivos generados por CMake
set(CMAKE_BINARY_DIR ${CMAKE_SOURCE_DIR}/bin)
set(EXECUTABLE_OUTPUT_PATH ${CMAKE_BINARY_DIR})
set(LIBRARY_OUTPUT_PATH ${CMAKE_BINARY_DIR})

# Verificar si el compilador soporta un flag específico
include(CheckCXXCompilerFlag)
check_cxx_compiler_flag("/std:c++latest" COMPILER_SUPPORTS_CXXLATEST)
if(COMPILER_SUPPORTS_CXXLATEST)
    add_compile_options("/std:c++latest")
endif()

# Configurar las definiciones de compilación
option(USE_MYMATH "Use my own math implementation" ON)
if(USE_MYMATH)
    add_definitions(-DUSE_MYMATH)
    include_directories("${PROJECT_SOURCE_DIR}/src")
    add_subdirectory(src)
    set(EXTRA_LIBS ${EXTRA_LIBS} MathFunctions)
endif()

# Configurar el archivo de configuración
configure_file(config.h.in config.h)
include_directories(${CMAKE_CURRENT_BINARY_DIR})

# Añadir el ejecutable del programa
add_executable(my_advanced_app src/main.cpp)
target_link_libraries(my_advanced_app ${EXTRA_LIBS})
