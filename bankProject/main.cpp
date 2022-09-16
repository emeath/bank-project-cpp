#include <iostream>
#include <string>
#include <array>

#include "Account.hpp"

using namespace std;

int main(int argc, char **argv)
{
	Bank::Account account_1;
	account_1.setNumber("123-45");
	account_1.setCpf("123.123.123-12");
	account_1.setClientName("Kiko");
	account_1.deposit(12345.6);
	
	Bank::Account account_2;
	account_2.setNumber("098-76");
	account_2.setCpf("256.456.456-78");
	account_2.setClientName("Naruto");
	account_2.deposit(123.3);
	
	Bank::Account account_3;
	account_3.setNumber("394-23");
	account_3.setCpf("323.232.123-43");
	account_3.setClientName("Gohan");
	account_3.deposit(3.40);
	
	Bank::Account account_4;
	account_4.setNumber("122-00");
	account_4.setCpf("xxx.xxx.xxx-xx");
	account_4.setClientName("Trunks");
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
	
	
	return 0;
}
