#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon& weapon)
	: m_name(name), m_weapon(weapon) {}

const std::string& HumanA::getName() const {
	return m_name;
}

void HumanA::setName(std::string name) {
	m_name = name;
}

void HumanA::attack() const {
	std::cout << getName() << " attacks with their " << m_weapon.getType() << std::endl;
}

