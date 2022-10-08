#include <iostream>
#include <string>
#include <array>

#include "Account.hpp"
#include "SavingsAccount.hpp"
#include "CheckingAccount.hpp"
#include "Client.hpp"
#include "Employee.hpp"
#include "Examples.hpp"


void case1()
{
	Bank::Client client_1("Kiko Saitama", Bank::CPF("12312312312"));
	Bank::CheckingAccount account_1("123-45", client_1);
	account_1.deposit(12345.6);
	
	Bank::CheckingAccount account_2("098-76", Bank::Client("Naruto Uzumaki", Bank::CPF("25645645678")));
	account_2.deposit(123.3);
	
	Bank::CheckingAccount account_3("394-23", Bank::Client("Gohan Sakura",  Bank::CPF("32323212343")));
	account_3.deposit(3.40);
	
	Bank::CheckingAccount account_4("122-00", Bank::Client("Trunks Vegg",  Bank::CPF("12121212121")));
	account_4.deposit(333.33);
	
	std::cout << "First account: " << std::endl;
	account_1.printAccount();
	
	std::cout << "Second account: " << std::endl;
	account_2.printAccount();
	
	std::cout << "Third account: " << std::endl;
	account_3.printAccount();
	
	std::cout << "Forth account: " << std::endl;
	account_4.printAccount();
	
	std::cout << "Number of accounts created: " << Bank::Account::getNumberOfAccounts() << std::endl;
}

void case2()
{
	Bank::CheckingAccount account("122-00", Bank::Client("Trunks Vegg",  Bank::CPF("12121212121")));
	account.deposit(333.33);
	
	std::array<float, 3> amountsToWithdraw = {10000.30, -10000.30, 331.31};
	std::array<float, 3> amountsToDeposit = {-1000.3, 100.40, 400.32};
	
	//    Avoid reallocating variable to iterate on for loop. 
	// I wonder if this is a little performance gain...
	unsigned short int i = 0; 
	
	std::cout << "~~~ Updating the forth account - Withdraw ~~~" << std::endl;
	for(i = 0; i < amountsToWithdraw.size(); i++) {
		account.withdraw(amountsToWithdraw.at(i)); //.at() verifies boundries limits
		account.printAccount();
	}
		
	std::cout << "~~~ Updating the forth account - Deposit ~~~" << std::endl;
	for(i = 0; i < amountsToDeposit.size(); i++) {
		account.deposit(amountsToDeposit.at(i));
		account.printAccount();
	}
	
	std::cout << "Number of accounts created: " << Bank::Account::getNumberOfAccounts() << std::endl;
}

void case3()
{
	Bank::SavingsAccount sa_1("111-22", Bank::Client("Intel Core", Bank::CPF("12312312311")));
	sa_1.deposit(1000);
	//withdrawOnMain(sa_1);
	sa_1.withdraw(100);
	sa_1.printAccount();
}

void case4()
{
	Bank::CheckingAccount account_5("000-00", Bank::Client("iooo iooo",  Bank::CPF("42424242424")));
	
	Bank::Employee emp("test test", Bank::CPF("12312312312"), 1000.0);
	
	Bank::CheckingAccount account_6("122-00", Bank::Client("Inu Yasha",  Bank::CPF("12121212121")));
	account_6.deposit(1000);
	account_6.withdraw(100);
	account_6.printAccount();
}

void case5()
{
	Bank::SavingsAccount savingsAccount("212142", Bank::Client("Ryan Howard", Bank::CPF("12345678910")));
	Bank::CheckingAccount checkingAccount("424242", Bank::Client("Michael Scott", Bank::CPF("10987654321")));
	
	// Michael paycheck
	checkingAccount.deposit(10000);
	
	// Michael pays Ryan
	checkingAccount.transferMoney(savingsAccount, 3000);
	
	// Expected
	bool michaelBalanceResult = checkingAccount.getBalance() == 6850;
	bool ryanBalanceResult = savingsAccount.getBalance() == 3000;
}

void showBalance(const Bank::Account& account)
{
	std::cout << "balance=" << account.getBalance() << std::endl;
}

// POC
void withdrawOnMain(Bank::Account& account)
{
	account.withdraw(100);
}