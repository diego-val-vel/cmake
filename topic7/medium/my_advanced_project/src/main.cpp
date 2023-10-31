#include <iostream>
#include "config.h"
#ifdef USE_ADVANCED_MATH
  #include "AdvancedMathFunctions.h"
#else
  #include <cmath>
#endif

int main() {
  const double inputValue = 25.0;
  double outputValue;

  #ifdef USE_ADVANCED_MATH
    outputValue = advanced_sqrt(inputValue);
    std::cout << "Using advanced math library." << std::endl;
  #else
    outputValue = std::sqrt(inputValue);
    std::cout << "Using standard library." << std::endl;
  #endif

  std::cout << "The square root of " << inputValue << " is " << outputValue << std::endl;
  return 0;
}
