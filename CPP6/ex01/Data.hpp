#ifndef DATA_HPP
#define DATA_HPP

#include <string.h>
#include <iostream>
#include <cstdint>

typedef struct Data
{
    std::string name;
    int age;
} Data;

static uintptr_t serialize(Data* ptr);
static Data* deserialize(uintptr_t raw);

std::ostream&	operator<<( std::ostream& stream, const Data& obj);

#endif