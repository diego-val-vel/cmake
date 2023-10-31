cmake_minimum_required(VERSION 3.15)
project(UseLibraryExample)

# Especifica el estándar C++17
set(CMAKE_CXX_STANDARD 17)

# Añade el subdirectorio de la biblioteca
add_subdirectory(mylibrary)

# Añade un ejecutable al proyecto
add_executable(main_app main.cpp)

# Vincula la biblioteca al ejecutable
target_link_libraries(main_app mylibrary)
