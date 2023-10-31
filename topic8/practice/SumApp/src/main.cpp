#include <iostream>
#include <fstream>
#include "sum.h"
#include "config.h"

int main() {
    #ifdef PRINT_RESULT
    std::cout << "Resultado: " << sum(1, 2) << std::endl;
    #else
    std::ofstream outfile("result.txt");
    outfile << "Resultado: " << sum(1, 2);
    outfile.close();
    #endif
    return 0;
}
