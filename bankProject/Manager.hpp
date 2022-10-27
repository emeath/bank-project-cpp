#pragma once

#include "Employee.hpp"
#include "Authenticable.hpp"

namespace Bank
{
    class Manager : public Employee, public Authenticable
    {
    public:
        Manager(std::string personName, Bank::CPF cpf, float salary, std::string password);
        float bonus() const override;
    };
}