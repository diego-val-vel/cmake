#include <iostream>
#include "AdvancedMathFunctions.h"

int main() {
  if (advanced_sqrt(25.0) != 5.0) {
    std::cerr << "Test failed!" << std::endl;
    return 1;
  }
  std::cout << "Test passed!" << std::endl;
  return 0;
}
