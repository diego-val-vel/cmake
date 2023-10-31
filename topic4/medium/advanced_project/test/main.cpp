// test/main.cpp
#include <iostream>
#include "AdvancedMathOperations.h"

void test_addition() {
    double result = add(5.0, 3.0);
    if (result == 8.0) {
        std::cout << "Test Addition Passed\n";
    } else {
        std::cerr << "Test Addition Failed\n";
    }
}

// Puedes añadir más funciones de prueba aquí

int main() {
    std::cout << "Running Tests...\n";
    test_addition();
    // Llama a más funciones de prueba aquí
    std::cout << "Tests Completed\n";
    return 0;
}
