// AccessKey.cpp
#include "AccessKey.h"
#include <iostream>
#include <chrono>
#include <ctime>

AccessKey::AccessKey(std::string name, std::string org) : BasePassKey(name, org) {}

void AccessKey::Pass()
{
    auto time = std::chrono::system_clock::now(); // Фиксирует время
    std::time_t t = std::chrono::system_clock::to_time_t(time);
    std::cout << "Проход разрешен в: " << std::ctime(&t); // Выводит время
}

void AccessKey::showInfo() {
    std::cout << "Пропуск AccessKey | Владелец: " << ownerName << " | Орг: " << organization << std::endl;
};