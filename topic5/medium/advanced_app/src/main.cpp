#include <iostream>
#include "math_utils/math_operations.h"
#include "string_utils/string_operations.h"

int main() {
    std::cout << "Square root of 16: " << math_utils::squareRoot(16) << std::endl;
    std::cout << "Concatenate strings: " << string_utils::concatenate("Hello, ", "World!") << std::endl;
    return 0;
}
