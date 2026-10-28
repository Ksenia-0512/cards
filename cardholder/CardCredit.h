// CreditCard.h
#pragma once
#include "BaseBankCard.h"

class CardCredit : public BaseBankCard {
public:
    CardCredit(std::string name);
    void Service() override; // Снятие процента за обслуживание
};