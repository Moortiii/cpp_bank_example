#ifndef BANK_CUSTOMER_H
#define BANK_CUSTOMER_H

#include <string>
#include "pin_code_generator.h"

class Customer {
public:
    Customer(const std::string& firstName, const std::string& lastName);
    std::string firstName;
    std::string lastName;
    const int id;

protected:
    static int nextId;
    static PinCodeGenerator pinCodeGenerator;

    std::string pinCode;
};

#endif //BANK_CUSTOMER_H
