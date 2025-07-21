#include "Fixed.hpp"
#include <iostream>

Fixed::Fixed()
{   
    std::cout << "Default constructor called" << std::endl;
    this->fixed_number = 0;
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
    this->fixed_number = rhs.getRawBits();
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