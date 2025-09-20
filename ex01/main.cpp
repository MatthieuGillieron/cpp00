
#include <iostream>
#include "Phonebook.hpp"

int main() {

	Phonebook phoneBook;
	std::string command;

	Contact new_contact;
	new_contact.setFirstName("boby");
	new_contact.setName("shmeuda");
	new_contact.setNickName("B-Boy");
	new_contact.setPhoneNumber("07070707");
	new_contact.setDarkestSecret("sniffeur2baltrou");

std::cout << "Test pour ajouter conatact" << std::endl;
std::cout << "\n";

	std::cout << "first name: " << new_contact.getFirstName() << std::endl;
	std::cout << "name: " << new_contact.getName() << std::endl;
	std::cout << "nick name: " << new_contact.getNickName() << std::endl;
	std::cout << "phone number: " << new_contact.getPhoneNumber() << std::endl;
	std::cout << "secret: " << new_contact.getDarkestSecret() << std::endl;

std::cout << "Test pour afficher annuaire" << std::endl;
std::cout << "\n";


	phoneBook.addContact("bob", "eponge", "carrer", "12345", "aime escargot");
	phoneBook.addContact("Jean", "Dupont", "Jaja", "0123", "secret1");
	phoneBook.addContact("Marie", "Martin", "Mimi", "0456", "secret2");
	phoneBook.searchContact();
}
/*
while (true) {
	


if (command == "EXIT")
break;
}

std::cout << "Program closed" << std::endl;
return 0;

*/

