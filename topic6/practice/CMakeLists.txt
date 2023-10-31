# Establecer la versión mínima requerida de CMake
cmake_minimum_required(VERSION 3.10)

# Definir el nombre del proyecto y el lenguaje utilizado
project(AdvancedInstallTestExample CXX)

# Establecer el estándar C++ requerido
set(CMAKE_CXX_STANDARD 11)

# Definir una opción para habilitar o deshabilitar la construcción de tests
option(BUILD_TESTS "Build the test suite" ON)

# Añadir el subdirectorio que contiene el código fuente
add_subdirectory(src)

# Si se ha habilitado la construcción de tests, añadir el subdirectorio de tests
if(BUILD_TESTS)
  enable_testing()
  add_subdirectory(tests)
endif()

# Especificar la regla de instalación para el ejecutable "main"
install(TARGETS main RUNTIME DESTINATION bin)
