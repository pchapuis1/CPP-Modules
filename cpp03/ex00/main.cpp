#include "ClapTrap.hpp"

int main( void ){
	ClapTrap	a("Trap1");
	ClapTrap	b("Trap2");
	ClapTrap	c;
	c = a;

	std::cout << a.getEnergyPoints() << std::endl;
	a.attack(b.getName());
	b.takeDamage(a.getAttackDamage());
	std::cout << a.getEnergyPoints() << std::endl;
	std::cout << b.getHitPoint() << std::endl;
	int	i = 0;
	while (i < 10)
	{
		a.attack(b.getName());
		std::cout << a.getEnergyPoints() << std::endl;
		i ++;
	}
	return 0;
}