#ifndef BANK_BANK_H
#define BANK_BANK_H

#include "collection.h"
#include "customer.h"
#include "account.h"
#include <string>

class Bank {
public:
    Bank(const std::string& name);
    std::string name;
    Collection<Customer> customers;
    Collection<Account> accounts;
    const int id;

protected:
    static int nextId;
};


#endif //BANK_BANK_H
