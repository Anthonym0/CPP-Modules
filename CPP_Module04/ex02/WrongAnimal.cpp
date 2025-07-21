#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal()
{
    std::cout << "WrongAnimal default constructor called" << std::endl;
    this->type = "";
    return ;
}

WrongAnimal::WrongAnimal(const WrongAnimal& rhs)
{
    std::cout << "WrongAnimal copy constructor called" << std::endl;
    *this = rhs;
    return ;
}

WrongAnimal::~WrongAnimal()
{
    std::cout << "WrongAnimal destructor called" << std::endl;
    return ;
}

WrongAnimal& WrongAnimal::operator=(const WrongAnimal& rhs)
{
    std::cout << "WrongAnimal assignement operator called" << std::endl;
    this->type = rhs.type;
    return *this;
}

void WrongAnimal::makeSound(void) const
{
    std::cout << "A general WrongAnimal sound" << std::endl;
    return ;
}

std::string WrongAnimal::getType(void) const
{
    return this->type;
}