#pragma once
#include <string>
class CardGenerator {
public:
	static std::string generateCardNumber(); //16чисел
	static std::string generateCVC(); //3числа
};