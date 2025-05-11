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
	typedef void (Harl::*ComplaintFuncPtr)(void) const;
	ComplaintFuncPtr complaintFunctions[] = {
		&	Harl::debug,
		&Harl::info,
		&Harl::warning,
		&Harl::error
	};

	const std::string levels[] = {
		"DEBUG",
		"INFO",
		"WARNING",
		"ERROR"
	};

	for (int i = 0; i < 4; i++) {
		if (level == levels[i]) {
			(this->*complaintFunctions[i])();
			return;
		}
	}
	std::cout << "[ Probably mumbling ]" << std::endl;
}
