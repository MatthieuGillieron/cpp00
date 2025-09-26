/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mg <mg@student.42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/26 21:24:21 by mg                #+#    #+#             */
/*   Updated: 2025/09/26 21:24:22 by mg               ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <iostream>
#include "Phonebook.hpp"

int main() {

Phonebook phoneBook;
std::string command;


while (true) {

	std::cout << "Enter command [ADD] [SEARCH] [EXIT]: ";
	std::cin >> command;


		if (command == "ADD") {
			std::cin.ignore();
			phoneBook.addContactFromInput();
		}


		else if (command == "SEARCH")
			phoneBook.searchContact();


		else if (command == "EXIT")
			break;
		
			
		else 
			std::cout << "Invalid command try: [ADD] [SEARCH] [EXIT]" << std::endl;

	}
	
	std::cout << "Program closed" << std::endl;
	return 0;
	
}	
