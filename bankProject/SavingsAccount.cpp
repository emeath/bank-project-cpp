#include "SavingsAccount.hpp"

Bank::SavingsAccount::SavingsAccount(std::string number, Bank::Client client) : Bank::Account(number, client)
{
}

void Bank::SavingsAccount::withdraw(float amount) 
{
	float withdrawTax = amount * 0.015;
	amount = amount + withdrawTax;
	
	if(balance < amount) {
		std::cout << "Insuficcient balance to withdraw." << std::endl;
		return;
	}

	if(amount < 0) {
		std::cout << "Withdraw amount should be positive." << std::endl;
		return;
	}

	balance = balance - amount;
}