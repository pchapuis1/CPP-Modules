#include "WrongCat.hpp"

WrongCat::WrongCat(): WrongAnimal("WrongCat"){
	std::cout << "WrongCat: Default constructor called" << std::endl;
}

WrongCat::WrongCat(const WrongCat &f){
	std::cout << "WrongCat: Copy constructor called" << std::endl;
	*this = f;
}

WrongCat::~WrongCat(){
	std::cout << "WrongCat: Destructor called" << std::endl;
}

WrongCat& WrongCat::operator=(const WrongCat& f){
	std::cout << "WrongCat: Copy assignment operator called" << std::endl;
	if (this != &f){
		_type = f._type;
	}
	return *this;
}

void	WrongCat::makeSound()const{
	std::cout << "\"WrongCat noises\"" << std::endl;
}
