#include "Weapon.hpp"


Weapon::Weapon()
	: m_type("bare hands") {}

Weapon::Weapon(std::string type) 
	: m_type(type) {}

const std::string& Weapon::getType() const {
	return m_type;
}

void Weapon::setType(std::string type) {
	m_type = type;
}
