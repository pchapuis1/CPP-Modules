#include "Zombie.hpp"

Zombie*	newZombie(std::string name);
void	randomChump(std::string name);

int	main(void)
{
	Zombie	z1("Zombie1");
	z1.announce();
	Zombie	z2("Zombie2");
	z2.announce();
	Zombie	z3;
	z3.announce();
	std::cout << std::endl;

	randomChump("randomChumpZ");
	std::cout << std::endl;

	Zombie	*TEST;
	TEST = newZombie("TEST");
	TEST->announce();
	delete(TEST);
	return (0);
}