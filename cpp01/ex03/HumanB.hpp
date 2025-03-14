#ifndef HUMANB_HPP
# define HUMANB_HPP

#include "Weapon.hpp"
#include <iostream>

class HumanB {

private:
	std::string	_name;
	Weapon	*_weapon;

public:
	HumanB();
	HumanB(std::string name);
	~HumanB();

	void	attack(void);
	void	setWeapon(Weapon &weapon);
};

#endif