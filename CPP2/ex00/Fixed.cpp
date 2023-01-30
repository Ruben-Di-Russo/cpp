#include "Fixed.hpp"

Fixed::Fixed()
{
    std::cout << "Default constructor called" << std::endl ;
    this->setRawBits(0);
}
Fixed::Fixed(const Fixed &copy)
{
    // *this = copy;
    this->fixedPoint = copy.fixedPoint;
    std::cout << "Copy constructor called" << std::endl ;
}

void    Fixed::operator=(const Fixed& copy)
{
    this->fixedPoint = copy.fixedPoint;
    std::cout << "Copy assignment operator called" << std::endl ;
    std::cout << "getRawBits member function called" << std::endl ;


}

Fixed::~Fixed()
{
    std::cout << "Destructor called" << std::endl ;

}

int Fixed::getRawBits(void) const
{
    std::cout << "getRawBits member function called" << std::endl ;
    return(this->fixedPoint);
}

void    Fixed::setRawBits (int const raw)
{
    this->fixedPoint = raw;
}