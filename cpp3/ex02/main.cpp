#include "FragTrap.hpp"

int main() {
    FragTrap frag1("Fragster");
    frag1.attack("target1");
    frag1.highFivesGuys();

    FragTrap frag2 = frag1; // Test copy constructor
    frag2.attack("target2");

    FragTrap frag3("Fragster3");
    frag3 = frag1; // Test copy assignment operator
    frag3.attack("target3");

    return 0;
}
