#include "Dog.hpp"

Dog::Dog()
{
    this->type = "Dog";
}


Dog::Dog(const Dog &copy)
{
    *this = copy;
}



Dog &Dog::operator=( const Dog &stats )
{
    this->type = stats.type;
    return (*this);
}

Dog:: ~Dog()
{
    return ;
}

void    Dog::makeSound() const
{
        std::cout << "Bau" << std::endl;
}