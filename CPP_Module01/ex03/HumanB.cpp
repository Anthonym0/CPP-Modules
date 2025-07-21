#include "HumanB.hpp"

HumanB::HumanB(std::string name) : name(name), weapon(NULL)
{
    if (name.empty())
    {
        this->name = "DEFAULT_NAME";
    }
    std::cout << this->name << " Spawned !" << std::endl;
}

HumanB::~HumanB()
{
    std::cout << this->name << " Died !" << std::endl;
}

void HumanB::attack(void) 
{
    if (weapon == NULL || this->weapon->getType().empty())
    {
        std::cout << this->name << " attacks with nothing" << std::endl;
        return ;
    }
    std::cout << this->name << " attacks with their " << this->weapon->getType() << std::endl;
}

void    HumanB::setWeapon(Weapon &wep)
{
    this->weapon = &wep;
}