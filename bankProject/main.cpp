#include <iostream>
#include <string>
#include <array>

#include "Account.hpp"
#include "Client.hpp"
#include "Employee.hpp"

using namespace std;

void showBalance(const Bank::Account& account)
{
	cout << "balance=" << account.getBalance() << endl;
}

int main(int argc, char **argv)
{
	Bank::Client client_1("Kiko", Bank::CPF("12312312312"));
	Bank::Account account_1("123-45", client_1);
	account_1.deposit(12345.6);
	
	Bank::Account account_2("098-76", Bank::Client("Naruto", Bank::CPF("25645645678")));
	account_2.deposit(123.3);
	
	Bank::Account account_3("394-23", Bank::Client("Gohan",  Bank::CPF("32323212343")));
	account_3.deposit(3.40);
	
	Bank::Account account_4("122-00", Bank::Client("Trunks",  Bank::CPF("12121212121")));
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
	
	Bank::Account account_5("000-00", Bank::Client("io",  Bank::CPF("42424242424")));
	
	Bank::Employee emp("test test", Bank::CPF("12312312312"), 1000.0);
	
	return 0;
}
