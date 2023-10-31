#include "MathOperations.h"
#include <cmath>

//namespace MathOperations {
    double MathOperations::add(double a, double b) {
        return a + b;
    }

    double subtract(double a, double b) {
        return a - b;
    }

    double multiply(double a, double b) {
        return a * b;
    }

    double divide(double a, double b) {
        if (b != 0) {
            return a / b;
        }
        else {
            throw std::runtime_error("Division by zero");
        }
    }

    double power(double base, double exponent) {
        return std::pow(base, exponent);
    }
//}