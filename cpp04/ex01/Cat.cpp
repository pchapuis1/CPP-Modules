#include "Cat.hpp"

Cat::Cat(): Animal("Cat"){
	std::cout << "Cat: Default constructor called" << std::endl;
	this->_brain = new Brain();
}

Cat::Cat(const Cat &rhs){
	std::cout << "Cat: Copy constructor called" << std::endl;
	_brain = new Brain(*(rhs._brain));
	_type = rhs._type;
}

Cat::~Cat(){
	std::cout << "Cat: Destructor called" << std::endl;
	delete this->_brain;
}

Cat& Cat::operator=(const Cat& rhs){
	std::cout << "Cat: Copy assignment operator called" << std::endl;
	if (this != &rhs){	
		delete this->_brain;
		this->_brain = new Brain(*(rhs._brain));
		_type = rhs._type;
	}
	return *this;
}

void	Cat::makeSound()const{
	std::cout << "\"Cat noises\"" << std::endl;
}

void Cat::compare(Cat const & other_cat) const
{
	std::cout << std::endl;
	std::cout << "Now comparing two Cats\n";
	std::cout << "My brain's heap address: " << static_cast<void*>(this->_brain) << std::endl;
	std::cout << "Other's heap address: " << static_cast<void*>(other_cat._brain) << std::endl;
	std::cout << std::endl;
	std::cout << "My brain's ideas | Other brain's ideas\n";
	for (int i = 0; i < 100; i++)
		std::cout << "-";
	std::cout << std::endl;
	for (int i = 0; i < 100; i++)
		std::cout << ((this->_brain)->getIdeas())[i] << " | " << ((other_cat._brain)->getIdeas())[i] << std::endl;
	std::cout << std::endl;
}
