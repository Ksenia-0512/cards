// AccessKey.h
#pragma once
#include "BasePassKey.h"

class AccessKey : public BasePassKey {
public:
    AccessKey(std::string name, std::string org);
    void Pass() override; // Фиксация времени
    void showInfo() override;
};