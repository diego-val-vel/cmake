# Crear un ejecutable para el archivo test_advanced_math_functions.cpp
add_executable(TestAdvancedMathFunctions test_advanced_math_functions.cpp)

# Vincular la biblioteca estática al ejecutable de prueba
target_link_libraries(TestAdvancedMathFunctions AdvancedMathFunctions)
