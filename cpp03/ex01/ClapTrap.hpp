#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

#include <iostream>

class ClapTrap {

protected:
	std::string _name;
	int	_hitPoint;
	int	_energyPoints;
	int	_attackDamage;

public:
	ClapTrap();
	ClapTrap(const ClapTrap&);
	ClapTrap(std::string name);
	ClapTrap(std::string name, int hitPoints, int energyPoints, int attackDamage);
	~ClapTrap();

	ClapTrap& operator=(const ClapTrap& rhs);

	void attack(const std::string& target);
	void takeDamage(unsigned int amount);
	void beRepaired(unsigned int amount);

	int	getAttackDamage(void) const;
	std::string	getName(void) const;
	int	getEnergyPoints(void) const;
	int	getHitPoint(void) const;
};



#endif