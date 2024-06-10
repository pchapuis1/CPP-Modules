#ifndef DOG_HPP
# define DOG_HPP

#include <iostream>
#include "Animal.hpp"

class Dog: public Animal {

public:
	Dog();
	Dog(const Dog&);
	~Dog();

	Dog& operator=(const Dog& f);

	virtual void	makeSound()const;	
};

#endif