#include <iostream>
#include "operations.h"

int main() {
    double num1 = 10.0, num2 = 5.0;
    
    // Utiliza las funciones de operaciones para realizar cálculos y mostrar los resultados.
    std::cout << "Suma: " << add(num1, num2) << std::endl;
    std::cout << "Multiplicación: " << multiply(num1, num2) << std::endl;
    std::cout << "División: " << divide(num1, num2) << std::endl;
    std::cout << "Substraction: " << substract(num1, num2) << std::endl;

    return 0;
}
