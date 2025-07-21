#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main(void)
{
    // ClapTrap    clap_1("BipBoup");
    // ClapTrap    clap_2("Bloup");
    ScavTrap    scav("YOO");
    scav.guardGate();
    scav.attack("boup");

    // clap_1.attack("Bloup");
    // clap_2.takeDamage(5);
    // clap_2.beRepaired(10);

    // clap_2.attack("BipBoup");
    // clap_1.takeDamage(50);
    // clap_1.attack("Bloup");
    
    return 0;
}