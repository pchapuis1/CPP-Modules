#include "PhoneBook.hpp"

PhoneBook::PhoneBook(){

}

PhoneBook::~PhoneBook(){
	
}

void	PhoneBook::tuto(void)
{
	std::cout << std::endl << "---------------USAGE--------------" << std::endl;
	std::cout << "ADD: add a contact" << std::endl;
	std::cout << "SEARCH: show the contact specified" << std::endl;
	std::cout << "EXIT: leave program" << std::endl;
	std::cout << "----------------------------------" << std::endl;
}

void	PhoneBook::addContact(void)
{
	static int	i;

	this->_contacts[i % 8].init();
	this->_contacts[i % 8].setIndex(i % 8);
	std::cout << "The contact has been had" << std::endl;
	i ++;
}

int	PhoneBook::_readInput(void)
{
	int input;
	int	valid = 0;

	while (!valid)
	{
		std::cout << "Enter the contact index: ";
		std::cin >> input;
		if (std::cin.good() && input >= 1 && input <= 8)
			valid = 1;
		else
		{
			std::cin.clear();
			std::cin.ignore();
			std::cout << "Invalid input; please try again." << std::endl;
		}
	}
	std::cout << std::endl;
	return (input);
}

void	PhoneBook::printContacts(void)
{
	int	i;
	std::string	input="";
	
	std::cout << "-------------------CONTACTS------------------" << std::endl;
	std::cout << "|     index|first name| last name|  nickname|" << std::endl;
	std::cout << "---------------------------------------------" << std::endl;
	for (int i = 0; i < 8; i++)
		this->_contacts[i].printGlobal(i);
	std::cout << "---------------------------------------------" << std::endl;
	i = this->_readInput() - 1;
	this->_contacts[i].printContact(i);
	std::cin.ignore();
}