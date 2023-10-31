# Configuración de la versión mínima de CMake
cmake_minimum_required(VERSION 3.15)

# Definición del proyecto
project(AdvancedExample)

# Especificar el estándar C++ a utilizar
set(CMAKE_CXX_STANDARD 17)

# Habilitar pruebas con CTest
include(CTest)

# Añadir los subdirectorios para cada componente del proyecto
add_subdirectory(app)
add_subdirectory(lib)
add_subdirectory(tests)

# Especificar reglas de instalación
install(TARGETS app lib
  RUNTIME DESTINATION bin
  LIBRARY DESTINATION lib
  ARCHIVE DESTINATION lib/static
)

# Incluir CPack para generar paquetes de instalación
include(CPack)
