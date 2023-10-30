#include <iostream>
#include "mathlib.h"

void factorize(int num) {
    // Factorización simple (se puede optimizar más para niveles avanzados).
    for (int i = 2; num > 1; i++) {
        while (num % i == 0) {
            std::cout << i << " ";
            num /= i;
        }
    }
    std::cout << std::endl;
}
