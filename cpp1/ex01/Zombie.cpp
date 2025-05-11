#include "Zombie.hpp"

Zombie::~Zombie() {
	std::cout << getName() << " destroyed!!" << std::endl;
}

const std::string& Zombie::getName() const {
	return m_name;
}

void Zombie::setName(std::string name) {
	m_name = name;
}

void Zombie::announce() const {
	std::cout << getName() << ": " << ZSOUND << std::endl;
}
