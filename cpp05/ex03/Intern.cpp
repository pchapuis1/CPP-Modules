#include "Intern.hpp"

Intern::Intern(){
//	std::cout << "Intern: Default constructor called" << std::endl;
}

Intern::Intern(const Intern &rhs){
	*this = rhs;
//	std::cout << "Intern: Copy constructor called" << std::endl;
}

Intern::~Intern(){
//	std::cout << "Intern: Destructor called" << std::endl;
}

Intern& Intern::operator=(const Intern& rhs){
	if (this != &rhs){}
//	std::cout << "Intern: Copy assignment operator called" << std::endl;
	return *this;
}

AForm* Intern::createShrubberyCreation(std::string target){
	return new ShrubberyCreationForm(target);
}

AForm* Intern::createRobotomyRequest(std::string target){
	return new RobotomyRequestForm(target);
}

AForm* Intern::createPresidentialPardon(std::string target){
	return new PresidentialPardonForm(target);
}

const char*	Intern::FormDoesntExist::what() const throw(){
	return ("The form doesn't exist!");
}

AForm*	Intern::makeForm(std::string name, std::string target){
	std::string formType[3] = {"presidential pardon", "robotomy request", "shrubbery creation"};
	createForm	functions[3] = {&Intern::createPresidentialPardon, &Intern::createRobotomyRequest, &Intern::createShrubberyCreation};
	
	for(int i = 0; i < 3; i ++){
		if (name == formType[i]){
			std::cout << "Intern creates " << name << std::endl;
			return (this->*(functions[i]))(target);
		}
	}
	throw (Intern::FormDoesntExist());
}
