
#ifndef CONTACT_HPP
#define CONTACT_HPP

#include <iostream>

/*

- prenom
- nom
- surnom
- tel
- secret

diff en public et prive ?
instance dynamique ?

this ?
accesor?


*/


class Contact {

private:

	std::string	firstName;
	std::string	name;
	std::string	nickName;
	std::string	phoneNumber;
	std::string	darkestSecret;
	
	public:
	
	void setFirstName(std::string firstName);
	void setName(std::string name);
	void setNickName(std::string nickName);
	void setPhoneNumber(std::string phoneNumber);
	void setDarkestSecret(std::string darkestSecret);
	
	std::string getFirstName()		const;
	std::string getName()			const;
	std::string getNickName()		const;
	std::string getPhoneNumber()	const;
	std::string getDarkestSecret()	const;
	
	Contact(void);
	~Contact(void);
};


#endif