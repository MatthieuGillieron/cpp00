#include <iostream>
#include "Contact.hpp"

Contact::Contact(void) {}
Contact::~Contact(void) {}


// ------ setter ------

void Contact::setFirstName(std::string firstName) {

	this->firstName = firstName;
}

void Contact::setName(std::string name) {

	this->name = name;
}

void Contact::setNickName(std::string nickName) {
	this->nickName = nickName;
}

void Contact::setPhoneNumber(std::string phoneNumber) {
	this->phoneNumber = phoneNumber;
}

void Contact::setDarkestSecret(std::string darkestSecret) {
	this->darkestSecret = darkestSecret;
}



// ------ getter ------

std::string Contact::getFirstName() const {
	return firstName;
}

std::string Contact::getName() const {
	return name;
}

std::string Contact::getNickName() const {
	return nickName;
}

std::string Contact::getPhoneNumber() const {
	return phoneNumber;
}

std::string Contact::getDarkestSecret() const {
	return darkestSecret;
}
