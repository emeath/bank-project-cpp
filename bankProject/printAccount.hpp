#pragma once
#include <string>
#include <iostream>

#include "accountStruct.hpp"

extern struct Account sA;

namespace Bank {
	void printAccount(const std::string& accountNumber, 
					  const std::string& cpf, 
					  const std::string& clientName, 
					  const float& balance);
					  
	void printAccount(const Account& account);
}