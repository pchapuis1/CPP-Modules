#include "Cat.hpp"

Cat::Cat(): Animal("Cat"){
	std::cout << "Cat: Default constructor called" << std::endl;
}

Cat::Cat(const Cat &f){
	std::cout << "Cat: Copy constructor called" << std::endl;
	*this = f;
}

Cat::~Cat(){
	std::cout << "Cat: Destructor called" << std::endl;
}

Cat& Cat::operator=(const Cat& f){
	std::cout << "Cat: Copy assignment operator called" << std::endl;
	if (this != &f){
		_type = f._type;
	}
	return *this;
}

void	Cat::makeSound()const{
	std::cout << "\"Cat noises\"" << std::endl;
}
