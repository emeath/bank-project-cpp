#include "Manager.hpp"

Bank::Manager::Manager(std::string personName, Bank::CPF cpf, float salary) 
    : Employee(personName, cpf, salary)
{
}

float Bank::Manager::bonus() const
{
    return 0.50 * this->getSalary();
}