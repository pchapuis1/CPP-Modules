#include "Zombie.hpp"

Zombie* zombieHorde( int N, std::string name )
{
	int	i;

	if (N < 0)
		return (NULL);
	Zombie *zombie = new Zombie[N];
	i = 0;
	while (i < N)
	{
		zombie[i].setName(name);
		i ++;
	}
	return (zombie);
}