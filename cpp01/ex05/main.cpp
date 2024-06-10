#include "Harl.hpp"

int	main(int argc, char **argv)
{
	Harl	functions;
	int	i = 1;

	if (argc < 2)
	{
		std::cerr << "Usage: ./harl [complain]..." << std::endl;
	}
	while (i < argc)
	{
		functions.complain(argv[i]);
		i ++;
	}
	return (0);
}