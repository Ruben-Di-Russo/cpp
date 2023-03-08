#ifndef DATA_HPP
#define DATA_HPP

#include <string.h>
#include <iostream>
#include <cstdint>

struct Data
{
    std::string name;
    int age;
};


uintptr_t serialize(Data* ptr);
Data* deserialize(uintptr_t raw);
#endif