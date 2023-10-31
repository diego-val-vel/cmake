cmake_minimum_required(VERSION 3.15)

# Define el proyecto y establece su versión
project(AdvancedProject VERSION 3.5.1 LANGUAGES CXX)

# Establece el estándar C++ y asegura que sea requerido
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# Habilita las pruebas unitarias en este proyecto
##agrega archivos de tests a subdirectorios
enable_testing()

# Añade un subdirectorio para configurar el archivo de encabezado
configure_file(config/ProjectConfig.h.in config/ProjectConfig.h @ONLY)

# Incluye directorios
message ("Binary dir is ${CMAKE_BINARY_DIR}")
include_directories(${CMAKE_BINARY_DIR}/config)
include_directories(lib)

# Añade subdirectorios
add_subdirectory(lib)
add_subdirectory(app)

# Permite organizar los objetivos en carpetas para IDEs
set_property(GLOBAL PROPERTY USE_FOLDERS ON)
