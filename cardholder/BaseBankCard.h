// BaseBankCard.h
#pragma once
#include "BasePlasticCard.h"

class BaseBankCard : public BasePlasticCard {
protected:
    std::string ownerName;
    std::string pinCode;
    std::string cvcCode;

public:
    BaseBankCard(std::string name); // Конструктор

    // Переопределяем вывод информации
    void showInfo() override;

    // Виртуальная функция для обслуживания (понадобится для CreditCard)
    virtual void Service() {}
};