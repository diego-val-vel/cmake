#include <iostream>
#include "math_functions.h"
#include "string_functions.h"

int main() {
    std::cout << "Sum of 5 and 7 is: " << add(5, 7) << std::endl;
    std::cout << "Difference of 5 and 7 is: " << subtract(5, 7) << std::endl;
    std::cout << "Product of 5 and 7 is: " << multiply(5, 7) << std::endl;
    std::cout << "Upper case of 'hello' is: " << to_upper("hello") << std::endl;
    std::cout << "Lower case of 'WORLD' is: " << to_lower("WORLD") << std::endl;
    return 0;
}
