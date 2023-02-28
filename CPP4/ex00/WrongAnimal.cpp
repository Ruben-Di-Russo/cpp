#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal()
{
    return ;
}


WrongAnimal::WrongAnimal(const WrongAnimal &copy)
{
    *this = copy;
}

std::string WrongAnimal::getType(void) const
{
    return this->type;
}

WrongAnimal &WrongAnimal::operator=( const WrongAnimal &stats )
{
    this->type = stats.type;
    return (*this);
}

WrongAnimal:: ~WrongAnimal()
{
   return ;
}

void    WrongAnimal::makeSound() const
{
    if(this->getType() == "WrongCat")
    {
        std::cout << "Surely not a Meoow" << std::endl;
    }
}