#include "Fixed.hpp"
#include <iostream>
#include <cmath>

Fixed::Fixed()
{   
    this->fixed_number = 0;
    return ;
}

Fixed::Fixed(const int number)
{
    this->fixed_number = number << this->frac_bits;
    return ;
}

Fixed::Fixed(const float number)
{
    int tmp_fixed = (int)(roundf(number * (1 << this->frac_bits)));
    this->fixed_number = tmp_fixed;
    return ; 
}

Fixed::Fixed(const Fixed& rhs)
{
    *this = rhs;
    return ;
}

Fixed::~Fixed()
{
    return ;
}

Fixed& Fixed::operator=(Fixed const &rhs)
{
    this->fixed_number = rhs.fixed_number;
    return *this;
}

int Fixed::getRawBits( void ) const
{
    std::cout << "getRawBits member function called" << std::endl;
    return this->fixed_number;
}

void    Fixed::setRawBits(int const raw)
{
    std::cout << "setRawBits member function called" << std::endl;
    this->fixed_number = raw;
    return ;
}

int Fixed::toInt(void) const
{
    int result = this->fixed_number >> this->frac_bits;
    return result;
}

float Fixed::toFloat(void) const
{
    float result = ((float)this->fixed_number / (float)(1 << this->frac_bits));
    return result;
}

bool    Fixed::operator!=(Fixed a)
{
    if (this->fixed_number != a.fixed_number)
        return true;
    return false;
}

bool    Fixed::operator==(Fixed a)
{
    if (this->fixed_number == a.fixed_number)
        return true;
    return false;
}

bool    Fixed::operator<=(Fixed a)
{
    if (this->fixed_number <= a.fixed_number)
        return true;
    return false;
}

bool    Fixed::operator>=(Fixed a)
{
    if (this->fixed_number >= a.fixed_number)
        return true;
    return false;
}

bool    Fixed::operator<(Fixed a)
{
    if (this->fixed_number < a.fixed_number)
        return true;
    return false;
}

bool    Fixed::operator>(Fixed a)
{
    if (this->fixed_number > a.fixed_number)
        return true;
    return false;
}

Fixed Fixed::min(Fixed const &a, Fixed const &b)
{
    if (a.fixed_number < b.fixed_number)
        return (a.toFloat());
    return (b.toFloat());
}

Fixed Fixed::min(Fixed &a, Fixed &b)
{
    if (a.fixed_number < b.fixed_number)
        return (a.toFloat());
    return (b.toFloat());
}

Fixed Fixed::max(Fixed const &a, Fixed const &b)
{
    if (a.fixed_number > b.fixed_number)
        return (a.toFloat());
    return (b.toFloat());
}

Fixed Fixed::max(Fixed &a, Fixed &b)
{
    if (a.fixed_number > b.fixed_number)
        return (a.toFloat());
    return (b.toFloat());
}

Fixed Fixed::operator+(Fixed const &a)
{
    Fixed result(this->toFloat() + a.toFloat());
    return result;
}

Fixed Fixed::operator-(Fixed const &a)
{
    Fixed result(this->toFloat() - a.toFloat());
    return result;
}

Fixed Fixed::operator*(Fixed const &a)
{
    Fixed result(this->toFloat() * a.toFloat());
    return result;
}

Fixed Fixed::operator/(Fixed const &a)
{
    Fixed result(this->toFloat() / a.toFloat());
    return result;
}

Fixed Fixed::operator++()
{
    this->fixed_number += 1;
    return *this;
}

Fixed Fixed::operator++(int)
{
    Fixed a = *this;
    this->fixed_number += 1;
    return a;
}

Fixed& Fixed::operator--()
{
    this->fixed_number -= 1;
    return *this;
}

Fixed Fixed::operator--(int)
{
    Fixed a = *this;
    this->fixed_number -= 1;
    return a;
}


std::ostream& operator<<( std::ostream &o, Fixed const &i)
{
    o << i.toFloat();
    return (o);
}