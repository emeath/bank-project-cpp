#include <printAccount.hpp>

namespace Bank {
	
	void printAccount(const std::string& accountNumber, 
					  const std::string& cpf, 
					  const std::string& clientName, 
					  const float& balance)
	{
		std::cout << "Account number: " 	<< accountNumber 	<< std::endl;
		std::cout << "CPF: " 				<< cpf 				<< std::endl;
		std::cout << "Client name: " 		<< clientName 		<< std::endl;
		std::cout << "Account balance: " 	<< balance			<< std::endl;
		std::cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" 		<< std::endl;
	}
	
}
