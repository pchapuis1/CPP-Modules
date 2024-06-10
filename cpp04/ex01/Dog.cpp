#include "Dog.hpp"

Dog::Dog(): Animal("Dog"){
	std::cout << "Dog: Default constructor called" << std::endl;
	this->_brain = new Brain();
}

Dog::Dog(const Dog &rhs){
	std::cout << "Dog: Copy constructor called" << std::endl;
	_brain = new Brain(*(rhs._brain));
	_type = rhs._type;
}

Dog::~Dog(){
	std::cout << "Dog: Destructor called" << std::endl;
	delete this->_brain;
}

Dog& Dog::operator=(const Dog& rhs){
	std::cout << "Dog: Copy assignment operator called" << std::endl;
	if (this != &rhs){
		delete this->_brain;
		this->_brain = new Brain(*(rhs._brain));
		_type = rhs._type;
	}
	return *this;
}

void	Dog::makeSound()const {
	std::cout << "\"Dog noises\"" << std::endl;
}

void Dog::compare(Dog const & other_dog) const
{
	std::cout << std::endl;
	std::cout << "Now comparing two dogs\n";
	std::cout << "My brain's heap address: " << static_cast<void*>(this->_brain) << std::endl;
	std::cout << "Other's heap address: " << static_cast<void*>(other_dog._brain) << std::endl;
	std::cout << std::endl;
	std::cout << "My brain's ideas | Other brain's ideas\n";
	for (int i = 0; i < 100; i++)
		std::cout << "-";
	std::cout << std::endl;
	for (int i = 0; i < 100; i++)
		std::cout << ((this->_brain)->getIdeas())[i] << " | " << ((other_dog._brain)->getIdeas())[i] << std::endl;
	std::cout << std::endl;
}