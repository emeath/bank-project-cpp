#pragma once
#include <string>
#include "Client.hpp"

namespace Bank
{

class Account
{
private:
	std::string number;
	Bank::Client client;
	float balance;
	static int numberOfAccounts;

public:
	Account(std::string number, Bank::Client client);

	~Account();

	static int getNumberOfAccounts();

	void withdraw(float amount);
	void deposit(float amount);

	float getBalance() const;

	std::string getNumber();
	void setNumber(std::string number);

	void printAccount();
};

}
