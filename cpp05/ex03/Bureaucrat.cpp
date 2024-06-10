#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(): _name("default"), _grade(150){
//	std::cout << "Bureaucrat: Default constructor called" << std::endl;
}

Bureaucrat::Bureaucrat(const Bureaucrat &rhs): _name(rhs._name), _grade(rhs._grade){
//	std::cout << "Bureaucrat: Copy constructor called" << std::endl;
}

Bureaucrat::Bureaucrat(std::string name, int grade): _name(name), _grade(grade){
	if (_grade > 150)
		throw (GradeTooLowException());
	if (_grade < 1)
		throw (GradeTooHighException());
//	std::cout << "Bureaucrat: setup constructor called" << std::endl;
}

Bureaucrat::~Bureaucrat(){
//	std::cout << "Bureaucrat: Destructor called" << std::endl;
}

Bureaucrat& Bureaucrat::operator=(const Bureaucrat& rhs){
//	std::cout << "Bureaucrat: Copy assignment operator called" << std::endl;
	if (this != &rhs){
		_grade = rhs._grade;
	}
	return *this;
}

std::ostream&	operator<<(std::ostream &o, Bureaucrat &rhs) {
	o << rhs.getName() << ", bureaucrat grade " << rhs.getGrade() << std::endl;
	return o;
}

const char*	Bureaucrat::GradeTooHighException::what() const throw(){
	return ("The grade is too high!");
}

const char*	Bureaucrat::GradeTooLowException::what() const throw(){
	return ("The grade is too low!");
}

std::string	Bureaucrat::getName() const{
	return (_name);
}

int	Bureaucrat::getGrade() const{
	return (_grade);
}

void Bureaucrat::Increment(int nb){
	if (this->_grade - nb < 1)
		throw (GradeTooHighException());
	this->_grade -= nb;
}

void Bureaucrat::Increment(){
	if (this->_grade == 1)
		throw (GradeTooHighException());
	this->_grade --;
}

void Bureaucrat::Decrement(int nb){
	if (this->_grade + nb > 150)
		throw (GradeTooLowException());
	this->_grade += nb;
}

void Bureaucrat::Decrement(){
	if (this->_grade == 150)
		throw (GradeTooLowException());
	this->_grade ++;
}

void	Bureaucrat::signForm(AForm &rhs){
	try {
		rhs.beSigned(*this);
		std::cout << this->getName() << " signed " << rhs.getName() << "!" << std::endl;
	}
	catch (std::exception& e) {
		std::cout << this->getName() << " couldn't sign " << rhs.getName() << " because " << e.what() << std::endl;
	}
}

void Bureaucrat::executeForm(AForm const &form){
	try {
		form.execute(*this);
		std::cout << this->getName() << " executed " << form.getName() << "!"<< std::endl;
	}
	catch (std::exception& e){
		std::cout << this->getName() << " couldn't execute " << form.getName() << "! " << e.what() << std::endl;
	}
}