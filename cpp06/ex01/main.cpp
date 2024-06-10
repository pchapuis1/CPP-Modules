#include "Serializer.hpp"

int	main() {
	Data test;
	Data *res;
	test.nb = 2;
	test.txt = "TEST";
	std::cout << test.nb << " | " << test.txt << std::endl;
	
	res = Serializer::deserialize(Serializer::serialize(&test));
	
	std::cout << res->nb << " | " << res->txt << std::endl;
	return (0);
}