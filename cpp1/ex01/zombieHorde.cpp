#include <string>
#include "Zombie.hpp"
#include <sstream>

Zombie* zombieHorde(int N, std::string name)
{
	if (N <= 0) {
        return NULL;
    }

	Zombie* zHorde = new Zombie[N];

	for (int i=0; i < N; i++) {
		std::stringstream ss;
		ss << i;
		zHorde[i].setName(name + "_" + ss.str());
	}
	return zHorde;
}
