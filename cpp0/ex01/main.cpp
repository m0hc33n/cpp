#include <iostream>
#include "PhoneBook.hpp"


int main()
{
	PhoneBook pb;
	std::string	command;

	while (true) {
		if (!std::cin.eof()) {
			std::cout << PROMPT;
		}
		if (!std::getline(std::cin, command)) {
            if (std::cin.eof()) {
                break;
            } else {
                std::cerr << "Error reading input." << std::endl;
                break;
            }
        }
		if (!command.empty() && !pb.verifyCommand(command)) {
			std::cout << PHONEBOOKUSAGE << std::endl;
			continue;
		}
		if (!command.compare("EXIT")) {
			break;
		}
		pb.handleCommand(command);
	}
	std::cout << PHONEBOOKEXIT << std::endl;
}
