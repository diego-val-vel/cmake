# Se vincula el ejecutable de las pruebas con la biblioteca MathFunctions
add_executable(test_main test_main.cpp)
target_link_libraries(test_main MathFunctions)
# Añadir el directorio de encabezados
target_include_directories(test_main PRIVATE ${CMAKE_CURRENT_SOURCE_DIR}/../src)
