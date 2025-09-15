#include <iostream>
#include "Contact.hpp"

Contact::Contact(void) {
	// Code du constructeur (peut être vide pour l'instant)
}

Contact::~Contact(void) {
	// Code du destructeur (peut être vide pour l'instant)
}




void Contact::setFirstName(std::string firstName) {

	this->firstName = firstName;
}

std::string Contact::getFirstName() const{
	return firstName;
}




int main()
{
	Contact contact;
	contact.setFirstName("test");
	std::cout << "name : " << contact.getFirstName() << std::endl;
	return 0;

}