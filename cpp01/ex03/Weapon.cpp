#include "Weapon.hpp"

Weapon::Weapon(){
	return ;
}

Weapon::~Weapon(){
	return ;
}

Weapon::Weapon(std::string type) : _type(type){
	return ;
}

const std::string	Weapon::getType(void)
{
	return (this->_type);
}

void	Weapon::setType(std::string newType)
{
	this->_type = newType;
}