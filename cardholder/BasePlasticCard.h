#pragma once
#include <string>


/// <summary>
/// Базовый класс для всех карт
/// </summary>

class BasePlasticCard
{
protected: // protected, чтобы наследники видели эти данные
    std::string cardNumber; // номер карты
    float deposit; // баланс


public:
    // Конструктор
        BasePlasticCard();
         virtual ~BasePlasticCard() {} // Виртуальный деструктор для правильного удаления

        // Чисто виртуальная функция (обязательна для наследников)
        virtual void showInfo() = 0;

        // Методы для работы с балансом
        void overchargeDeposit(float amount);
        virtual void payDeposit(float amount);

        float getDeposit() const { return deposit; }
        std::string getCardNumber() const { return cardNumber; }
};