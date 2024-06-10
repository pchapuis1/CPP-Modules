#ifndef FORM_HPP
# define FORM_HPP

#include <iostream>
#include "Bureaucrat.hpp"

class Bureaucrat;

class AForm {

private:
	std::string const	_name;
	std::string			_target;
	int	const			_gradeSign;
	int	const			_gradeExec;
	bool				_signed;


public:
	AForm();
	AForm(const AForm&);
	AForm(std::string name, std::string target, int gradeSign, int gradeExec);
	virtual ~AForm();

	AForm& operator=(const AForm& rhs);

	class GradeTooLowException: public std::exception {
		virtual const char*	what() const throw();
	};
	class GradeTooHighException: public std::exception {
		virtual const char*	what() const throw();
	};
	class AlreadySign: public std::exception {
		virtual const char*	what() const throw();
	};
	class NotSign: public std::exception {
		virtual const char*	what() const throw();
	};

	std::string	getName() const;
	int	getGradeSign() const;
	int	getGradeExec() const;
	bool	getSign() const;
	std::string	getTarget() const;

	void beSigned(Bureaucrat &rhs);

	virtual void execute(Bureaucrat const & executor) const = 0;
};

std::ostream& operator<<(std::ostream &o, AForm &rhs);

#endif