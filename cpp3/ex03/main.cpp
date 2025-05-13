#include "DiamondTrap.hpp"

int main() {
    DiamondTrap diamond("DiamondMaster");
    
    diamond.attack("target1");
    diamond.whoAmI();
    
    DiamondTrap diamondCopy = diamond; // Test copy constructor
    diamondCopy.whoAmI();

    return 0;
}
