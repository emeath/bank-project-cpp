#pragma once
#include <string>

namespace Bank
{

class CPF
{
private:
	std::string cpf;
	void validateCPF();

public:
	CPF(std::string cpf);
	~CPF();
	std::string getCPF();

};

}
