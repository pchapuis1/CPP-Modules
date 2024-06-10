#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main( void ){
	/*const Animal* meta = new Dog();
	const Animal* test(meta);

	test->makeSound();
	delete meta;*/

	const Animal* meta = new Animal();
	std::cout << std::endl;
	const Animal* j = new Dog();
	std::cout << std::endl;
	const Animal* i = new Cat();
	std::cout << std::endl;
	std::cout << meta->getType() << " " << std::endl;
	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;
	std::cout << std::endl;
	meta->makeSound();
	j->makeSound();
	i->makeSound();
	std::cout << std::endl;
	std::cout << std::endl;
	const WrongAnimal* wrongMeta = new WrongAnimal();
	std::cout << std::endl;
	const WrongAnimal* wrongI = new WrongCat();
	const WrongCat* wrongT = new WrongCat();
	std::cout << std::endl;
	std::cout << wrongMeta->getType() << " " << std::endl;
	std::cout << wrongI->getType() << " " << std::endl;
	std::cout << wrongT->getType() << " " << std::endl;
	std::cout << std::endl;
	wrongMeta->makeSound();
	wrongI->makeSound();
	wrongT->makeSound();
	std::cout << std::endl;

	delete meta;
	std::cout << std::endl;
	delete	j;
	std::cout << std::endl;
	delete	i;
	std::cout << std::endl;
	delete	wrongMeta;
	std::cout << std::endl;
	delete	wrongI;
	std::cout << std::endl;
	delete wrongT;
	return 0;
}