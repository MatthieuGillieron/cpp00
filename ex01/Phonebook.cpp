
#include <iostream>
#include "Phonebook.hpp"


Phonebook::Phonebook(void) {

}

Phonebook::~Phonebook(void) {
	
}


//  ---- Methode ---- //

void	Phonebook::addContact(std::string firstName, std::string name, std::string nickName,
					std::string phoneNumber, std::string darkestSecret) {

	
	Contact newContact;
	
	newContact.setFirstName(firstName);
	newContact.setName(name);
	newContact.setNickName(nickName);
	newContact.setPhoneNumber(phoneNumber);
	newContact.setDarkestSecret(darkestSecret);

	listContact[insert] = newContact;

	if (size < 8)
		size++;
	
	insert = (insert + 1) % 8;
}


void	searchContact() {

}
