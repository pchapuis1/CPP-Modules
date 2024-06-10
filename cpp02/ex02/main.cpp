#include "Fixed.hpp"

int main( void ) {

	Fixed a;
	Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );
	
	std::cout << a << std::endl;
	std::cout << ++a << std::endl;
	std::cout << a << std::endl;
	std::cout << a++ << std::endl;
	std::cout << a << std::endl;
	
	std::cout << b << std::endl;
	std::cout << "Max entre a et b: "<< Fixed::max( a, b ) << std::endl;

	a = Fixed(5);
	Fixed c(5.5f);
	std::cout << a << std::endl;
	std::cout << c << std::endl;
	std::cout << "Max entre a et c: " << Fixed::max( a, c ) << std::endl;
	std::cout << "a et c sont egaux: " << (a == c) << std::endl;
	std::cout << "a est plus grand que c: " << (a>c) << std::endl;
	std::cout << "a est plus petit que c: " << (a<c) << std::endl;

	Fixed const i (5);
	Fixed const j(5.5f);
	std::cout << i << std::endl;
	std::cout << j << std::endl;
	std::cout << "Max entre i et j: " << Fixed::max( i, j ) << std::endl;
	std::cout << "i et j sont egaux: " << (i == j) << std::endl;
	std::cout << "i est plus grand que j: " << (i>j) << std::endl;
	std::cout << "i est plus petit que j: " << (i<j) << std::endl;

	Fixed	x(4);
	Fixed	y(10);
	Fixed	z(0);
	Fixed	w(5);

	std::cout << "Value of x: " << x << std::endl;
	std::cout << "Value of y: " << y << std::endl;
	std::cout << "Value of z: " << z << std::endl;
	y = Fixed(2);
	std::cout << "Value of y: " << y << std::endl;
	z = x / y;
	std::cout << "Value of z: " << z << std::endl;
	std::cout << "Value of w: " << w++ << std::endl;
	std::cout << "Value of w: " << w << std::endl;
	return 0;
}