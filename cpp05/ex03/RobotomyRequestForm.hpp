#ifndef ROBOTOMYREQUESTFORM_HPP
# define ROBOTOMYREQUESTFORM_HPP

#include <iostream>
#include <cstdlib>
#include <ctime>
#include "AForm.hpp"

class RobotomyRequestForm: public AForm {

private:

public:
	RobotomyRequestForm();
	RobotomyRequestForm(const RobotomyRequestForm&);
	RobotomyRequestForm(std::string target);
	~RobotomyRequestForm();

	RobotomyRequestForm&	operator=(const RobotomyRequestForm& rhs);

	void execute(Bureaucrat const & executor) const;
};

#endif