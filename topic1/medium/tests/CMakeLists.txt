# Añadir un ejecutable para pruebas.
add_executable(MathLibTests test_main.cpp)

# Vincular la librería MathLib al ejecutable de prueba.
target_link_libraries(MathLibTests PUBLIC MathLib)
