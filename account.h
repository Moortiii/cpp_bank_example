#ifndef BANK_ACCOUNT_H
#define BANK_ACCOUNT_H

#include <string>

class Account {
public:
    Account(const std::string& name);
    std::string name;
    std::string bban;
    const int id;

protected:
    static int nextId;
};


#endif //BANK_ACCOUNT_H
