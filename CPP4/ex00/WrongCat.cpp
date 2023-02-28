#include "WrongCat.hpp"


WrongCat::WrongCat()
{
    this->type = "WrongCat";
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
    return ;
}