#pragma once

#include "Employee.hpp"

namespace Bank
{
    class Manager : public Employee
    {
        Manager(std::string personName, Bank::CPF cpf, float salary);
        float bonus() const override;
    };
}