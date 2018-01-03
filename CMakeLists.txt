cmake_minimum_required(VERSION 3.9)
project(bank)

set(CMAKE_CXX_FLAGS "-Wall -pedantic")
set(CMAKE_CXX_STANDARD 11)

add_executable(bank main.cpp customer.cpp customer.h account.cpp account.h pin_code_generator.h collection.h bank.cpp bank.h)