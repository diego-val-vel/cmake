#include "operations.h"

double add(double a, double b) {
    return a + b;
}

double substract(double a, double b) {
    return a - b;
}

double multiply(double a, double b) {
    return a * b;
}

double divide(double a, double b) {
    if (b != 0.0) {
        return a / b;
    }
    return 0.0;  // Devuelve 0 si la división es por cero, podría mejorarse con manejo de errores.
}
