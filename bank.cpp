#include "bank.h"

Bank::Bank(const std::string &name) : id(nextId++)
{
    this->name = name;
}

int Bank::nextId = 1;