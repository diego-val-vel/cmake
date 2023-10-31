#include <iostream>
#include "mylibrary/math_functions.h"

int main() {
    int result = mylibrary::add(5, 3);
    std::cout << "Result: " << result << std::endl;
    return 0;
}
