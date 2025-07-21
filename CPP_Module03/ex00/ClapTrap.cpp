#include "ClapTrap.hpp"

ClapTrap::ClapTrap()
{
    std::cout << "Default constructor called" << std::endl;
    return ;
}

ClapTrap::ClapTrap(std::string name)
{
    std::cout << "Constructor parameter called" << std::endl;
    if (name.empty())
        _name = "DEFAULT NAME";
    else
        _name = name;
    _hit_points = 10;
    _energy_points = 10;
    _attack_damage = 0;
    return ;
}

ClapTrap::ClapTrap(const ClapTrap& rhs)
{
    std::cout << "Copy constructor called" << std::endl;
    *this = rhs;
    return ;
}

ClapTrap& ClapTrap::operator=(const ClapTrap& rhs)
{
    std::cout << "Copy assignment operator called" << std::endl;
    this->_name = rhs._name;
    this->_hit_points = rhs._hit_points;
    this->_energy_points = rhs._energy_points;
    this->_attack_damage = rhs._attack_damage;
    return *this;
}

ClapTrap::~ClapTrap()
{
    std::cout << "Destructor called" << std::endl;
    return ;
}

void ClapTrap::attack(const std::string& target)
{
    if (this->_hit_points > 0)
    {
        if (target.empty())
            std::cout << "ClapTrap " << this->_name << " attacks " << "DEFAULT TARGET" << " causing " << this->_attack_damage << " points of damage !" << std::endl;
        else
            std::cout << "ClapTrap " << this->_name << " attacks " << target << " causing " << this->_attack_damage << " points of damage !" << std::endl;
        this->_energy_points = this->_energy_points - 1;
    }
    else
        std::cout << "ClapTrap " << this->_name << " is dead !" << std::endl;
    return ;
}

void    ClapTrap::beRepaired(unsigned int amount)
{
    if (this->_hit_points > 0)
    {
        std::cout << "ClapTrap " << this->_name << " repairs itself" << std::endl;
        this->_hit_points += amount;
    }
    else
        std::cout << "ClapTrap " << this->_name << " is dead !" << std::endl;
    return ;
}

void    ClapTrap::takeDamage(unsigned int amount)
{
    if (this->_hit_points > 0)
    {
        std::cout << "ClapTrap " << this->_name << " take " << amount << " damage !" << std::endl;
        if (amount < this->_hit_points)
            this->_hit_points = this->_hit_points - amount;
        else
            this->_hit_points = 0;
    }
    else
        std::cout << "ClapTrap " << this->_name << " is dead !" << std::endl;
    return ;
}