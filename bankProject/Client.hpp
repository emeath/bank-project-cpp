#pragma once
#include <string>
#include "CPF.hpp"
#include "Person.hpp"

namespace Bank
{

class Client : public Person
{
public:
	Client(std::string clientName, CPF cpf);
	~Client();
	std::string getClientName();
};

}
