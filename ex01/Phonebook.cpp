
#include <iostream>
#include <iomanip>
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

 std::cout << std::setw(10) << std::right << "index" << "|"
              << std::setw(10) << std::right << "first name" << "|"
              << std::setw(10) << std::right << "last name" << "|"
              << std::setw(10) << std::right << "nickname" << "|"
              << std::endl;


	for (int i = 0; i < size; i++) {
			
		std::cout << std::setw(10) << std::right << i << "|"
		<< std::setw(10) << std::right << listContact[i].getFirstName() << "|"
		<< std::setw(10) << std::right << listContact[i].getName() << "|"
		<< std::setw(10) << std::right << listContact[i].getNickName() << std::endl;
	}
}



	// 2. afficher tableau
	// - penser au troncage > 10 -> .

	// 3. demander index

	// 4. afficher details

