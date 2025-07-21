#include "Animal.hpp"

Animal::Animal()
{
    std::cout << "Animal default constructor called" << std::endl;
    this->type = "";
    return ;
}

Animal::Animal(const Animal& rhs)
{
    std::cout << "Animal copy constructor called" << std::endl;
    *this = rhs;
    return ;
}

Animal::~Animal()
{
    std::cout << "Animal destructor called" << std::endl;
    return ;
}

Animal& Animal::operator=(const Animal& rhs)
{
    std::cout << "Animal assignement operator called" << std::endl;
    this->type = rhs.type;
    return *this;
}

void Animal::makeSound(void) const
{
    std::cout << "A general animal sound" << std::endl;
    return ;
}

std::string Animal::getType(void) const
{
    return this->type;
}