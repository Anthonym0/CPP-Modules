#include "Dog.hpp"

Dog::Dog()
{
    std::cout << "Dog default constructor called" << std::endl;
    this->type = "Dog";
    return ;
}

Dog::Dog(const Dog& rhs)
{
    std::cout << "Dog copy constructor called" << std::endl;
    *this = rhs;
    return ;
}

Dog::~Dog()
{
    std::cout << "Dog destructor called" << std::endl;
    return ;
}

Dog& Dog::operator=(const Dog& rhs)
{
    std::cout << "Dog assignement operator called" << std::endl;
    this->type = rhs.type;
    return *this;
}

void Dog::makeSound(void) const
{
    std::cout << "Wooaf Wooaf" << std::endl;
    return ;
}