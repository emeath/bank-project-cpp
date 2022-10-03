#include "Account.hpp"
#include <iostream>
#include "Client.hpp"

namespace Bank
{
int Account::numberOfAccounts = 0;
	
Account::Account(std::string number, Bank::Client client)
 : number(number),
	client(client),
	balance(0)
{
	numberOfAccounts++;
}

Account::~Account()
{
	std::cout << "Destructing Account instance!" << std::endl;
	numberOfAccounts--;
}

int Account::getNumberOfAccounts()
{
	return numberOfAccounts;
}
	
void Account::withdraw(float amount)
{
	float withdrawTax = amount * 0.05;
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

void Account::deposit(float amount)
{
	if(amount < 0) {
		std::cout << "Deposit amount should be positive." << std::endl;
		return;
	}

	balance += amount;
}

float Account::getBalance() const
{
	return balance;
}

std::string Account::getNumber()
{
	return number;
}

void Account::setNumber(std::string number)
{
	this->number = number;
}

void Account::printAccount()
{
	std::cout << "Account info: " << std::endl;
	std::cout << "Account number: " << this->number << std::endl;
	std::cout << "Account client name: " << this->client.getClientName() << std::endl;
	std::cout << "Account cpf: " << this->client.getCPF().getCPF() << std::endl;
	std::cout << "Account balance: " << this->balance << std::endl;
	std::cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << std::endl;
}

}
