# Definir el ejecutable de prueba y sus fuentes
add_executable(main_test main_test.cpp)

# Vincular la librería con el ejecutable de prueba
target_link_libraries(main_test PRIVATE lib)

# Añadir las pruebas al sistema de pruebas
add_test(NAME MainTest COMMAND main_test)
