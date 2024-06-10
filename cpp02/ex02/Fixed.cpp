#include "Fixed.hpp"

Fixed::Fixed(): _nb(0){
	//std::cout << "Default constructor called" << std::endl;
}

Fixed::~Fixed(){
	//std::cout << "Destructor called" << std::endl;
}

Fixed::Fixed(const Fixed &f){
//	std::cout << "Copy constructor called" << std::endl;
	*this = f;
}

Fixed::Fixed(const int nb){
//	std::cout << "Int constructor called" << std::endl;
	this->_nb = nb * (1 << _nbBits);
}

Fixed::Fixed(const float nb){
//	std::cout << "Float constructor called" << std::endl;
	this->_nb = roundf(nb * (1 << _nbBits));
}

int Fixed::getRawBits(void) const{
	return (this->_nb);
}

void Fixed::setRawBits(int const raw){
//	std::cout << "setRawBits member function called" << std::endl;
	this->_nb = raw;
}

Fixed& Fixed::operator=(const Fixed& f){
//	std::cout << "Copy assignment operator called" << std::endl;
	if (this != &f){
		this->_nb = f.getRawBits();
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

Fixed	Fixed::min(Fixed& a, Fixed& b){
	if (a._nb > b._nb)
		return (b.toFloat());
	return (a);
}

Fixed	Fixed::max(Fixed& a, Fixed& b){
	if (b._nb > a._nb)
		return (b.toFloat());
	return (a);
}

Fixed	Fixed::min(const Fixed& a, const Fixed& b){
	if (a._nb > b._nb)
		return (b.toFloat());
	return (a);
}

Fixed	Fixed::max(const Fixed& a, const Fixed& b){
	if (b._nb > a._nb)
		return (b.toFloat());
	return (a);
}

Fixed Fixed::operator+(const Fixed& f) const{
	return Fixed(this->toFloat() + f.toFloat());
}

Fixed Fixed::operator-(const Fixed& f) const{
	return Fixed(this->toFloat() - f.toFloat());
}

Fixed Fixed::operator*(const Fixed& f) const{
	return Fixed(this->toFloat() * f.toFloat());
}

Fixed Fixed::operator/(const Fixed& f) const{
	return Fixed(this->toFloat() / f.toFloat());
}

int Fixed::operator<(const Fixed& f) const{
	if (this->toFloat() > f.toFloat())
		return (0);
	return (1);
}

int Fixed::operator>(const Fixed& f) const{
	if (this->toFloat() > f.toFloat())
		return (1);
	return (0);
}

int Fixed::operator<=(const Fixed& f) const{
	if (this->toFloat() >= f.toFloat())
		return (0);
	return (1);
}

int Fixed::operator>=(const Fixed& f) const{
	if (this->toFloat() >= f.toFloat())
		return (1);
	return (0);
}

int Fixed::operator==(const Fixed& f) const{
	if (this->toFloat() == f.toFloat())
		return (1);
	return (0);
}

int Fixed::operator!=(const Fixed& f) const{
	if (this->toFloat() != f.toFloat())
		return (1);
	return (0);
}

Fixed Fixed::operator++(){
	this->_nb ++;
	return Fixed(this->toFloat());
}

Fixed Fixed::operator--(){
	this->_nb --;
	return Fixed(this->toFloat());
}

Fixed Fixed::operator++(int){
	float	tmp;

	tmp = this->toFloat();
	this->_nb ++;
	return Fixed(tmp);
}

Fixed Fixed::operator--(int){
	float	tmp;

	tmp = this->toFloat();
	this->_nb --;
	return Fixed(tmp);
}
