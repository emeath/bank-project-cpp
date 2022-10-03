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

	static int numberOfAccounts;

protected:
	float balance;

public:
	Account(std::string number, Bank::Client client);

	virtual ~Account();

	static int getNumberOfAccounts();

	virtual float getTaxAmount() const;

	void withdraw(float amount);
	void deposit(float amount);

	float getBalance() const;

	std::string getNumber();
	void setNumber(std::string number);

	void printAccount();
};

}
