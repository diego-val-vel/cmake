#include <iostream>
#include "AdvancedMathOperations.h"
#include "ProjectConfig.h"

int main() {
    std::cout << "Project Version: " << PROJECT_VERSION_MAJOR << "." << PROJECT_VERSION_MINOR << "." << PROJECT_VERSION_PATCH << std::endl;

    try {
        double result = add(5.5, 3.2);
        std::cout << "Addition: " << result << std::endl;

        result = subtract(10.1, 3.1);
        std::cout << "Subtraction: " << result << std::endl;

        result = multiply(4.5, 2.2);
        std::cout << "Multiplication: " << result << std::endl;

        result = divide(9.0, 3.0);
        std::cout << "Division: " << result << std::endl;

        result = power(2.0, 3.0);
        std::cout << "Power: " << result << std::endl;

    } catch (const std::runtime_error& e) {
        std::cerr << "Error: " << e.what() << std::endl;
    }

    return 0;
}
