
#include <iostream>
#include "Phonebook.hpp"

int main() {

Phonebook phoneBook;
std::string command;


while (true) {

	std::cout << "Enter command [ADD] [SEARCH] [EXIT]: " << std::endl;
	std::cin >> command;


	if (command == "ADD") {

		std::string firstName, lastName, nickName, phoneNumber, darkestSecret;

		std::cout << "Enter first name: ";
		std::cin >> firstName;

		std::cout << "Enter last name: ";
		std::cin >> lastName;

		std::cout << "Enter nick name: ";
		std::cin >> nickName;

		std::cout << "Enter phone number: ";
		std::cin >> phoneNumber;

		std::cout << "Enter darkest secret: ";
		std::cin >> darkestSecret;


		phoneBook.addContact(firstName, lastName, nickName, phoneNumber, darkestSecret);

		std::cout << "Contacrt added !" << std::endl;
	}


	else if (command == "SEARCH") {

		phoneBook.searchContact();

	}
	else if (command == "EXIT")
		break;
	
	else 
		std::cout << "Invalid command try: [ADD] [SEARCH] [EXIT]" << std::endl;

}
	
	std::cout << "Program closed" << std::endl;
	return 0;
	
}	
