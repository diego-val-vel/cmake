#include <iostream>
#include <cassert>
#include "MathFunctions.h"

int main() {
    // Realizar una prueba: verificar si el cuadrado de 3 es 9
    assert(square(3) == 9);
    std::cout << "Test passed!" << std::endl;
    return 0;
}
