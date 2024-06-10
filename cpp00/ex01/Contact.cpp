#include "Contact.hpp"

Contact::Contact(){

}

Contact::~Contact(){
	
}

std::string Contact::_getInput(std::string str)
{
	std::string	input = "";
	int			valid = 0;

	while (!valid)
	{
		std::cout << str;
		std::getline(std::cin, input);
		if (!input.empty())
			valid = 1;
		else
		{
			std::cin.clear();
			std::cout << "Invalid input; please try again." << std::endl;
		}
	}
	return (input);
}

std::string Contact::_printLen(std::string str)
{
	if (str.length() > 10)
		return (str.substr(0, 9) + ".");
	return (str);
}

void	Contact::init(void)
{
	this->_firstName = this->_getInput("Enter your first name: ");
	this->_lastName = this->_getInput("Enter your last name: ");
	this->_nickname = this->_getInput("Enter your nickname: ");
	this->_phoneNumber = this->_getInput("Enter your phone number: ");
	this->_darkestSecret = this->_getInput("Enter your darkest secret: ");
	std::cout << std::endl;
}

void	Contact::setIndex(int i)
{
	this->_index =  i;
}

void	Contact::printGlobal(int index)
{
	std::cout << "|" << std::setw(10) << index + 1;
	std::cout << "|" << std::setw(10) << this->_printLen(this->_firstName);
	std::cout << "|" << std::setw(10) << this->_printLen(this->_lastName);
	std::cout << "|" << std::setw(10) << this->_printLen(this->_nickname);
	std::cout << "|" << std::endl;
}

void	Contact::printContact(int index)
{
	std::cout << "index: " << index + 1 << std::endl;
	std::cout << "fist name: " << this->_firstName << std::endl;
	std::cout << "last name: " << this->_lastName << std::endl;
	std::cout << "nickname: " << this->_nickname << std::endl;
	std::cout << "phone number: " << this->_phoneNumber << std::endl;
	std::cout << "darkest secret: " << this->_darkestSecret << std::endl;
}