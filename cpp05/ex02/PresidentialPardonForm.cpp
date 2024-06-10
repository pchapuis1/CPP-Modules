#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(): AForm("PresidentialPardonForm", "target", 25, 5){
//	std::cout << "PresidentialPardonForm: Default constructor called" << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &rhs): AForm(rhs){
	// *this = rhs;
//	std::cout << "PresidentialPardonForm: Copy constructor called" << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(std::string target):  AForm("PresidentialPardonForm", target, 25, 5){
//	std::cout << "PresidentialPardonForm: setup constructor called" << std::endl;
}

PresidentialPardonForm::~PresidentialPardonForm(){
//	std::cout << "PresidentialPardonForm: Destructor called" << std::endl;
}

PresidentialPardonForm&	PresidentialPardonForm::operator=(const PresidentialPardonForm& rhs) {
	if (this != &rhs) {
		*this = rhs;	
	}
	return *this;
}

void PresidentialPardonForm::execute(Bureaucrat const & executor) const{
	if (this->getSign()){
		if (this->getGradeExec() >= executor.getGrade())
			std::cout << this->getTarget() << " has been pardoned by Zaphod Beeblebrox." << std::endl;
		else	
			throw GradeTooLowException();
	}
	else
		throw NotSign();
}