#include "Manager.hpp"

Bank::Manager::Manager(std::string personName, Bank::CPF cpf, float salary, std::string password) 
    : Employee(personName, cpf, salary),
      Authenticable(password)
{
}

float Bank::Manager::bonus() const
{
    return 1.50 * this->getSalary();
}