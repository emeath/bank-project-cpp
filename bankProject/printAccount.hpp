#pragma once
#include <string>
#include <iostream>

namespace Bank {
	void printAccount(const std::string& accountNumber, 
					  const std::string& cpf, 
					  const std::string& clientName, 
					  const float& balance);
}