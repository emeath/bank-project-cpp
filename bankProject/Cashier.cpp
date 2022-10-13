#include "Cashier.hpp"



Bank::Cashier::Cashier(std::string personName, Bank::CPF cpf, float salary) : Employee(personName, cpf, salary)
{
}

float Bank::Cashier::bonus() const
{
    return 0.1 * getSalary();
}