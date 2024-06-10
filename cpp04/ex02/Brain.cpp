#include "Brain.hpp"

Brain::Brain(){
	std::cout << "Brain: Default constructor called" << std::endl;;
	for (int i = 0; i < 100; i ++){
		this->_ideas[i] = "idea";
	}
}

Brain::Brain(const Brain &rhs){
	std::cout << "Brain: Copy constructor called" << std::endl;
	for (int i = 0; i < 100; i++){
		this->_ideas[i] = rhs._ideas[i] + " copy";
	}
}

Brain::~Brain(){
	std::cout << "Brain: Destructor called" << std::endl;
}

Brain& Brain::operator=(const Brain& rhs){
	std::cout << "Brain: Copy assignment operator called" << std::endl;
	int	i;
	if (this != &rhs){
		i = 0;
		while (i < 100){
			this->_ideas[i] = rhs._ideas[i];
		}
	}
	return *this;
}

std::string	*Brain::getIdeas(){
	return (this->_ideas);
}