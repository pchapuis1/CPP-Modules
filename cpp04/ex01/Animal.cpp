#include "Animal.hpp"

Animal::Animal(): _type("animal"){
	std::cout << "Animal: Default constructor called" << std::endl;
}

Animal::Animal(const Animal &f){
	std::cout << "Animal: Copy constructor called" << std::endl;
	*this = f;
}

Animal::Animal(std::string type): _type(type){
	std::cout << "Animal: Type constructor called" << std::endl;
}

Animal::~Animal(){
	std::cout << "Animal: Destructor called" << std::endl;
}

Animal& Animal::operator=(const Animal& f){
	std::cout << "Animal: Copy assignment operator called" << std::endl;
	if (this != &f){
		_type = f._type;
	}
	return *this;
}

std::string	Animal::getType() const{
	return (_type);
}

void	Animal::makeSound() const{
	std::cout << "\"Animals noises\"" << std::endl;
}