#include "AForm.hpp"

AForm::AForm(): _name("default"), _target("target"), _gradeSign(150), _gradeExec(150), _signed(false){
//	std::cout << "AForm: Default constructor called" << std::endl;
}

AForm::AForm(const AForm &rhs): _name(rhs._name), _gradeSign(rhs._gradeSign), _gradeExec(rhs._gradeExec){
	_signed = rhs._signed;
	_target = rhs._target;
//	std::cout << "AForm: Copy constructor called" << std::endl;
}

AForm::AForm(std::string name, std::string target, int gradeSign, int gradeExec): _name(name), _target(target), _gradeSign(gradeSign), _gradeExec(gradeExec), _signed(false){
	if (_gradeSign > 150)
		throw (GradeTooLowException());
	if (_gradeSign < 1)
		throw (GradeTooHighException());
	if (_gradeExec > 150)
		throw (GradeTooLowException());
	if (_gradeExec < 1)
		throw (GradeTooHighException());
//	std::cout << "AForm: setup constructor called" << std::endl;
}

AForm::~AForm(){
//	std::cout << "AForm: Destructor called" << std::endl;
}

AForm& AForm::operator=(const AForm& rhs){
//	std::cout << "AForm: Copy assignment operator called" << std::endl;
	if (this != &rhs){
		_signed = rhs._signed;
		_target = rhs._target;
	}
	return *this;
}

std::ostream&	operator<<(std::ostream &o, AForm &rhs) {
	o << "The Aform " << rhs.getName() << " is" ;
	if (rhs.getSign())
		o << " signed,";
	else 
		o << " not signed,";
	o << " is grade who required to be sign is: " << rhs.getGradeSign() << " and is grade to be execute is: " << rhs.getGradeExec() << std::endl;
	return o;
}
const char*	AForm::GradeTooHighException::what() const throw(){
	return ("The grade is too high!");
}

const char*	AForm::GradeTooLowException::what() const throw(){
	return ("The grade is too low!");
}

const char*	AForm::AlreadySign::what() const throw(){
	return ("The Aform is already sign!");
}

const char*	AForm::NotSign::what() const throw(){
	return ("The Aform is not sign!");
}

std::string AForm::getName() const{
	return _name;
}

std::string	AForm::getTarget() const{
	return _target;
}

int	AForm::getGradeSign() const{
	return _gradeSign;
}

int	AForm::getGradeExec() const{
	return _gradeExec;
}

bool	AForm::getSign() const{
	return _signed;
}

void AForm::beSigned(Bureaucrat &rhs){
	if (this->getGradeSign() >= rhs.getGrade()){
		if (this->_signed)
			throw AlreadySign();
		else	
			this->_signed = true;
	}
	else
		throw GradeTooLowException();
}
