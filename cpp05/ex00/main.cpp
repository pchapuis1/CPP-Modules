#include "Bureaucrat.hpp"

int	main() {
	try {
		Bureaucrat	pippo("pippo", 1);
		std::cout << pippo;
	}
	catch (std::exception& e) {
		std::cout << "Error: " << e.what() << std::endl;
	}

	try {
		Bureaucrat	poppi("poppi", -42);
		std::cout << poppi;
	}
	catch (std::exception& e) {
		std::cout << "Error: " << e.what() << std::endl;
	}

	try {
		Bureaucrat	poppi("poppi", 4242);
		std::cout << poppi;
	}
	catch (std::exception& e) {
		std::cout << "Error: " << e.what() << std::endl;
	}

	try {
		Bureaucrat	pippo("pippo", 12);
		std::cout << pippo;
		pippo.Increment(10);
		std::cout << pippo;
		pippo.Increment();
		std::cout << pippo;
		pippo.Increment(); // too high!
		std::cout << pippo;
	}
	catch (std::exception& e) {
		std::cout << "Error: " << e.what() << std::endl;
	}
	
	try {
		Bureaucrat	pippo("pippo", 139);
		std::cout << pippo;
		pippo.Decrement(10);
		std::cout << pippo;
		pippo.Decrement();
		std::cout << pippo;
		pippo.Decrement(); // too low!
		std::cout << pippo;
	}
	catch (std::exception& e) {
		std::cout << "Error: " << e.what() << std::endl;
	}
	return (0);
}