#include "Zombie.hpp"

Zombie* newZombie( std::string name )
{
    if (name.empty())
    {
        std::cout << RED << "Error" << std::endl;
        std::cout << "Zombie name must not be empty" << RESET << std::endl;
        return (NULL);
    }
    Zombie *new_zombie = new Zombie;
    new_zombie->set_name(name);
    return (new_zombie);
}