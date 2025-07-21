#include "WrongCat.hpp"

WrongCat::WrongCat()
{
    std::cout << "WrongCat default constructor called" << std::endl;
    this->type = "WrongCat";
    return ;
}

WrongCat::WrongCat(const WrongCat& rhs)
{
    std::cout << "WrongCat copy constructor called" << std::endl;
    *this = rhs;
    return ;
}

WrongCat::~WrongCat()
{
    std::cout << "WrongCat destructor called" << std::endl;
    return ;
}

WrongCat& WrongCat::operator=(const WrongCat& rhs)
{
    std::cout << "WrongCat assignement operator called" << std::endl;
    this->type = rhs.type;
    return *this;
}

void WrongCat::makeSound(void) const
{
    std::cout << "Wrong Meooww Meooww" << std::endl;
    return ;
}