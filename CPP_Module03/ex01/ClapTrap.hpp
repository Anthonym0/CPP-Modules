#ifndef CLAP_TRAP_HPP
#define CLAP_TRAP_HPP

#include <iostream>

class ClapTrap
{
    protected:
        ClapTrap();
        std::string _name;
        size_t _hit_points; // Health of claptrap
        size_t _energy_points; // Energy of claptrap
        size_t _attack_damage;
    public:
        ClapTrap(std::string name);
        ClapTrap(const ClapTrap&);
        ~ClapTrap();

        ClapTrap &operator=(const ClapTrap&);

        void attack(const std::string& target);
        void takeDamage(unsigned int amount);
        void beRepaired(unsigned int amount);
};

#endif