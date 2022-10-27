#include "Authenticable.hpp"

Bank::Authenticable::Authenticable(std::string password) : password(password)
{
}

bool Bank::Authenticable::authenticate(std::string password)
{
    return password == this->password;
}