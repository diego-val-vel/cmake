# Definir el ejecutable y sus fuentes
add_executable(app main.cpp)

# Vincular la librería con el ejecutable
target_link_libraries(app PRIVATE lib)
