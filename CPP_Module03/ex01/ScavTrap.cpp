#include "ScavTrap.hpp"

ScavTrap::ScavTrap(): ClapTrap()
{
    std::cout << "ScavTrap Default constructor called" << std::endl;
    return ;
}

ScavTrap::ScavTrap(std::string name): ClapTrap(name)
{
    std::cout << "ScavTrap Default constructor parameter called with " << name << std::endl;
    return ;
}

ScavTrap::ScavTrap(const ScavTrap& rhs): ClapTrap(rhs)
{
    std::cout << "ScavTrap copy constructor called" << std::endl;
    *this = rhs;
    return ;
}

ScavTrap& ScavTrap::operator=(const ScavTrap& rhs)
{
    std::cout << "ScavTrap Copy assignment operator called" << std::endl;
    this->_name = rhs._name;
    this->_hit_points = rhs._hit_points;
    this->_energy_points = rhs._energy_points;
    this->_attack_damage = rhs._attack_damage;
    return *this;
}

ScavTrap::~ScavTrap()
{
    std::cout << "ScavTrap destructor called" << std::endl;
    return ;
}

void ScavTrap::guardGate()
{
    std::cout << "ScavTrap is now in Gate keeper mode." << std::endl;
    return ;
}

void    ScavTrap::attack(const std::string& target)
{
    if (this->_hit_points > 0)
    {
        if (target.empty())
            std::cout << "ScavTrap " << this->_name << " attacks " << "DEFAULT TARGET" << " causing " << this->_attack_damage << " points of damage !" << std::endl;
        else
            std::cout << "ScavTrap " << this->_name << " attacks " << target << " causing " << this->_attack_damage << " points of damage !" << std::endl;
        this->_energy_points = this->_energy_points - 1;
    }
    else
        std::cout << "ScavTrap " << this->_name << " is dead !" << std::endl;
    return ;
}