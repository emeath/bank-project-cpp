#pragma once

#include "Employee.hpp"
#include "WeekDay.hpp"

namespace Bank
{
class Cashier : public Employee
{
    private:
        WeekDay weekDay;
    public:
        Cashier(std::string personName, Bank::CPF cpf, float salary, WeekDay weekDay);
        float bonus() const override;
        WeekDay getWeekDay() const;
};
}