#include "ClapTrap.hpp"

int main() {
    ClapTrap claptrap("CLTP");

    claptrap.attack("target1");
    claptrap.takeDamage(5);
    claptrap.beRepaired(3);
    claptrap.takeDamage(10);
    claptrap.attack("target2");
    claptrap.beRepaired(5);

    return 0;
}
