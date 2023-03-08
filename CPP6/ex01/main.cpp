#include "Data.hpp"



int main(void)
{
    Data *ptr = new Data;
    ptr->age = 20;
    ptr->name = "test";

    uintptr_t ser;
    Data *des;

    ser = serialize(ptr);
    des = deserialize(ser);
    
    std::cout << ptr->name << std::endl;
    std::cout << ptr->age << std::endl;
    std::cout << ptr << std::endl;

    std::cout << ser << std::endl;
    std::cout << des << std::endl;
}