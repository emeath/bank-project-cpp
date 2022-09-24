#pragma once

#include "Person.hpp"

namespace Bank
{

class Employee : public Bank::Person
{
private:
	float salary;
public:
	Employee(std::string personName, Bank::CPF cpf, float salary);
	~Employee();

};

}
