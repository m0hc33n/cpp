#pragma once

#include <iostream>
#include <string>

class Contact {
	public:
		const std::string& getFirstName()	const;
		const std::string& getLastName()	const;
		const std::string& getNickName()	const;
		const std::string& getPhoneNumber()	const;
		const std::string& getDarkSecret()	const;

		void setFirstName(std::string);
		void setLastName(std::string);
		void setNickName(std::string);
		void setPhoneNumber(std::string);
		void setDarkSecret(std::string);

	private:
		std::string m_firstName;
		std::string m_lastName;
		std::string m_nickName;
		std::string m_phoneNumber;
		std::string m_darkSecret;
};
