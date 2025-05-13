#include "ScavTrap.hpp"

int main() {
    ScavTrap scav1("Scavenger1");
    scav1.attack("target1");
    scav1.guardGate();

    ScavTrap scav2 = scav1; // Test copy constructor
    scav2.attack("target2");

    ScavTrap scav3("Scavenger3");
    scav3 = scav1; // Test copy assignment operator
    scav3.attack("target3");

    return 0;
}
