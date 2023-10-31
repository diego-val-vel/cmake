# Definir la versión mínima requerida de CMake
cmake_minimum_required(VERSION 3.15)

# Definir el nombre del proyecto y la versión
project(MyAdvancedProject VERSION 1.0.1 DESCRIPTION "A complex project example" LANGUAGES CXX)

# Especificar el estándar C++ requerido
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED True)
set(CMAKE_CXX_EXTENSIONS OFF)

# Configurar las opciones del compilador
add_compile_options("$<$<CXX_COMPILER_ID:MSVC>:/W4>" "$<$<CXX_COMPILER_ID:MSVC>:/permissive->")

# Configurar las definiciones de compilación
option(USE_ADVANCED_MATH "Use the advanced math library" ON)
if(USE_ADVANCED_MATH)
  add_compile_definitions(USE_ADVANCED_MATH)
endif()

# Configurar el archivo de configuración
configure_file(config.h.in config.h)

# Añadir la ruta de inclusión para que src/ sea visible para todos los subdirectorios
include_directories(${CMAKE_CURRENT_BINARY_DIR} ${CMAKE_CURRENT_SOURCE_DIR}/src)

# Añadir los directorios de los subproyectos
add_subdirectory(src)
add_subdirectory(tests)

# Añadir los tests
include(CTest)
enable_testing()
add_test(NAME AdvancedMathFunctionsTest COMMAND TestAdvancedMathFunctions)
