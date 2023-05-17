#include "Data.hpp"


static uintptr_t serialize(Data* ptr)
{
    return reinterpret_cast<uintptr_t>(ptr);
}

static Data* deserialize(uintptr_t raw)
{
    return reinterpret_cast<Data*>(raw);
}

int main(void)
{
    Data ptr = {"ciao", 18 };


    uintptr_t ser;
    Data *des;

    std::cout << ptr << std::endl;

    ser = serialize(&ptr);
    des = deserialize(ser);
    
    std::cout << &ptr << std::endl;
    std::cout << ser << std::endl;
    std::cout << des << std::endl;

    std::cout << ptr << std::endl;

}

std::ostream&	operator<<( std::ostream& stream, const Data& obj)
{
	stream << obj.age << " " << obj.name;

	return (stream);
}