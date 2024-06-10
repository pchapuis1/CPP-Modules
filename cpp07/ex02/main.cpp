#include "Array.hpp"

#define MAX_VAL 750
int main(int, char**)
{
    Array<int> a(10);
	Array<int> b;
	try{
		a[6] = 8;
		std::cout << a[6] << std::endl;
		std::cout << a[50] << std::endl;	
	}
	catch(std::exception &e){
		std::cerr << e.what() << '\n';
	}
	
	try{
		std::cout << b.size() << std::endl;
		std::cout << b[1] << std::endl;
	}
	catch(std::exception &e){
		std::cerr << e.what() << '\n';
	}
    return 0;
}