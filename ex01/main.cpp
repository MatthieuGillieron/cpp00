
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


	std::cout << "first name: " << new_contact.getFirstName() << std::endl;
	std::cout << "name: " << new_contact.getName() << std::endl;
	std::cout << "nick name: " << new_contact.getNickName() << std::endl;
	std::cout << "phone number: " << new_contact.getPhoneNumber() << std::endl;
	std::cout << "secret: " << new_contact.getDarkestSecret() << std::endl;

/*
while (true) {
	


if (command == "EXIT")
break;
}

std::cout << "Program closed" << std::endl;
return 0;

*/

}