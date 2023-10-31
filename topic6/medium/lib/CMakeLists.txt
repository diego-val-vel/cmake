# Definir la librería y sus fuentes
add_library(lib MathFunctions.cpp MathFunctions.h)

# Especificar las propiedades de la librería
set_target_properties(lib PROPERTIES
    PUBLIC_HEADER "MathFunctions.h"
    VERSION 1.0
    SOVERSION 1
)

target_include_directories(lib PUBLIC
    $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}>
    $<INSTALL_INTERFACE:include>
)
