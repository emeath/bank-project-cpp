#pragma once

#include "Authenticable.hpp"

void showBalance(const Bank::Account& account);
void withdrawOnMain(Bank::Account& account);
void doAuthenticate(const Bank::Authenticable& user, std::string password);

void case1();
void case2();
void case3();
void case4();
void case5();
void case6();
void case7();