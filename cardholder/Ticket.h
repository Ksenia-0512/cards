// Ticket.h
#pragma once
#include "BasePasskey.h"

class Ticket : public BasePasskey {
protected:
    float deposit;
public:
    Ticket(std::string name, std::string org, float startDeposit);
    void Pass() override; // Списание 75
    void showInfo() override;
};