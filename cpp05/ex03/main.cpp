#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "Intern.hpp"

Bureaucrat	burro("burro", 150);
Intern		interno;

void	testMake(const std::string& formName, const std::string& target) {
	std::cout	<< std::endl << formName << std::endl << std::endl;
	AForm* form = interno.makeForm(formName, target);

	std::cout << *form;
	burro.signForm(*form);
	burro.executeForm(*form);

	delete form;
}

int	main() {
	try
	{
		Intern someRandomIntern;
		AForm* rrf;
		rrf = someRandomIntern.makeForm("robotomy request", "Bender");
		burro.executeForm(*rrf);
		std::cout << std::endl;
		burro.signForm(*rrf);
		std::cout << std::endl;
		burro.signForm(*rrf);
		std::cout << std::endl;
		burro.executeForm(*rrf);
		std::cout << std::endl;
		delete rrf;
	}
	catch(const std::exception& e)
	{
		std::cerr << "Error: " << e.what() << '\n';
	}
	
	try {
		testMake("robotomy request", "Bender");
		testMake("presidential pardon", "lrocca");
		testMake("shrubbery creation", "home");
		testMake("not a form", "you");
	}
	catch (std::exception& e) {
		std::cout << "Error: " << e.what() << std::endl;
	}
	return (0);
}