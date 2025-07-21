#include "newZombie.hpp"

void    randomChump( std::string name )
{
    if (name.empty())
    {
        std::cerr << RED << "Error" << RESET << std::endl;
        std::cerr << RED << "Zombie name must not be empty" << RESET << std::endl;
        return ;
    }
    Zombie *old_heap_zombie = newZombie(name);
    Zombie new_stack_zombie = *old_heap_zombie;

    delete old_heap_zombie;
    new_stack_zombie.announce();
    return ;
}