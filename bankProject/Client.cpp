#include "Client.hpp"
#include <iostream>
#include <string>
#include <vector>
#include <cstring>

Bank::Client::Client(std::string clientName, CPF cpf) : Bank::Person(clientName, cpf)
{
}

Bank::Client::~Client()
{
}

std::string Bank::Client::getClientName() 
{
	std::string fullClientName = this->getName();
	std::string delimiter = " ";
	std::string processingClientName = fullClientName;
	
	size_t position = 0;
	
	while((position = processingClientName.find(delimiter, 0)) != std::string::npos) {
		processingClientName = processingClientName.substr(position + delimiter.length());
	}
	
	std::string lastName = processingClientName;
	
	return "Mr./Mrs., " + lastName;
}
