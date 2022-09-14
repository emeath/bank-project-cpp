#include <iostream>
#include <string>
#include <array>

#include "printAccount.hpp"
#include "accountStruct.hpp"

using namespace std;

extern struct Account sA;

void withdraw(Account& account, float amount) 
{
	if(account.balance < amount) {
		cout << "Insuficcient balance to withdraw." << endl;
		return;
	}
	
	if(amount < 0) {
		cout << "Withdraw amount should be positive." << endl;
		return;
	}
	
	account.balance = account.balance - amount;
}

void deposit(Account& account, float amount)
{
	if(amount < 0) {
		cout << "Deposit amount should be positive." << endl;
		return;
	}
	
	account.balance += amount;
}

int main(int argc, char **argv)
{
	string accountNumber = "123-45";
	string cpf = "123.123.123-12";
	string clientName = "Kiko";
	float balance = 12345.6;
	
	string accountNumber2 = "098-76";
	string cpf2 = "256.456.456-78";
	string clientName2 = "Naruto";
	float balance2 = 123.3;
	
	string accountNumber3 = "394-23";
	string cpf3 = "323.232.123-43";
	string clientName3 = "Gohan";
	float balance3 = 3.40;
	
	Account account;
	account.accountNumber = "122-00";
	account.cpf = "xxx.xxx.xxx-xx";
	account.clientName = "Trunks";
	account.balance = 333.33;
	
	cout << "First account: " << endl;
	Bank::printAccount(accountNumber, cpf, clientName, balance);
	
	cout << "Second account: " << endl;
	Bank::printAccount(accountNumber2, cpf2, clientName2, balance2);
	
	cout << "Third account: " << endl;
	Bank::printAccount(accountNumber3, cpf3, clientName3, balance3);
	
	cout << "Forth account: " << endl;
	Bank::printAccount(account);
	
	std::array<float, 3> amountsToWithdraw = {10000.30, -10000.30, 331.31};
	std::array<float, 3> amountsToDeposit = {-1000.3, 100.40, 400.32};
	
	//    Avoid reallocating variable to iterate on for loop. 
	// I wonder if this is a little performance gain...
	unsigned short int i = 0; 
	
	cout << "~~~ Updating the forth account - Withdraw ~~~" << endl;
	for(i = 0; i < amountsToWithdraw.size(); i++) {
		withdraw(account, amountsToWithdraw.at(i)); //.at() verifies boundries limits
		Bank::printAccount(account);
	}
		
	cout << "~~~ Updating the forth account - Deposit ~~~" << endl;
	for(i = 0; i < amountsToDeposit.size(); i++) {
		deposit(account, amountsToDeposit.at(i));
		Bank::printAccount(account);
	}
	
	
	return 0;
}
