#include <iostream>

int main() {
#ifdef USE_FUNCTION
    std::cout << "La función está habilitada." << std::endl;
#else
    std::cout << "La función no está habilitada." << std::endl;
#endif
    return 0;
}
