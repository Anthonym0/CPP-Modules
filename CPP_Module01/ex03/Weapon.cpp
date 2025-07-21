#include "Weapon.hpp"

const std::string& Weapon::getType()
{
    const std::string& ref = this->type;
    return ref;
}

void    Weapon::setType(std::string const &type)
{
    this->type = type;
}

Weapon::Weapon(std::string const &type)
{
    this->setType(type);
}

Weapon::~Weapon()
{
}