#include "Animal.hpp"

Animal::Animal()
{
    std::cout << "Animal constructor called " << std::endl;
}


Animal::Animal(const Animal &copy)
{
    *this = copy;
}

std::string Animal::getType(void) const
{
    return this->type;
}

Animal &Animal::operator=( const Animal &stats )
{
    this->type = stats.type;
    return (*this);
}

Animal:: ~Animal()
{
    std::cout << "Animal destructor called " << std::endl;
}

void    Animal::makeSound() const
{

        std::cout << "strange verse" << std::endl;

}