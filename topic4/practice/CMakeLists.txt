cmake_minimum_required(VERSION 3.15)

project(IntermediateProject VERSION 1.0 LANGUAGES CXX)

# Estándar C++17
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# Definir variables para la configuración del proyecto
set(PROJECT_VERSION_MAJOR 1)
set(PROJECT_VERSION_MINOR 0)

# Añadir subdirectorios
add_subdirectory(lib)
add_subdirectory(app)

# Configurar el archivo de configuración
configure_file(config/ProjectConfig.h.in ${CMAKE_BINARY_DIR}/generated/ProjectConfig.h)
