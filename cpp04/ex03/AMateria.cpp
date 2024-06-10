#include "AMateria.hpp"

AMateria::AMateria(): _type("amateria"){
//	std::cout << "AMateria: Default constructor called" << std::endl;
}

AMateria::AMateria(const AMateria &rhs) : _type(rhs._type){
//	std::cout << "AMateria: Copy constructor called" << std::endl;
}

AMateria::AMateria(std::string const &type): _type(type){
//	std::cout << "AMateria: Type constructor called" << std::endl;
}

AMateria::~AMateria(){
//	std::cout << "AMateria: Destructor called" << std::endl;
}

std::string const & AMateria::getType() const{
	return (this->_type);
}

void AMateria::use(ICharacter& target){
	std::cout << "The target is " << target.getName() << std::endl;
}
