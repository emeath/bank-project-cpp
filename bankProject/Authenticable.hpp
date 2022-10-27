#pragma once

#include <string>

namespace Bank
{
    class Authenticable
    {
    private:
        std::string password;
    public:
        Authenticable(std::string password);
        bool authenticate(std::string password);
    };
}