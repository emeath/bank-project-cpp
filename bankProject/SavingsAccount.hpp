#pragma once

#include "Account.hpp" // Base class: Bank::Account

namespace Bank
{

class SavingsAccount : public Bank::Account
{
public:
	SavingsAccount(std::string number, Bank::Client client);
	~SavingsAccount();
	
	float getTaxAmount() const override;
	
	void withdraw(float amount);
};

}

