#include "Fixed.hpp"

Fixed::Fixed()
{
    this->setRawBits(0);
}

Fixed::Fixed(int x)
{
    int result;

    result = x << this->fractionalBits;
    this->setRawBits(result);
}

int Fixed::toInt(void) const
{
    return ((int)(this->fixedPoint >> this->fractionalBits));
}


Fixed::Fixed(float x)
{
    int result;

    result = (int)(roundf(x * (1 << this->fractionalBits)));
    this->setRawBits(result);
}
Fixed::Fixed(const Fixed &copy)
{
    this->fixedPoint = copy.fixedPoint;
}

void    Fixed::operator=(const Fixed& copy)
{
    this->fixedPoint = copy.fixedPoint;
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
{}

int Fixed::getRawBits(void) const
{
    return(this->fixedPoint);
}

void    Fixed::setRawBits (int const raw)
{
    this->fixedPoint = raw;
}

Fixed Fixed::operator+(const Fixed & op) const
{
    Fixed rtn;
    rtn.setRawBits(this->fixedPoint
 + op.getRawBits());
    return (rtn);
}

Fixed Fixed::operator-(const Fixed & op) const
{
    Fixed rtn;
    rtn.setRawBits(this->fixedPoint
 - op.getRawBits());
    return (rtn);
}

Fixed Fixed::operator*(const Fixed & op) const
{
    Fixed rtn;
    rtn.setRawBits((this->fixedPoint
 * op.getRawBits()) >> this->fractionalBits);
    return (rtn);
}

Fixed Fixed::operator/(const Fixed & op) const
{
    Fixed rtn;
    rtn.setRawBits((this->fixedPoint
 << this->fractionalBits) / op.getRawBits());
    return (rtn);
}

Fixed & Fixed::operator++(void)
{
    this->fixedPoint++;
    return (*this);
}

Fixed Fixed::operator++(int)
{
    Fixed rtn(*this);
    operator++();
    return (rtn);
}

Fixed & Fixed::operator--(void)
{
    this->fixedPoint--;
    return (*this);
}

Fixed Fixed::operator--(int)
{
    Fixed rtn(*this);
    operator--();
    return (rtn);
}

static bool isEqual(Fixed const & op1, Fixed const & op2)
{ return (op1.getRawBits() == op2.getRawBits()); }

bool Fixed::operator>(Fixed const & op) const
{
    return (this->fixedPoint > op.getRawBits());
}

bool Fixed::operator<(Fixed const & op) const
{ 
    return (this->fixedPoint < op.getRawBits());
}

bool Fixed::operator>=(Fixed const & op) const
{
    return (this->fixedPoint >= op.getRawBits());
}

bool Fixed::operator<=(Fixed const & op) const
{
    return (this->fixedPoint <= op.getRawBits());
} 

bool Fixed::operator==(Fixed const & op) const
{
    return (isEqual(*this, op));
}  

bool Fixed::operator!=(Fixed const & op) const
{
    return !(isEqual(*this, op));
}

Fixed & Fixed::min(Fixed &u, Fixed &v)
{
    return (u < v ? u : v);
}

const Fixed & Fixed::min(const Fixed &u, const Fixed &v)
{
    return (u < v ? u : v);
}

Fixed & Fixed::max(Fixed &u, Fixed &v)
{
    return (u > v ? u : v);
}

const Fixed & Fixed::max(const Fixed &u, const Fixed &v)
{
    return (u > v ? u : v);
}

Fixed &min(Fixed &u, Fixed &v)
{
    return (u < v ? u : v);
}

Fixed &max(Fixed &u, Fixed &v)
{
    return (u > v ? u : v);
}