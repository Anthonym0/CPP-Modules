#include "Zombie.hpp"

Zombie::Zombie()
{
    std::cout << ORANGE << "Constructor Zombie called" << RESET << std::endl;
    return ;
}

Zombie::~Zombie()
{
    std::cout << GREEN << this->_name << ":" << RED << " died !" << RESET << std::endl;
    return ;
}

std::string Zombie::get_name(void)
{
    return this->_name;
}

void Zombie::set_name(std::string name)
{
    if (name.empty())
    {
        std::cerr << RED << "Error" << RESET << std::endl;
        std::cerr << RED << "Zombie name must not be empty" << RESET << std::endl;
        return ;
    }
    this->_name = name;
    return ;
}

void    Zombie::announce( void )
{
    std::cout << GREEN << this->get_name() << ": BraiiiiiiinnnzzzZ..." << RESET << std::endl;
    return ;
}