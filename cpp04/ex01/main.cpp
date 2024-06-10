#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"
#include "Brain.hpp"

int main( void ){
	const Animal* t = new Dog();
	std::cout << std::endl;
	const Animal* y = new Cat();
	std::cout << std::endl;
	delete t;
	std::cout << std::endl;
	delete y;
	std::cout << std::endl;

	Dog chien;
	std::cout << std::endl;
	Cat chat;
	std::cout << std::endl;

	Dog & chien_ref = chien;
	std::cout << std::endl;

	Cat & chat_ref = chat;

	std::cout << std::endl << "creating copies" << std::endl;
	Dog chien_copy(chien_ref);
	Cat chat_copy(chat_ref);

//	Dog & chien_copy_ref = chien_copy;
//	Cat & chat_copy_ref = chat_copy;

	std::cout << std::endl << "comparing" << std::endl;
	chien.compare(chien_copy);
	chat.compare(chat_copy);
	std::cout << std::endl;
	std::cout << std::endl;


	Animal	*(tab[10]);
	for (int i = 0; i < 5; i++){
		tab[i] = new Dog;
		std::cout << std::endl;
	}
	for (int i = 5; i < 10; i++){
		tab[i] = new Cat;
		std::cout << std::endl;
	}
	std::cout << std::endl;
	
	std::cout << std::endl;
	for (int i = 0; i < 10; i++){
		delete tab[i];
		std::cout << std::endl;
	}
	return 0;
}