#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon &wep) : weapon(wep), name(name)
{
    if (name.empty())
    {
        this->name = "DEFAULT_NAME";
    }
    std::cout << this->name << " Spawned !" << std::endl;
    return ;
}

HumanA::~HumanA()
{

    std::cout << this->name << " Died !" << std::endl;
}

void HumanA::attack(void) 
{
    if (this->weapon.getType().empty())
    {
        std::cout << this->name << " attacks with nothing " << this->weapon.getType() << std::endl;
        return ;
    }
    std::cout << this->name << " attacks with their " << this->weapon.getType() << std::endl;
}