// Файл реализации функционала заголовочного класса
// BaseBankingCard.cpp
#include "BaseBankCard.h"
#include "CardGenerator.h"
#include <iostream>

BaseBankCard::BaseBankCard(std::string name) {
    ownerName = name;
    cardNumber = CardGenerator::generateCardNumber();
    cvcCode = CardGenerator::generateCVC();
    pinCode = "0000"; // Заглушка, можно генерировать
}

void BaseBankCard::showInfo() {
    std::cout << "Банковская карта | Владелец: " << ownerName
        << " | Номер: " << cardNumber
        << " | Баланс: " << deposit << "р." << std::endl;
}