#ifndef PRESIDENTIALPARDONFORM_HPP
# define PRESIDENTIALPARDONFORM_HPP

#include <iostream>
#include "AForm.hpp"

class PresidentialPardonForm: public AForm {

private:

public:
	PresidentialPardonForm();
	PresidentialPardonForm(const PresidentialPardonForm&);
	PresidentialPardonForm(std::string target);
	virtual ~PresidentialPardonForm();

	PresidentialPardonForm&	operator=(const PresidentialPardonForm& rhs);

	void execute(Bureaucrat const & executor) const;
};

#endif