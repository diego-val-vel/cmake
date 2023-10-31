#include <iostream>
#include "config.h"
#ifdef USE_MYMATH
  #include "MathFunctions.h"
#endif

int main() {
    const double inputValue = 4.0;
    double outputValue = 0.0;
    
    #ifdef USE_MYMATH
        outputValue = mysqrt(inputValue);
        std::cout << "Usando mi propia raíz cuadrada" << std::endl;
    #else
        outputValue = sqrt(inputValue);
        std::cout << "Usando la raíz cuadrada de la biblioteca estándar" << std::endl;
    #endif
    
    std::cout << "La raíz cuadrada de " << inputValue << " es " << outputValue << std::endl;
    return 0;
}
