#include "Person.hpp"

Bank::Person::Person(std::string personName, Bank::CPF cpf) : personName(personName), cpf(cpf)
{
	validateName();
}

Bank::Person::~Person()
{
}


void Bank::Person::validateName()
{
	if(this->personName.size() < 3) {
		std::cout << "Name " << this->personName << " length is too short!" << std::endl;
		exit(1);
	}
}