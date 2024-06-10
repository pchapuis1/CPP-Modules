#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

void	testForm(Bureaucrat& bureaucrat, AForm& form) {
	std::cout << form;
	bureaucrat.signForm(form);
	bureaucrat.executeForm(form);
}

int	main() {
	Bureaucrat	burro("burro", 1);
	std::cout << burro;

	try {
		{
			std::cout << std::endl;
			std::cout << "ShrubberyCreationForm need 145" << std::endl;
			ShrubberyCreationForm form("home");
			testForm(burro, form);
			testForm(burro, form);
			testForm(burro, form);
			std::cout << std::endl;
		}
		{
			std::cout << std::endl;
			std::cout << "RobotomyRequestForm need 72" << std::endl;
			RobotomyRequestForm form("Bender");
			testForm(burro, form);
			std::cout << std::endl;
			testForm(burro, form);
			std::cout << std::endl;
		}
		{
			std::cout << std::endl;
			std::cout << "PresidentialPardonForm need 25" << std::endl;
			PresidentialPardonForm form("lrocca");
			testForm(burro, form);
			std::cout << std::endl;
		}
		std::cout << "---------------------------------" << std::endl;
		std::cout << std::endl;
		PresidentialPardonForm form("lrocca");
		{
			std::cout << std::endl;
			std::cout << form;
			burro.executeForm(form);
			std::cout << std::endl;
		}
		{
			std::cout << std::endl;
			burro.signForm(form);
			burro.executeForm(form);
			std::cout << std::endl;
		}
		{
			PresidentialPardonForm formTest(form);
			testForm(burro, formTest);
		}
	}
	catch (std::exception& e) {
		std::cout << "Error: " << e.what() << std::endl;
	}
	return (0);
}