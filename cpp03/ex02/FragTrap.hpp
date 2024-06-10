#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

#include <iostream>
#include "ClapTrap.hpp"

class FragTrap: public ClapTrap {

private:

public:
	FragTrap();
	FragTrap(const FragTrap&);
	FragTrap(std::string name);
	~FragTrap();
	
	FragTrap& operator=(const FragTrap& f);

	void	highFivesGuys();
};
#endif