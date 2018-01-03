#include <algorithm>
#include <ctime>
#include <functional>
#include <random>
#include <iostream>

int main() {
    std::string pinCode = "0000000";
    std::default_random_engine generator;
    std::uniform_int_distribution<int> distribution('0', '5');

    std::generate(pinCode.begin(), pinCode.end(), std::bind(distribution, generator));
    std::cout << pinCode << std::endl;
    return 0;
}