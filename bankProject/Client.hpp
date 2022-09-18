#pragma once
#include <string>
#include "CPF.hpp"

namespace Bank
{

class Client
{
private:
	std::string clientName;
	CPF cpf;

public:
	Client(std::string clientName, CPF cpf);
	~Client();

	std::string getName();
	void setName(std::string clientName);

	CPF getCpf();

private:
	void validateName();

};

}
