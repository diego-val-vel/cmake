add_executable(MyExecutable main.cpp)

# Agregar directorios de inclusión
target_include_directories(MyExecutable PUBLIC 
    "${PROJECT_BINARY_DIR}" #folder donde se generan los binarios
    "../include"
)
