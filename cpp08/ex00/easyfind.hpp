#ifndef EASYFIND_HPP
# define EASYFIND_HPP

#include <iostream>
#include <algorithm>

template< typename T >
int	easyfind(T &x, int	n){
	typename T::iterator it;

	it = std::find(x.begin(), x.end(), n);
	if (it == x.end())
		return -1;
	return *it;
}

#endif