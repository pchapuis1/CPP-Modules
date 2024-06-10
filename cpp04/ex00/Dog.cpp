#include "Dog.hpp"

Dog::Dog(): Animal("Dog"){
	std::cout << "Dog: Default constructor called" << std::endl;
}

Dog::Dog(const Dog &f){
	std::cout << "Dog: Copy constructor called" << std::endl;
	*this = f;
}

Dog::~Dog(){
	std::cout << "Dog: Destructor called" << std::endl;
}

Dog& Dog::operator=(const Dog& f){
	std::cout << "Dog: Copy assignment operator called" << std::endl;
	if (this != &f){
		_type = f._type;
	}
	return *this;
}

void	Dog::makeSound()const {
	std::cout << "\"Dog noises\"" << std::endl;
}