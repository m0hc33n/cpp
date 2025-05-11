#pragma once

#include <iostream>
#include <string>

#define ZSOUND "BraiiiiiiinnnzzzZ..."

class Zombie {
	public:
		~Zombie();
		const std::string&  getName() const;
		void setName(std::string name);
		void announce() const;
	private:
		std::string	m_name;
};
