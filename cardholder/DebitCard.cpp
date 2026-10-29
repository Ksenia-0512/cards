// DebitCard.cpp
#include "DebitCard.h"
#include <iostream>

DebitCard::DebitCard(std::string name) : BaseBankingCard(name) {
    deposit = 10000.0f; // Начальный депозит по ТЗ
}

void DebitCard::payDeposit(float amount) {
    if (deposit - amount < 0) {
        std::cout << "Ошибка: Дебетовая карта не может уйти в минус!" << std::endl;
    }
    else {
        BasePlasticCard::payDeposit(amount); // Вызываем базовый метод
    }
};