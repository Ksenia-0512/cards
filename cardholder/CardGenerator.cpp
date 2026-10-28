#include "CardGenerator.h"
#include <cstdlib>
#include <ctime>

std::string CardGenerator::generateCardNumber() {
    std::string number = "";
    for (int i = 0; i < 16; ++i) {
        number += std::to_string(rand() % 10);
    }
    return number;
}

std::string CardGenerator::generateCVC() {
    std::string cvc = "";
    for (int i = 0; i < 3; ++i) {
        cvc += std::to_string(rand() % 10);
    }
    return cvc;
}