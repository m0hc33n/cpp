#pragma once

# include <iostream>
# include <string>
#include "Weapon.hpp"

class HumanB {
	public:
		HumanB(std::string);

		void attack() const;

		const std::string& getName() const;
		void setName(std::string);

		void setWeapon(Weapon& weapon);

	private:
		std::string m_name;
		Weapon*	m_weapon;
};