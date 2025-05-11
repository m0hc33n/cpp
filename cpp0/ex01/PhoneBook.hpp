#pragma once

#include <iostream>
#include <string>
#include <iomanip>
#include <limits>
#include <sstream>
#include "Contact.hpp"

# define PROMPT "PHONEBOOK> "
# define PHONEBOOKUSAGE "📖 ADD / SEARCH / EXIT"
# define PHONEBOOKEXIT "\n Bye!!📱📕"

class PhoneBook {
	public:
		PhoneBook();
		bool verifyCommand(std::string &cmd) const;
		void handleCommand(std::string &cmd);
	
	private:
		void 	add();
		void 	search() const;

		void	display_contact(int) const;
		void	display_contacts() const;
		std::string formatField(const std::string& text) const;

		int		cursor;
		int 	n_contacts;
		Contact contacts[8];
};
