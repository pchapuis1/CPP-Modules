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
};

std::ostream& operator<<(std::ostream &o, Fixed const &f);


#endif