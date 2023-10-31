# Crear una biblioteca estática con AdvancedMathFunctions.cpp
add_library(AdvancedMathFunctions STATIC AdvancedMathFunctions.cpp)

# Crear un ejecutable para el archivo main.cpp
add_executable(MyAdvancedApp main.cpp)

# Vincular la biblioteca estática al ejecutable
target_link_libraries(MyAdvancedApp AdvancedMathFunctions)
