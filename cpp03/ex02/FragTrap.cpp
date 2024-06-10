#include "FragTrap.hpp"

FragTrap::FragTrap(): ClapTrap("", 100, 100, 30){
	std::cout << "FragTrap: Default constructor called" << std::endl;
	return;
}

FragTrap::FragTrap(const FragTrap &f){
	std::cout << "FragTrap: Copy constructor called" << std::endl;
	*this = f;
}

FragTrap::FragTrap(std::string name) : ClapTrap(name, 100, 100, 30){
	std::cout << "FragTrap: String constructor called for: " << _name  << std::endl;
	return ;
}

FragTrap::~FragTrap(){
	std::cout << "FragTrap: Destructor called for: " << _name << std::endl;
	return;
}

FragTrap& FragTrap::operator=(const FragTrap& f){
	if (this != &f){
		this->_name = f._name;
		this->_hitPoint = f._hitPoint;
		this->_energyPoints = f._energyPoints;
		this->_attackDamage = f._attackDamage;
	}
	return *this;
}

void	FragTrap::highFivesGuys(){
	std::cout << "FragTrap: " << this->getName() << " want to high five !" << std::endl;
}