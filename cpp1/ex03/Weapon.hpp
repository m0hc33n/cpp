#pragma once

# include <iostream>
# include <string>

class Weapon
{
	public:
		Weapon();
		Weapon(std::string);
		const std::string& getType() const;
		void setType(std::string);
		
	private:
		std::string m_type;
		
};
