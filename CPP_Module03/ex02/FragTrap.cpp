#include "FragTrap.hpp"

FragTrap::FragTrap(): ClapTrap()
{
    std::cout << "FragTrap default constructor called" << std::endl;
    return ;
}

FragTrap::FragTrap(std::string name): ClapTrap(name)
{
    std::cout << "FragTrap default constructor parameter called with " << name << std::endl;
    return ;
}

FragTrap::FragTrap(const FragTrap& rhs): ClapTrap(rhs)
{
    std::cout << "FragTrap copy constructor called" << std::endl;
    *this = rhs;
    return ;
}

FragTrap::~FragTrap()
{
    std::cout << "FragTrap destructor called" << std::endl;
    return ;
}

FragTrap& FragTrap::operator=(const FragTrap& rhs)
{
    std::cout << "FragTrap Copy assignment operator called" << std::endl;
    this->_name = rhs._name;
    this->_hit_points = rhs._hit_points;
    this->_energy_points = rhs._energy_points;
    this->_attack_damage = rhs._attack_damage;
    return *this;
}

void    FragTrap::highFivesGuys(void)
{
    std::cout << "FragTrap : Hey high five ?" << std::endl;
    return ;
}