#include "Contact.hpp"

const std::string& Contact::getFirstName() const {
	return m_firstName;
}

const std::string& Contact::getLastName() const {
	return m_lastName;
}

const std::string& Contact::getNickName() const {
	return m_nickName;
}

const std::string& Contact::getPhoneNumber() const {
	return m_phoneNumber;
}

const std::string& Contact::getDarkSecret() const {
	return m_darkSecret;
}

void Contact::setFirstName(std::string f) {
	m_firstName = f;
}

void Contact::setLastName(std::string l) {
	m_lastName = l;
}

void Contact::setNickName(std::string n) {
	m_nickName = n;
}

void Contact::setPhoneNumber(std::string p) {
	m_phoneNumber = p;
}

void Contact::setDarkSecret(std::string d) {
	m_darkSecret = d;
}