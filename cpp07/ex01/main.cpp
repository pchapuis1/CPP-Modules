#include "iter.hpp"

void	print_int(const int&	x){
	std::cout << x << std::endl;
}

void	print(const std::string& str){
	std::cout << str << std::endl;
}

int	main() {
	int	tab[] = {1, 2, 3, 4, 5};
	std::string	tab1[] = {"1", "2", "3", "4", "5"};
	::iter(tab, 5, print_int);
	::iter(tab1, 5, print);
	return (0);
}