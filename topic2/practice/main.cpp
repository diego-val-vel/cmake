#include <iostream>
#include "calculator.h"

int main() {
    Calculator calc;
    std::cout << "Suma: " << calc.add(5, 3) << std::endl;
    std::cout << "Resta: " << calc.subtract(5, 3) << std::endl;
    return 0;
}
