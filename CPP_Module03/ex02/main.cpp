#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main(void)
{
    // ClapTrap    clap_1("BipBoup");
    // ClapTrap    clap_2("Bloup");
    ScavTrap    scav("YOO");
    FragTrap    frag("FRAG");

    scav.guardGate();
    scav.attack("FRAG");

    frag.takeDamage(30);
    frag.attack("YOO");
    scav.takeDamage(30);
    frag.highFivesGuys();
    // clap_1.attack("Bloup");
    // clap_2.takeDamage(5);
    // clap_2.beRepaired(10);

    // clap_2.attack("BipBoup");
    // clap_1.takeDamage(50);
    // clap_1.attack("Bloup");
    
    return 0;
}