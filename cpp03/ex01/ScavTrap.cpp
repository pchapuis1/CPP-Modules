#include "ScavTrap.hpp"

ScavTrap::ScavTrap() : ClapTrap("", 100, 50, 20){
	std::cout << "ScavTrap: Default constructor called" << std::endl;
	return;
}

ScavTrap::ScavTrap(const ScavTrap &rhs){
	std::cout << "ScavTrap: Copy constructor called" << std::endl;
	*this = rhs;
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name, 100, 50, 20){
	std::cout << "ScavTrap: String constructor called" << std::endl;
	return ;
}

ScavTrap::~ScavTrap(){
	std::cout << "ScavTrap: Destructor called."<< std::endl;
	return;
}

ScavTrap& ScavTrap::operator=(const ScavTrap& rhs){
	if (this != &rhs){
		this->_name = rhs._name;
		this->_hitPoint = rhs._hitPoint;
		this->_energyPoints = rhs._energyPoints;
		this->_attackDamage = rhs._attackDamage;
	}
	return *this;
}

void ScavTrap::attack(const std::string& target){
	if (this->_energyPoints < 1){
		std::cout << "ScavTrap " << _name << " can't attacks " << target << " because he don't have energy no more." << std::endl;
		return;
	}
	this->_energyPoints --;
	std::cout << "ScavTrap " << _name << " attacks " << target << ", causing " << this->_attackDamage << " points of damage!" << std::endl;
	return;
}

void	ScavTrap::guardGate(){
	std::cout << "ScavTrap: " << this->getName() << " is now in gate keeper mode" << std::endl;
}