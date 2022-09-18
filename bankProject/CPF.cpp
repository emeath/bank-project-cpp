#include "CPF.hpp"
#include <iostream>

Bank::CPF::CPF(std::string cpf) : cpf(cpf)
{
	validateCPF();
}

Bank::CPF::~CPF()
{
}

void Bank::CPF::validateCPF()
{
	for(char c : this->cpf) {
		if(!isdigit(c)) {
			std::cout << this->cpf << " cpf must contain only digits!" << std::endl;
			exit(1);
		}
	}
	
	if (this->cpf.size() != 11) {
		std::cout << this->cpf << " cpf size invalid!" << std::endl;
		exit(1);
	}
	
}

std::string Bank::CPF::getCPF()
{
	return this->cpf;
}

