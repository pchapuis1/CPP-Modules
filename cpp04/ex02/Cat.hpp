#ifndef CAT_HPP
# define CAT_HPP

#include <iostream>
#include "AAnimal.hpp"
#include "Brain.hpp"

class Cat: public AAnimal {

private:
	Brain	*_brain;

public:
	Cat();
	Cat(const Cat&);
	~Cat();

	Cat& operator=(const Cat& f);
	
	virtual void	makeSound()const;

	void compare(Cat const & other_dog) const;
};

#endif