#include "Cat.hpp"


Cat::Cat()
{
    this->type = "Cat";
}


Cat::Cat(const Cat &copy)
{
    *this = copy;
}



Cat &Cat::operator=( const Cat &stats )
{
    this->type = stats.type;
    return (*this);
}

Cat:: ~Cat()
{
    return ;
}

void    Cat::makeSound() const
{
        std::cout << "Meoow" << std::endl;
}