#include "WrongCat.hpp"


WrongCat::WrongCat()
{
    this->type = "WrongCat";
    std::cout << this->type << " constructor called " << std::endl;

}


WrongCat::WrongCat(const WrongCat &copy)
{
    *this = copy;
}



WrongCat &WrongCat::operator=( const WrongCat &stats )
{
    this->type = stats.type;
    return (*this);
}

WrongCat:: ~WrongCat()
{
    std::cout << this->type << " destructor called " << std::endl;
}