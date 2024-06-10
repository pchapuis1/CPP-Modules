#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>

class Fixed {

private:
	int	_nb;
	static const int _nbBits = 8;

public:
	Fixed();
	Fixed(const Fixed&);
	~Fixed();

	Fixed& operator=(const Fixed& f);
	int getRawBits(void) const;
	void setRawBits(int const raw);
};

#endif