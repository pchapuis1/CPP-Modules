#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(): AForm("RobotomyRequestForm", "target", 72, 45){
//	std::cout << "RobotomyRequestForm: Default constructor called" << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &rhs): AForm(rhs){
	// *this = rhs;
//	std::cout << "RobotomyRequestForm: Copy constructor called" << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(std::string target):  AForm("RobotomyRequestForm", target, 72, 45){
//	std::cout << "RobotomyRequestForm: setup constructor called" << std::endl;
}

RobotomyRequestForm::~RobotomyRequestForm(){
//	std::cout << "RobotomyRequestForm: Destructor called" << std::endl;
}

RobotomyRequestForm&	RobotomyRequestForm::operator=(const RobotomyRequestForm& rhs) {
	if (this != &rhs) {
		*this = rhs;	
	}
	return *this;
}

void RobotomyRequestForm::execute(Bureaucrat const & executor) const{
	static bool seed;

	if (seed == false){
		std::srand(std::time(0));
		seed = true;
	}
	if (this->getSign()){
		if (this->getGradeExec() >= executor.getGrade()){
			int	randomValue = std::rand();
			std::cout << "* drilling noises *" << std::endl;
			if (randomValue % 2 == 0)
				std::cout << this->getTarget() << " has been robotomized successfully 50\% of the time." << std::endl;
			else
				std::cout << this->getTarget() << " has not been robotomized." << std::endl;
		}	
		else	
			throw GradeTooLowException();
	}
	else
		throw NotSign();
}