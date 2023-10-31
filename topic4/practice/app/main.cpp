#include <iostream>
#include "AdvancedMathOperations.h"
#include "ProjectConfig.h"

int main() {
    std::cout << "Version: " << PROJECT_VERSION_MAJOR << "." << PROJECT_VERSION_MINOR << std::endl;
    std::cout << "Suma: " << add(5, 3) << std::endl;
    return 0;
}
