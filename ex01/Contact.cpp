#include <iostream>
#include "Contact.hpp"

Contact::Contact(void) {
	// Code du constructeur
}

Contact::~Contact(void) {
	// Code du destructeur
}


// ------ setter ------ //

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



// ------ getter ------ //

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


int main()
{
	Contact new_contact;
	new_contact.setFirstName("boby");
	new_contact.setName("shmeuda");
	new_contact.setNickName("B-Boy");
	new_contact.setPhoneNumber("07070707");
	new_contact.setDarkestSecret("sniffeur2baltrou");


	std::cout << "first name: " << new_contact.getFirstName() << std::endl;
	std::cout << "name: " << new_contact.getName() << std::endl;
	std::cout << "nick name: " << new_contact.getNickName() << std::endl;
	std::cout << "phone number: " << new_contact.getPhoneNumber() << std::endl;
	std::cout << "secret: " << new_contact.getDarkestSecret() << std::endl;

	return 0;

}