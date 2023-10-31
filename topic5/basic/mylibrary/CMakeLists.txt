# mylibrary/CMakeLists.txt
add_library(mylibrary
    src/math_functions.cpp
)

target_include_directories(mylibrary PUBLIC include)
