#include <iostream>
#include <string>
#include "Zombie.hpp"

Zombie* zombieHorde(int N, std::string name);

int main() 
{
    int hordeSize(10);
    std::string hordeName("Mr.Zombie");

    Zombie* zombieHordePtr = zombieHorde(hordeSize, hordeName);

    if (zombieHordePtr == NULL)
    {
        std::cout << "zombieHorde returned nullptr" << std::endl;
        return 1;
    }
    // Test: Announce each zombie in the horde
    std::cout << "\n[++] Announcing the zombie horde:\n";
    for (int i = 0; i < hordeSize; ++i) {
        zombieHordePtr[i].announce();
    }
	// Clean
	std::cout << "\n[++] Clean the zombie horde:\n";
    delete[] zombieHordePtr;
    zombieHordePtr = NULL;

    return 0;
}