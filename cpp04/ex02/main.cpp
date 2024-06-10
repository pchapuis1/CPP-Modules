#include "AAnimal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"
#include "Brain.hpp"

int main( void ){
	const AAnimal* dog = new Dog();
	const AAnimal* cat = new Cat();

	std::cout << std::endl;
	delete dog;
	delete cat;

	std::cout << std::endl;
	std::cout << std::endl;
	AAnimal	*(tab[10]);
	for (int i = 0; i < 5; i++){
		tab[i] = new Dog;
		std::cout << std::endl;
	}
	for (int i = 5; i < 10; i++){
		tab[i] = new Cat;
		std::cout << std::endl;
	}

	std::cout << std::endl;
	for (int i = 0; i < 10; i ++){
		tab[i]->makeSound();
	}
	
	std::cout << std::endl;
	for (int i = 0; i < 10; i++){
		delete tab[i];
		std::cout << std::endl;
	}


	// const AAnimal a = new AAnimal();
	// AAnimal test;

	return 0;
}