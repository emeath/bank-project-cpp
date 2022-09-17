#include <iostream>
#include <string>
#include <array>

#include "Account.hpp"

using namespace std;

void showBalance(const Bank::Account& account)
{
	cout << "balance=" << account.getBalance() << endl;
}

int main(int argc, char **argv)
{
	Bank::Account account_1("123-45", "123.123.123-12", "Kiko");
	account_1.deposit(12345.6);
	
	Bank::Account account_2("098-76", "256.456.456-78", "Naruto");
	account_2.deposit(123.3);
	
	Bank::Account account_3("394-23", "323.232.123-43", "Gohan");
	account_3.deposit(3.40);
	
	Bank::Account account_4("122-00", "xxx.xxx.xxx-xx", "Trunks");
	account_4.deposit(333.33);
	
	cout << "First account: " << endl;
	account_1.printAccount();
	
	cout << "Second account: " << endl;
	account_2.printAccount();
	
	cout << "Third account: " << endl;
	account_3.printAccount();
	
	cout << "Forth account: " << endl;
	account_4.printAccount();
	
	std::array<float, 3> amountsToWithdraw = {10000.30, -10000.30, 331.31};
	std::array<float, 3> amountsToDeposit = {-1000.3, 100.40, 400.32};
	
	//    Avoid reallocating variable to iterate on for loop. 
	// I wonder if this is a little performance gain...
	unsigned short int i = 0; 
	
	cout << "~~~ Updating the forth account - Withdraw ~~~" << endl;
	for(i = 0; i < amountsToWithdraw.size(); i++) {
		account_4.withdraw(amountsToWithdraw.at(i)); //.at() verifies boundries limits
		account_4.printAccount();
	}
		
	cout << "~~~ Updating the forth account - Deposit ~~~" << endl;
	for(i = 0; i < amountsToDeposit.size(); i++) {
		account_4.deposit(amountsToDeposit.at(i));
		account_4.printAccount();
	}
	
	cout << endl;
	cout << "Number of accounts created: " << Bank::Account::getNumberOfAccounts() << endl;
	
	Bank::Account account_5("000-00", "424.242.424-24", "io");
	
	return 0;
}
