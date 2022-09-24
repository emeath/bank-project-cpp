#pragma once

#include <string>
#include <iostream>
#include "CPF.hpp"

namespace Bank
{

class Person
{
private:
	Bank::CPF cpf;
	std::string personName;
public:
	Person(std::string personName, Bank::CPF cpf);
	~Person();
private:
	void validateName();
};

}
