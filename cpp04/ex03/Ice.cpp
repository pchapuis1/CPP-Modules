#include "Ice.hpp"

Ice::Ice(): AMateria("ice"){
//	std::cout << "Ice: Default constructor called" << std::endl;
}

Ice::Ice(const Ice &rhs) : _type(rhs.getType()){
//	std::cout << "Ice: Copy constructor called" << std::endl;
}

Ice::~Ice(){
//	std::cout << "Ice: Destructor called" << std::endl;
}

Ice& Ice::operator=(const Ice& rhs){
//	std::cout << "Ice: Copy assignment operator called" << std::endl;
	(void)rhs;
	return *this;
}

std::string const & Ice::getType() const{
	return (this->_type);
}

Ice	*Ice::clone() const{
	Ice	*clone = new Ice;
	return (clone);
}

void Ice::use(ICharacter& target){
	std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}
