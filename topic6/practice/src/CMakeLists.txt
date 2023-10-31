# Se crea una biblioteca estática con las funciones matemáticas
add_library(MathFunctions MathFunctions.cpp)

# Se crea un ejecutable a partir del código fuente y se vincula con la biblioteca MathFunctions
add_executable(main main.cpp)
target_link_libraries(main MathFunctions)
