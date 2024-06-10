#ifndef BRAIN_HPP
# define BRAIN_HPP

#include <iostream>

class Brain {

private:
	std::string	_ideas[100];

public:
	Brain();
	Brain(const Brain&);
	~Brain();

	Brain& operator=(const Brain& f);
	std::string	*getIdeas();
};

#endif