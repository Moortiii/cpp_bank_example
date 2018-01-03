#ifndef BANK_PIN_CODE_GENERATOR_H
#define BANK_PIN_CODE_GENERATOR_H

#include <algorithm>
#include <string>
#include <random>
#include <ctime>
#include <functional>

class PinCodeGenerator
{
public:
    PinCodeGenerator() : generator(time(NULL)), distribution('0','9')
    {}

    std::string operator()()
    {
        std::string pinCode = "0000";
        std::generate (pinCode.begin(), pinCode.end(), std::bind(distribution, std::ref(generator)));
        return pinCode;
    }

protected:
    std::default_random_engine generator;
    std::uniform_int_distribution<int> distribution;
};

#endif //BANK_PIN_CODE_GENERATOR_H
