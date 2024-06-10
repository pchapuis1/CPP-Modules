#include "AAnimal.hpp"

AAnimal::AAnimal(): _type("aanimal"){
	std::cout << "AAnimal: Default constructor called" << std::endl;
}

AAnimal::AAnimal(const AAnimal &f){
	std::cout << "AAnimal: Copy constructor called" << std::endl;
	*this = f;
}

AAnimal::AAnimal(std::string type): _type(type){
	std::cout << "AAnimal: Type constructor called" << std::endl;
}

AAnimal::~AAnimal(){
	std::cout << "AAnimal: Destructor called" << std::endl;
}

AAnimal& AAnimal::operator=(const AAnimal& f){
	std::cout << "AAnimal: Copy assignment operator called" << std::endl;
	if (this != &f){
		_type = f._type;
	}
	return *this;
}

std::string	AAnimal::getType() const{
	return (_type);
}

void	AAnimal::makeSound() const{
	std::cout << "\"AAnimals noises\"" << std::endl;
}