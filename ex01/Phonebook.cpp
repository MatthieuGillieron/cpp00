
#include <iostream>
#include "Phonebook.hpp"


Phonebook::Phonebook(void) {

	size = 0;
	insert = 0;

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


void	Phonebook::searchContact() {

	if (size == 0) {
		std::cout << "No contact available" << std::endl;
		return;
	}

	for (int i = 0; i < size; i++) {
			
		std::cout << "contact: " << i <<std::endl;
	}
}

	// 2. afficher tab




	// 3. demander index

	// 4. afficher details

