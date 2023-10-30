# Crear una biblioteca estática con el nombre MathLib.
add_library(MathLib STATIC src/mathlib.cpp)

# Especificar dónde están los archivos de encabezado para esta biblioteca.
target_include_directories(MathLib PUBLIC include)
