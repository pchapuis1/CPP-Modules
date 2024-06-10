#include "PhoneBook.hpp"
#include <iostream>

int main(void)
{
	PhoneBook repertory;
	std::string input;

	repertory.tuto();
	while(input.compare("EXIT"))
	{
		std::cout << ">";
		if (!std::getline(std::cin, input)){
			std::cout << std::endl;
			return (0);
		}
		if (input.compare("ADD") == 0)
			repertory.addContact();
		else if (input.compare("SEARCH") == 0)
			repertory.printContacts();
	}
	return (0);
}