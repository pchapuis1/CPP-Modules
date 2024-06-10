#include "Span.hpp"

int	main() {
	try{
		std::cout << "--------------- TEST 1 ---------------" << std::endl;
		Span sp = Span(9);
		sp.addNumber(6);
		sp.addNumber(3);
		sp.addNumber(17);
		sp.addNumber(9);
		sp.addNumber(11);
		std::cout << sp.shortestSpan() << std::endl;
		std::cout << sp.longestSpan() << std::endl;
	}
	catch (std::exception& e){
		std::cout << "exception" << std::endl;
	}
	try {
		std::cout << "--------------- TEST 2 ---------------" << std::endl;
		Span sp1 = Span(5);
		std::vector<int>::iterator it;
		sp1.addNumber(it, 4, 1);
		sp1.addNumber(11);
		std::cout << sp1.shortestSpan() << std::endl;
		std::cout << sp1.longestSpan() << std::endl;
		sp1.addNumber(2);
	}
	catch (std::exception& e){
		std::cout << "exception" << std::endl;
	}
	try {
		std::cout << "--------------- TEST 3 ---------------" << std::endl;
		Span sp2 = Span(10001);
		std::vector<int>::iterator it;
		std::vector<int> vct(10000, 1);
		sp2.addNumber(it, vct);
		sp2.addNumber(100);
		std::cout << sp2.shortestSpan() << std::endl;
		std::cout << sp2.longestSpan() << std::endl;
		sp2.addNumber(2);
	}
	catch (std::exception& e){
		std::cout << "exception" << std::endl;
	}
	return (0);
}