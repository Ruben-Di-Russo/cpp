#include "Animal.hpp"

Animal::Animal()
{
    return ;
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
   return ;
}

void    Animal::makeSound() const
{

        std::cout << "strange verse" << std::endl;

}