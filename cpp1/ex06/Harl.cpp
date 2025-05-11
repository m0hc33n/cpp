#include "Harl.hpp"


void Harl::debug(void) const {
	std::cout << "[ DEBUG ] Bacon overload! <3" << std::endl;
}

void Harl::info(void) const {
	std::cout << "[ INFO ] Not enough bacon!" << std::endl;
}

void Harl::warning(void) const {
	std::cout << "[ WARNING ] Free bacon needed!" << std::endl;
}

void Harl::error(void) const {
	std::cout << "[ ERROR ] Manager NOW!" << std::endl;
}


void Harl::complain(std::string level) const {
	const std::string levels[] = {
		"DEBUG",
		"INFO",
		"WARNING",
		"ERROR"
	};

	int levelNum = -1;
	for (int i = 0; i < 4; ++i) {
		if (level == levels[i]) {
			levelNum = i;
			break;
		}
	}

	switch (levelNum) {
		case 0: // DEBUG
			debug();
		case 1: // INFO
			info();
		case 2: // WARNING
			warning();
		case 3: // ERROR
			error();
			break;
		default:
			std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
	}
}
