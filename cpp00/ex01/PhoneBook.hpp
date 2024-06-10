#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include "Contact.hpp"
# include <iostream>

class PhoneBook {

private:
	Contact		_contacts[8];
	int			_readInput(void);

public:
	PhoneBook();
	~PhoneBook();
	void	addContact(void);
	void	printContacts(void);
	void	tuto(void);
};

#endif