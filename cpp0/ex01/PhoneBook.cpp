#include "PhoneBook.hpp"

PhoneBook::PhoneBook()
	: cursor(0), n_contacts(0) {}

bool PhoneBook::verifyCommand(std::string &cmd) const 
{
	if (!cmd.compare("ADD")) {
		return true;
	}
	if (!cmd.compare("SEARCH")) {
		return true;
	}
	if (!cmd.compare("EXIT")) {
		return true;
	}
	return false;
}

void PhoneBook::handleCommand(std::string &cmd)
{
	if (cmd.compare("ADD") == 0) {
		add();
	}
	else if (cmd.compare("SEARCH") == 0) {
		search();
	}
}

bool PhoneBook::invalid_in(std::string &field) const
{
	for (size_t i=0; i < field.length(); i++)
    {
        if (!isprint(static_cast<unsigned char>(field[i])))
            return true;
    }
    return false;
}

void PhoneBook::add() 
{
	bool		invalid;
	std::string info[5];
	std::string prompt[] = {"\tFirstName:   ", 
							"\tLastName:    ",
							"\tNickName:    ",
							"\tPhoneNumber: ",
							"\tDarkSecret:  "
						};

	for (int i=0; i < 5; i++) {
		do {
			invalid = false;
			std::cout << prompt[i];
			if (!getline(std::cin, info[i])) {
				if (std::cin.eof()) {
					return;
				} else {
					std::cerr << "[!!] Error reading input." << std::endl;
					return;
				}
			}
			else if (invalid_in(info[i])) {
				invalid = true;
				std::cerr << "\t\t[!!] invalid input. Try again!\n" << std::endl;
			} 
		} while (info[i].empty() || invalid);
	}

	// rotate cursor to begining if contacts is full
	if (cursor == 8) {
		cursor = 0;
	}
	contacts[cursor].setFirstName(info[0]);
	contacts[cursor].setLastName(info[1]);
	contacts[cursor].setNickName(info[2]);
	contacts[cursor].setPhoneNumber(info[3]);
	contacts[cursor].setDarkSecret(info[4]);
	cursor++;
	if (n_contacts < 8)
		n_contacts++;
}

void PhoneBook::search() const
{
	if (!n_contacts) {
		std::cout << "[ii] Empty contacts\n" << std::endl;
		return ;
	}
	display_contacts();
	int index;
	std::string indexStr;
	std::stringstream ss;
	bool tflag = true;
	do {
		std::cout << "\tindex to display: ";
		if (std::getline(std::cin, indexStr) && !indexStr.empty()) {
			std::stringstream ss(indexStr);
			if (ss >> index && ss.eof()) {
				if (index >= 0 && index < n_contacts) {
					display_contact(index);
					tflag = false;
				} else {
					std::cout << "\t\t[!!] invalid index. Try again!\n";
				}
			} else {
				std::cout << "\t\t[!!] invalid index. Try again!\n";
			}
		} else {
			if (std::cin.eof()) {
				return;
			} else if (!indexStr.empty()){
				std::cerr << "[!!] Error reading input." << std::endl;
				return;
			}
		}
	} while (tflag);
}

void PhoneBook::display_contacts() const 
{
	std::cout << "+----------+----------+----------+----------+" << std::endl;
	std::cout << "|index     |first name|last name |nickname  |" << std::endl;
	std::cout << "+----------+----------+----------+----------+" << std::endl;
	for (int i = 0; i < n_contacts; ++i) {
		std::cout	<< "|" << std::setw(10) << i << "|"
					<< std::setw(10) << formatField(contacts[i].getFirstName()) << "|"
					<< std::setw(10) << formatField(contacts[i].getLastName()) << "|"
					<< std::setw(10) << formatField(contacts[i].getNickName()) <<  "|" << std::endl;
	}
	std::cout << "+----------+----------+----------+----------+" << std::endl;
}

std::string PhoneBook::formatField(const std::string& text) const {
	const int width = 10;
	if (text.length() > width) {
		return text.substr(0, width - 1) + ".";
	}
	return text;
}

void PhoneBook::display_contact(int index) const
{
	std::cout 	<< "\t[\n"
				<<"\t\tFirstName:  "	<< contacts[index].getFirstName()	<< "\n"
				<<"\t\tLastName:   "	<< contacts[index].getLastName()	<< "\n"
				<<"\t\tNickname:   "	<< contacts[index].getNickName()	<< "\n"
				<<"\t\tPhoneNumber:"	<< contacts[index].getPhoneNumber()	<< "\n"
				<<"\t\tDarkSecret: "	<< contacts[index].getDarkSecret()	<< "\n"
				<<"\t]" 				<< std::endl;
}
