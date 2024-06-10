#include "ClapTrap.hpp"

ClapTrap::ClapTrap() : _name(""), _hitPoint(10), _energyPoints(10), _attackDamage(0){
	std::cout << "Default constructor called" << std::endl;
	return;
}

ClapTrap::ClapTrap(const ClapTrap &rhs){
	std::cout << "Copy constructor called" << std::endl;
	*this = rhs;
}

ClapTrap::ClapTrap(std::string name) : _name(name), _hitPoint(10), _energyPoints(10), _attackDamage(0){
	std::cout << "String constructor called" << std::endl;
	return ;
}

ClapTrap::~ClapTrap(){
	std::cout << "Destructor called. " << this->_name << " has been destroyed." << std::endl;
	return;
}

ClapTrap& ClapTrap::operator=(const ClapTrap& rhs){
	if (this != &rhs){
		_name = rhs._name;
		_hitPoint = rhs._hitPoint;
		_energyPoints = rhs._energyPoints;
		_attackDamage = rhs._attackDamage;
	}
	return *this;
}

void ClapTrap::attack(const std::string& target){
	if (this->_energyPoints < 1){
		std::cout << "ClapTrap " << _name << " can't attacks " << target << " because he don't have energy no more." << std::endl;
		return;
	}
	this->_energyPoints --;
	std::cout << "ClapTrap " << _name << " attacks " << target << ", causing " << this->_attackDamage << " points of damage!" << std::endl;
	return;
}

void ClapTrap::takeDamage(unsigned int amount){
	if (_hitPoint <= 0)
		std::cout << "ClapTrap " << _name << " is already dead !" << std::endl;
	else{
		this->_hitPoint -= amount;
		if (_hitPoint <= 0)
			std::cout << "ClapTrap " << _name << " died from the attack !" << std::endl;
	}	
}

void ClapTrap::beRepaired(unsigned int amount){
	if (this->_energyPoints < 1){
		std::cout << "ClapTrap " << _name << " can't repairs itself because he don't have energy no more." << std::endl;
		return;
	}
	this->_hitPoint += amount;
	this->_energyPoints --;
	std::cout << "ClapTrap " << _name << " repairs itself for " << amount << " hit points." << std::endl;
}

int	ClapTrap::getAttackDamage(void) const{
	return (this->_attackDamage);
}

int	ClapTrap::getEnergyPoints(void) const{
	return (this->_energyPoints);
}

int	ClapTrap::getHitPoint(void) const{
	return (this->_hitPoint);
}

std::string	ClapTrap::getName(void) const{
	return (this->_name);
}