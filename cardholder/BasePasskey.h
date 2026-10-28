// BasePasskey.h
#pragma once
#include <string>

class BasePasskey {
protected:
	std::string id;
	std::string ownerName;
	std::string organization;

public:
	BasePasskey(std::string name, std::string org);
	virtual ~BasePasskey() {}

	virtual void Pass() = 0; // Виртуальная функция прохода
	virtual void showInfo() = 0;
};