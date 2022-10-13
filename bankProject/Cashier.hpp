#pragma once

#include "Employee.hpp"

namespace Bank
{
class Cashier : public Employee
{
    Cashier(std::string personName, Bank::CPF cpf, float salary);
    float bonus() const override;
}
}