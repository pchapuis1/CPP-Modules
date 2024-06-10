#ifndef DOG_HPP
# define DOG_HPP

#include <iostream>
#include "AAnimal.hpp"
#include "Brain.hpp"

class Dog: public AAnimal {

private:
	Brain	*_brain;

public:
	Dog();
	Dog(const Dog&);
	~Dog();

	Dog& operator=(const Dog& f);

	virtual void	makeSound()const;	

	void compare(Dog const & other_dog) const;
};

#endif