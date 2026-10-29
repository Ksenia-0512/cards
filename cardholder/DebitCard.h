// DebitCard.h
#pragma once
#include "BaseBankingCard.h"

class DebitCard : public BaseBankingCard {
public:
    DebitCard(std::string name);
    // Переопределяем, чтобы запретить уходить в минус
    void payDeposit(float amount) override;
};
