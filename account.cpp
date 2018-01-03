#include "account.h"

Account::Account(const std::string &name) : id(nextId++)
{
    this->name = name;
}

int Account::nextId = 1;