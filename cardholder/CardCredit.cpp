// CreditCard.cpp
#include "CardCredit.h"
#include <iostream>

CardCredit::CardCredit(std::string name) : BaseBankCard(name) {
    deposit = 100000.0f; // Начальный депозит по ТЗ
}

void CardCredit::Service() {
    float fee = deposit * 0.01f; // 1% от баланса
    deposit -= fee;
    std::cout << "Списано за обслуживание: " << fee << "р. Остаток: " << deposit << std::endl;
}