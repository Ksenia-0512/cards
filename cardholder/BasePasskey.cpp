// BasePasskey.cpp
#include "BasePasskey.h"
#include <iostream>

BasePasskey::BasePasskey(std::string name, std::string org) {
	ownerName = name;
	organization = org;
	// Генерируем простой ID (можно тоже через рандом, но пока так)
	id = "ID-" + std::to_string(rand() % 9000 + 1000);
}