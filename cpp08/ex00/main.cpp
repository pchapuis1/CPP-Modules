#include "easyfind.hpp"
#include <map>
#include <list>
#include <vector>


int	main() {
	std::list<int> lst1;
	lst1.push_back(1);
	lst1.push_back(17);
	lst1.push_back(42);
	lst1.push_back(654);

	std::cout << ::easyfind(lst1, 1) << std::endl;
	std::cout << ::easyfind(lst1, 17) << std::endl;
	std::cout << ::easyfind(lst1, 42) << std::endl;
	std::cout << ::easyfind(lst1, 0) << std::endl;
	return (0);
}