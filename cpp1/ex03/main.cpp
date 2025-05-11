#include <iostream>
#include "HumanA.hpp"
#include "HumanB.hpp"
#include "Weapon.hpp"


int main() 
{
    std::cout << "-------- Testing Weapon Class --------" << std::endl;
    Weapon defaultWeapon;
    std::cout << "Default Weapon Type: " << defaultWeapon.getType() << std::endl;
    Weapon club("Club");
    std::cout << "Initial Weapon Type: " << club.getType() << std::endl;
    club.setType("Great Club");
    std::cout << "Modified Weapon Type: " << club.getType() << std::endl;

   
    std::cout << "\n-------- Testing HumanA Class --------" << std::endl;
    Weapon sword("Sword");
    HumanA alice("Alice", sword);
    alice.attack();

    sword.setType("Excalibur");
    alice.attack();


    std::cout << "\n-------- Testing HumanB Class --------" << std::endl;
    HumanB bob("Bob");
    bob.attack();
    bob.setWeapon(sword);
    bob.attack();

    Weapon axe("Axe");
    bob.setWeapon(axe);
    bob.attack();

	std::cout << "\n-------- Testing HumanA Class Still Valid --------" << std::endl;
	alice.attack();

    return 0;
}