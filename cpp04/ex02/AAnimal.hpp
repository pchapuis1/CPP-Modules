#ifndef AANIMAL_HPP
# define AANIMAL_HPP

#include <iostream>

class AAnimal {

protected:
	std::string _type;

public:
	AAnimal();
	AAnimal(const AAnimal&);
	AAnimal(std::string type);
	virtual ~AAnimal();

	AAnimal& operator=(const AAnimal& f);

	std::string	getType() const;
	virtual void	makeSound() const = 0;
};


#endif