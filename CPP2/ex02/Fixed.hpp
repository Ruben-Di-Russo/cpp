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
        Fixed operator+(const Fixed& op) const;
        Fixed operator-(const Fixed& op) const;
        Fixed operator*(const Fixed& op) const;
        Fixed operator/(const Fixed& op) const;
        Fixed & operator++(void);
        Fixed operator++(int);
        Fixed & operator--(void);
        Fixed operator--(int);
        bool operator>(Fixed const & op) const;    
        bool operator<(Fixed const & op) const;    
        bool operator>=(Fixed const & op) const;    
        bool operator<=(Fixed const & op) const;    
        bool operator==(Fixed const & op) const;    
        bool operator!=(Fixed const & op) const;
        int getRawBits(void) const;
        void    setRawBits (int const raw);
        static Fixed &min(Fixed &u, Fixed &v);
        const static Fixed &min(const Fixed &u, const Fixed &v);
        static Fixed &max(Fixed &u, Fixed &v);
        const static Fixed &max(const Fixed &u, const Fixed &v);
		~Fixed();

};

std::ostream &operator<<(std::ostream &out, const Fixed &fixe);
Fixed &min(Fixed &u, Fixed &v);
Fixed &max(Fixed &u, Fixed &v);

#endif