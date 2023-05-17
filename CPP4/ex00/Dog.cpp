#include "Dog.hpp"

Dog::Dog()
{
    this->type = "Dog";
    std::cout << this->type << " constructor called " << std::endl;

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
    std::cout << this->type << " destructor called " << std::endl;
}

void    Dog::makeSound() const
{
        std::cout << "Bau" << std::endl;
}