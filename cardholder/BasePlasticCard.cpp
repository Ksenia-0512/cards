// Файл реализации функционала заголовочного класса
#include "BasePlasticCard.h"
#include <iostream>
#include <string>
#include <random>


BasePlasticCard::BasePlasticCard() {
    deposit = 0.0f;
}

// Зачисление на депозит
void BasePlasticCard::overchargeDeposit(float amount) {

    deposit += amount;
    std::cout << "На счет зачислено: " << amount << ". Текущий баланс: " << deposit << std::endl;
        
}

// Покупка с депозита
void BasePlasticCard::payDeposit(float amount) {


    if (deposit >= amount) {
        deposit -= amount;
        std::cout << "Списано: " << amount << ". Остаток: " << deposit << std::endl;
    }
    else {
        std::cout << "Недостаточно средств! Текущий баланс: " << deposit << std::endl;
    }


};