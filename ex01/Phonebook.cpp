
#include <iostream>
#include <iomanip>
#include "Phonebook.hpp"


Phonebook::Phonebook(void) { size = 0; insert = 0; }
Phonebook::~Phonebook(void) {}



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

void Phonebook::addContactFromInput() {

    std::string firstName, lastName, nickName, phoneNumber, darkestSecret;
    
    std::cout << "Enter first name: ";
    std::cin >> firstName;
    
    std::cout << "Enter last name: ";
    std::cin >> lastName;
    
    std::cout << "Enter nickname: ";
    std::cin >> nickName;
    
    std::cout << "Enter phone number: ";
    std::cin >> phoneNumber;
    
    std::cout << "Enter darkest secret: ";
    std::cin >> darkestSecret;

    
    addContact(firstName, lastName, nickName, phoneNumber, darkestSecret);
    
    std::cout << "Contact added successfully!" << std::endl;
}



std::string Phonebook::truncString(std::string str) {

	if (str.length() > 10) {
		return str.substr(0, 9) + ".";
	}
	return str;
}


void	displayHeader() { 

	std::cout << std::setw(10) << std::right << "index" << "|"
	<< std::setw(10) << std::right << "first name" << "|"
	<< std::setw(10) << std::right << "last name" << "|"
	<< std::setw(10) << std::right << "nickname" << "|"
	<< std::endl;
}



void	Phonebook::searchContact() {

	if (size == 0) {
		std::cout << "No contact available" << std::endl;
		return;
	}

	displayHeader();

	for (int i = 0; i < size; i++) {
			
		std::cout << std::setw(10) << std::right << i << "|"
			<< std::setw(10) << std::right << truncString(listContact[i].getFirstName()) << "|"
			<< std::setw(10) << std::right << truncString(listContact[i].getName()) << "|"
			<< std::setw(10) << std::right << truncString(listContact[i].getNickName()) << std::endl;
	}

	int index;
	std::cout << "Enter index: ";
	std::cin >> index;

	if (index > size || index < 0 ) {
		
		std::cout << "Invalid index!" << std::endl;
		return;
	}
	
	std::cout << "First name: " << listContact[index].getFirstName() << std::endl;
	std::cout << "Name: " << listContact[index].getName() << std::endl;
	std::cout << "Nick name: " << listContact[index].getNickName() << std::endl;
	std::cout << "Phone number: " << listContact[index].getPhoneNumber() << std::endl;
	std::cout << "Darkest secret: " << listContact[index].getDarkestSecret() << std::endl;

}
