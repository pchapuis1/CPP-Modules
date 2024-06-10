#include "Fixed.hpp"

Fixed::Fixed(): _nb(0){
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const Fixed &f){
	std::cout << "Copy constructor called" << std::endl;
	*this = f;
}

Fixed::~Fixed(){
	std::cout << "Destructor called" << std::endl;
}

Fixed& Fixed::operator=(const Fixed& f){
	std::cout << "Copy assignment operator called" << std::endl;
	if (this != &f){
		_nb = f.getRawBits();
	}
	return *this;
}

int Fixed::getRawBits(void) const{
	std::cout << "getRawBits member function called" << std::endl;
	return (this->_nb);
}

void Fixed::setRawBits(int const raw){
	std::cout << "setRawBits member function called" << std::endl;
	this->_nb = raw;
}
