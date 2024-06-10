#ifndef ANIMAL_HPP
# define ANIMAL_HPP

#include <iostream>

class Animal {

protected:
	std::string _type;

public:
	Animal();
	Animal(const Animal&);
	Animal(std::string type);
	virtual ~Animal();

	Animal& operator=(const Animal& f);

	std::string		getType() const;
	virtual void	makeSound() const;
};


#endif