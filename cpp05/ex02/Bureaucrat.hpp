#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

#include <iostream>
#include "AForm.hpp"

class AForm;

class Bureaucrat {

private:
	std::string const _name;
	int	_grade;

public:
	Bureaucrat();
	Bureaucrat(const Bureaucrat&);
	Bureaucrat(std::string name, int grade);
	~Bureaucrat();

	Bureaucrat& operator=(const Bureaucrat& f);

	class GradeTooLowException: public std::exception {
		virtual const char*	what() const throw();
	};
	class GradeTooHighException: public std::exception {
		virtual const char*	what() const throw();
	};

	std::string	getName() const;
	int	getGrade() const;

	void Increment(int nb);
	void Decrement(int nb);
	void Increment();
	void Decrement();

	void	signForm(AForm &rhs);

	void executeForm(AForm const &form);
};

std::ostream& operator<<(std::ostream &o, Bureaucrat &rhs);

#endif