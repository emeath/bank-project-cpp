#pragma once
#include <string>

namespace Bank
{

class Client
{
private:
	std::string clientName;
	std::string cpf;

public:
	Client(std::string clientName, std::string cpf);
	~Client();

	std::string getName();
	void setName(std::string clientName);

	std::string getCpf();
	void setCpf(std::string cpf);

private:
	void validateName();

};

}
