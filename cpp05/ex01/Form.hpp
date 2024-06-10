#ifndef FORM_HPP
# define FORM_HPP

#include <iostream>
#include "Bureaucrat.hpp"

class Bureaucrat;

class Form {

private:
	std::string const	_name;
	int	const			_gradeSign;
	int	const			_gradeExec;
	bool				_signed;


public:
	Form();
	Form(const Form&);
	Form(std::string name, int gradeSign, int gradeExec);
	~Form();

	Form& operator=(const Form& rhs);

	class GradeTooLowException: public std::exception {
		virtual const char*	what() const throw();
	};
	class GradeTooHighException: public std::exception {
		virtual const char*	what() const throw();
	};
	class AlreadySign: public std::exception {
		virtual const char*	what() const throw();
	};

	std::string	getName();
	int	getGradeSign();
	int	getGradeExec();
	bool	getSign();

	void beSigned(Bureaucrat &rhs);
};

std::ostream& operator<<(std::ostream &o, Form &rhs);

#endif