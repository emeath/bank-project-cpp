#pragma once

#include "Account.hpp" // Base class: Bank::Account

namespace Bank
{

class CheckingAccount final : public Bank::Account
{
public:
	CheckingAccount(std::string number, Bank::Client client);
	float getTaxAmount() const override;
	void transferMoney(Account& destiny, float amount);
};

}

