#include "Cure.hpp"

Cure::Cure(): AMateria("cure"){
//	std::cout << "Cure: Default constructor called" << std::endl;
}

Cure::Cure(const Cure &rhs){
//	std::cout << "Cure: Copy constructor called" << std::endl;
	*this = rhs;
}

Cure::~Cure(){
//	std::cout << "Cure: Destructor called" << std::endl;
}

Cure& Cure::operator=(const Cure& rhs){
//	std::cout << "Cure: Copy assignment operator called" << std::endl;
	if (this != &rhs){
		_type = rhs._type;
	}
	return *this;
}

std::string const & Cure::getType() const{
	return (this->_type);
}

Cure	*Cure::clone() const{
	Cure	*clone = new Cure;
	return (clone);
}

void Cure::use(ICharacter& target){
	std::cout << "* heals " << target.getName() << "’s wounds *" << std::endl;
}