#ifndef INTERN_HPP
# define INTERN_HPP

#include <iostream>
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

class Intern {

private:

public:
	Intern();
	Intern(const Intern&);
	~Intern();

	Intern& operator=(const Intern& f);

	class FormDoesntExist: public std::exception {
		virtual const char*	what() const throw();
	};

	AForm* createShrubberyCreation(std::string target);
	AForm* createRobotomyRequest(std::string target);
	AForm* createPresidentialPardon(std::string target);

	AForm*	makeForm(std::string name, std::string target);

};

typedef AForm* (Intern::*createForm)(std::string target);

#endif