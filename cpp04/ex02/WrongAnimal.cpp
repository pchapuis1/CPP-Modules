#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal(): _type("WrongAnimal"){
	std::cout << "WrongAnimal: Default constructor called" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal &f){
	std::cout << "WrongAnimal: Copy constructor called" << std::endl;
	*this = f;
}

WrongAnimal::WrongAnimal(std::string type): _type(type){
	std::cout << "WrongAnimal: Type constructor called" << std::endl;
}

WrongAnimal::~WrongAnimal(){
	std::cout << "WrongAnimal: Destructor called" << std::endl;
}

WrongAnimal& WrongAnimal::operator=(const WrongAnimal& f){
	std::cout << "WrongAnimal: Copy assignment operator called" << std::endl;
	if (this != &f){
		_type = f._type;
	}
	return *this;
}

std::string	WrongAnimal::getType() const{
	return (_type);
}

void	WrongAnimal::makeSound() const{
	std::cout << "\"WrongAnimals noises\"" << std::endl;
}