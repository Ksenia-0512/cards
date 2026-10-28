// Ticket.cpp
#include "Ticket.h"
#include <iostream>

Ticket::Ticket(std::string name, std::string org, float startDeposit) : BasePasskey(name, org) {
    deposit = startDeposit;
}

void Ticket::Pass() {
    if (deposit >= 75) {
        deposit -= 75;
        std::cout << "Проезд оплачен (списано 75). Остаток: " << deposit << std::endl;
    }
    else {
        std::cout << "Недостаточно средств на проездном!" << std::endl;
    }
}

void Ticket::showInfo() {
    std::cout << "Проездной Ticket | Владелец: " << ownerName << " | Баланс: " << deposit << "р." << std::endl;
}