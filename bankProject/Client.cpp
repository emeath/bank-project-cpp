#include "Client.hpp"
#include <iostream>
#include <string>

Bank::Client::Client(std::string clientName, CPF cpf) : clientName(clientName), cpf(cpf)
{
	validateName();
}

Bank::Client::~Client()
{
}

std::string Bank::Client::getName()
{
	return this->clientName;
}
	
void Bank::Client::setName(std::string clientName)
{
	this->clientName = clientName;
}

Bank::CPF Bank::Client::getCpf()
{
	return this->cpf.getCPF();
}

void Bank::Client::validateName()
{
	if(this->clientName.size() < 3) {
		std::cout << this->clientName << " <- Client name is too short." << std::endl;
		exit(1); // means that there was an error
	}
}