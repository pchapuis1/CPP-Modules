#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

int	countA = 0;
int	countB = 0;
int	countC = 0;

Base* generate(void){
	static bool seed;

	if (seed == false){
		std::srand(std::time(0));
		seed = true;
	}
	int	randomValue = std::rand() % 3;
	if (randomValue == 0){
		std::cout << "A" << std::endl;
		countA ++;
		return new A();
	}
	else if (randomValue == 1){
		std::cout << "B" << std::endl;
		countB ++;
		return new B();
	}
	else{
		std::cout << "C" << std::endl;
		countC ++;
		return new C();
	}
}

void	identify(Base* p){
	if (dynamic_cast<A *>(p))
		std::cout << "type A" << std::endl;
	if (dynamic_cast<B *>(p))
		std::cout << "type B" << std::endl;
	if (dynamic_cast<C *>(p))
		std::cout << "type C" << std::endl;
}

void	identify(Base& p){
	A	a;
	B	b;
	C	c;
	try {
		a = dynamic_cast<A &>(p);
		std::cout << "type A" << std::endl;
	}
	catch (std::exception &e){
		try {
			b = dynamic_cast<B &>(p);
			std::cout << "type B" << std::endl;
		}
		catch (std::exception &e) {
			try {
				c = dynamic_cast<C &>(p);
				std::cout << "type C" << std::endl;
			}
			catch (std::exception &e) {
			}
		}
	}
}



int	main() {
	for (int i = 0; i < 1000; i ++){
		Base* base = generate();
		identify(base);
		identify(*base);
		delete base;
		std::cout << "------------" << std::endl;
	}
	std::cout << countA / 10 << "% of A." << std::endl;
	std::cout << countB / 10<< "% of B." << std::endl;
	std::cout << countC / 10<< "% of C." << std::endl;
	return (0);
}