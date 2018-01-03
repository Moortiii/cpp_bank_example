#include "customer.h"

Customer::Customer(const std::string &firstName, const std::string &lastName) : id(nextId++)
{
    this->firstName = firstName;
    this->lastName = lastName;
    this->pinCode = pinCodeGenerator();
}

int Customer::nextId = 1;
PinCodeGenerator Customer::pinCodeGenerator;