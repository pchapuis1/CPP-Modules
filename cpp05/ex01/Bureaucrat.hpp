#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

#include <iostream>
#include "Form.hpp"

class Form;

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

	std::string	getName();
	int	getGrade();

	void Increment(int nb);
	void Decrement(int nb);
	void Increment();
	void Decrement();

	void	signForm(Form &rhs);
};

std::ostream& operator<<(std::ostream &o, Bureaucrat &rhs);

#endif