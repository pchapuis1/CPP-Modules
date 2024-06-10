#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main( void ){
	ScavTrap	a("Trap1");
	ScavTrap	b("Trap2");
	ScavTrap	c;
	ClapTrap	d("Clap");

	std::cout << std::endl;
	
	std::cout << d.getName() << std::endl;
	std::cout << d.getHitPoint() << std::endl;
	std::cout << d.getEnergyPoints() << std::endl;
	std::cout << d.getAttackDamage() << std::endl;
	std::cout << std::endl;

	std::cout << c.getName() << std::endl;
	std::cout << c.getHitPoint() << std::endl;
	std::cout << c.getEnergyPoints() << std::endl;
	std::cout << c.getAttackDamage() << std::endl;
	std::cout << std::endl;

	std::cout << a.getName() << std::endl;
	std::cout << a.getHitPoint() << std::endl;
	std::cout << a.getEnergyPoints() << std::endl;
	std::cout << a.getAttackDamage() << std::endl;
	std::cout << std::endl;

	a.attack(b.getName());
	b.takeDamage(a.getAttackDamage());
	std::cout << a.getEnergyPoints() << std::endl;
	std::cout << b.getHitPoint() << std::endl;
	std::cout << std::endl;
	c = b;
	std::cout << c.getName() << std::endl;
	std::cout << c.getHitPoint() << std::endl;
	std::cout << c.getEnergyPoints() << std::endl;
	std::cout << c.getAttackDamage() << std::endl;
	std::cout << std::endl;

	a.guardGate();
	std::cout << std::endl;
	
	return 0;
}