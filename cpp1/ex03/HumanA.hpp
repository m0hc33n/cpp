#pragma once

# include <iostream>
# include <string>
#include "Weapon.hpp"

class HumanA {
	public:
		HumanA();
		HumanA(std::string, Weapon&);

		void attack() const;

		const std::string& getName() const;
		void setName(std::string); 
		
	private:
		std::string m_name;
		Weapon& m_weapon;
};