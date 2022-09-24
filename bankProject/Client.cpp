#include "Client.hpp"
#include <iostream>
#include <string>

Bank::Client::Client(std::string clientName, CPF cpf) : Bank::Person(clientName, cpf)
{
}

Bank::Client::~Client()
{
}
