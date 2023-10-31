# Se establece la versión mínima requerida de CMake
cmake_minimum_required(VERSION 3.10)

# Se define el nombre del proyecto y el lenguaje utilizado
project(InstallTestExample CXX)

# Se especifica el estándar C++ requerido
set(CMAKE_CXX_STANDARD 11)

# Se añade el subdirectorio que contiene el código fuente
add_subdirectory(src)

# Se añade el subdirectorio que contiene las pruebas
add_subdirectory(tests)

# Se habilitan las pruebas utilizando CTest
enable_testing()

# Se añade una prueba llamada "MainTest" que ejecutará el ejecutable "test_main"
add_test(NAME MainTest COMMAND test_main)

# Se especifica la regla de instalación para el ejecutable "main"
install(TARGETS main DESTINATION bin)
