#ifndef FIXED_HPP
#define FIXED_HPP
#include <string.h>
#include <iostream>
#include <cmath>
class Fixed
{
    private:
        int                 fixedPoint;
        static const int    fractionalBits = 8;
    public:
		Fixed();
        Fixed(int x);
        Fixed(float x);
        Fixed(const Fixed &copy);
        float toFloat(void) const;
        int toInt(void) const;
        void    operator=(const Fixed& copy);
        int getRawBits(void) const;
        void    setRawBits (int const raw);
		~Fixed();

};

std::ostream &operator<<(std::ostream &out, const Fixed &fixe);

#endif