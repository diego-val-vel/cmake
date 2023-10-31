Formas de compilacion en Windows

# 1. Desde Visual Studio 2023 usando la línea de comando:
-- cd cmake/topic#/{basic|medium|practice}
mkdir build && cd build
cmake ..
cmake --build . --config Debug
BasicExample.exe

# 2. Desde un Developer Command Prompt for VS (Visual Studio 2023)
-- cd cmake/topic#/{basic|medium|practice}
cmake -S . -B build
cmake --build build --config Release
.\build\Release\main_app.exe
