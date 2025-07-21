#include "Cat.hpp"

Cat::Cat()
{
    std::cout << "Cat default constructor called" << std::endl;
    this->type = "Cat";
    return ;
}

Cat::Cat(const Cat& rhs)
{
    std::cout << "Cat copy constructor called" << std::endl;
    *this = rhs;
    return ;
}

Cat::~Cat()
{
    std::cout << "Cat destructor called" << std::endl;
    return ;
}

Cat& Cat::operator=(const Cat& rhs)
{
    std::cout << "Cat assignement operator called" << std::endl;
    this->type = rhs.type;
    return *this;
}

void Cat::makeSound(void) const
{
    std::cout << "Meooww Meooww" << std::endl;
    return ;
}