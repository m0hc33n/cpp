#pragma once

#include <iostream>
#include <string>
#include <iomanip>
#include <sstream>
#include <cctype>
#include "Contact.hpp"

# define PROMPT "PHONEBOOK> "
# define PHONEBOOKUSAGE "📖 ADD / SEARCH / EXIT"
# define PHONEBOOKEXIT "\n Bye!!📱📕"

class PhoneBook {
	public:
		PhoneBook();
		bool verifyCommand(std::string &) const;
		void handleCommand(std::string &);
	
	private:
		void 	add();
		void 	search() const;

		bool	invalid_in(std::string &) const;
		void	display_contact(int) const;
		void	display_contacts() const;
		std::string formatField(const std::string&) const;

		int		cursor;
		int 	n_contacts;
		Contact contacts[8];
};
