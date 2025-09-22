#ifndef PHONEBOOK_H
#define PHONEBOOK_H

#include <iostream>
#include "Contact.hpp"


class Phonebook {

	private :

		Contact listContact[8];
		int		size;
		int		insert;

	public :

		void	addContact(std::string firstName, std::string name, std::string nickName,
									std::string phoneNumber, std::string darkestsecret);
		void	addContactFromInput();

		std::string	getValidInput(std::string prompt);
		std::string	truncString(std::string str);						
		void	searchContact();

		Phonebook(void);
		~Phonebook(void);

};


#endif