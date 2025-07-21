#include "Zombie.hpp"

Zombie* zombieHorde(int N, std::string name)
{
    if (name.empty())
    {
        std::cerr << RED << "Error" << std::endl;
        std::cerr << "Zombie name must not be empty" << RESET << std::endl;
        return (NULL);
    }
    if (N < 0)
    {
        std::cerr << RED << "Error" << std::endl;
        std::cerr << "The number must be greater than 0" << RESET << std::endl;
        return (NULL);
    }
    Zombie* horde = new Zombie[N];
    for (int i = 0; i < N; i++)
    {
        horde[i].set_name(name);
    }
    return horde;
}