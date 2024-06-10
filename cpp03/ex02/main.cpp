#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main( void ){
	FragTrap	a("Trap1");
	FragTrap	b("Trap2");
	FragTrap	c;
	c = a;
	std::cout << std::endl;

	std::cout << a.getEnergyPoints() << std::endl;
	a.attack(b.getName());
	b.takeDamage(a.getAttackDamage());
	std::cout << a.getEnergyPoints() << std::endl;
	std::cout << b.getHitPoint() << std::endl;
	std::cout << std::endl;

	a.highFivesGuys();
	b.highFivesGuys();
	std::cout << std::endl;

	return 0;
}