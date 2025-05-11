#include "HumanB.hpp"

HumanB::HumanB(std::string name)
	: m_name(name), m_weapon(NULL) {}

const std::string& HumanB::getName() const {
	return m_name;
}

void HumanB::setName(std::string name) {
	m_name = name;
}

void HumanB::setWeapon(Weapon& weapon)
{
	m_weapon = &weapon;
}

void HumanB::attack() const 
{
	if (m_weapon) {
		std::cout << m_name << " attacks with their " << m_weapon->getType() << std::endl;
	} else {
		std::cout << m_name << " attacks with their bare hands" << std::endl;
	}
}
