#include "Form.hpp"

Form::Form(): _name("default"), _gradeSign(150), _gradeExec(150), _signed(false){
//	std::cout << "Form: Default constructor called" << std::endl;
}

Form::Form(const Form &rhs): _name(rhs._name), _gradeSign(rhs._gradeSign), _gradeExec(rhs._gradeExec){
	_signed = rhs._signed;
//	std::cout << "Form: Copy constructor called" << std::endl;
}

Form::Form(std::string name, int gradeSign, int gradeExec): _name(name), _gradeSign(gradeSign), _gradeExec(gradeExec), _signed(false){
	if (_gradeSign > 150)
		throw (GradeTooLowException());
	if (_gradeSign < 1)
		throw (GradeTooHighException());
	if (_gradeExec > 150)
		throw (GradeTooLowException());
	if (_gradeExec < 1)
		throw (GradeTooHighException());
//	std::cout << "Form: setup constructor called" << std::endl;
}

Form::~Form(){
//	std::cout << "Form: Destructor called" << std::endl;
}

Form& Form::operator=(const Form& rhs){
//	std::cout << "Form: Copy assignment operator called" << std::endl;
	if (this != &rhs){
		_signed = rhs._signed;
	}
	return *this;
}

std::ostream&	operator<<(std::ostream &o, Form &rhs) {
	o << "The form " << rhs.getName() << " is" ;
	if (rhs.getSign())
		o << " signed,";
	else 
		o << " not signed,";
	o << " is grade who required to be sign is: " << rhs.getGradeSign() << " and is grade to be execute is: " << rhs.getGradeExec() << std::endl;
	return o;
}
const char*	Form::GradeTooHighException::what() const throw(){
	return ("The grade is too high!");
}

const char*	Form::GradeTooLowException::what() const throw(){
	return ("The grade is too low!");
}

const char*	Form::AlreadySign::what() const throw(){
	return ("The form is already sign!");
}

std::string	Form::getName(){
	return _name;
}

int	Form::getGradeSign(){
	return _gradeSign;
}

int	Form::getGradeExec(){
	return _gradeExec;
}

bool	Form::getSign(){
	return _signed;
}

void Form::beSigned(Bureaucrat &rhs){
	if (this->getGradeSign() >= rhs.getGrade()){
		if (this->_signed)
			throw AlreadySign();
		else	
			this->_signed = true;
	}
	else
		throw GradeTooLowException();
}
