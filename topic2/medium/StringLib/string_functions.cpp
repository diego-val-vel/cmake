#include "string_functions.h"
#include <algorithm>
#include <cctype>

std::string to_upper(std::string input) {
    std::transform(input.begin(), input.end(), input.begin(), [](unsigned char c){ return std::toupper(c); });
    return input;
}

std::string to_lower(std::string input) {
    std::transform(input.begin(), input.end(), input.begin(), [](unsigned char c){ return std::tolower(c); });
    return input;
}
