#include "Zombie.hpp"

Zombie* zombieHorde( int N, std::string name );

int	main(void)
{
	Zombie* zombie;
	int		i;
	int		N;

	N = 5;
	zombie = zombieHorde(N, "test");
	i = 0;
	while (i < N)
	{
		zombie[i].announce();
		i ++;
	}
	std::cout << std::endl;
	delete [] zombie;
	return (0);
}