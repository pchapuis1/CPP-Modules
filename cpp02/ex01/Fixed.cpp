#include "Fixed.hpp"

Fixed::Fixed(): _nb(0){
	std::cout << "Default constructor called" << std::endl;
}

Fixed::~Fixed(){
	std::cout << "Destructor called" << std::endl;
}

Fixed::Fixed(const Fixed &f){
	std::cout << "Copy constructor called" << std::endl;
	*this = f;
}

Fixed::Fixed(const int nb){
	std::cout << "Int constructor called" << std::endl;
	this->_nb = nb * (1 << _nbBits);
}

Fixed::Fixed(const float nb){
	std::cout << "Float constructor called" << std::endl;
	this->_nb = roundf(nb * (1 << _nbBits));
}

int Fixed::getRawBits(void) const{
	return (this->_nb);
}

void Fixed::setRawBits(int const raw){
	std::cout << "setRawBits member function called" << std::endl;
	this->_nb = raw;
}

Fixed& Fixed::operator=(const Fixed& f){
	std::cout << "Copy assignment operator called" << std::endl;
	if (this != &f){
		_nb = f.getRawBits();
	}
	return *this;
}

float Fixed::toFloat( void ) const{
	return ((float)this->_nb  / (float)(1 << _nbBits));
}

int Fixed::toInt( void ) const{
	return (this->_nb / (1 << _nbBits));
}

std::ostream&	operator<<(std::ostream &o, Fixed const &f) {
	o << f.toFloat();
	return o;
}