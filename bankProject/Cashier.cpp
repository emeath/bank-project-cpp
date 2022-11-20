#include "Cashier.hpp"



Bank::Cashier::Cashier(std::string personName, Bank::CPF cpf, float salary, WeekDay weekDay)
 : Employee(personName, cpf, salary),
   weekDay(weekDay)
{
}

float Bank::Cashier::bonus() const
{
    return 0.1 * getSalary();
}

WeekDay Bank::Cashier::getWeekDay() const
{
    return this->weekDay;
}