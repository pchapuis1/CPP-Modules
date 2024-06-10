#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>
#include <cmath>

class Fixed {

private:
	int	_nb;
	static const int _nbBits = 8;

public:
	Fixed();
	Fixed(const Fixed&);
	Fixed(const int nb);
	Fixed(const float nb);
	~Fixed();

	Fixed& operator=(const Fixed& f);
	int getRawBits(void) const;
	void setRawBits(int const raw);
	float toFloat( void ) const;
	int toInt( void ) const;


	Fixed operator+(const Fixed& f) const;
	Fixed operator-(const Fixed& f) const;
	Fixed operator*(const Fixed& f) const;
	Fixed operator/(const Fixed& f) const;

	int operator<(const Fixed& f) const;
	int operator>(const Fixed& f) const;
	int operator<=(const Fixed& f) const;
	int operator>=(const Fixed& f) const;
	int operator==(const Fixed& f) const;
	int operator!=(const Fixed& f) const;

	Fixed operator++();
	Fixed operator--();
	Fixed operator++(int);
	Fixed operator--(int);

	static Fixed	min(Fixed& a, Fixed& b);
	static Fixed	max(Fixed& a, Fixed& b);
	static Fixed	min(const Fixed& a, const Fixed& b);
	static Fixed	max(const Fixed& a, const Fixed& b);

};

std::ostream& operator<<(std::ostream &o, Fixed const &f);


#endif