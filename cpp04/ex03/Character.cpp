#include "Character.hpp"

Character::Character(): _name("character"){
//	std::cout << "Character: Default constructor called" << std::endl;
	for (int i = 0; i < 4; i ++){
		this->_inventory[i] = 0;
	}
}

Character::Character(const Character &rhs): _name(rhs.getName() + " copy"){
//	std::cout << "Character: Copy constructor called" << std::endl;
	for (int i = 0; i < 4; i ++){
		if ((rhs._inventory)[i])
			(this->_inventory)[i] = (rhs._inventory[i])->clone();
	}
	*this = rhs;
}

Character::~Character(){
//	std::cout << "Character: Destructor called" << std::endl;
	for (int i = 0; i < 4; i++){
		if (this->_inventory[i])
			delete this->_inventory[i];
	}
}

Character::Character(std::string name): _name(name){
//	std::cout << "Character: Name constructor called" << std::endl;
	for (int i = 0; i < 4; i ++){
		this->_inventory[i] = 0;
	}
}

Character& Character::operator=(const Character& rhs){
//	std::cout << "Character: Copy assignment operator called" << std::endl;
	if (this != &rhs){
		for (int i = 0; i < 4; i++){
			if (this->_inventory[i])
				delete (this->_inventory[i]);
			if (rhs._inventory[i])
				this->_inventory[i] = (rhs._inventory[i])->clone();
		}
	}
	return *this;
}

std::string const & Character::getName() const{
	return (this->_name);
}

void Character::equip(AMateria* m){
	int	i = 0;
	while (_inventory[i] != NULL && i < 4)
		i ++;
	if (i < 4 && _inventory[i] == NULL)
		_inventory[i] = m;
}

void Character::unequip(int idx){
	if (idx < 4 && idx >= 0 && _inventory[idx] != NULL)
		_inventory[idx] = NULL;
}

void Character::use(int idx, ICharacter& target){
	if (idx < 0 || idx >= 4 || _inventory[idx] == NULL){
		std::cout << "No Materia at this index !" << std::endl;
		return ;
	}
	(_inventory[idx])->use(target);
}

