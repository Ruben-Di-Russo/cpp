#include "Fixed.hpp"

Fixed::Fixed()
{
    std::cout << "Default constructor called" << std::endl ;
    this->setRawBits(0);
}

Fixed::Fixed(int x)
{
    int result;

    result = x << this->fractionalBits;
    std::cout << "Default constructor called" << std::endl ;
    this->setRawBits(result);
}

int Fixed::toInt(void) const
{
    return ((int)(this->fixedPoint >> this->fractionalBits));
}


Fixed::Fixed(float x)
{
    int result;

    std::cout << "Default constructor called" << std::endl ; 
    result = (int)(roundf(x * (1 << this->fractionalBits)));
    this->setRawBits(result);
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

float Fixed::toFloat(void) const
{
    return ((float)this->fixedPoint / (float)(1 << this->fractionalBits));
}

std::ostream &operator<<(std::ostream &out, const Fixed &fixe)
{
    out << fixe.toFloat();
    return (out);
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