
#include <iostream>
#include <iomanip>
#include <cctype>
#include <cstdlib>
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


std::string getValidInput(std::string prompt) {
	std::string input;
	
	while (true) {
		std::cout << prompt;
		std::getline(std::cin, input);
		
		if (!input.empty())
			return input;
		
		std::cout << "Input cannot be empty. Please try again." << std::endl;
	}
}

bool isValidIndex(std::string str, int &index) {
	if (str.length() != 1 || !std::isdigit(str[0]))
		return false;
	
	index = str[0] - '0';
	return (index >= 0 && index <= 7);
}

std::string getValidPhoneNumber(std::string prompt) {
	std::string input;
	
	while (true) {
		input = getValidInput(prompt);
		
		bool isValid = true;
		for (size_t i = 0; i < input.length(); i++) {
			if (!std::isdigit(input[i])) {
				isValid = false;
				break;
			}
		}
		
		if (isValid)
			return input;
		
		std::cout << "Phone number must contain only digits. Please try again." << std::endl;
	}
}

void Phonebook::addContactFromInput() {

    std::string firstName, lastName, nickName, phoneNumber, darkestSecret;
    
    firstName = getValidInput("Enter first name: ");
    lastName = getValidInput("Enter last name: ");
    nickName = getValidInput("Enter nickname: ");
    phoneNumber = getValidPhoneNumber("Enter phone number: ");
    darkestSecret = getValidInput("Enter darkest secret: ");
    
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
	std::string indexStr;
	
	std::cout << "Enter index: ";
	std::cin >> indexStr;
	
	if (!isValidIndex(indexStr, index) || index >= size || index < 0) {
		std::cout << "Invalid index!" << std::endl;
		return;
	}
	
	std::cout << "First name: " << listContact[index].getFirstName() << std::endl;
	std::cout << "Name: " << listContact[index].getName() << std::endl;
	std::cout << "Nick name: " << listContact[index].getNickName() << std::endl;
	std::cout << "Phone number: " << listContact[index].getPhoneNumber() << std::endl;
	std::cout << "Darkest secret: " << listContact[index].getDarkestSecret() << std::endl;

}
