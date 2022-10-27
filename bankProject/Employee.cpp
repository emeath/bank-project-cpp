#include "Employee.hpp"

Bank::Employee::Employee(std::string personName, Bank::CPF cpf, float salary) 
		: Bank::Person(personName, cpf), salary(salary)
{
}

Bank::Employee::~Employee()
{
}

float Bank::Employee::getSalary() const
{
    return this->salary;
}