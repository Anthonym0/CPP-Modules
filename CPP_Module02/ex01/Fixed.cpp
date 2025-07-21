#include "Fixed.hpp"
#include <iostream>
#include <cmath>

Fixed::Fixed()
{   
    std::cout << "Default constructor called" << std::endl;
    this->fixed_number = 0;
    return ;
}

Fixed::Fixed(const int number)
{
    std::cout << "Int constructor called" << std::endl; 
    this->fixed_number = number << this->frac_bits;
    return ;
}

Fixed::Fixed(const float number)
{
    std::cout << "Float constructor called" << std::endl;
    int tmp_fixed = (int)(roundf(number * (1 << this->frac_bits)));
    this->fixed_number = tmp_fixed;
    return ; 
}

Fixed::Fixed(const Fixed& rhs)
{
    std::cout << "Copy constructor called" << std::endl;
    *this = rhs;
    return ;
}

Fixed::~Fixed()
{
    std::cout << "Destructor called" << std::endl;
    return ;
}

Fixed& Fixed::operator=(Fixed const &rhs)
{
    std::cout << "Copy assignment operator called" << std::endl;
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

std::ostream& operator<<( std::ostream &o, Fixed const &i)
{
    o << i.toFloat();
    return (o);
}