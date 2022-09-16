#pragma once
#include <string>

namespace Bank
{
class Account
{
private:
	std::string number;
	std::string cpf;
	std::string clientName;
	float balance = 0;

public:
	void withdraw(float amount);
	void deposit(float amount);

	float getBalance();

	std::string getNumber();
	void setNumber(std::string number);

	std::string getCpf();
	void setCpf(std::string cpf);

	std::string getClientName();
	void setClientName(std::string clientName);

	void printAccount();
};
}
