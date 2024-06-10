#include "MateriaSource.hpp"

MateriaSource::MateriaSource(){
//	std::cout << "MateriaSource: Default constructor called" << std::endl;
	for (int i = 0; i < 4; i ++){
		this->_inventory[i] = 0;
	}
}

MateriaSource::MateriaSource(const MateriaSource &rhs){
//	std::cout << "MateriaSource: Copy constructor called" << std::endl;
	for (int i = 0; i < 4; i ++){
		if (rhs._inventory[i])
			this->_inventory[i] = (rhs._inventory[i])->clone();
	}
	*this = rhs;
}

MateriaSource::~MateriaSource(){
//	std::cout << "MateriaSource: Destructor called" << std::endl;
	for (int i = 0; i < 4; i ++){
		if (this->_inventory[i])
			delete this->_inventory[i];
	}
}

MateriaSource& MateriaSource::operator=(const MateriaSource& rhs){
//	std::cout << "MateriaSource: Copy assignment operator called" << std::endl;
	if (this != &rhs){
		for (int i = 0; i < 4; i++){
			if (this->_inventory[i])
				delete this->_inventory[i];
			if (rhs._inventory[i])
				this->_inventory[i] = (rhs._inventory[i])->clone();
		}
	}
	return *this;
}

void MateriaSource::learnMateria(AMateria* m){
	int	i = 0;
	while (_inventory[i] != NULL && i < 4)
		i ++;
	if (i < 4 && _inventory[i] == NULL)
		_inventory[i] = m;
}

AMateria* MateriaSource::createMateria(std::string const & type){
	for (int i = 0; i < 4; i++){
		if (_inventory[i] != NULL && _inventory[i]->getType() == type)
			return (_inventory[i]->clone());
	}
	return (0);
}
