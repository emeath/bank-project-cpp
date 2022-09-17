#include "Account.hpp"
#include <iostream>

namespace Bank
{
int Account::numberOfAccounts = 0;
	
Account::Account(std::string number, std::string cpf, std::string clientName)
 : number(number),
	cpf(cpf),
	clientName(clientName),
	balance(0)
{
	validateClientNameSize();
	numberOfAccounts++;
}

Account::~Account()
{
	numberOfAccounts--;
}

int Account::getNumberOfAccounts()
{
	return numberOfAccounts;
}
	
void Account::withdraw(float amount)
{
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

std::string Account::getCpf()
{
	return cpf;
}

void Account::setCpf(std::string cpf)
{
	this->cpf = cpf;
}

std::string Account::getClientName()
{
	return clientName;
}

void Account::setClientName(std::string clientName)
{
	this->clientName = clientName;
}

void Account::printAccount()
{
	std::cout << "Account info: " << std::endl;
	std::cout << "Account number: " << this->number << std::endl;
	std::cout << "Account client name: " << this->clientName << std::endl;
	std::cout << "Account cpf: " << this->cpf << std::endl;
	std::cout << "Account balance: " << this->balance << std::endl;
	std::cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << std::endl;
}

void Account::validateClientNameSize()
{
	if(clientName.size() < 3) {
		std::cout << clientName << " <- Client name size is too short." << std::endl;
		exit(1); // means that there was an error
	}
}

}
