#ifndef CAT_HPP
# define CAT_HPP

#include <iostream>
#include "Animal.hpp"

class Cat: public Animal {

public:
	Cat();
	Cat(const Cat&);
	~Cat();

	Cat& operator=(const Cat& f);
	
	virtual void	makeSound()const;
};

#endif