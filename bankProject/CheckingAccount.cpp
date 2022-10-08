#include "CheckingAccount.hpp"

Bank::CheckingAccount::CheckingAccount(std::string number, Bank::Client client) : Bank::Account(number, client)
{
}

Bank::CheckingAccount::~CheckingAccount()
{
	std::cout << "Destructing CheckingAccount instance!" << std::endl;
}

float Bank::CheckingAccount::getTaxAmount() const
{
	return 0.05;
}

void Bank::CheckingAccount::transferMoney(Account& destiny, float amount)
{
	this->withdraw(amount);
	destiny.deposit(amount);
}