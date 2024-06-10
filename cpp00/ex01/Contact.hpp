#ifndef CONTACT_HPP
# define CONTACT_HPP

# include <iostream>
# include <iomanip>

class Contact {

private:
	std::string _firstName;
	std::string _lastName;
	std::string _nickname;
	std::string _phoneNumber;
	std::string _darkestSecret;
	int         _index;
	
	std::string _getInput(std::string str);
	std::string _printLen(std::string str);

public:
	Contact();
	~Contact();
	void	init(void);
	void	setIndex(int i);
	void	printGlobal(int	index);
	void	printContact(int index);
};

#endif