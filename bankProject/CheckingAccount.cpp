#include "CheckingAccount.hpp"

Bank::CheckingAccount::CheckingAccount(std::string number, Bank::Client client) : Bank::Account(number, client)
{
}

float Bank::CheckingAccount::getTaxAmount() const
{
	return 0.05;
}